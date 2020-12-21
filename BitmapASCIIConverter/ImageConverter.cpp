#include "BitmapHelper.h"
#include <string>

using namespace std;

/*
 *   IMAGE CONVERTER
 * - Loads bitmap image file
 * - Reads the (greyscale) pixel data and switches it to ASCII characters
 * - Saves the image using new pixel data
 */
int main() {

	BitmapHelper* bitmapHelper = new BitmapHelper();

	const char* filename = "filename.bmp";
	bitmapHelper->readBitmapImageFromFile(filename);

	return 0;
}