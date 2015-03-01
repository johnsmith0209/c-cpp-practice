#include <stdio.h>
#include <stdlib.h>
#define NUM

int main(){
	struct stu{
		int id;
		char *name;
		char gender;
		float score;
	} *ps;
	ps = (struct stu *)malloc(sizeof(struct stu)); //allocate memory for ps
	ps->id = 101;
	ps->name = "Tony Tsai";
	ps->gender = 'M';
	ps->score = 312.341;
	#ifdef NUM
		printf("Id is %d, name is %s\n", ps->id, ps->name);
	#else
		printf("Gender is %c, score is %f\n", ps->gender, ps->score);
	#endif
	free(ps);//should free the allocated mem
	return 0;
}
