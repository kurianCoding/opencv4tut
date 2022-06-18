#include <iostream>

#include "opencv2/highgui.hpp"
#include "opencv2/imgcodecs.hpp"

using namespace std;
using namespace cv;

int main(int argc, char** argv) {
	Mat src;
	if (argc != 3) {
		cout << " enter two images, linear_blend img1 img2" << endl;
	}
	Mat im_1 = imread(argv[1], IMREAD_COLOR);
	Mat im_2 = imread(argv[2], IMREAD_COLOR);
	addWeighted(im_1, 0.5, im_2, 0.5, 0.0, src);
	imwrite("output.jpg", src);
	return 0;
}
