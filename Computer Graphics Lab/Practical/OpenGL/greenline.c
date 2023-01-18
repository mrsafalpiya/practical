#include <stdio.h>
#include <GL/glut.h>

// Constants
// ---------

#define WIN_WIDTH  800
#define WIN_HEIGHT 600

// Function Declarations
// ---------------------

/* OpenGL */

void
init(int *argc, char **argv);

void
draw(void);

// Function Implementations
// ------------------------

/* OpenGL */

void
init(int *argc, char **argv)
{
	// Glut
	glutInit(argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(WIN_WIDTH, WIN_HEIGHT);
	glutCreateWindow("OpenGL");

	// GL
	glClearColor(1.0, 1.0, 1.0, 1.0);
}

void
draw(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0.0, 1.0, 0.0);

	// Line
	glLineWidth(3);
	glBegin(GL_LINES);
	{
		glVertex2f(-0.5, -0.4);
		glVertex2f(0.1, 0.1);
	}
	glEnd();

	glFinish();
}

int
main(int argc, char **argv)
{
	// OpenGL Initialization
	init(&argc, argv);

	// Callbacks
	glutDisplayFunc(draw); // display callback called when window is redrawn

	// Loop
	glutMainLoop();

	// Exit
	return 0;
}
