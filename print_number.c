#include <stdio.h>


int main()
 {
        int course_number[6]={4,2,1,4,3,2};
	for(int i = 6; i >= 0; i--) {
		printf("%d", course_number[i-1]);
	}
	printf("\n");
	return 0;
}
