#pragma once
#include "Color.h"
typedef char** Bitmap;
typedef struct Image
{
	int id;
	int width;
	int height;
	int pivotx;
	int pivoty;
	Bitmap bitmap;
} Image;

Bitmap NewBitmap(int width, int height);
void DestroyBitmap(Bitmap bitmap);
Image* NewImage(int width, int height);
Image** SliceImage(Image* image, int column, int row);