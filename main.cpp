#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;


// ==========================> reading images
// int main(){
// 	string path = "/home/rzamarefat/cpp-opencv/me_1.jpg";
// 	Mat img = imread(path);
	
// 	imshow("Image", img);
// 	waitKey(0);
// }

// ==========================> reading images
int main(){
	string path_to_video = "resources/film.mp4";
	VideoCapture cap(path_to_video);
	Mat img;

	while(true){
		img = cap.read(img);

		imshow("Video", img);

		waitKey(1);	
	}

	return 1;
}