#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	int x;
	struct student{
		string ID;
		string name;
		int age;
		char gender;
		double score;
		char grade ;
	};
	student stu[5];
	
if(score >=80 && score <100){
		grade = 'A';
	}
	else if (score >=70 && score <80){
		grade = 'B';
	}
	else if (score >=60 && score <70){
		grade = 'C';
	}
	else if (score >=50 && score < 60){
		grade = 'D';
	}
	else if (score >=40 && score < 50){
		grade = 'E';
	}
	else {
		grade = 'F';
	}
	
	
for(int x=0;x<1o;x++){
	cout<<"enter student ID";
		cin>>stu[x].ID;
	
	cout<<"enter student "<< x<<"'s name" <<endl;
		cin>>stu[x].name;
		cout<<"enter student age"<<endl;
		cin>>stu[x].age;
		cout <<"enter student gender "<<endl;
		cin>>stu[x].gender;
cout<<"enter student score "<<endl;
cin>>stu[x].score;		
	
	
}	

		fstream fin;
	fin.open("message.txt");

	fin << "  IdNumber\tName\tAge\tGender\tScore\t\Grade" << endl;
	for(int x=0; x<3; x++){
		fin << x << " " << student[x].name <<"\t\t"<<student[x].IDnumber<< "\t" << student[x].age << "\t" << student[x].gender<< "\t" << student[x].score << "\t" << student[x].grade << endl;
	}
	
	
	float avge=int total/5;
	cout<<total
	
	
	return 0;
}
