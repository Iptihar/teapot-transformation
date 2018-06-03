#pragma once
#include "shader.h"
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
#include <stdlib.h>
#include <string.h>
#include <GL/glew.h>

class shader
{
public:
	shader();
	GLuint LoadShaders(const char * vertex_file, const char * fragment_file);
	~shader();
};

