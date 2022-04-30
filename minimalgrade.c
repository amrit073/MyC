//this is program to calculate Percentage , GPA and Grade in way adopted by NEB
#include<stdio.h>

void main(){
	int mark[5], num , sum=0 ;
	char* grades[9] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "E"};
	float gpas[9] = {3.6, 3.2, 2.8 , 2.4 , 2.0 , 1.6 , 1.2 , 0.8 , 0.0};
	for (int i = 1 ; i <= 5 ; i++) {
		printf("enter marks for sub %d \n", i);
		scanf("%d", &num);
		mark[i] = num;
	}
	for (int i = 1 ; i <= 5 ; i++){
		sum += mark[i];
	}
	float gpa = (sum * 4) / 500.0;
	float per = (sum * 100) / 500.0;
	printf("Percentage is %.3f \n", per) ;
	printf("GPA is : %.3f \n", gpa) ;
	for (int i= 1 ; i <= 8 ; i++){
		if ( gpa > gpas[i]){      //if gpa is greater than (i)th element of array gpas, prints (i)th element of grades.
		printf("grade is %s \n", grades[i]);
		break; 
		}
	}
}