#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <stdio.h>

int ombro = 0, cotovelo = 0, sentido = 1;

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    {

        glTranslatef(-1.0, 0.0, 0.0);
        glRotatef(ombro, 0, 0, 1);
        glTranslatef(1.0, 0.0, 0.0);
        glPushMatrix();
        {
            glColor3f(0.5, 0.0, 0.0);
            glScalef(2.0, 0.4, 1.0);
            glutWireCube(1.0);
        }
        glPopMatrix();

        glTranslatef(1.0, 0.0, 0.0);
        glPushMatrix();
        {
            glRotatef(cotovelo, 0, 0, 1);
            glTranslatef(1.0, 0.0, 0.0);
            glColor3f(0.0, 0.0, 0.5);
            glScalef(2.0, 0.4, 1.0);
            glutWireCube(1.0);
        }
        glPopMatrix();
    }
    glPopMatrix();
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(75.0, w / (h * 1.0), 1.0, 20.0);
    gluLookAt(0, 0, 5, 0, 0, 0, 0, 1, 0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 'a':
        ombro = (ombro + 5) % 360;
        glutPostRedisplay();
        break;
    case 'd':
        ombro = (ombro - 5) % 360;
        glutPostRedisplay();
        break;
    case 'w':
        cotovelo = (cotovelo + 5) % 360;
        glutPostRedisplay();
        break;
    case 's':
        cotovelo = (cotovelo - 5) % 360;
        glutPostRedisplay();
        break;
    case 32:
        ombro = (ombro + 3 * sentido) % 360;
        cotovelo = (cotovelo + 3 * sentido) % 360;
        glutPostRedisplay();
        break;
    case 27:
        exit(0);
        break;
    default:
        break;
    }
    if (ombro > 60) {
        ombro = 60;
        sentido = -1;
    }
    if (ombro < -80) {
        ombro = -80;
        sentido = 1;
    }
    if (cotovelo > 130)
        cotovelo = 130;
    if (cotovelo < -5)
        cotovelo = -5;
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow(argv[0]);
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glClearColor(1, 1, 1, 1);
    glutMainLoop();
    return 0;
}