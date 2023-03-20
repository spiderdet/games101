# include<cstdio>
# include"opencv2/opencv.hpp"

using namespace cv;

int main() {
    printf("Hello, Opencv4!\n");
    Mat image = imread("D:\\Programs\\games101\\rwar\\a.jpg"); // 读取图片

    Mat yuv;
    cvtColor(image, yuv, COLOR_BGR2GRAY);

    imwrite("gray.png", yuv);
    return 0;
}

