// hw0.cpp: 定义应用程序的入口点。
//

#include "hw0.h"
#include <opencv2/opencv.hpp>
#include<Eigen/Core>
#include<Eigen/Geometry>
#pragma comment(lib,"opencv_world460d.lib")

using namespace std;
using namespace cv;

int main() {
    Eigen::Matrix3d rotation_matrix = Eigen::Matrix3d::Identity();
    // 旋转向量使用 AngleAxis, 它底层不直接是Matrix，但运算可以当作矩阵（因为重载了运算符）
    Eigen::AngleAxisd rotation_vector(3.1415926 / 4, Eigen::Vector3d(0, 0, 1));     //沿 Z 轴旋转 45 度
    cout.precision(3);
    cout << "rotation matrix =\n" << rotation_vector.matrix() << endl;

    Mat image = imread("D:\\Programs\\games101\\rwar\\a.jpg"); //替换这里的图片路径
    Mat yuv;
    cvtColor(image, yuv, COLOR_BGR2GRAY);
    imwrite("D:\\Programs\\games101\\rwar\\a_gray.jpg", yuv);
}