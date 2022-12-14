#ifndef SPHERE_H
#define SPHERE_H
#include <glm/glm/gtx/transform.hpp>
#include <glm/glm/gtc/type_ptr.hpp>
#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>


class sphere
{
public:
    sphere(float radius = 1.0f);
    std::vector<glm::vec3>  getPositions();
    std::vector<unsigned int> getIndices();
    std::vector<glm::vec2> getCoord();
    std::vector<glm::vec3> getNormal();

protected:
    std::vector<glm::vec3>  positions;
    std::vector<unsigned int>  indices;
    std::vector<glm::vec3> norms;
    std::vector<glm::vec2> texcoords;
    float _radius;
};

#endif // SPHERE_H
