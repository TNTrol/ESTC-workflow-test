#include <stdio.h>
#include "vector/vector_3d.h"

int main()
{
    Vector3D vector1;
    Vector3D vector2;

    printf("Write x, y, z first vector\n");
    scanf("%f %f %f", &vector1.x, &vector1.y, &vector1.z);
    printf("Write x, y, z second vector\n");
    scanf("%f %f %f", &vector2.x, &vector2.y, &vector2.z);

    Vector3D sum_vector = sum(&vector1, &vector2);
    Vector3D sub_vector = sub(&vector1, &vector2);
    float dot_vector = dot(&vector1, &vector2);
    Vector3D cross_vector = cross(&vector1, &vector2);

    printf("Output...\n");
    printf("Sum vector = (%.2f, %.2f, %.2f)\n", sum_vector.x, sum_vector.y, sum_vector.z);
    printf("Sub vector = (%.2f, %.2f, %.2f)\n", sub_vector.x, sub_vector.y, sub_vector.z);
    printf("Dot vector = %.2f\n", dot_vector);
    printf("Cross vector = (%.2f, %.2f, %.2f)\n", cross_vector.x, cross_vector.y, cross_vector.z);
    
    return 0;
}