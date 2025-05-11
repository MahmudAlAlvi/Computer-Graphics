#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <cmath>
#include"Algorithm.h"
using namespace std;

float _move = 0.0f;
void initGL() {



glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

}





///Forest1
void brickKlin(float x,float y){

glBegin(GL_POLYGON);
glColor3ub(193, 29, 29);
glVertex2f(x+0.0,y+0);
glVertex2f(x+8.0,y+0);
glVertex2f(x+6.0,y+17.0);
glVertex2f(x+2.0,y+17.0);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(19, 29, 29);
glVertex2f(x+2.0,y+17.0);
glVertex2f(x+6.0,y+17.0);
glVertex2f(x+6.0,y+18.0);
glVertex2f(x+2.0,y+18.0);
glEnd();
}

void hill2(float x,float y){
    glBegin(GL_TRIANGLES); //Hill front
    glColor3ub(70, 188, 35 );
    glVertex2f(x+7.0f, y+2.0f);
    glVertex2f(x+12.5f,y+2.0f);
    glVertex2f(x+10.0f, y+23.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Hill back
    glColor3ub(52, 136, 28 );
    glVertex2f(x+4.5f,y+ 5.0f);
    glVertex2f(x+7.0f,y+2.0f);
    glVertex2f(x+10.0f,y+ 23.0f);
    glEnd();


}

void hill1(float x,float y){
    glBegin(GL_TRIANGLES); //Hill front
    glColor3ub(70, 188, 35 );
    glVertex2f(x+4.0f, y+2.0f);
    glVertex2f(x+11.5f,y+2.0f);
    glVertex2f(x+7.0f, y+22.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Hill back
    glColor3ub(52, 136, 28 );
    glVertex2f(x+1.5f, y+6.0f);
    glVertex2f(x+4.0f,y+2.0f);
    glVertex2f(x+7.0f,y+ 22.0f);
    glEnd();


}

void forest1(){
brickKlin(7,50);
circle(5,0,50,20,90,40);
circle(5,13,50,20,90,40);
circle(5,18,52,20,90,40);
circle(5,38,52,20,90,40);
hill1(10,40);
hill1(20,48);
hill1(28,40);
hill2(15,40);
hill2(35,43);
//hill2(45,42);
//hill2(53,40);


}

void display()
{
glClear(GL_COLOR_BUFFER_BIT);
forest1();
glutSwapBuffers();

glFlush();
}


int main(int argc, char** argv) {

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(540, 700);
glutCreateWindow("Forest1");
glutInitWindowPosition(50,50);
gluOrtho2D(0,54,0,70);
glutDisplayFunc(display);
//glutTimerFunc(25, update, 0);
//glutTimerFunc(20, update1, 0);

initGL();

glutMainLoop();
return 0;

}
