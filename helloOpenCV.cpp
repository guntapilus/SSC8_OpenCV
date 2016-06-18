#include <opencv2\opencv.hpp>
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		std::cout << "Usage: display_image ImageToLoadAndDisplay" << std::endl;
		return -1;
	}
	cv::Mat image;
	image = cv::imread(argv[1], cv::IMREAD_COLOR);	// Read the file
	if (image.empty())	// Check for invalid input
	{
		std::cout << "Could not find or load image" << std::endl;
		return -1;
	}
	cv::namedWindow("Display Window", cv::WINDOW_AUTOSIZE);	// Create a window for display.
	cv::imshow("Display Window", image);	// Show our image inside it.
	cv::waitKey(0);	// Wait for a keystroke in the window
	return 0;	
}