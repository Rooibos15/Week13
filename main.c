#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//���� ���� 
struct student{
	int ID; //�й� 
	char name[100]; //�̸�
	double score; //���� 
};

int main(int argc, char *argv[]) {
	//instance ���� 
	struct student s1 = 
	{2311112, "danbi", 4.3	};
	
	//�ٸ� ������ ����
	s1.ID = 2311113;
	s1.name[100] = 'D';
	s1.score = 4.2; 
	//���
	 printf("ID: %i\n", s1.ID);
	 printf("name: %s\n", s1.name[100]);
	 printf("Score: %d\n", s1.score);
	return 0;
}
