
#ifndef VECTOR_3D
#define VECTOR_3D

struct vector3d_t
{
    float x;
    float y;
    float z;
};

typedef struct vector3d_t Vector3D;

Vector3D sum(Vector3D *vector1, Vector3D *vector2);
Vector3D sub(Vector3D *vector1, Vector3D *vector2);
float dot(Vector3D *vector1, Vector3D *vector2);
Vector3D cross(Vector3D *vector1, Vector3D *vector2);

#endif