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


// ==========================> image pre-processing
int main(){
	string path = "/home/rzamarefat/cpp-opencv/resources/brad.jpeg";

	Mat img = imread(path);
	

	// ===> Grayscale
	// Mat img_gray;
	// cvtColor(img, img_gray, COLOR_BGR2GRAY);
	// imshow("Image Gray", img_gray);



	// ===> Blurring
	// Mat blurred_img;
	// GaussianBlur(img, blurred_img, Size(7, 7), 5, 0);
	// imshow("Blurred Image", blurred_img);


	// ===> Edge Detection
	Mat blurred_img;
	Mat canny_img;
	GaussianBlur(img, blurred_img, Size(7, 7), 5, 0);
	Canny(blurred_img, canny_img, 50, 150);
	imshow("Canny Image", canny_img);

	


	
	

	waitKey(0);

	return 0;
}