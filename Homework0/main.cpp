#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

int main(){

    Eigen::Vector3f p(2.0f, 1.0f, 1.0f);
    float rad45 = 45.0f / 180.0f * acos(-1);
    float cos45 = cos(rad45);
    float sin45 = sin(rad45);
    Eigen::Matrix3f rot;
    rot << cos45, -sin45, 1.0f, sin45, cos45, 2.0f, 0, 0, 1.0f;
    Eigen::Vector3f ret = rot * p;
    std::cout << ret << std::endl;

    return 0;
}