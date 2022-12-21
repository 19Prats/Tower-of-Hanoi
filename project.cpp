#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>

using namespace std;

int x=200;
int y=200;		

void outline();
void start();
void p1();
void p2();
void p3();
void p4();
void p5();
void p6();
void p7();
void rules();

int main()
{
	int gd = DETECT, gm;
	system("color f1");

	initgraph(&gd, &gm, "C:\\turboc3\\bgi");
	settextstyle(8, 0, 4);
	outtextxy(60, 50, "WELCOME TO TOWER OF HANOI");
	getch();

	p1();
	delay(2000);
		
	p2();
	delay(2000);
		
	p3();
	delay(2000);
		
	p4();
	delay(2000);
		
	p5();
	delay(2000);
		
	p6();
	delay(2000);
		
	p7();
	delay(2000);
			
	cleardevice();

	getch();

	closegraph();
	return 0;
}

void p7()
{
	cleardevice();
	settextstyle(8, 0, 4);
	outtextxy(500-300, 50, "7th Phase");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(850-400, 500-y, 950-400, 550-y);
	floodfill(855-400, 545-y, 15);
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(875-400, 450-y, 925-400, 500-y);
	floodfill(880-400, 495-y, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(825-400, 600-y, 975-400, 550-y);
	floodfill(830-400, 555-y, 15);

	outline();
}

void p6()
{
	cleardevice();
	settextstyle(8, 0, 4);
	outtextxy(500-300, 50, "6th Phase");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(850-400, 500-y, 950-400, 550-y);
	floodfill(855-400, 545-y, 15);
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(275-x, 600-y, 325-x, 550-y);
	floodfill(280-x, 595-y, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(825-400, 600-y, 975-400, 550-y);
	floodfill(830-400, 555-y, 15);

	outline();
}

void p5()
{
	cleardevice();
	settextstyle(8, 0, 4);
	outtextxy(500-300, 50, "5th Phase");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(550-300, 550-y, 650-300, 600-y);
	floodfill(555-300, 595-y, 15);
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(275-x, 600-y, 325-x, 550-y);
	floodfill(280-x, 595-y, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(825-400, 600-y, 975-400, 550-y);
	floodfill(830-400, 555-y, 15);

	outline();
}

void p4()
{
	cleardevice();
	settextstyle(8, 0, 4);
	outtextxy(500-300, 50, "4th Phase");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(550-300, 550-y, 650-300, 600-y);
	floodfill(555-300, 595-y, 15);
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(575-300, 500-y, 625-300, 550-y);
	floodfill(580-300, 545-y, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(825-400, 600-y, 975-400, 550-y);
	floodfill(830-400, 555-y, 15);

	outline();
}

void p3()
{
	cleardevice();
	settextstyle(8, 0, 4);
	outtextxy(500-300, 50, "3rd Phase");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(550-300, 550-y, 650-300, 600-y);
	floodfill(555-300, 595-y, 15);
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(575-300, 500-y, 625-300, 550-y);
	floodfill(580-300, 545-y, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(225-x, 550-y, 375-x, 600-y);
	floodfill(230-x, 590-y, 15);

	outline();
}

void p2()
{
	cleardevice();
	settextstyle(8, 0, 4);
	outtextxy(500-300, 50, "2nd Phase");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(550-x-100, 550-y, 650-x-100, 600-y);
	floodfill(555-x-100, 595-y, 15);
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(875-400, 600-y, 925-400, 550-y);
	floodfill(880-400, 595-y, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(225-x, 550-y, 375-x, 600-y);
	floodfill(230-x, 590-y, 15);

	outline();
}

void p1()
{
	cleardevice();
	settextstyle(8, 0, 4);
	outtextxy(500-300, 50, "1st Phase");
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(875-400, 600-y, 925-400, 550-y);
	floodfill(880-400, 595-y, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(225-x, 550-y, 375-x, 600-y);
	floodfill(230-x, 590-y, 15);
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(250-x, 500-y, 350-x, 550-y);
	floodfill(255-x, 545-y, 15);

	outline();
}

void start()
{
	cleardevice();
	settextstyle(8, 0, 4);
	outtextxy(500-300, 50, "Beginning State");

	setfillstyle(SOLID_FILL, RED);
	rectangle(225-x, 550-y, 375-x, 600-y);
	floodfill(230-x, 590-y, 15);

	setfillstyle(SOLID_FILL, BLUE);
	rectangle(250-x, 500-y, 350-x, 550-y);
	floodfill(255-x, 545-y, 15);

	setfillstyle(SOLID_FILL, GREEN);
	rectangle(275-x, 450-y, 325-x, 500-y);
	floodfill(285-x, 495-y, 15);

	outline();
}

void outline()
{
	line(100-x, 600-y, 1100-x, 600-y);

	line(300-x, 600-y, 300-x, 300-y);

	line(600-x-100, 600-y, 600-x-100, 300-y);

	line(900-x-200, 600-y, 900-x-200, 300-y);

	settextstyle(8, 0, 2);
	outtextxy(290-x, 620-y, "(1)");
	outtextxy(590-300, 620-y, "(2)");
	outtextxy(890-400, 620-y, "(3)");
}



