#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(   )
{
    VideoCapture capCamera(0);
    if(!capCamera.isOpened())
    {
        cout<<"can't open this camera"<<endl;
        return -1;
    }
    capCamera.set(CAP_PROP_FRAME_WIDTH, 320);
    capCamera.set(CAP_PROP_FRAME_HEIGHT, 240);

    Mat FrameCamera,FrameVideo;

    int flipCode = -1;

    int time = 0;
    while(1)
    {    
        capCamera>>FrameCamera;
        flip(FrameCamera,FrameCamera,flipCode);
        imshow("camera",FrameCamera);
	imwrite("/home/pi/Desktop/img.jpg",FrameCamera);
	time++;
	if(time == 10)break;
        if(char(waitKey(1)) == 'q')
        {
            break;
        }
    }
    capCamera.release();
    destroyAllWindows();	
	return 0;
}
