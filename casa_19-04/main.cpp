#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <stdio.h>

void House()
{
    // frente
    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.8f, 0.8f); 
    glVertex3f(-0.8f, -0.5f, 0.0f); 
    glVertex3f(0.2f, -0.5f, 0.0f); 
    glVertex3f(0.2f, 0.3f, 0.0f); 
    glVertex3f(-0.8f, 0.3f, 0.0f); 
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(-0.8f, -0.5f, 0.0f);
    glVertex3f(0.2f, -0.5f, 0.0f);
    glVertex3f(0.2f, 0.3f, 0.0f);
    glVertex3f(-0.8f, 0.3f, 0.0f);
    glEnd();
    //lateral
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.6f, 0.6f); 
    glVertex3f(0.9f, 0.5f, 0.0f);
    glColor3f(0.3f, 0.3f, 0.3f);
    glVertex3f(0.9f, -0.2f, 0.0f);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex3f(0.2f, -0.5f, 0.0f);
    glColor3f(0.75f, 0.75f, 0.75f);
    glVertex3f(0.2f, 0.3f, 0.0f); 
    glEnd();
    //teto frente
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.8f, 0.3f, 0.0f);
    glVertex3f(-0.3f, 0.8f, 0.0f);
    glColor3f(0.70f, 0.0f, 0.0f);
    glVertex3f(0.2f, 0.3f, 0.0f); 
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(-0.8f, 0.3f, 0.0f);
    glVertex3f(-0.3f, 0.8f, 0.0f);
    glVertex3f(0.2f, 0.3f, 0.0f);
    glEnd();
    // teto lateral
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f); 
    glVertex3f(-0.3f, 0.8f, 0.0f);
    glColor3f(0.7f, 0.0f, 0.0f);
    glVertex3f(0.2f, 0.3f, 0.0f);
    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex3f(0.9f, 0.5f, 0.0f);
    glColor3f(0.85f, 0.0f, 0.0f);
    glVertex3f(0.5f, 0.9f, 0.0f); 
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(-0.3f, 0.8f, 0.0f);
    glVertex3f(0.2f, 0.3f, 0.0f);
    glVertex3f(0.9f, 0.5f, 0.0f);
    glVertex3f(0.5f, 0.9f, 0.0f);
    glEnd();
    //porta
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.4f, 0.2f); 
    glVertex3f(-0.12f, -0.5f, 0.0f); 
    glVertex3f(0.1f, -0.5f, 0.0f); 
    glVertex3f(0.1f, 0.1f, 0.0f); 
    glVertex3f(-0.12f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(-0.12f, -0.5f, 0.0f);
    glVertex3f(0.1f, -0.5f, 0.0f);
    glVertex3f(0.1f, 0.1f, 0.0f);
    glVertex3f(-0.12f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(-0.1f, -0.15f, 0.0f);
    glVertex3f(-0.05f, -0.15f, 0.0f);
    glVertex3f(-0.05f, -0.17f, 0.0f);
    glVertex3f(-0.1f, -0.17f, 0.0f);
    glEnd();
    //janela 1
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.5f, 1.0f);
    glVertex3f(-0.71f, -0.12f, 0.0f);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(-0.47f, -0.12f, 0.0f);
    glColor3f(0.3f, 0.5f, 1.0f);
    glVertex3f(-0.47f, 0.1f, 0.0f);
    glColor3f(0.8f, 0.8f, 1.0f);
    glVertex3f(-0.71f, 0.1f, 0.0f); 
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(-0.71f, -0.12f, 0.0f);
    glVertex3f(-0.47f, -0.12f, 0.0f);
    glVertex3f(-0.47f, 0.1f, 0.0f);
    glVertex3f(-0.71f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(-0.59f, -0.12f, 0.0f);
    glVertex3f(-0.59f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(-0.71f, -0.01f, 0.0f);
    glVertex3f(-0.47f, -0.01f, 0.0f);
    glEnd();
    //janela 2
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.5f, 1.0f);
    glVertex3f(0.3f, -0.12f, 0.0f);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.5f, -0.05f, 0.0f);
    glColor3f(0.3f, 0.5f, 1.0f);
    glVertex3f(0.5f, 0.16f, 0.0f);
    glColor3f(0.7f, 0.7f, 0.9f);
    glVertex3f(0.3f, 0.1f, 0.0f);
    glEnd(); 
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.3f, -0.12f, 0.0f);
    glVertex3f(0.5f, -0.05f, 0.0f);
    glVertex3f(0.5f, 0.16f, 0.0f);
    glVertex3f(0.3f, 0.1f, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.4f, 0.13f, 0.0f);
    glVertex3f(0.4f, -0.085f, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.3f, -0.01f, 0.0f);
    glVertex3f(0.5f, 0.055f, 0.0f);
    glEnd();
    //janela 3
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.3f, 0.80f);
    glVertex3f(0.65f, -0.0f, 0.0f);
    glColor3f(0.0f, 0.0f, 0.80f);
    glVertex3f(0.82f, 0.07f, 0.0f);
    glColor3f(0.3f, 0.5f, 0.8f);
    glVertex3f(0.82f, 0.25f, 0.0f);
    glColor3f(0.6f, 0.6f, 0.8f);
    glVertex3f(0.65f, 0.19f, 0.0f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.65f, -0.0f, 0.0f);
    glVertex3f(0.82f, 0.07f, 0.0f);
    glVertex3f(0.82f, 0.25f, 0.0f);
    glVertex3f(0.65f, 0.19f, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.735f, 0.22f, 0.0f);
    glVertex3f(0.735f, 0.035f, 0.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.65f, 0.095f, 0.0f);
    glVertex3f(0.82f, 0.16f, 0.0f);
    glEnd();
}

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    //glPointSize(50);
    //glLineWidth(5);
    House();
    glFlush();
}

void resize(GLsizei w, GLsizei h) {
    if (h == 0)
        h = 1;
    printf("Tam. janela: (%i,%i)\n", w, h);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 500);
    glutCreateWindow("Casa");
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); 
    glutDisplayFunc(display);
    glutReshapeFunc(resize);
    glutMainLoop();
    return 0;
}
