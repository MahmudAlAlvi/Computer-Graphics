#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <cmath>
using namespace std;

float _move = 0.0f;
float _angle1 = 0.0f;



void initGL() {



glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

}


void display() {

glClear(GL_COLOR_BUFFER_BIT);


/*
///Sky(Day mode)
glBegin(GL_POLYGON);
glColor3ub(169, 238, 239);
glVertex2i(54,50);
glVertex2i(54,70);
glVertex2i(0,70);
glVertex2i(0,50);
glEnd();

///Sun
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(223,255,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+41,y+60 );
        }


	glEnd();
	*/
//glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
///sky(Night View)
glBegin(GL_POLYGON);
glColor3ub(0, 0, 54);
glVertex2i(54,50);
glVertex2i(54,70);
glVertex2i(0,70);
glVertex2i(0,50);
glEnd();


///Moon
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+41,y+63 );
        }


	glEnd();

glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,54);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+40,y+63 );
        }


	glEnd();

///Cloud 1
///Circle 1
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+4,y+64 );
        }


	glEnd();
	glPopMatrix();
///Circle 2
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+3,y+65 );
        }


	glEnd();
	glPopMatrix();
///Circle 3
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+4,y+66 );
        }


	glEnd();
	glPopMatrix();

	///Circle 4
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+6,y+64 );
        }


	glEnd();
	glPopMatrix();

	///Circle 5
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+7,y+65 );
        }


	glEnd();
	glPopMatrix();

	///Circle 6
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+6,y+66 );
        }


	glEnd();
	glPopMatrix();

	///Circle 7
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+5,y+65 );
        }


	glEnd();
	glPopMatrix();


///Cloud 2
///Circle 1
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+12,y+63 );
        }


	glEnd();
	glPopMatrix();
///Circle 2
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+11,y+64 );
        }


	glEnd();
	glPopMatrix();
///Circle 3
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+12,y+65 );
        }


	glEnd();
	glPopMatrix();

	///Circle 4
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+14,y+63 );
        }


	glEnd();
	glPopMatrix();

	///Circle 5
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+15,y+64 );
        }


	glEnd();
	glPopMatrix();

	///Circle 6
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+14,y+65 );
        }


	glEnd();
	glPopMatrix();

	///Circle 7
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+13,y+64 );
        }


	glEnd();
	glPopMatrix();


///Forest
///Big Circle 1
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(20,90,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=7;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+8,y+50 );
        }


	glEnd();
///Big Circle 2
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(20,90,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=7;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+25,y+50 );
        }


	glEnd();

///Big Circle 3
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(20,90,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=7;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+42,y+50 );
        }


	glEnd();

///Small Circle 1
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(20,90,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+0,y+51 );
        }


	glEnd();
///Small Circle 2
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(20,90,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+17,y+51 );
        }


	glEnd();

///Small Circle 3
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(20,90,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+35,y+51 );
        }


	glEnd();

///Small Circle 3
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(20,90,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+50,y+51 );
        }


	glEnd();



/// River Side
glBegin(GL_POLYGON);
glColor3ub(175, 96, 26);
glVertex2i(54,0);
glVertex2i(54,8);
glVertex2i(0,8);
glVertex2i(0,0);
glEnd();

///Grass Side
glBegin(GL_POLYGON);
glColor3ub(29, 131, 72);
glVertex2i(54,8);
glVertex2i(54,18);
glVertex2i(0,18);
glVertex2i(0,8);
glEnd();

///Road
glBegin(GL_POLYGON);
glColor3ub(97, 106, 107);
glVertex2i(54,18);
glVertex2i(54,34);
glVertex2i(0,34);
glVertex2i(0,18);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES);
glColor3f(1.0f,1.0,0.0f);
glVertex2i(0,26);
glVertex2i(54,26);
glEnd();

///Grass(houseSide)
glBegin(GL_POLYGON);
glColor3ub(30,132,73);
glVertex2i(54,34);
glVertex2i(54,50);
glVertex2i(0,50);
glVertex2i(0,34);
glEnd();


///Yellow
glBegin(GL_POLYGON);
glColor3ub(241, 196, 15);
glVertex2i(4,38);
glVertex2i(4,48);
glVertex2i(0,48);
glVertex2i(0,38);
glEnd();

glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(241, 196, 15);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y+48 );
        }

	glEnd();

///Tree 1
glBegin(GL_POLYGON);
glColor3ub(135, 54, 0);
glVertex2i(33,40);
glVertex2i(33,48);
glVertex2i(31,48);
glVertex2i(31,40);
glEnd();

///Leaf circle 0
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(18, 220, 25);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+32,y+52 );
        }

	glEnd();


	///Leaf circle 1
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(18, 220, 25);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+29,y+50 );
        }

	glEnd();

	///Leaf circle 2
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(18, 220, 25);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+29,y+54 );
        }

	glEnd();


	///Leaf circle 3
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(18, 220, 25);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+35,y+54 );
        }

	glEnd();


	///Leaf circle 4
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(18, 220, 25);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+35,y+50 );
        }

	glEnd();



///Tree 2
glBegin(GL_POLYGON);
glColor3ub(135, 54, 0);
glVertex2i(51,40);
glVertex2i(51,48);
glVertex2i(49,48);
glVertex2i(49,40);
glEnd();

///Leaf circle 0
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(24, 106, 59);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+50,y+52 );
        }

	glEnd();


	///Leaf circle 1
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(24, 106, 59);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+47,y+50 );
        }

	glEnd();

	///Leaf circle 2
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(24, 106, 59);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+47,y+54 );
        }

	glEnd();


	///Leaf circle 3
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(24, 106, 59);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+53,y+54 );
        }

	glEnd();


	///Leaf circle 4
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(24, 106, 59);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+53,y+50 );
        }

	glEnd();


///WindMill Stand
glBegin(GL_POLYGON);
glColor3ub(52, 73, 94);
glVertex2i(16,40);
glVertex2i(16,54);
glVertex2i(14,54);
glVertex2i(14,40);
glEnd();

///WindMill Wheel 1
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(52, 73, 94);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+15,y+54 );
        }

	glEnd();

	///WindMill Wheel 2
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(192, 57, 43);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+15,y+54 );
        }

	glEnd();



///WindMill Bleed 1

glPushMatrix();
glTranslatef(15,54,0);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glTranslatef(-15,-54,0);
glBegin(GL_POLYGON);
glColor3ub(192, 57, 43);
glVertex2i(15,54);
glVertex2i(16,61);
glVertex2i(14,61);

glEnd();
glPopMatrix();

///WindMill Bleed 2
glPushMatrix();
glTranslatef(15,54,0);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glTranslatef(-15,-54,0);
glBegin(GL_POLYGON);
glColor3ub(192, 57, 43);
glVertex2i(15,54);
glVertex2i(8,55);
glVertex2i(8,53);

glEnd();
glPopMatrix();

///WindMill Bleed 3
glPushMatrix();
glTranslatef(15,54,0);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glTranslatef(-15,-54,0);
glBegin(GL_POLYGON);
glColor3ub(192, 57, 43);
glVertex2i(15,54);
glVertex2i(22,53);
glVertex2i(22,55);

glEnd();
glPopMatrix();

///WindMill Bleed 4
glPushMatrix();
glTranslatef(15,54,0);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glTranslatef(-15,-54,0);
glBegin(GL_POLYGON);
glColor3ub(192, 57, 43);
glVertex2i(15,54);
glVertex2i(14,47);
glVertex2i(16,47);

glEnd();
glPopMatrix();




///House NO 1
///Lower part 1
glBegin(GL_POLYGON);
glColor3ub(135, 54, 0);
glVertex2i(14,37);
glVertex2i(14,38);
glVertex2i(2,38);
glVertex2i(2,37);
glEnd();

///Body part 1
glBegin(GL_POLYGON);
glColor3ub(156, 100, 12);
glVertex2i(13,38);
glVertex2i(13,45);
glVertex2i(3,45);
glVertex2i(3,38);
glEnd();

/// Roof No1
glBegin(GL_POLYGON);
glColor3ub(131, 145, 146);
glVertex2i(14,45);
glVertex2i(12,48);
glVertex2i(4,48);
glVertex2i(2,45);
glEnd();

///Gate part 1
glBegin(GL_POLYGON);
glColor3ub(123, 36, 28);
glVertex2i(12,38);
glVertex2i(12,42);
glVertex2i(10,42);
glVertex2i(10,38);
glEnd();

/// Window part 1
glBegin(GL_POLYGON);
glColor3ub(7,8,8);
glVertex2i(7,40);
glVertex2i(7,42);
glVertex2i(5,42);
glVertex2i(5,40);
glEnd();


///House NO 2
///Lower part 2
glBegin(GL_POLYGON);
glColor3ub(135, 54, 0);
glVertex2i(30,37);
glVertex2i(30,38);
glVertex2i(16,38);
glVertex2i(16,37);
glEnd();

///Body part 2
glBegin(GL_POLYGON);
glColor3ub(156, 100, 12);
glVertex2i(29,38);
glVertex2i(29,45);
glVertex2i(17,45);
glVertex2i(17,38);
glEnd();

/// Roof No 2
glBegin(GL_POLYGON);
glColor3ub(131, 145, 146);
glVertex2i(30,45);
glVertex2i(28,48);
glVertex2i(18,48);
glVertex2i(16,45);
glEnd();

///Gate part 2
glBegin(GL_POLYGON);
glColor3ub(123, 36, 28);
glVertex2i(21,38);
glVertex2i(21,42);
glVertex2i(19,42);
glVertex2i(19,38);
glEnd();

/// Window part 2
glBegin(GL_POLYGON);
glColor3ub(7,8,8);
glVertex2i(26,40);
glVertex2i(26,42);
glVertex2i(24,42);
glVertex2i(24,40);
glEnd();


///House NO 3
///Lower part 3
glBegin(GL_POLYGON);
glColor3ub(135, 54, 0);
glVertex2i(48,37);
glVertex2i(48,38);
glVertex2i(34,38);
glVertex2i(34,37);
glEnd();

///Body part 3
glBegin(GL_POLYGON);
glColor3ub(156, 100, 12);
glVertex2i(47,38);
glVertex2i(47,45);
glVertex2i(35,45);
glVertex2i(35,38);
glEnd();

/// Roof No 3
glBegin(GL_POLYGON);
glColor3ub(131, 145, 146);
glVertex2i(48,45);
glVertex2i(46,48);
glVertex2i(36,48);
glVertex2i(34,45);
glEnd();

///Gate part 3
glBegin(GL_POLYGON);
glColor3ub(123, 36, 28);
glVertex2i(39,38);
glVertex2i(39,42);
glVertex2i(37,42);
glVertex2i(37,38);
glEnd();

/// Window part 3
glBegin(GL_POLYGON);
glColor3ub(7,8,8);
glVertex2i(44,40);
glVertex2i(44,42);
glVertex2i(42,42);
glVertex2i(42,40);
glEnd();

///Lamp Post
///Lamp Stand
glBegin(GL_POLYGON);
glColor3ub(7,8,8);
glVertex2i(53,36);
glVertex2i(53,50);
glVertex2i(52,50);
glVertex2i(52,36);
glEnd();

///Lamp Light
glBegin(GL_POLYGON);
glColor3ub(241,196,15);
glVertex2i(53,50);
glVertex2i(54,52);
glVertex2i(51,52);
glVertex2i(52,50);
glEnd();

///Lamp Uppeer Rectangle
glBegin(GL_POLYGON);
glColor3ub(7,8,8);
glVertex2i(54,52);
glVertex2i(54,53);
glVertex2i(51,53);
glVertex2i(51,52);
glEnd();

///Lamp Uppeer Triangle
glBegin(GL_POLYGON);
glColor3ub(7,8,8);
glVertex2i(54,53);
glVertex2f(52.5,54);
glVertex2i(51,53);

glEnd();











glutSwapBuffers();

glFlush();

}

void update(int value){
    _angle1 += 6.0;
    glutPostRedisplay();
    glutTimerFunc(16, update, 0);

}

void update1(int value)
{
     _move +=0.1;
if(_move >54)
{
_move = 0;
}
glutPostRedisplay();
glutTimerFunc(20, update1, 0);
}





int main(int argc, char** argv) {

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(540, 700);
glutCreateWindow("Village view before the tunnel");
glutInitWindowPosition(50,50);
gluOrtho2D(0,54,0,70);
glutDisplayFunc(display);
glutTimerFunc(25, update, 0);
glutTimerFunc(20, update1, 0);

initGL();

glutMainLoop();
return 0;

}
