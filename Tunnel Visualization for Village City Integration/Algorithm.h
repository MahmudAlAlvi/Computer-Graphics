#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <cmath>

void circle(float radius, float xC, float yC, float r, float g, float b)
{
   glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xC,y+yC);
        }

    glEnd();
}

void square(float x,float y,int r,int g,int b){

glBegin(GL_POLYGON);
glColor3ub(r,g,b);
glVertex2f(x,y);
glVertex2f(x+10,y);
glVertex2f(x+10,y+7);
glVertex2f(x,y+7);
glEnd();

}


void square2(float x,float y,int r,int g,int b){

glBegin(GL_POLYGON);
glColor3ub(r,g,b);
glVertex2f(x,y);
glVertex2f(x+2,y);
glVertex2f(x+2,y+2);
glVertex2f(x,y+2);
glEnd();

}










