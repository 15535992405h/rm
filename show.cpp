#include<opencv2/opencv.hpp>

int main()
{
    auto img =cv::imread("armor.jpg");/*du qu tu pian*/
    cv::imshow("img",img);/*xian shi tu pian*/
    cv::waitKey(0);/*yi zhi xian shi tu pian zhi dao ni an ren yi jian*/
    return 0;
}
