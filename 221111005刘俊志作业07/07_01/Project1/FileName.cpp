#include <opencv2/opencv.hpp>

int main() {
    // (1) ���ز���ʾһ��ͼ��
    cv::Mat image = cv::imread("image.jpg");
    cv::imshow("Image", image);
    cv::waitKey(0);

    // (2) ����һ����Ƶ
    cv::VideoCapture video("video.mp4");
    cv::Mat frame;
    while (true) {
        video >> frame;
        if (frame.empty()) {
            break;
        }
        cv::imshow("Video", frame);
        if (cv::waitKey(30) == 27) {
            break;
        }
    }

    // (3) �������������ͷ������Ƶ
    cv::VideoCapture camera(0);
    while (true) {
        camera >> frame;
        cv::imshow("Camera", frame);
        if (cv::waitKey(30) == 27) {
            break;
        }
    }

    return 0;
}