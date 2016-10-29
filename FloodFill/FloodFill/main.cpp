//
//  main.cpp
//  FloodFill
//
//  Created by 张行剑 on 2016/10/29.
//  Copyright © 2016年 Lukas_Zhang. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

#define PATH string("/Users/zhangxingjian/Desktop/Programming/C++/OpenCV/opencv_FooldFill/FloodFill/FloodFill/")

using namespace cv;
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Mat src = imread(PATH+string("1.jpg"),1);
    namedWindow("原始图");
    imshow("原始图", src);
    Rect ccomp;
    floodFill(src, Point(50,300), Scalar(155,255,55), &ccomp, Scalar(20,20,20), Scalar(20,20,20));
    imshow("原始图",  src);
    waitKey(0);
    
    
    return 0;
}
