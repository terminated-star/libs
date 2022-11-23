#include "../src/array_2d.h"
#include <stdio.h>

int main()
{
	array_2d array = array_2d_create(5, 10); /* Creates a new 2d array with a width of 5 and a height of 10 */
	array_2d_fill(&array, (void*)8); /* Sets every value to 8 */
	array_2d_set(&array, (void*)29, 1, 2); /* Sets the value at (1, 2) to 29 */
	printf("(0, 1) = %d\n", array_2d_get(&array, 0, 1)); /* Prints the value at (0, 1), which is 8 */
	printf("(1, 2) = %d\n", array_2d_get(&array, 1, 2)); /* Prints the value at (1, 2), which is 29 */
	printf("(2, 3) = %d\n", array_2d_get(&array, 2, 3)); /* Prints the value at (2, 3), which is 8 */

	printf("--------------\n");
	/* This 2nd example shows that you can mix data types */
	array_2d_fill(&array, "Hello");
	array_2d_set(&array, "World", 1, 2);
	array_2d_set(&array, (void*)123, 2, 3);
	printf("(0, 1) = %s\n", array_2d_get(&array, 0, 1)); /* Prints Hello */
	printf("(1, 2) = %s\n", array_2d_get(&array, 1, 2)); /* Prints World */
	printf("(2, 3) = %d\n", array_2d_get(&array, 2, 3)); /* Prints 123 */
	return 0;
}
