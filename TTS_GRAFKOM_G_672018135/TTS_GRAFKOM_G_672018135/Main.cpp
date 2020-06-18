#include <iostream>
#include <GL/freeglut.h>

int x = 0;
int y = 0;

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	for (int i = 0; i <= 5; i++) {
		x = 0;
		for (int r = 0; r <= 5; r++) {

			glColor3f(0, 0, 0);
			glBegin(GL_QUADS);
			glVertex2f(5 + x, 75 + y); //kiri bawah
			glVertex2f(5 + x, 5 + y);//titik kiri atas
			glVertex2f(75 + x, 5 + y);//kanan bawah
			glVertex2f(75 + x, 75 + y);//kanan atas
			glEnd();

			glPointSize(70);
			glBegin(GL_POINTS);
			glColor3f(1, 1, 1);
			glVertex2f(110 + x, 40 + y);
			glEnd();

			glPointSize(70);
			glBegin(GL_POINTS);
			glColor3f(1, 1, 1);
			glVertex2f(40 + x, 110 + y);
			glEnd();

			glColor3f(0, 0, 0);
			glBegin(GL_POLYGON);
			glVertex2f(75 + x, 145 + y); //kiri bawah
			glVertex2f(75 + x, 75 + y);//titik kiri atas
			glVertex2f(145 + x, 75 + y);//kanan bawah
			glVertex2f(145 + x, 145 + y);//kanan atas
			glEnd();

			x += 145;
		}
		y += 143;
	}
	glutSwapBuffers();
}

void myinit() {
	glClearColor(1.0, 0.5, 0.0, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 500, 500, 00);// left,right,bottom,top
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Made By 672018135");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();
	return 0;
}
