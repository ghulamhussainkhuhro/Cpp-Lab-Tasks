#include<iostream>
using namespace std;

struct mystruct{
	int rollno;
	string name;
	int batch;
};
void myfunc(mystruct info[],int size)
{
	for(int i=0 ; i<=size ; i++)
	{
		cout<<"Student "<<i+1<<": \nRoll no : "<<info[i].rollno<<endl;
		cout<<"Name : "<<info[i].name<<endl;
		cout<<"Batch : "<<info[i].batch<<endl;
		cout<<"\v";
	}

}
int main(){
	mystruct info[4];
	int size=4;
	info[0]={50 , "Ghulam Hussain" , 2023};
	info[1]={51 , "Aliraza" , 2022};
	info[2]={52 , "Wajid" , 2019};
	info[3]={56 , "Imran" , 2021};

	myfunc(info,3);
	return 0;
}
