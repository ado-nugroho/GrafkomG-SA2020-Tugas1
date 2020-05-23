
#include <iostream>
#include <GL/glut.h>
//#include <GL/freeglut.h>

void Benda() {
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);

	//Rumah
	glColor3ub(255, 240, 245);
	glBegin(GL_POLYGON);

	glVertex2f(100, 140);
	glVertex2f(100, 240);
	glVertex2f(275, 240);
	glVertex2f(275, 140);
	glVertex2f(187.5, 90);

	glEnd();
	//TONG AIR 
	glColor3ub(0, 0, 255);
	glBegin(GL_POLYGON);

	glVertex2f(280, 210);
	glVertex2f(286, 240);
	glVertex2f(300, 240);
	glVertex2f(306, 210);

	glEnd();

	glColor3ub(255, 155, 0);
	glBegin(GL_POLYGON);

	glVertex2f(278, 210);
	glVertex2f(308, 210);
	glVertex2f(308, 208);
	glVertex2f(278, 208);

	glEnd();

	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);

	glVertex2f(288, 208);
	glVertex2f(298, 208);
	glVertex2f(298, 206);
	glVertex2f(288, 206);

	glEnd();
	//Menara Pengawas
	glColor3ub(255, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(330, 100);
	glVertex2f(410, 100);
	glVertex2f(370, 80);
	glEnd();
	glColor3ub(255, 255, 255);
	glBegin(GL_LINE_STRIP);
	glLineWidth(10.0f);
	glVertex2f(340, 240);
	glVertex2f(340, 100);
	glVertex2f(400, 100);
	glVertex2f(400, 240);
	glEnd();

	glColor3ub(255, 0, 0);
	glPointSize(4);
	glBegin(GL_POINTS);
	glVertex2f(335, 230);
	glVertex2f(335, 220);
	glVertex2f(335, 210);
	glVertex2f(335, 200);
	glVertex2f(335, 190);
	glVertex2f(335, 180);

	glEnd();

	glColor3ub(255, 255, 255);
	glBegin(GL_LINE_STRIP);
	glVertex2f(340, 240);
	glVertex2f(400, 170);
	glVertex2f(340, 170);
	glVertex2f(400, 240);

	glEnd();

	glColor3ub(0, 255, 0);
	glBegin(GL_POLYGON);
	glVertex2f(340, 135);
	glVertex2f(340, 170);
	glVertex2f(400, 170);
	glVertex2f(400, 135);

	glEnd();

	//Menara Tanki Air
	glColor3ub(255, 155, 0);
	glBegin(GL_POLYGON);
	glVertex2f(445, 100);
	glVertex2f(495, 100);
	glVertex2f(495, 30);
	glVertex2f(490, 25);
	glVertex2f(450, 25);
	glVertex2f(445, 30);
	glEnd();

	glColor3ub(255, 255, 255);
	glBegin(GL_LINE_STRIP);
	glLineWidth(10.0f);
	glVertex2f(440, 240);
	glVertex2f(440, 100);
	glVertex2f(500, 100);
	glVertex2f(500, 240);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(440, 240);
	glVertex2f(500, 170);
	glVertex2f(440, 170);
	glVertex2f(500, 240);

	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(440, 170);
	glVertex2f(500, 100);
	glVertex2f(440, 100);
	glVertex2f(500, 170);

	glEnd();
	//Cerobong Asap

	glColor3ub(240, 255, 240);
	glBegin(GL_POLYGON);

	glVertex2f(235, 80);
	glVertex2f(235, 114);
	glVertex2f(260, 128);
	glVertex2f(260, 80);

	glEnd();


	//Cerobong Asap Garis

	glColor3ub(0, 0, 0);
	glLineWidth(2);
	glBegin(GL_LINE_LOOP);

	glVertex2f(235, 80);
	glVertex2f(235, 114);
	glVertex2f(260, 128);
	glVertex2f(260, 80);

	glEnd();

	//Pintu
	glColor3ub(222, 184, 135);
	glBegin(GL_POLYGON);

	glVertex2f(120, 190);
	glVertex2f(120, 240);
	glVertex2f(160, 240);
	glVertex2f(160, 190);

	glEnd();

	//Atap Rumah

	glColor3ub(169, 169, 169);
	glBegin(GL_POLYGON);

	glVertex2f(187.5, 90);
	glVertex2f(65, 162);
	glVertex2f(60, 152);
	glVertex2f(187.5, 75);
	glVertex2f(320, 153);
	glVertex2f(315, 163);

	glEnd();


	//Atap Rumah Garis

	glColor3ub(0, 0, 0);
	glLineWidth(3);
	glBegin(GL_LINE_LOOP);

	glVertex2f(187.5, 90);
	glVertex2f(65, 162);
	glVertex2f(60, 152);
	glVertex2f(187.5, 75);
	glVertex2f(320, 153);
	glVertex2f(315, 163);

	glEnd();

	//Pintu Garis
	glColor3ub(160, 82, 45);
	glLineWidth(2);
	glBegin(GL_LINE_LOOP);

	glVertex2f(125, 194);
	glVertex2f(125, 212.5);
	glVertex2f(155, 212.5);
	glVertex2f(155, 194);

	glEnd();

	//Pintu Garis
	glColor3ub(160, 82, 45);
	glLineWidth(2);
	glBegin(GL_LINE_LOOP);

	glVertex2f(125, 220);
	glVertex2f(125, 238);
	glVertex2f(155, 238);
	glVertex2f(155, 220);

	glEnd();

	//Jendela
	glColor3ub(176, 196, 222);
	glLineWidth(2);
	glBegin(GL_POLYGON);

	glVertex2f(200, 190);
	glVertex2f(200, 217.5);
	glVertex2f(235, 217.5);
	glVertex2f(235, 190);

	glEnd();

	//Jendela
	glColor3ub(139, 69, 19);
	glLineWidth(2);
	glBegin(GL_LINE_LOOP);

	glVertex2f(200, 190);
	glVertex2f(200, 217.5);
	glVertex2f(235, 217.5);
	glVertex2f(235, 190);

	glEnd();

	//Jendela Garis
	glColor3ub(139, 69, 19);
	glLineWidth(2);
	glBegin(GL_LINES);

	glVertex2f(218, 190);
	glVertex2f(218, 217);

	glEnd();

	//Jendela Garis
	glColor3ub(139, 69, 19);
	glLineWidth(2);
	glBegin(GL_LINES);

	glVertex2f(200, 204.5);
	glVertex2f(235, 204.5);

	glEnd();

	//Jalan Raya
	glColor3ub(105, 105, 105);
	glLineWidth(2);
	glBegin(GL_POLYGON);

	glVertex2f(0, 300);
	glVertex2f(0, 400);
	glVertex2f(640, 400);
	glVertex2f(640, 300);

	glEnd();

	//PAGAR AYU


	glColor3ub(255, 255, 255);
	glBegin(GL_LINE_LOOP);
	glVertex2f(22, 260);
	glVertex2f(22, 290);
	glVertex2f(128, 290);
	glVertex2f(128, 260);
	glEnd();

	glColor3ub(255, 255, 255);
	glBegin(GL_LINE_LOOP);
	glVertex2f(202, 260);
	glVertex2f(202, 290);
	glVertex2f(308, 290);
	glVertex2f(308, 260);
	glEnd();
	glColor3ub(150, 7, 0);
	glBegin(GL_POLYGON);
	glVertex2f(20, 250);
	glVertex2f(20, 300);
	glVertex2f(30, 300);
	glVertex2f(30, 250);
	glVertex2f(28, 248);
	glVertex2f(22, 248);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(40, 250);
	glVertex2f(40, 300);
	glVertex2f(50, 300);
	glVertex2f(50, 250);
	glVertex2f(48, 248);
	glVertex2f(42, 248);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(60, 250);
	glVertex2f(60, 300);
	glVertex2f(70, 300);
	glVertex2f(70, 250);
	glVertex2f(68, 248);
	glVertex2f(62, 248);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(80, 250);
	glVertex2f(80, 300);
	glVertex2f(90, 300);
	glVertex2f(90, 250);
	glVertex2f(88, 248);
	glVertex2f(82, 248);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(100, 250);
	glVertex2f(100, 300);
	glVertex2f(110, 300);
	glVertex2f(110, 250);
	glVertex2f(108, 248);
	glVertex2f(102, 248);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(120, 250);
	glVertex2f(120, 300);
	glVertex2f(130, 300);
	glVertex2f(130, 250);
	glVertex2f(128, 248);
	glVertex2f(122, 248);
	glEnd();
	//PAGAR BAGUS
	glBegin(GL_POLYGON);
	glVertex2f(200, 250);
	glVertex2f(200, 300);
	glVertex2f(210, 300);
	glVertex2f(210, 250);
	glVertex2f(208, 248);
	glVertex2f(202, 248);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(220, 250);
	glVertex2f(220, 300);
	glVertex2f(230, 300);
	glVertex2f(230, 250);
	glVertex2f(228, 248);
	glVertex2f(222, 248);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(240, 250);
	glVertex2f(240, 300);
	glVertex2f(250, 300);
	glVertex2f(250, 250);
	glVertex2f(248, 248);
	glVertex2f(242, 248);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(260, 250);
	glVertex2f(260, 300);
	glVertex2f(270, 300);
	glVertex2f(270, 250);
	glVertex2f(268, 248);
	glVertex2f(262, 248);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(280, 250);
	glVertex2f(280, 300);
	glVertex2f(290, 300);
	glVertex2f(290, 250);
	glVertex2f(288, 248);
	glVertex2f(282, 248);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(300, 250);
	glVertex2f(300, 300);
	glVertex2f(310, 300);
	glVertex2f(310, 250);
	glVertex2f(308, 248);
	glVertex2f(302, 248);
	glEnd();


	//Strip Putih jalan Raya
	glColor3ub(255, 254, 254);
	glLineWidth(2);
	glBegin(GL_POLYGON);

	glVertex2f(0, 345);
	glVertex2f(0, 355);
	glVertex2f(100, 355);
	glVertex2f(100, 345);

	glEnd();

	glColor3ub(255, 254, 254);
	glLineWidth(2);
	glBegin(GL_POLYGON);

	glVertex2f(120, 345);
	glVertex2f(120, 355);
	glVertex2f(220, 355);
	glVertex2f(220, 345);

	glEnd();

	glColor3ub(255, 254, 254);
	glLineWidth(2);
	glBegin(GL_POLYGON);

	glVertex2f(240, 345);
	glVertex2f(240, 355);
	glVertex2f(340, 355);
	glVertex2f(340, 345);

	glEnd();

	glColor3ub(255, 254, 254);
	glLineWidth(2);
	glBegin(GL_POLYGON);

	glVertex2f(360, 345);
	glVertex2f(360, 355);
	glVertex2f(460, 355);
	glVertex2f(460, 345);

	glEnd();

	glColor3ub(255, 254, 254);
	glLineWidth(2);
	glBegin(GL_POLYGON);

	glVertex2f(480, 345);
	glVertex2f(480, 355);
	glVertex2f(600, 355);
	glVertex2f(600, 345);

	glEnd();

	//Lampu Lalu Lintas
	glColor3ub(255, 254, 254);
	glLineWidth(2);
	glBegin(GL_POLYGON);

	glVertex2f(580, 270);
	glVertex2f(580, 290);
	glVertex2f(600, 290);
	glVertex2f(600, 270);

	glEnd();

	glColor3ub(255, 254, 254);
	glLineWidth(2);
	glBegin(GL_LINES);

	glVertex2f(590, 280);
	glVertex2f(590, 200);

	glEnd();

	glColor3ub(255, 254, 254);
	glBegin(GL_POLYGON);

	glVertex2f(580, 160);
	glVertex2f(580, 200);
	glVertex2f(600, 200);
	glVertex2f(600, 160);

	glEnd();

	glColor3ub(255, 0, 0);
	glBegin(GL_POLYGON);

	glVertex2f(582, 162);
	glVertex2f(582, 172);
	glVertex2f(598, 172);
	glVertex2f(598, 162);

	glEnd();

	glColor3ub(255, 140, 0);
	glBegin(GL_POLYGON);

	glVertex2f(582, 174);
	glVertex2f(582, 184);
	glVertex2f(598, 184);
	glVertex2f(598, 174);

	glEnd();

	glColor3ub(0, 255, 0);
	glBegin(GL_POLYGON);

	glVertex2f(582, 186);
	glVertex2f(582, 196);
	glVertex2f(598, 196);
	glVertex2f(598, 186);

	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutCreateWindow("TUGAS SULIT VERSI GAMPANG");
	glutDisplayFunc(Benda);
	gluOrtho2D(0, 640, 480, 0);

	glutMainLoop();
}
