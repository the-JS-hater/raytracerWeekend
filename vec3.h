#include <cmath>
#include <ostream>

typedef struct vec3
{
    float x;
    float y;
    float z;
};

vec3 newVec(float x, float y, float z);
vec3 copyVec(vec3 vector);
void subtractVecs(vec3 vecA, vec3 vecB);
void addVecs(vec3 vecA, vec3 vecB);
void multiplyVec(vec3 vector, float n);
void multiplyVecs(vec3 vecA, vec3 vecB);
void divideVec(vec3 vector, float n);
void divideVecs(vec3 vecA, vec3 vecB);
float dotProduct(vec3 vecA, vec3 vecB);
vec3 crossProduct(vec3 vecA, vec3 vecB);
vec3 normalize(vec3 vector);
void writeVec3(std::ostream &out, vec3 vector);

vec3 newVec(float x, float y, float z){
    vec3 vector;
    vector.x = x;
    vector.y = y;
    vector.z = z;
    return vector;
}

vec3 copyVec(vec3 vector){
    return newVec(vector.x, vector.y, vector.z);
}

void subtractVecs(vec3 vecA, vec3 vecB){
    vecA.x -= vecB.x;
    vecA.y -= vecB.y;
    vecA.z -= vecB.z;
}

void addVecs(vec3 vecA, vec3 vecB){
    vecA.x += vecB.x;
    vecA.y += vecB.y;
    vecA.z += vecB.z;
}

void multiplyVec(vec3 vector, float n){
    vector.x *= n;
    vector.y *= n;
    vector.z *= n;
}

void multiplyVecs(vec3 vecA, vec3 vecB){
    vecA.x *= vecB.x;
    vecA.y *= vecB.y;
    vecA.z *= vecB.z;
}

void divideVec(vec3 vector, float n){
    vector.x /= n;
    vector.y /= n;
    vector.z /= n;
}

void divideVecs(vec3 vecA, vec3 vecB){
    vecA.x /= vecB.x;
    vecA.y /= vecB.y;
    vecA.z = vecB.z;
}

float dotProduct(vec3 vecA, vec3 vecB){
    return  vecA.x * vecB.x +
            vecA.y * vecB.y +
            vecA.z * vecB.z;
}

vec3 crossProduct(vec3 vecA, vec3 vecB) {
    return newVec(vecA.y * vecB.z - vecA.z * vecB.y,
                vecA.z * vecB.x - vecA.x * vecB.z,
                vecA.x * vecB.y - vecA.y * vecB.x);
}

vec3 normalize(vec3 vector) {
    float length = std::sqrt(vector.x * vector.x + vector.y * vector.y + vector.z * vector.z);
    vec3 newVec = copyVec(vector);
    divideVec(newVec, length);
    return newVec;
}

void writeVec3(std::ostream &out, vec3 vector) {
    out << vector.x << ' ' << vector.y << ' ' << vector.z;
}