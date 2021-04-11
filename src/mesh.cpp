
#include "mesh.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include <cmath>
#include <iostream>

using namespace std;
using namespace glm;
using namespace agl;

Mesh::Mesh() 
{
}

Mesh::~Mesh()
{
}

bool Mesh::loadPLY(const std::string& filename)
{
   return true;
}

glm::vec3 Mesh::getMinBounds() const
{
  return vec3(0);
}

glm::vec3 Mesh::getMaxBounds() const
{
  return vec3(0);
}

int Mesh::numVertices() const
{
   return 0;
}

int Mesh::numTriangles() const
{
   return 0;
}

float* Mesh::positions() const
{
   return NULL;
}

float* Mesh::normals() const
{
   return NULL;
}

unsigned int* Mesh::indices() const
{
   return NULL;
}

