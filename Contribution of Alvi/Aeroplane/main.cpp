#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <cmath>
using namespace std;

float _move = 0.0f;
void initGL() {



glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

}

void display() {

glClear(GL_COLOR_BUFFER_BIT);

///Aeroplane

void ship(int x, int y)

glBegin(GL_POLYGON);
glColor3ub(7,8,8);
glVertex2i(x,y);
glVertex2i(54,53);
glVertex2i(51,53);
glVertex2i(51,52);
glEnd();
glutSwapBuffers();
}

int main(int argc, char** argv) {

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(540, 100);
glutCreateWindow("Ship");
glutInitWindowPosition(50,50);
gluOrtho2D(0,54,0,10);
glutDisplayFunc(display);
//glutTimerFunc(25, update, 0);
//glutTimerFunc(20, update1, 0);

initGL();

glutMainLoop();
return 0;

}
