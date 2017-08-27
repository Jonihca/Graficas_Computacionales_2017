#include <iostream>
#include <GL/glew.h>
#include <vector>
#include <glm/glm.hpp>
#include <GL/freeglut.h>

GLuint vao;

void Initialize()
{
	std::vector<glm::vec2> positions;
	positions.push_back(glm::vec2(0.5f, -0.5f));
	positions.push_back(glm::vec2(0.5f, 0.5f));
	positions.push_back(glm::vec2(-0.5f, -0.5f));
	positions.push_back(glm::vec2(-0.5f, 0.5f));

	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	GLuint positionsVBO;
	glGenBuffers(1, &positionsVBO);
	glBindBuffer(GL_ARRAY_BUFFER, positionsVBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(glm::vec2) * positions.size(), positions.data(), GL_STATIC_DRAW);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, nullptr);
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	glBindVertexArray(0);
}

void GameLoop()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBindVertexArray(vao);
	glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
	glBindVertexArray(0);

	glutSwapBuffers();
}

int main(int argc, char* argv[])
{
	
	glutInit(&argc, argv);
	glutInitContextProfile(GLUT_CORE_PROFILE);
	glutSetOption(GLUT_ACTION_ON_WINDOW_CLOSE, GLUT_ACTION_GLUTMAINLOOP_RETURNS);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);

	glutInitWindowSize(400, 400);
	glutCreateWindow("Hello World GL");

	glutDisplayFunc(GameLoop);

	glewInit();

	glClearColor(1.0f, 1.0f, 0.5f, 1.0f);

	std::cout << glGetString(GL_VERSION) << std::endl;

	Initialize();

	glutMainLoop();

	return 0;
}
