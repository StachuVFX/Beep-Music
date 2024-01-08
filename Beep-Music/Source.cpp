#include <iostream>

#include <Windows.h>

std::string toneNames[12] = {
	"c",
	"cis",
	"d",
	"dis",
	"e",
	"f",
	"fis",
	"g",
	"gis",
	"a",
	"ais",
	"b"
};

// c8 to b8 definitions
float toneDefs[12] = {
	4186.01f,
	4434.92f,
	4698.63f,
	4978.03f,
	5274.04f,
	5587.65f,
	5919.91f,
	6271.93f,
	6644.88f,
	7040.00f,
	7458.62f,
	7902.13f
};

float c[9];
float cis[9];
float d[9];
float dis[9];
float e[9];
float f[9];
float fis[9];
float g[9];
float gis[9];
float a[9];
float ais[9];
float b[9];

float* tonePointerArray[12] = { c, cis, d, dis, e, f, fis, g, gis, a, ais, b };

int main()
{
	// Set tones
	for (int i = 0; i < 12; i++)
	{
		float tone = toneDefs[i];
		for (int j = 0; j < 9; j++)
		{
			tonePointerArray[i][8 - j] = tone;
			tone /= 2;
		}
	}

	// Display tones
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			std::cout << toneNames[i] << j << ": " << tonePointerArray[i][j] << std::endl;
		}
	}
}