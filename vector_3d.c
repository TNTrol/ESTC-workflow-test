#include "vector_3d.h"

Vector3D sum(Vector3D *vector1, Vector3D *vector2)
{
    Vector3D vector = {.x = vector1->x + vector2->x, .y = vector1->y + vector2->y, .z = vector1->z + vector2->z};
    return vector;
}

Vector3D sub(Vector3D *vector1, Vector3D *vector2)
{
    Vector3D vector = {.x = vector1->x - vector2->x, .y = vector1->y - vector2->y, .z = vector1->z - vector2->z};
    return vector;
}

float dot(Vector3D *vector1, Vector3D *vector2)
{
    return (vector1->x) * (vector2->x) + (vector1->y) * (vector2->y) + (vector1->z) * (vector2->z);
}

Vector3D cross(Vector3D *vector1, Vector3D *vector2)
{
    float i = (vector1->y) * (vector2->z) - (vector1->z) * (vector2->y);
    float j = (vector1->x) * (vector2->z) - (vector1->z) * (vector2->x);
    float k = (vector1->x) * (vector2->y) - (vector1->y) * (vector2->z);
    Vector3D vector = {.x = i, .y = -j, .z = k};
    return vector;
}