#include <opencv2/opencv.hpp>

int main() 
{
    // ����ͼ��
    cv::Mat image = cv::imread("image.jpg", cv::IMREAD_COLOR);

    // ���ͼ���Ե
    cv::Mat edges;
    cv::Canny(image, edges, 100, 200);

    // �������Ͳ���
    cv::Mat dilated;
    cv::dilate(edges, dilated, cv::Mat());

    // ������ʴ����
    cv::Mat eroded;
    cv::erode(dilated, eroded, cv::Mat());

    // �ı�ͼ���С������Ϊ50%
    cv::Mat resized;
    cv::resize(image, resized, cv::Size(), 0.5, 0.5);

    // ��ʾԭʼͼ��ʹ�����ͼ��
    cv::imshow("Original Image", image);
    cv::imshow("Processed Image", eroded);
    cv::waitKey(0);

    return 0;
}