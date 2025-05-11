#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <cmath>



using namespace std;

float _move4 = 0.0f;
void initGL() {



glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

}





void boat1(int x,int y){

    glBegin(GL_POLYGON);
    glColor3ub(93, 118, 84);
    glVertex2f(x+5.0,y+1.0);
    glVertex2f(x+15.0,y+1.0);
    glVertex2f(x+20.0,y+5.0);
    glVertex2f(x+0.0,y+5.0);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(193, 118, 4);
    glVertex2f(x+5.0,y+5.0);
    glVertex2f(x+15.0,y+5.0);
    glVertex2f(x+15.0,y+9.0);
    glVertex2f(x+5.0,y+9.0);

    glEnd();




}




void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glPushMatrix();
glTranslated(_move4,0,0);
boat1(211,-8);
glPopMatrix();

/*glPushMatrix();
glTranslated(_move2,0,0);
boat1(-10,-20);
glPopMatrix();*/
glutSwapBuffers();

glFlush();
}

void update4(int value)///ship/boat1
{
     _move4 -=0.25;
if(_move4 <-260)
{
_move4 = 0;
}
glutPostRedisplay();
glutTimerFunc(5, update4, 0);
}


int main(int argc, char** argv) {

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(540, 700);
glutCreateWindow("car");
glutInitWindowPosition(50,50);
gluOrtho2D(0,100,0,-200);
glutDisplayFunc(display);
//glutTimerFunc(25, update, 0);
//glutTimerFunc(20, update1, 0);
glutTimerFunc(5, update4, 0);

initGL();

glutMainLoop();
return 0;

}
