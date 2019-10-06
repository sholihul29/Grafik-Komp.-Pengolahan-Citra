#include<stdio.h>
#include<GL/glut.h>

void renderscene()
{



    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glRotatef(45,1,1,0);

    glColor3f(0,1,0);
    glBegin(GL_QUADS);
        glVertex3f(-0.5,-0.5,-0.5);
        glVertex3f(-0.5,0.5,-0.5);
        glVertex3f(0.5,0.5,-0.5);
        glVertex3f(0.5,-0.5,-0.5);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_QUADS);
        glVertex3f(0.5,-0.5,0.5);
        glVertex3f(0.5,0.5,0.5);
        glVertex3f(0.5,0.5,-0.5);
       glVertex3f(0.5,-0.5,-0.5);
    glEnd();

    glColor3f(1,0,0);
    glBegin(GL_QUADS);
        glVertex3f(-0.5,-0.5,0.5);
        glVertex3f(-0.5,-0.5,-0.5);
        glVertex3f(0.5,-0.5,-0.5);
        glVertex3f(0.5,-0.5,0.5);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_QUADS);
        glVertex3f(-0.5,-0.5,0.5);
        glVertex3f(-0.5,0.5,0.5);
        glVertex3f(0.5,0.5,0.5);
        glVertex3f(0.5,-0.5,0.5);
    glEnd();

    glColor3f(1,0,1); //
    glBegin(GL_QUADS);
        glVertex3f(-0.5,-0.5,0.5);
        glVertex3f(-0.5,0.5,0.5);
        glVertex3f(-0.5,0.5,-0.5);
        glVertex3f(-0.5,-0.5,-0.5);
    glEnd();

    glColor3f(0,1,1); //
    glBegin(GL_QUADS);
        glVertex3f(-0.5,0.5,0.5);
        glVertex3f(-0.5,0.5,-0.5);
        glVertex3f(0.5,0.5,-0.5);
        glVertex3f(0.5,0.5,0.5);
    glEnd();


    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH|GLUT_DOUBLE|GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(320,320);
    glutCreateWindow("Glut Windows");
    glutDisplayFunc(renderscene);
    glutMainLoop();
    return 1;
}
