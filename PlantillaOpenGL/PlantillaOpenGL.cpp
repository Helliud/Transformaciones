#include "pch.h"
#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>
#include <math.h>

using namespace std;


void dibujarPuntos() {
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex3f(0.1, 0.1, 0);
	glColor3f(1, 1, 1);
	glVertex3f(0.2, 0.2, 0);
	glEnd();
}

void dibujarTriangulos(){
	glBegin(GL_TRIANGLES);
	glColor3f(1, 1, 0);
	glVertex3f(0, .5, 0);
	glVertex3f(-.5, -.5, 0);
	glVertex3f(.5, -.5, 0);

	glColor3f(0, 0, 0);
	glVertex3f(-.25, 0, 0);
	glVertex3f(0, -.5, 0);
	glVertex3f(.25, 0, 0);

	glEnd();
}

void dibujarLineas() {
	glBegin(GL_LINES);
	glColor3f(1, 1, 1);
	glVertex3f(-0.5, 0.8, 0);
	glVertex3f(-0.5, 0, 0);

	glVertex3f(0.5, 0.8, 0);
	glVertex3f(0.5, 0, 0);
	glVertex3f(0.6, 0.8, 0);
	glVertex3f(0.6, 0, 0);

	glVertex3f(-0.5, -0.7, 0);
	glVertex3f(-0.5, -0.1, 0);
	glVertex3f(-0.4, -0.7, 0);
	glVertex3f(-0.4, -0.1, 0);


	glVertex3f(0.5, -0.7, 0);
	glVertex3f(0.5, -0.1, 0);
	glVertex3f(0.6, -0.7, 0);
	glVertex3f(0.8, -0.7, 0);
	glEnd();
}

void dibujarLineaContinua() {
	glBegin(GL_LINE_STRIP);
		glColor3f(1, 1, 1);
		glVertex3f(0.5, 0, 0);
		glVertex3f(0.5, 0.5, 0);
		glVertex3f(-0.5, 0.5, 0);
		glVertex3f(0.5, -0.5, 0);
		glVertex3f(0.5, 0.5, 0);

		glEnd();
}

void dibujarTrianguloContinuo() {
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1, 1, 0);
	glVertex3f(0, .5, 0);
	glVertex3f(-.5, -.5, 0);
	glVertex3f(.5, -.5, 0);

	glColor3f(0, 0, 0);
	glVertex3f(-.25, 0, 0);
	glVertex3f(0, -.5, 0);
	glVertex3f(.25, 0, 0);

	glEnd();
}

void dibujarPoligono() {
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(0.5, 0.5, 0);
	glVertex3f(-0.25, -0.8, 0);
	glVertex3f(-0.2, 0.6, 0);
	glVertex3f(-0.67, -0.5, 0);
	glVertex3f(-0.85, 0.9, 0);
	glEnd();
}

void dibujarCasa() {

	//Cielo
	glBegin(GL_QUADS);
	glColor3f(1, .5, 0);
	glVertex3f(1, -1, 0);
	glColor3f(0.36, 0.67, 1);
	glVertex3f(1, 1, 0);
	glColor3f(0.36, 0.67, 1);
	glVertex3f(-1, 1, 0);
	glColor3f(1, .5, 0);
	glVertex3f(-1, -1, 0);
	glEnd();

	//Tronco
	glBegin(GL_POLYGON);
	glColor3f(0.54, 0.34, 0);
	glVertex3f(-0.83, -0.3, 0);
	glVertex3f(-0.63, -0.3, 0);
	glVertex3f(-0.57, -0.5, 0);
	glVertex3f(-0.88, -0.5, 0);
	glVertex3f(-0.83, -0.3, 0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.54, 0.34, 0);
	glVertex3f(-0.83, -0.3, 0);
	glVertex3f(-0.63, -0.3, 0);
	glVertex3f(-0.63, 0.1, 0);
	glVertex3f(-0.83, 0.1, 0);
	glVertex3f(-0.83, -0.3, 0);
	glEnd();


	//Hojas arbol
	glBegin(GL_POLYGON);
	glColor3f(0, 0.6, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.15*cos((double)i*3.14159 / 180.0) - 0.74, 0.15*sin((double)i*3.14159 / 180.0) + .17, 0);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0.6, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.15*cos((double)i*3.14159 / 180.0) - 0.8, 0.15*sin((double)i*3.14159 / 180.0) + .07, 0);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0.6, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.15*cos((double)i*3.14159 / 180.0) - 0.68, 0.15*sin((double)i*3.14159 / 180.0) + .07, 0);
	}
	glEnd();


	//Sol
	glBegin(GL_POLYGON);
	glColor3f(1, 0.6, 0.2);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.14 *cos((double)i*3.14159 / 180.0), 0.16*sin((double)i*3.14159 / 180.0) - .48, 0);
	}
	glEnd();


	//Nube1
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.2*cos((double)i*3.14159 / 180.0), 0.15*sin((double)i*3.14159 / 180.0) + .7, 0);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.2*cos((double)i*3.14159 / 180.0) - 0.2, 0.15*sin((double)i*3.14159 / 180.0) + .7, 0);
	}
	glEnd();


	//Nube2
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1*cos((double)i*3.14159 / 180.0) + 0.7, 0.1*sin((double)i*3.14159 / 180.0) + .7, 0);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1*cos((double)i*3.14159 / 180.0) + 0.8, 0.1*sin((double)i*3.14159 / 180.0) + .7, 0);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1*cos((double)i*3.14159 / 180.0) + 0.9, 0.1*sin((double)i*3.14159 / 180.0) + .7, 0);
	}
	glEnd();


	//Nube3
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1*cos((double)i*3.14159 / 180.0) - 0.8, 0.1 *sin((double)i*3.14159 / 180.0) + .8, 0);
	}
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.09*cos((double)i*3.14159 / 180.0) - 0.9, 0.09 *sin((double)i*3.14159 / 180.0) + .8, 0);
	}
	glEnd();


	//Pasto
	glBegin(GL_QUADS);
	glColor3f(0.26, 0.69, 0.23);
	glVertex3f(1, -1, 0);
	glColor3f(0.34, 0.87, 0.30);
	glVertex3f(1, -.5, 0);
	glColor3f(0.34, 0.87, 0.30);
	glVertex3f(-1, -.5, 0);
	glColor3f(0.26, 0.69, 0.23);
	glVertex3f(-1, -1, 0);
	glEnd();	


	//Estrucura de Casa
	glBegin(GL_QUADS);
	glColor3f(0.83, 0.84, 0.86);
	glVertex3f(0.7, -0.5, 0);
	glVertex3f(0.7, 0.2, 0);
	glVertex3f(0.3, 0.2, 0);
	glVertex3f(0.3, -0.5, 0);
	glEnd();


	//Ventana derecha casa
	glBegin(GL_QUADS);
	glColor3f(0.47, 0.87, 1);
	glVertex3f(0.47, -0.09, 0);
	glVertex3f(0.47, 0.09, 0);
	glVertex3f(0.35, 0.09, 0);
	glVertex3f(0.35, -0.09, 0);
	glEnd();


	//Ventana izquierda casa
	glBegin(GL_QUADS);
	glColor3f(0.47, 0.87, 1);
	glVertex3f(0.65, -0.09, 0);
	glVertex3f(0.65, 0.09, 0);
	glVertex3f(0.53, 0.09, 0);
	glVertex3f(0.53, -0.09, 0);
	glEnd();


	//Puerta casa
	glBegin(GL_QUADS);
	glColor3f(0.56, 0.24, 0);
	glVertex3f(0.55, -0.5, 0);
	glVertex3f(0.55, -0.3, 0);
	glVertex3f(0.45, -0.3, 0);
	glVertex3f(0.45, -0.5, 0);
	glEnd();


	//Techo
	glBegin(GL_TRIANGLES);
	glColor3f(1, 0, 0);
	glVertex3f(0.75, 0.2, 0);
	glVertex3f(0.25, 0.2, 0);
	glVertex3f(0.49, 0.5, 0);
	glEnd();
}


float posicionXTriangulo = 0.0;
float posicionYTriangulo = 0.0;
float angulo = 0.0;

enum Direccion {Izquierda, Derecha, Arriba, Abajo};
Direccion direccionTriangulo = Direccion::Izquierda;
Direccion direccionTriangulo2 = Direccion::Arriba;

void dibujarTriangulo3D() {
	//Utilizar la matriz identidad
	glPushMatrix();
	//Transformaciones
	glTranslatef(posicionXTriangulo, posicionYTriangulo, 0.0);
	glScalef(0.2, 0.2, 0.2);
	glRotatef(angulo, 0, 1, 0);
	//Dibujar los verticesd
	glBegin(GL_TRIANGLES);
	glColor3f(1, 1, 0);
	glVertex3f(0, .5, 0);
	glVertex3f(-.5, -.5, 0);
	glVertex3f(.5, -.5, 0);

	glColor3f(0, 0, 0);
	glVertex3f(-.25, 0, 0);
	glVertex3f(0, -.5, 0);
	glVertex3f(.25, 0, 0);

	glEnd();
	//Soltar la matrix
	glPopMatrix();
}

void dibujar() {
	//dibujarTriangulos();
	//dibujarPuntos();
	//dibujarLineas();
	//dibujarLineaContinua();
	//dibujarTrianguloContinuo();
	//dibujarPoligono();
	//dibujarCasa();
	dibujarTriangulo3D();
}

void actualizar(){

	if (angulo >= 360) {
		angulo += 0.0;
	}
	angulo += 0.7;

	if (direccionTriangulo == Direccion::Izquierda) {
		if (posicionXTriangulo > -0.89) {
			posicionXTriangulo -= 0.001;
		}

		else {
			direccionTriangulo = Direccion::Derecha;
		}
	}

	
	if (direccionTriangulo == Direccion::Derecha) {
		if (posicionXTriangulo < 0.89) {
			posicionXTriangulo += 0.001;
		}

		else {
			direccionTriangulo = Direccion::Izquierda;
		}
	}

	if (direccionTriangulo2 == Direccion::Arriba) {
		if (posicionYTriangulo < 0.8) {
			posicionYTriangulo += 0.001;
		}

		else {
			direccionTriangulo2 = Direccion::Abajo;
		}
	}

	if (direccionTriangulo2 == Direccion::Abajo) {
		if (posicionYTriangulo > -0.85) {
			posicionYTriangulo -= 0.001;
		}

		else {
			direccionTriangulo2 = Direccion::Arriba;
		}
	}

}

int main()
{
	//Declaramos
	GLFWwindow * window;
	// Si no se pudo iniciar GLFW terminamos la ejecucion
	if (!glfwInit()) { exit(EXIT_FAILURE); } // Si se pudo iniciar GLFW entonces inicializamos la ventana
	
	window = glfwCreateWindow(1024, 768, "Ventana", NULL, NULL);

	//SI no pudimos iniciar la ventana, entonces terminamos la ejecucion
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Establecemos el contexto
	glfwMakeContextCurrent(window);

	//Una vez establecido el contexto, activamos funciones modernas
	glewExperimental = true;
	GLenum errorGlew = glewInit();
	if (errorGlew != GLEW_OK) {
		cout << glewGetErrorString(errorGlew);
	}

	const GLubyte *versionGL = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << versionGL;
	cout << "\n Hecho por Javier Eliud \n Matricula: 169171";

	//ciclo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window)) {
		//Establecer region de dibujo
		glViewport(0, 0, 1020, 768);
		//Establece el color de borrado
		glClearColor(0, 0, 0, 0);
		//Clear
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo
		actualizar();
		dibujar();
		
		//Cambiar los buffer
		glfwSwapBuffers(window);
		//Reconocer si hay entradas
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}