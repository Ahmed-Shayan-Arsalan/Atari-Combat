//============================================================================
// Name        : Shayan.cpp
//Roll No      : 21I-1690
// Section     : DS-U
// Author      : FAST CS Department
// Version     :
// Copyright   : (c) Reserved
//============================================================================

#ifndef RushHour_CPP_
#define RushHour_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;
void check(int key);
// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}


int xI = 14, yI = 800;

void drawtank() {// 1st player tank

	DrawRectangle(xI + 8, yI + 4, 35, 25, colors[BLACK]);
	DrawRectangle(xI + 30, yI + 12, 20, 10, colors[LIGHT_CORAL]);
	glutPostRedisplay();
}



float x3 = 850, y3 = 400;
void drawnpctank()  // 1st player tank
{
	DrawRectangle(x3 + 8, y3 + 4, 35, 25, colors[BLACK]);
	DrawRectangle(x3, y3 + 12, 20, 10, colors[CORAL]);
}

int x2 = 950, y2 = 450; //2nd player tank
void drawtank2() {
	DrawRectangle(x2 + 8, y2 + 4, 35, 25, colors[BLACK]);
	DrawRectangle(x2, y2 + 12, 20, 10, colors[CORAL]);

	glutPostRedisplay();
}

int bx = 1000, by = 1000;
int bx2 = 1000, by2 = 1000;
void drawbullet() {
	DrawCircle(bx, by, 4, colors[CADET_BLUE]);
	glutPostRedisplay();

}void drawbullet2() {
	DrawCircle(bx2, by2, 4, colors[CADET_BLUE]);
	glutPostRedisplay();

}

bool flag = true;

void movebullet() {

	if (!flag) {
		cout << "go right";
		bx += 1;
		glutPostRedisplay();
	}
}

void movebullet2() {

	if (!flag) {
		cout << "go left";
		bx2 -= 1;
		glutPostRedisplay();
	}
}


void moveCar() {

	if (xI > 10 && flag) {
		xI -= 10;
		cout << "going left";
		if (xI < 100)

			flag = false;

	}
	else if (xI < 1010 && !flag) {
		cout << "go right";
		xI += 10;
		if (xI > 900)
			flag = true;
	}
}

void movenpctank() {
	if (y3 > 10 && flag) {
		y3 -= 0.5;

		if (y3 < 200)

			flag = false;

	}
	else if (y3 < 1500 && !flag) {

		y3 += 0.5;
		if (y3 > 650)
			flag = true;
	}
}
void moveCar2() {

	if (y3 > 10 && flag) {
		y3 -= 10;
		cout << "going down";
		if (y3 < 100)

			flag = false;

	}
	else if (y3 < 500 && !flag) {
		cout << "go up";
		y3 += 10;
		if (y3 > 100)
			flag = true;
	}
}










/*
 * Main Canvas drawing function.
 * */

void GameDisplay()/**/ {
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(255/*Red Component*/, 255,	//148.0/255/*Green Component*/,
		255/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear(GL_COLOR_BUFFER_BIT); //Update the colors
	string w = "Rush Hour";
	string p = "Press Enter to Play";

	//Roads
	int j = 51;
	for (int i = 1; i <= 20; i++)
	{
		DrawLine(j, 0, j, 840, 1, colors[BLACK]);
		j = j + 51;
	}

	//roads 2

	j = 60;

	for (int i = 1; i <= 14; i++)
	{
		DrawLine(0, j, 1020, j, 1);
		j = j + 60;
	}





	//Draw Rectangle

	DrawRectangle(102, 600, 153, 60, colors[BLACK]);
	DrawRectangle(102, 420, 51, 60, colors[BLACK]);
	DrawRectangle(153, 300, 51, 180, colors[BLACK]);
	DrawRectangle(255, 420, 102, 60, colors[BLACK]);
	DrawRectangle(357, 420, 51, 180, colors[BLACK]);
	DrawRectangle(102, 180, 102, 120, colors[BLACK]);
	DrawRectangle(255, 120, 51, 240, colors[BLACK]);
	DrawRectangle(459, 60, 51, 240, colors[BLACK]);
	DrawRectangle(357, 240, 204, 60, colors[BLACK]);
	DrawRectangle(561, 240, 51, 180, colors[BLACK]);
	DrawRectangle(357, 360, 102, 60, colors[BLACK]);
	DrawRectangle(459, 360, 51, 120, colors[BLACK]);
	DrawRectangle(459, 420, 51, 60, colors[BLACK]);
	DrawRectangle(459, 660, 510, 60, colors[BLACK]);
	DrawRectangle(663, 420, 153, 60, colors[BLACK]);
	DrawRectangle(663, 300, 51, 180, colors[BLACK]);
	DrawRectangle(765, 150, 51, 180, colors[BLACK]);
	DrawRectangle(918, 170, 51, 250, colors[BLACK]);
	DrawRectangle(561, 720, 40, 50, colors[BLACK]);

	//Draw Tree 1
	DrawCircle(170, 681, 10, colors[DARK_GREEN]);
	DrawLine(170, 660, 170, 680, 5, colors[RED]);

	DrawCircle(740, 621, 10, colors[DARK_GREEN]);
	DrawLine(740, 600, 740, 620, 5, colors[RED]);

	DrawLine(128, 300, 128, 320, 5, colors[RED]);
	DrawCircle(128, 321, 10, colors[DARK_GREEN]);

	DrawLine(690, 720, 690, 740, 5, colors[RED]);
	DrawCircle(690, 741, 10, colors[DARK_GREEN]);

	DrawLine(434, 120, 434, 140, 5, colors[RED]);
	DrawCircle(434, 141, 10, colors[DARK_GREEN]);

	DrawLine(690, 480, 690, 500, 5, colors[RED]);
	DrawCircle(690, 501, 10, colors[DARK_GREEN]);

	DrawLine(944, 420, 944, 440, 5, colors[RED]);
	DrawCircle(944, 440, 10, colors[DARK_GREEN]);

	//Obstacles
	DrawSquare(561, 540, 40, colors[RED]);
	DrawSquare(102, 120, 40, colors[RED]);
	DrawSquare(510, 60, 40, colors[RED]);
	DrawSquare(918, 130, 40, colors[RED]);
	DrawSquare(357, 300, 60, colors[RED]);

	drawtank();
	drawtank2();
	drawbullet();
	drawbullet2();
	drawnpctank();
	movenpctank();






	//Display Score
	DrawString(0, 0, "Score=0", colors[BLACK]);
	/*//Red Square


	DrawSquare(400, 20, 40, colors[RED]);

	//Green Square
	DrawSquare( 250 , 250 ,20,colors[GREEN]);

	Display Score
	DrawString( 0, 0, "Score=0", colors[BLACK]);

	// Trianlge Vertices v1(300,50) , v2(500,50) , v3(400,250)
	DrawTriangle( 300, 450 , 340, 450 , 320 , 490, colors[MISTY_ROSE] );



	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	DrawLine( 550 , 50 ,  550 , 480 , 10 , colors[MISTY_ROSE] );

	DrawCircle(50,670,10,colors[RED]);
	DrawCircle(70,670,10,colors[RED]);
	DrawCircle(90,670,10,colors[RED]);
	DrawRoundRect(500,200,50,100,colors[DARK_SEA_GREEN],70);
	DrawRoundRect(100,200,100,50,colors[DARK_OLIVE_GREEN],20);
	DrawRoundRect(100,100,50,100,colors[DARK_OLIVE_GREEN],30);
	DrawRoundRect(200,100,100,50,colors[LIME_GREEN],40);
	DrawRoundRect(350,100,100,50,colors[LIME_GREEN],20);
	*/
	drawtank();
	movebullet();
	movebullet2();
	glutSwapBuffers(); // do not modify this line..

}



/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {
	if (key == GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
		xI -= 10;

	}
	else if (key == GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
		xI += 10;
	}
	else if (key == GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {
		yI += 10;
	}

	else if (key == GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {
		yI -= 10;
	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/
	 //For not moving cars in wall bounderies
	{ if (xI <= 1 && key == GLUT_KEY_LEFT)
	{
		xI += 10;
	}
	else if (xI >= 990 && key == GLUT_KEY_RIGHT)
	{
		xI -= 10;
	}
	else if (yI >= 830 && key == GLUT_KEY_UP)
	{
		yI -= 10;
	}
	else if (yI <= 4 && key == GLUT_KEY_DOWN)
	{
		yI += 10;
	}
	}
	//For not moving cars in block bounderies
	if ((xI >= 450 && xI <= 969) && (yI >= 650 && yI <= 710))
	{
		check(key);
	}
	if ((xI >= 87 && xI <= 250) && (yI >= 590 && yI <= 650))
	{
		check(key);
	}


	if ((xI >= 745 && xI <= 816) && (yI >= 150 && yI <= 330))
	{
		check(key);
	}

	if ((xI >= 85 && xI <= 153) && (yI >= 420 && yI <= 480))
	{
		check(key);
	}
	if ((xI >= 135 && xI <= 204) && (yI >= 180 && yI <= 480))
	{
		check(key);
	}
	if ((xI >= 85 && xI <= 204) && (yI >= 180 && yI <= 300))
	{
		check(key);
	}
	if ((xI >= 235 && xI <= 306) && (yI >= 120 && yI <= 360))
	{
		check(key);
	}
	if ((xI >= 235 && xI <= 357) && (yI >= 420 && yI <= 480))
	{
		check(key);
	}
	if ((xI >= 337 && xI <= 408) && (yI >= 300 && yI <= 600))
	{
		check(key);
	}
	if ((xI >= 337 && xI <= 459) && (yI >= 360 && yI <= 420))
	{
		check(key);
	}
	if ((xI >= 337 && xI <= 459) && (yI >= 360 && yI <= 480))
	{
		check(key);
	}
	if ((xI >= 337 && xI <= 561) && (yI >= 240 && yI <= 300))
	{
		check(key);
	}

	if ((xI >= 541 && xI <= 612) && (yI >= 240 && yI <= 420))
	{
		check(key);
	}
	if ((xI >= 643 && xI <= 714) && (yI >= 300 && yI <= 480))
	{
		check(key);
	}
	if ((xI >= 643 && xI <= 816) && (yI >= 420 && yI <= 480))
	{
		check(key);
	}
	if ((xI >= 900 && xI <= 969) && (yI >= 168 && yI <= 360))
	{
		check(key);
	}
	if ((xI >= 439 && xI <= 510) && (yI >= 60 && yI <= 240))
	{
		check(key);
	}



	glutPostRedisplay();

}


void check(int key)
{


	if (key == GLUT_KEY_LEFT)
	{
		xI += 10;
	}
	else if (key == GLUT_KEY_RIGHT)
	{
		xI -= 10;
	}
	else if (key == GLUT_KEY_DOWN)
	{
		yI += 10;
	}
	else if (key == GLUT_KEY_UP)
	{
		yI -= 10;
	}
}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	if (key == 'b' || key == 'B') //Key for placing the bomb
	{
		//do something if b is pressed
		cout << "b pressed" << endl;

	}


	if (key == 'c') {
		bx = xI + 18;
		by = yI + 14;
		movebullet();
		PlaySound(TEXT("firetank.wav"), NULL, SND_SYNC);
		glutPostRedisplay();

	}
	if (key == 'm') {
		bx2 = x2 + 18;
		by2 = y2 + 14;
		movebullet2();
		PlaySound(TEXT("firetank.wav"), NULL, SND_SYNC);
		glutPostRedisplay();

	}
	if (key == 'a') {
		x2 -= 10;

	}
	else if (key == 'd') {

		x2 += 10;
	}
	else if (key == 's') {

		y2 -= 10;
	}
	else if (key == 'w') {
		y2 += 10;
	}
	glutPostRedisplay();
}



/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {


	// implement your functionality here
	//moveCar();

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(100, Timer, 10);
	/*movebullet();*/
	//movenpctank();

}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	//cout << x << " " << y << endl;
	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
	{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	}
	else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
	{
		cout << "Right Button Pressed" << endl;

	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
string enter;
int main(int argc, char* argv[]) {

	int width = 1020, height = 840; // i have set my window size to be 800 x 600
	cout << "\t\t\t\tAtari Combat by Ahmed shayan"<< endl;
	cout << endl<< endl << endl;
	cout << "\t\t\t\tAtari Combat by Ahmed shayan"<< endl;
	cout << endl << endl << endl;
	cout << "\t\t\t\ttype s to start the game"<<endl;
	cin >> enter;

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("By ahmed Shayan"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();

	return 1;
}
#endif /* RushHour_CPP_ */
