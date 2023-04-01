#include "lodepng.h"
#include "math.h"

int main(int argc, char *argv[])
{
	unsigned image[400][400];
	for (int i=0;i<400;++i) {
		for (int j=0;j<400;++j) {
			if (std::abs(i-j) < 50) {
				image[i][j]=(255<<24) + 255;
			} else {
				image[i][j]=0;
			}
		}
	}
	lodepng_encode_file("test.png", (const unsigned char*)image, 400, 400, LCT_RGBA, 8);
	return 0;
}
//! [0]
