#include <stdio.h>
#include <stdlib.h>


// shape 1: oblongs
void repeat(int times){
	// make the top and bottom lines of the square
	for (int i = 0; i < times; i++){
		printf("##");
	}
	printf("\n");
}

void line(int times){
	printf("##");
	for (int i = 0; i < times-2 ; i++){
		printf("  ");
	}
	printf("##\n");
}
void create_square(int l, int h){
	repeat(l);
	for (int i =0; i< h - 2; i++){
		line(l);
	}
	repeat(l);
}

// shape 2 triangles
void create_triangle(int height){
	// make sure that the triangle has a middle part
	if (height % 2 == 0){
		height = height + 1;
	}

	// initialize the array
	char base[height];
	
	// make every entry in the array ' '.
	for (int i=0; i < height; i++){
		base[i] = ' ';
	}
	
	// make the middle end of the array a new line character
	base[height-1] = '\n';
	// make the character in the middle of the array a #
	base[height/2] = '#';
	
	// print out the top of the triangle
	for (int i=0; i < height; i++){
		char x = base[i];
		printf("%c", x);
	}
	
	// empty out the array
	for (int i=0; i < height; i++){
			base[i] = ' ';
	}
	
	// make a new line space in the array
	base[height - 1] = '\n';
	
	
	// loop that prints the rest of the triangle out
	for (int i =1; i < height/2; i++ ){
		// diverging array replacements
		// +
		base[(height/2) + i] = '#';
		// -
		base[(height/2) - i] = '#';
		
		// print out the replaced string array
		for (int i=0; i < height; i++){
		char x = base[i];
		printf("%c", x);
		}
		
		//empty out the string 
		for (int i=0; i < height; i++){
		base[i] = ' ';
		}
		
		//add new line character
		base[height - 1] = '\n';
	};
	
	// make the base of the triangle
	for (int i = 0; i < height; i++){
		base[i] = '#';
		char x = base[i];
		printf("%c", x);
	}
	printf("\n");
	}

// make diamond
void create_diamond(int height){
	// make sure that the triangle has a middle part
	if (height % 2 == 0){
		height = height + 1;
	}

	// initialize the array
	char base[height];
	
	// make every entry in the array ' '.
	for (int i=0; i < height; i++){
		base[i] = ' ';
	}
	
	// make the middle end of the array a new line character
	base[height-1] = '\n';
	// make the character in the middle of the array a #
	base[height/2] = '#';
	
	// print out the top of the triangle
	for (int i=0; i < height; i++){
		char x = base[i];
		printf("%c", x);
	}
	
	// empty out the array
	for (int i=0; i < height; i++){
			base[i] = ' ';
	}
	
	// make a new line space in the array
	base[height - 1] = '\n';
	
	for (int i =1; i < height/2; i++ ){
		// diverging array replacements
		// +
		base[(height/2) - i] = '#';
		// -
		base[(height/2) + i] = '#';
		
		// print out the replaced string array
		for (int i=0; i < height; i++){
		char x = base[i];
		printf("%c", x);
		}
		
		//empty out the string 
		for (int i=0; i < height; i++){
		base[i] = ' ';
		}
		
		//add new line character
		base[height - 1] = '\n';
	}
	
	// loop that prints the rest of the triangle out
	for (int i =1; i < height/2; i++ ){
		// diverging array replacements
		// +
		base[0 + i] = '#';
		// -
		base[(height - 1) - i] = '#';
		
		// print out the replaced string array
		for (int i=0; i < height; i++){
		char x = base[i];
		printf("%c", x);
		}
		
		//empty out the string 
		for (int i=0; i < height; i++){
		base[i] = ' ';
		}
		
		//add new line character
		base[height - 1] = '\n';
	}
	
	}

int main(){
	system("clear");
	printf("\n\n\n----------------------------------------------------------------------------------------------------\n\t\t\t****plotter v1.5, now works with squares, trianlges and diamonds****\n\t\t\t\t\tcode by nacim khelifi\n----------------------------------------------------------------------------------------------------\n\n\n");

	
	void return_stuff(){
		printf("what structure do want to make? (type 1 for oblong / type 2 for triagle / type 3 for diamond) ");
		int type;
		scanf("%d", &type);
		
		if (type == 1){
			printf("you are making an oblong\n");
			
			int length, height;
			
			printf("provide the length of the desired quadrilateral: ");
			scanf("%d",&length);
			
			printf("provide the height of the desire quadrilateral: ");
			scanf("%d", &height);
			
			printf("\n\tmaking a shape of dimensions (%d,%d)\n\n\n", length, height);
			create_square(length,height);
		}
		
		else if (type == 2){
			printf("you are making a triangle\n");
			int height;
			printf("provide the length of the base of the desired triangle: ");
			scanf("%d", &height);
			printf("\n\tmaking a triangle of base length of %d\n\n\n", height);
			create_triangle(height);
		}
		
		else if (type == 3){
			printf("you are making a diamond\n");
			int height;
			printf("provide the length of the base of the desired diamond: ");
			scanf("%d", &height);
			printf("\n\tmaking a diamond of length of %d\n\n\n", height);
			create_diamond(height);
		}
	}
	return_stuff();
	int done = 0;
	
	while (done == 0) {
	int yorn;
	printf("would you like to make an other shape? (y/n) ");
	scanf("%d", &yorn);
	
	if (yorn == 1){
		return_stuff();
	}
	else if (yorn != 1){
		done = 1;
	}
	}
	system("clear");
	
	return 0;
}
