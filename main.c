#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//형식 선언 
struct student{
	int ID; //학번 
	char name[100]; //이름
	double score; //학점 
};

int main(int argc, char *argv[]) {
	//instance 선언 
	struct student s1 = 
	{2311112, "danbi", 4.3	};
	
	//다른 값으로 변경
	s1.ID = 2311113;
	s1.name[100] = 'D';
	s1.score = 4.2; 
	//출력
	 printf("ID: %i\n", s1.ID);
	 printf("name: %s\n", s1.name[100]);
	 printf("Score: %d\n", s1.score);
	return 0;
}
