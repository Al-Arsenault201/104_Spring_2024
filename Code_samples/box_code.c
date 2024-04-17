#include <stdio.h>

int main( ) {

    int height, width, depth, volume;
    int surface1, surface2, surface3, surface_area;

    int get_value(char* label);

    height = get_value("height");
    width = get_value("width");
    depth = get_value("depth");

    volume = height * depth * width;
    surface1 = height * depth;
    surface2 = width * depth;
    surface3 = height * width; 
    surface_area = 2*(surface1 + surface2 + surface3);

    printf("Height: %d, Width: %d, Depth: %d\n", height, width, depth);
    printf("Volume: %d \n", volume);
    printf("Surface area: %d \n", surface_area);

return 0;

}

int get_value( char* label) {
    int value;
    printf("Enter the %s: ", label);
    scanf("%d", &value);
    while (value <= 0) {
    	  printf ("The %s must be greater than zero!\n", label);
	  scanf ("%d", &value);
    }
    return value;
}
