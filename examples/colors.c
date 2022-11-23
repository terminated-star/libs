#include <stdio.h>
#include <stdlib.h>
#include "../src/colors.h"

int main()
{
	colors_hsv my_color;
	my_color.hue = 0.13; /* Keep in mind that the range of every value in every data type is 0-1 */
	my_color.saturation = 0.35;
	my_color.value = 0.89;
	{
		colors_rgb my_color_rgb = colors_hsv_to_rgb(my_color);
		colors_hsl my_color_hsl = colors_hsv_to_hsl(my_color);
		colors_hsv my_color_hsl_to_hsv = colors_hsl_to_hsv(my_color_hsl); /* We convert the color from hsv, to hsl, back to hsv. You will see that the color is the same as the original hsv color. */
		printf("HSV(%.f°, %.f%%, %.f%%)\n", my_color.hue*360, my_color.saturation*100, my_color.value*100);
		printf("RGB(%.f, %.f, %.f)\n", my_color_rgb.red*255, my_color_rgb.green*255, my_color_rgb.blue*255);
		printf("HSL(%.f°, %.f%%, %.f%%)\n", my_color_hsl.hue*360, my_color_hsl.saturation*100, my_color_hsl.lightness*100);
		printf("HSV(%.f°, %.f%%, %.f%%)\n", my_color_hsl_to_hsv.hue*360, my_color_hsl_to_hsv.saturation*100, my_color_hsl_to_hsv.value*100);
	}
	return 0;
}
