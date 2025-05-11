#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <cmath>
#include"Algorithm.h"


using namespace std;

float _move3 = 0.0f;
void initGL() {



glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

}





void car1(){
glPushMatrix();
    glTranslated(_move3,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(223, 51, 0);
    glVertex2f(0.0-10,1.0+27);
    glVertex2f(10.50-10,1.0+27);
    glVertex2f(10.50-10,5.50+27);
    glVertex2f(0.0-10,6.0+27);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(223, 51, 0);
    glVertex2f(2.0-10,5.90+27);
    glVertex2f(8.0-10,5.0+27);
    glVertex2f(7.0-10,10.0+27);
    glVertex2f(3.0-10,10.0+27);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(1,0,0);
    glVertex2f(2.5-10,6.0+27);
    glVertex2f(4.5-10,6.0+27);
    glVertex2f(4.5-10,9.5+27);
    glVertex2f(3.5-10,9.5+27);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(1,0,0);
    glVertex2f(5.5-10,6.0+27);
    glVertex2f(7.3-10,6.0+27);
    glVertex2f(6.7-10,9.5+27);
    glVertex2f(5.5-10,9.5+27);
    glEnd();

    circle(0.90,2.0-10,1.0+27,0,0,0);
    circle(0.90,7.0-10,1.0+27,0,0,0);
    glPopMatrix();

}

void car2(){

    glPushMatrix();
    glTranslated(_move3,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(152, 178, 35 );
    glVertex2f(0.0-30.0,1.0+27);
    glVertex2f(11.0-30.0,1.0+27);
    glVertex2f(11.0-30.0,6.0+27);
    glVertex2f(0.0-30.0,6.0+27);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(152, 178, 35 );
    glVertex2f(0.0-30.0,5.90+27);
    glVertex2f(8.0-30.0,5.0+27);
    glVertex2f(7.0-30.0,10.0+27);
    glVertex2f(0.0-30.0,10.0+27);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(1,0,0);
    glVertex2f(0.7-30.0,6.0+27);
    glVertex2f(3.6-30.0,6.0+27);
    glVertex2f(3.6-30.0,9.5+27);
    glVertex2f(0.7-30.0,9.5+27);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(1,0,0);
    glVertex2f(4.3-30.0,6.0+27);
    glVertex2f(7.3-30.0,6.0+27);
    glVertex2f(6.7-30.0,9.5+27);
    glVertex2f(4.3-30.0,9.5+27);
    glEnd();

    circle(0.90,2.5-30.0,1.0+27,0,0,0);
    circle(0.90,8.0-30.0,1.0+27,0,0,0);
    glPopMatrix();

}



void display()
{
glClear(GL_COLOR_BUFFER_BIT);
car1();
car2();
glutSwapBuffers();

glFlush();
}

void update3(int value)
{
     _move3 +=0.25;
if(_move3 >54)
{
_move3 = -70;
}
glutPostRedisplay();
glutTimerFunc(20, update3, 0);
}


int main(int argc, char** argv) {

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(540, 700);
glutCreateWindow("car");
glutInitWindowPosition(50,50);
gluOrtho2D(0,-54,0,70);
glutDisplayFunc(display);
//glutTimerFunc(25, update, 0);
//glutTimerFunc(20, update1, 0);
glutTimerFunc(20, update3, 0);

initGL();

glutMainLoop();
return 0;

}
