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

//  return 1;
// }

// ==========================> reading video
// int main(){
// 	string path_to_video = "./resources/film.mp4";
// 	VideoCapture cap(path_to_video);
// 	Mat img;

// 	while(true){
// 		cap.read(img);
// 		imshow("Video", img);
// 		waitKey(1);	
// 	}

// 	return 1;
// }



// ==========================> webcam
// int main(){
	
// 	VideoCapture cap(0);
// 	Mat img;

// 	while(true){
// 		cap.read(img);
// 		imshow("Video", img);
// 		waitKey(1);	
// 	}

// 	return 1;
// }


// ==========================> image basic pre-processing
int main(){
	string path = "/home/rzamarefat/cpp-opencv/resources/brad.jpeg";

	Mat img = imread(path);
	

	// ===> Grayscale
	// Mat garyImage;
	// cvtColor(img, garyImage, COLOR_BGR2GRAY);
	// imshow("Image Gray", garyImage);



	// ===> Blurring
	// Mat blurredImage;
	// GaussianBlur(img, blurredImage, Size(7, 7), 5, 0);
	// imshow("Blurred Image", blurredImage);


	// ===> Edge Detection
	Mat blurredImage;
	Mat cannyImage;
	Mat dilateImage;
	Mat erodeImage;

	GaussianBlur(img, blurredImage, Size(7, 7), 5, 0);
	Canny(blurredImage, cannyImage, 50, 150);
	
	Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
	dilate(cannyImage, dilateImage, kernel);
	erode(dilateImage, erodeImage, kernel);
	
	imshow("Canny Image", cannyImage);
	imshow("Dilated Image", dilateImage);
	imshow("Eroded Image", erodeImage);


	waitKey(0);

	return 0;
}