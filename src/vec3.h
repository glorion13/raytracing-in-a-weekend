/* Vector3 class.

This is used for colors, components and other things that have the same structure.
*/
#ifndef VEC3_H
#define VEC3_H

class Vec3
{
public:
    float x() const { return components[0]; };
    float y() const { return components[1]; };
    float z() const { return components[2]; };

    Vec3() : components{0, 0, 0} {};
    Vec3(float x, float y, float z) : components{x, y, z} {};

public:
    Vec3 operator+=(const Vec3 &other) &
    {
        this->components[0] += other.x();
        this->components[1] += other.y();
        this->components[2] += other.z();
        return *this;
    };
    friend Vec3 operator+(Vec3 left_vec, const Vec3 &right_vec)
    {
        left_vec += right_vec;
        return left_vec;
    };

    Vec3 operator-=(const Vec3 &other) &
    {
        this->components[0] -= other.x();
        this->components[1] -= other.y();
        this->components[2] -= other.z();
        return *this;
    };
    friend Vec3 operator-(Vec3 left_vec, const Vec3 &right_vec)
    {
        left_vec -= right_vec;
        return left_vec;
    };

    Vec3 operator*=(const Vec3 &other) &
    {
        this->components[0] *= other.x();
        this->components[1] *= other.y();
        this->components[2] *= other.z();
        return *this;
    };
    friend Vec3 operator*(Vec3 left_vec, const Vec3 &right_vec)
    {
        left_vec *= right_vec;
        return left_vec;
    };

    Vec3 operator/=(const Vec3 &other) &
    {
        this->components[0] /= other.x();
        this->components[1] /= other.y();
        this->components[2] /= other.z();
        return *this;
    };
    friend Vec3 operator/(Vec3 left_vec, const Vec3 &right_vec)
    {
        left_vec /= right_vec;
        return left_vec;
    };

private:
    float components[3];
};

#endif