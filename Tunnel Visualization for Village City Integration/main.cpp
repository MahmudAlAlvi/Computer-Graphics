#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <cmath>
#include"Algorithm.h"

using namespace std;

float _move = 0.0f;
float _angle1 = 0.0f;
float _move2 = 0.0f;
float _move3 = 0.0f;
float _move4 = 0.0f;
float _moveX=0.0;
float _moveY=0.0;


float r1=0.0f;
float g1=0.0f;
float b1=54.0f;

float r2=253;
float g2=253;
float b2=253;

float r3=30;
float g3=132;
float b3=73;



void initGL() {

glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

}
///................(22-47013-1)
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

void ship(float x,float y){
    glBegin(GL_POLYGON); //ship body
    glColor3ub(7, 72, 171 );
    glVertex2f(x+9.0f,y+ 5.0f);
    glVertex2f(x+35.0f, y+5.0f);
    glVertex2f(x+41.0f, y+20.0f);
    glVertex2f(x+17.0f,y+20.0f);
    glVertex2f(x+13.0f,y+23.0f);
    glVertex2f(x+1.0f,y+23.0f);
    glEnd();

    glBegin(GL_POLYGON); //ship floor 1
    glColor3ub(3, 144, 48 );
    glVertex2f(x+17.0f, y+20.0f);
    glVertex2f(x+37.0f, y+20.0f);
    glVertex2f(x+37.0f, y+28.0f);
    glVertex2f(x+19.0f,y+28.0f);
    glVertex2f(x+11.0f,y+23.0f);
    glEnd();

     glBegin(GL_POLYGON); //ship floor 2
    glColor3ub(217, 117, 10 );
    glVertex2f(x+19.0f, y+28.0f);
    glVertex2f(x+37.0f, y+28.0f);
    glVertex2f(x+37.0f, y+32.0f);
    glVertex2f(x+28.0f,y+32.0f);
    glEnd();

    glBegin(GL_POLYGON); //ship top1
    glColor3ub(255, 126, 18 );
    glVertex2f(x+30.0f, y+32.0f);
    glVertex2f(x+32.0f, y+32.0f);
    glVertex2f(x+33.0f, y+36.0f);
    glVertex2f(x+31.0f,y+36.0f);
    glEnd();

    glBegin(GL_POLYGON); //ship top2
    glColor3ub(255, 126, 18 );
    glVertex2f(x+34.0f, y+32.0f);
    glVertex2f(x+36.0f, y+32.0f);
    glVertex2f(x+37.0f, y+36.0f);
    glVertex2f(x+35.0f,y+36.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //ship top1 window1
    glColor3ub(106, 54, 33   );
    glVertex2f(x+16.0f, y+25.0f);
    glVertex2f(x+20.0f, y+25.0f);
    glVertex2f(x+20.0f, y+27.0f);
    glEnd();

    glBegin(GL_POLYGON); //ship top1 WINDOW 2
    glColor3ub(106, 54, 33   );
    glVertex2f(x+21.0f, y+23.0f);
    glVertex2f(x+24.0f, y+23.0f);
    glVertex2f(x+24.0f, y+27.0f);
    glVertex2f(x+21.0f,y+27.0f);
    glEnd();

    glBegin(GL_POLYGON); //ship top1 WINDOW 3
    glColor3ub(106, 54, 33   );
    glVertex2f(x+25.0f, y+23.0f);
    glVertex2f(x+28.0f, y+23.0f);
    glVertex2f(x+28.0f, y+27.0f);
    glVertex2f(x+25.0f,y+27.0f);
    glEnd();

    glBegin(GL_POLYGON); //ship top1 WINDOW 4
    glColor3ub(106, 54, 33   );
    glVertex2f(x+29.0f, y+23.0f);
    glVertex2f(x+35.0f, y+23.0f);
    glVertex2f(x+35.0f, y+27.0f);
    glVertex2f(x+29.0f,y+27.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //ship top2 window1
    glColor3ub(175, 38, 17   );
    glVertex2f(x+26.0f, y+30.5f);
    glVertex2f(x+26.0f, y+28.5f);
    glVertex2f(x+23.0f, y+28.5f);
    glEnd();

    glBegin(GL_POLYGON); //ship top2 window2
    glColor3ub(175, 38, 17   );
    glVertex2f(x+27.0f, y+28.5f);
    glVertex2f(x+30.0f, y+28.5f);
    glVertex2f(x+30.0f, y+30.5f);
    glVertex2f(x+27.0f, y+30.5f);
    glEnd();

    glBegin(GL_POLYGON); //ship top2 window3
    glColor3ub(175, 38, 17   );
    glVertex2f(x+31.0f, y+28.5f);
    glVertex2f(x+35.0f, y+28.5f);
    glVertex2f(x+35.0f, y+30.5f);
    glVertex2f(x+31.0f, y+30.5f);
    glEnd();
}

///..........(22-47013-1)...end

///........................(21-45887-3)....

void aeroplane(float x,float y){
glBegin(GL_POLYGON);
glColor3ub(78, 151, 165);
glVertex2f(x+5,y+8);
glVertex2f(x+21.5,y+4);
glVertex2f(x+24.0,y+7.5);
glVertex2f(x+5.50,y+12);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(78, 151, 165);
glVertex2f(x+21.5,y+4);
glVertex2f(x+27.5,y+4);
glVertex2f(x+28,y+6);
glVertex2f(x+24.0,y+7.5);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(78, 151, 165);
glVertex2f(x+24.0,y+7.5);
glVertex2f(x+28,y+6);
glVertex2f(x+31,y+12);
glVertex2f(x+29,y+12.4);
glEnd();

circle(2,x+5.25,y+10,78, 151, 165);
circle(.7,x+9,y+9.5,20, 21, 211);
circle(.7,x+11,y+8.8,20, 21, 211);
circle(.7,x+13,y+8.2,20, 21, 211);
circle(.7,x+13,y+8.2,20, 21, 211);
circle(.7,x+15.5,y+7.6,20, 21, 211);
circle(.7,x+18,y+7.1,20, 21, 211);
}

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

void tree(float x,float y){
glBegin(GL_POLYGON);
glColor3ub(144, 79, 47);
glVertex2f(x+2,y+0);
glVertex2f(x+4,y+0);
glVertex2f(x+4,y+4+2);
glVertex2f(x+2,y+4+2);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(144, 79, 47);
glVertex2f(x+4,y+4+2);
glVertex2f(x+6,y+8+2);
glVertex2f(x+5,y+8+2);
glVertex2f(x+3,y+4.3+2);
glVertex2f(x+3,y+4+2);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(144, 79, 47);
glVertex2f(x+2,y+4+2);
glVertex2f(x+3,y+4+2);
glVertex2f(x+3,y+4.3+2);
glVertex2f(x+1,y+8+2);
glVertex2f(x+0,y+8+2);
glEnd();

circle(3,x+0.0,y+11.0,24, 106, 59);
circle(4,x+4.0,y+11.50,24, 106, 59 );
circle(3,x+8.0,y+11.0,24, 106, 59 );

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

void boat2(int x,int y){

    glBegin(GL_POLYGON);
    glColor3ub(173, 95, 95);
    glVertex2f(x+8.83,y+4.20);
    glVertex2f(x+20.83,y+5.0);
    glVertex2f(x+20.00,y+10.70);
    glVertex2f(x+8.83,y+9.70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(130, 185, 196);
    glVertex2f(x+8.83+1.5,y+4.20+1);
    glVertex2f(x+20.83-1.5,y+5.00+1);
    glVertex2f(x+20.00-1.5,y+10.70-1);
    glVertex2f(x+8.83+1.5,y+9.70-1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(95, 56, 56);
    glVertex2f(x+1.83,y+1.0);
    glVertex2f(x+20.80,y+1.0);
    glVertex2f(x+25.0,y+5.60);
    glVertex2f(x+1.70,y+4.0);

    glEnd();

}

///.................21-45887-3......End(123)
void railtrack(float x,float y){
glBegin(GL_POLYGON);
glColor3ub(82, 32, 32);
glVertex2f(x+1,y+0);
glVertex2f(x+3,y+0);
glVertex2f(x+2,y+10);
glVertex2f(x+0,y+10);
glEnd();
}

void railline(){
glBegin(GL_POLYGON);
glColor3ub(59, 68, 68);
glVertex2i(0,24);
glVertex2i(205,24);
glVertex2i(205,26);
glVertex2i(0,26);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(112, 130, 131);
glVertex2i(0,26);
glVertex2i(205,26);
glVertex2i(205,27);
glVertex2i(0,27);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(132, 121, 85 );
glVertex2i(200,16);
glVertex2i(200,26);
glVertex2i(0,26);
glVertex2i(0,16);
glEnd();


}

void rail(float x,float y){

glBegin(GL_POLYGON);
glColor3ub(140, 6, 6);
glVertex2f(x+0.0,y+0);
glVertex2f(x+80.0,y+0);
glVertex2f(x+80.0,y+15);
glVertex2f(x+0.0,y+15);
glEnd();

glPointSize(1.5);
glBegin(GL_LINES);
glColor3ub(140,126,106);
glVertex2f(x+25,y+0);
glVertex2f(x+25,y+15);
glEnd();

glPointSize(1.5);
glBegin(GL_LINES);
glColor3ub(140,126,106);
glVertex2f(x+55,y+0);
glVertex2f(x+55,y+15);
glEnd();

circle(7.5,x+80,y+7.5,140, 6, 6);
circle(2.5,x+10,y+7.5,54, 140, 135 );
circle(2.5,x+20,y+7.5,54, 140, 135 );
circle(2.5,x+30,y+7.5,54, 140, 135 );
circle(2.5,x+40,y+7.5,54, 140, 135 );
circle(2.5,x+50,y+7.5,54, 140, 135 );
circle(2.5,x+60,y+7.5,54, 140, 135 );
circle(2.5,x+70,y+7.5,54, 140, 135 );

circle(1.5,x+5,y+.5,4, 0, 5 );
circle(1.5,x+10,y+.5,4, 0, 5 );
circle(1.5,x+20,y+.5,4, 0, 5 );
circle(1.5,x+30,y+.5,4, 0, 5 );
circle(1.5,x+40,y+.5,4, 0, 5 );
circle(1.5,x+50,y+.5,4, 0, 5 );
circle(1.5,x+60,y+.5,4, 0, 5 );
circle(1.5,x+70,y+.5,4, 0, 5 );
circle(1.5,x+15,y+.5,4, 0, 5 );
circle(1.5,x+25,y+.5,4, 0, 5 );
circle(1.5,x+35,y+.5,4, 0, 5 );
circle(1.5,x+45,y+.5,4, 0, 5 );
circle(1.5,x+55,y+.5,4, 0, 5 );
circle(1.5,x+65,y+.5,4, 0, 5 );
circle(1.5,x+75,y+.5,4, 0, 5 );



}

void windmill(){
///WindMill Stand
glBegin(GL_POLYGON);
glColor3ub(131, 63, 105);
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




}
void tree1(){
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
            glColor3ub(24, 106, 59);
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
            glColor3ub(24, 106, 59);
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
            glColor3ub(24, 106, 59);
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
            glColor3ub(24, 106, 59);
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
            glColor3ub(24, 106, 59);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+35,y+50 );
        }

	glEnd();

}
void tree2(){
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

}
void MainHill(){
glBegin(GL_POLYGON);
glColor3ub(151, 91, 6);
glVertex2f(75.0,10.0);
glVertex2f(115.0,10.0);
glVertex2f(112.0,30.0+10);
glVertex2f(100.0,60.0+10);
glVertex2f(95.0,64.0+10);
glVertex2f(90.0,61.0+10);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(149, 121, 81 );
glVertex2f(74.50,23.0);
glVertex2f(75.0,10.0);
glVertex2f(90.0,61.0+10);
glVertex2f(77.0,42.0);
glVertex2f(76.0,23.0);

glEnd();
}
void tunnel1(){
glBegin(GL_POLYGON);
glColor3ub(86, 86, 86);//front
glVertex2f(75.0-10,13.0);
glVertex2f(130.0,13.0);
glVertex2f(130.0,28.0);
glVertex2f(75.0-10,28.0);
glEnd();


glBegin(GL_POLYGON);
glColor3ub(137, 137, 137);//shade
glVertex2f(75.0-10,28.0);
glVertex2f(130.0,28.0);
glVertex2f(120.0,38.0);
glVertex2f(70.0-10,38.0);
glEnd();
}

void tunnel2(){
glBegin(GL_POLYGON);
glColor3ub(86, 86, 86);
glVertex2f(70.0-5,35.0);
glVertex2f(90.0-5,35.0);
glVertex2f(90.0-5,42.0);
glVertex2f(70.0-5,42.0);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(86, 86, 86);
glVertex2f(75.0-5,13.0);
glVertex2f(130.0-5,13.0);
glVertex2f(130.0-5,13.0);
glVertex2f(130.0-5,23.0);
glVertex2f(75.0-5,23.0);
glEnd();


glBegin(GL_POLYGON);
glColor3ub(137, 137, 137);
glVertex2f(75.0-5,23.0);
glVertex2f(130.0-5,23.0);
glVertex2f(120.0-5,42.0);
glVertex2f(70.0-5,42.0);
glEnd();
}

void Mosque(){
circle(7,178,50,171, 166, 10);
glBegin(GL_POLYGON);
glColor3ub(209, 209, 201);
glVertex2f(168+0.0,36+0.0);
glVertex2f(168+20.0,36+0.0);
glVertex2f(168+20.0,36+15.0);
glVertex2f(168+0.0,36+15.0);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(160, 159, 233);
glVertex2f(168+8.0,36+0.0);
glVertex2f(168+12.0,36+0.0);
glVertex2f(168+12.0,36+7.0);
glVertex2f(168+8.0,36+7.0);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(160, 159, 133);
glVertex2f(165+0.0,36+0.0);
glVertex2f(165+3.0,36+0.0);
glVertex2f(165+3.0,36+20.0);
glVertex2f(165+1.5,36+21.0);
glVertex2f(165+0.0,36+20.0);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(160, 159, 133);
glVertex2f(188+0.0,36+0.0);
glVertex2f(188+3.0,36+0.0);
glVertex2f(188+3.0,36+20.0);
glVertex2f(188+1.5,36+21.0);
glVertex2f(188+0.0,36+20.0);
glEnd();
}
void building1(){
glBegin(GL_POLYGON);
glColor3ub(131, 63, 55);
glVertex2f(140+0.0,36+0.0);
glVertex2f(140+10.0,36+0.0);
glVertex2f(140+10.0,36+28.0);
glVertex2f(140+0.0,36+28.0);
glEnd();
square2(140+1,36+3,53, 140, 153);
square2(140+1,9+36,53, 140, 153);
square2(140+1,15+36,53, 140, 153);
square2(140+1,21+36,53, 140, 153);

square2(140+7,3+36,53, 140, 153);
square2(140+7,9+36,53, 140, 153);
square2(140+7,15+36,53, 140, 153);
square2(140+7,21+36,53, 140, 153);
}
void building3(){
glBegin(GL_POLYGON);
glColor3ub(121, 138, 140);
glVertex2f(160-5+0.0,36+0.0);
glVertex2f(160-5+10.0,36+0.0);
glVertex2f(160-5+10.0,36+28.0);
glVertex2f(160-5+0.0,36+28.0);
glEnd();

square2(155+1,36+3,53, 140, 153);
square2(155+1,9+36,53, 140, 153);
square2(155+1,15+36,53, 140, 153);
square2(155+1,21+36,53, 140, 153);

square2(155+7,3+36,53, 140, 153);
square2(155+7,9+36,53, 140, 153);
square2(155+7,15+36,53, 140, 153);
square2(155+7,21+36,53, 140, 153);


}
void building2(){
glBegin(GL_POLYGON);
glColor3ub(190, 211, 214);
glVertex2f(148-1.0,37+0.0);
glVertex2f(148+11.0,37+0.0);
glVertex2f(148+11.0,37+28.0);
glVertex2f(148-1.0,37+28.0);
glEnd();
square(149+0,37+21,53, 140, 153);
square(149+0,7+37,53, 140, 153);
}
void town(){
glBegin(GL_POLYGON);
glColor3ub(97, 106, 107);
glVertex2f(140-1.0,34.0);
glVertex2f(191.0,34.0);
glVertex2f(191.0,50.0);
glVertex2f(140-1.0,50.0);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(97, 106, 107);
glVertex2f(140-1.0,32.0);
glVertex2f(200.0,32.0);
glVertex2f(200.0,40.0);
glVertex2f(140-1.0,40.0);
glEnd();
}

void cloud1(){
///Circle 1
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+4,y+74 );
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
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+3.5,y+75.5 );
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
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+4.5,y+76.5 );
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
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+6.5,y+74.5 );
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
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+7.5,y+75.5 );
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
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+7,y+76.5 );
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
            glVertex2f(x+6,y+76 );
        }


	glEnd();
	glPopMatrix();

}

void cloud2(){
//Circle 1
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+15,y+73.5 );
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
            float r=1.8;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+13,y+75 );
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
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+14.5,y+76 );
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
            glVertex2f(x+16,y+73 );
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
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+17,y+75 );
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
            glVertex2f(x+16,y+75 );
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
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+15,y+74 );
        }


	glEnd();
	glPopMatrix();

}
void cloud3(){
glPushMatrix();
glTranslatef(_move2, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(7,8,8);
circle(1.5,30.0-40,78.0-2,214, 216, 214);
circle(1.5,29.0-40,77.0-2,214, 216, 214);
circle(1.5,31.0-40,76.0-2,214, 216, 214);
circle(2.5,31.0-40,78.0-2,214, 216, 214);
circle(1.5,33.0-40,77.0-2,214, 216, 214);
circle(1.5,34.0-40,76.0-2,214, 216, 214);
circle(1.5,34.0-40,78.0-2,214, 216, 214);
circle(2,36.0-40,78.0-2,214, 216, 214);

glPopMatrix();
}

void cloud4(){
glPushMatrix();
glTranslatef(_move2, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(7,8,8);
circle(1.5,30.0-55,78.0,214, 216, 214);
circle(2.0,26.0-55,78.0,214, 216, 214);
circle(2.5,28.50-55,77.0,214, 216, 214);
circle(1.5,31.0-55,76.0,214, 216, 214);
circle(2.5,31.0-55,78.0,214, 216, 214);
circle(2.0,33.0-55,77.0,214, 216, 214);
circle(1.5,34.0-55,76.0,214, 216, 214);
circle(2.5,34.5-55,78.0,214, 216, 214);
glPopMatrix();
}

void moon(){
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(r2,g2,b2);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+41,y+73 );
        }


	glEnd();

}


void forest(){

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
}


void straw(){
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


}

void house1(){
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

}

void house2(){
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


}

void house3(){
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
}
void lampost(){
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

void car3(){
glPushMatrix();
glTranslated(_move4,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(163, 141, 16);
    glVertex2f(0.0+250,1.0+20);
    glVertex2f(14.0+250,1.0+20);
    glVertex2f(14.0+250,6.0+20);
    glVertex2f(0.0+250,6.0+20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(163, 141, 16);
    glVertex2f(0.0+250,6.0+20);
    glVertex2f(5.0+250,6.0+20);
    glVertex2f(5.0+250,10.0+20);
    glVertex2f(0.5+250,10.0+20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(2, 1, 0);
    glVertex2f(0.0+0.7+250,6.0+.5+20);
    glVertex2f(5.0-0.5+250,6.0+.5+20);
    glVertex2f(5.0-0.5+250,10.0-1.0+20);
    glVertex2f(0.5+0.5+250,10.0-1.0+20);
    glEnd();



    circle(0.90,2.0+250,1.0+20,0,0,0);
    circle(0.90,11.0+250,1.0+20,0,0,0);
    glPopMatrix();

}

void car4(){
    glPushMatrix();
    glTranslated(_move4,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(125, 14, 63);
    glVertex2f(0.0+220,1.0+20);
    glVertex2f(14.0+220,1.0+20);
    glVertex2f(14.0+220,6.0+20);
    glVertex2f(0.0+220,6.0+20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(125, 14, 63);
    glVertex2f(0.0+220,6.0+20);
    glVertex2f(14.0+220,6.0+20);
    glVertex2f(14.0+220,10.0+20);
    glVertex2f(0.5+220,10.0+20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(2, 1, 0);
    glVertex2f(0.7+220,6.5+20);
    glVertex2f(4.5+220,6.0+.5+20);
    glVertex2f(4.5+220,9.0+20);
    glVertex2f(1.0+220,9.0+20);
    glEnd();



    circle(01.20,2.0+220,1.10+20,0,0,0);
    circle(01.20,11.0+220,1.10+20,0,0,0);
    glPopMatrix();


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
hill2(45,42);
hill2(53,40);

}

void forest2(){
brickKlin(120,50);
circle(5,108,52,20,90,40);
circle(5,115,52,20,90,40);
circle(5,120,52,20,90,40);
hill2(62,43);
hill1(70,43);
hill1(101,43);
hill2(111,43);
circle(10,60,50,20,90,50);
circle(8,68,50,20,90,50);



}


void forest3(){
brickKlin(190,50);
circle(7,147,50,20,90,50);
circle(10,157,50,20,90,50);
circle(10,169,50,20,90,50);
circle(6,179,53,20,90,50);
circle(8,189,50,20,90,50);


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
glColor3ub(r1, g1, b1);
glVertex2i(200,50);
glVertex2i(200,90);
glVertex2i(0,90);
glVertex2i(0,50);
glEnd();


///Moon/sun

moon();


///..........................Water(21-45887-3)
///..................Aeroplane

glPushMatrix();
glTranslated(_moveX,_moveY,0);
aeroplane(225,60);
glPopMatrix();


///river..........
glBegin(GL_POLYGON);
glColor3ub(0, 205, 223 );
glVertex2f(0.0,-40);
glVertex2f(200.0,-40);
glVertex2f(200.0,0);
glVertex2f(0.0,0);
glEnd();
///.............................End(513)

///Cloud 1
///...................................................................................................

cloud1();

///............................................................................................

///Cloud 2
cloud2();


///Forest
forest();

///................................................

///.........(21-45887-3).........Start
///Forest
circle(10,60,50,20,90,50);
circle(8,68,50,20,90,50);
circle(10,78,50,20,90,50);
circle(7,89,50,20,90,50);
circle(10,98,50,20,90,50);
circle(10,108,50,20,90,50);
circle(6,115,50,20,90,50);
circle(8,125,50,20,90,50);

///..................end......(1035)


///..............................(22-47013-1)

///circle(10,60,50,20,90,50);
circle(8,130,50,20,90,50);
circle(10,137,50,20,90,50);
circle(7,147,50,20,90,50);
circle(10,157,50,20,90,50);
circle(10,169,50,20,90,50);
circle(6,179,53,20,90,50);
circle(8,189,50,20,90,50);


///...............................(22-47013-1)End..................


/// River Side
glBegin(GL_POLYGON);
glColor3ub(175, 96, 26);
glVertex2i(200,0);
glVertex2i(200,8);
glVertex2i(0,8);
glVertex2i(0,0);
glEnd();

///Grass Side
glBegin(GL_POLYGON);
glColor3ub(r3, g3, b3);
glVertex2i(200,8);
glVertex2i(200,18);
glVertex2i(0,18);
glVertex2i(0,8);
glEnd();

///Road
glBegin(GL_POLYGON);
glColor3ub(97, 106, 107);
glVertex2i(200,18);
glVertex2i(200,34);
glVertex2i(0,34);
glVertex2i(0,18);
glEnd();

glLineWidth(2.0);
glBegin(GL_LINES);
glColor3f(1.0f,1.0,0.0f);
glVertex2i(0,26);
glVertex2i(200,26);
glEnd();

///Grass(houseSide)
glBegin(GL_POLYGON);
glColor3ub(r3,g3,b3);
glVertex2i(200,34);
glVertex2i(200,50);
glVertex2i(0,50);
glVertex2i(0,34);
glEnd();


///Yellow

///Tree 1
tree1();



///Tree 2
tree2();

///WindMill
windmill();




///House NO 1
///Lower part 1
house1();


///House NO 2
house2();


///House NO 3
house3();

///Lamp Post
lampost();

///..............................................(21-45887-3)

///cloud3..........................
cloud3();



///cloud4..........................
cloud4();

///Tree..................
tree(60,40);
tree(65,43);
tree(78,40);
tree(90,40);
tree(120,39);
tree(112,39);



///.........................................................(22-40713-1).....




///town
tree(134,40);
glBegin(GL_POLYGON);
glColor3ub(97, 106, 107);
glVertex2f(140-1.0,34.0);
glVertex2f(191.0,34.0);
glVertex2f(191.0,50.0);
glVertex2f(140-1.0,50.0);
glEnd();

tree(134,40);
tree(194,40);

///building2.............
building2();

///building3.............
building3();


///building1.............
building1();

///............Mosque

Mosque();







///........Car1.....(22-46128-1)

car1();



///...............................................(22-40713-1)end

///................Car2....(22-46128-1)

car2();


///......................Car3.......21-45887-3
car3();

///.............Car4(21-45887-3)

car4();



///............

///tunnel2..........(21-45887-3).....

tunnel2();


///....................end

///Hill...........75,130
MainHill();

tree(10,9);
tree(30,9);
tree(50,9);
///...........
tree(150,9);
tree(170,9);
tree(190,9);
tree(135,9);

glPushMatrix();
glTranslated(_move4,0,0);
boat1(211,-8);
glPopMatrix();

glPushMatrix();
glTranslated(_move2,0,0);
boat1(-10,-20);
glPopMatrix();


glPushMatrix();
glTranslated(_move2,0,0);
boat2(-35,-25);
glPopMatrix();

glPushMatrix();
glTranslated(_move4,0,0);
ship(250,-38);
glPopMatrix();

glutSwapBuffers();

glFlush();

}

void display2() {

glClear(GL_COLOR_BUFFER_BIT);



glMatrixMode(GL_MODELVIEW);
///sky(Night View)
glBegin(GL_POLYGON);
glColor3ub(r1, g1, b1);
glVertex2i(200,50);
glVertex2i(200,90);
glVertex2i(0,90);
glVertex2i(0,50);
glEnd();


///Moon/sun
moon();

///..................Aeroplane

glPushMatrix();
glTranslated(_moveX,_moveY,0);
aeroplane(225,60);
glPopMatrix();
///..........................Water(21-45887-3)
glBegin(GL_POLYGON);
glColor3ub(0, 205, 223 );
glVertex2f(0.0,-40);
glVertex2f(200.0,-40);
glVertex2f(200.0,0);
glVertex2f(0.0,0);
glEnd();
///.............................End(513)

///Cloud 1
///...................................................................................................
cloud1();


///............................................................................................

///Cloud 2
cloud2();



///Forest...........(22-46128-1)

forest1();

///......(21-45887-3)....
///forest
forest2();


///..................end......(1035)


///.............(22-47013-1).................
///forest

forest3();


///...................................................................................................................


/// River Side
glBegin(GL_POLYGON);
glColor3ub(175, 96, 26);
glVertex2i(200,0);
glVertex2i(200,8);
glVertex2i(0,8);
glVertex2i(0,0);
glEnd();

///Grass Side
glBegin(GL_POLYGON);
glColor3ub(r3, g3, b3);
glVertex2i(200,8);
glVertex2i(200,18);
glVertex2i(0,18);
glVertex2i(0,8);
glEnd();

///Grass(houseSide)
glBegin(GL_POLYGON);
glColor3ub(r3,g3,b3);
glVertex2i(200,26);
glVertex2i(200,50);
glVertex2i(0,50);
glVertex2i(0,26);
glEnd();

///T(End)
glBegin(GL_POLYGON);
glColor3ub(86, 86, 86);//back
glVertex2f(70.0-10,29.0);
glVertex2f(90.0,29.0);
glVertex2f(90.0,38.0);
glVertex2f(70.0-10,38.0);
glEnd();

///......
///Rail track

railline();

///......
for(int i=0;i<=200;i=i+4){
    railtrack(i,16);
  }

glPushMatrix();
glTranslated(_move,0,0);
rail(-100,17.5);
glPopMatrix();



glBegin(GL_POLYGON);
glColor3ub(59, 68, 68);
glVertex2i(0,16);
glVertex2i(205,16);
glVertex2i(205,18);
glVertex2i(0,18);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(112, 130, 131);
glVertex2i(0,18);
glVertex2i(205,18);
glVertex2i(205,19);
glVertex2i(0,19);
glEnd();

///..................

///Yellow
straw();

tree1();
tree2();



windmill();


///House NO 1
house1();

///House NO 2
house2();


///House NO 3
house3();

///Lamp Post
lampost();

///..............................................(21-45887-3)
///cloud3..........................

cloud3();


///cloud4..........................
cloud4();



///Tree..................
tree(60,40);
tree(65,43);
tree(78,40);
tree(90,40);
tree(120,39);
tree(112,39);
///.........................................................(22-40713-1).....

///town
tree(134,40);
//town();

tree(194,40);

///building2.............
building2();

///building3.............
building3();

///building1.............
building1();

///............Mosque

Mosque();

///............

///tunnel..........(21-45887-3)
tunnel1();

///....................end

///Hill...........75,130


MainHill();


tree(10,9);
tree(30,9);
tree(50,9);
///...........
tree(160,9);
tree(190,9);


glPushMatrix();
glTranslated(_move4,0,0);
boat1(211,-15);
glPopMatrix();

glPushMatrix();
glTranslated(_move2,0,0);
boat2(-15,-25);
glPopMatrix();

glPushMatrix();
glTranslated(_move4,0,0);
ship(211,-40);
glPopMatrix();

glutSwapBuffers();

glFlush();

}

void update(int value){
    _angle1 += 2.0;
    glutPostRedisplay();
    glutTimerFunc(16, update, 0);

}

void update1(int value)
{
     _move +=0.2;
if(_move >300)
{
_move = 0;
}
glutPostRedisplay();
glutTimerFunc(23, update1, 0);
}

void update3(int value)
{
     _move3 +=0.25;
if(_move3 >250)
{
_move3 = -5;
}
glutPostRedisplay();
glutTimerFunc(20, update3, 0);
}

void update2(int value)//cloud3,4
{
     _move2 +=0.18;
if(_move2 >230)
{
_move2 = 0;
}
glutPostRedisplay();
glutTimerFunc(23, update2, 0);
}


void update4(int value)///ship/boat1
{
     _move4 -=0.25;
if(_move4 <-260)
{
_move4 = 0;
}
glutPostRedisplay();
glutTimerFunc(20, update4, 0);
}

void update5(int value)///aeroplane
{
     _moveX -=0.25;
     _moveY +=0.05;
if(_moveX <-400)
{
_moveX = 0;
_moveY = 0;
}

glutPostRedisplay();
glutTimerFunc(20, update5, 0);
}


void Mykybrd(unsigned char key,int x,int y){
switch(key){
case 'n':
    r1=0,g1=0,b1=54;
    r2=253;
    g2=253;
    b2=253;
    r3=30;
    g3=132;
    b3=73;

    break;

case 'd':
    r1=0,g1= 216,b1=254;

    r2=253;
    g2=132;
    b2=29;
    r3=57;
    g3=163;
    b3=42;

    break;
case '2':
    glutDisplayFunc(display2);
    break;

default:
    glutDisplayFunc(display);
    break;

}

}



int main(int argc, char** argv) {

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(1800,1000);
glutCreateWindow("the tunnel");
glutInitWindowPosition(50,50);
gluOrtho2D(0,200,-40,90);
glutDisplayFunc(display);
glutTimerFunc(25, update, 0);
glutTimerFunc(20, update1, 0);
glutTimerFunc(18, update3, 0);
glutTimerFunc(20, update2, 0);
glutTimerFunc(20, update4, 0);
glutTimerFunc(100, update5, 0);
glutKeyboardFunc(Mykybrd);

initGL();

glutMainLoop();
return 0;

}
