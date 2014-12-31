// c++xuexi.c.cpp : 定义控制台应用程序的入口点。
//

#include "StdAfx.h"
#include "iostream"
#define M 2
using namespace std; 
int max(int, int);
// class Student{
// private://在大多数情况下，会把所有数据指定为私有，以实现信息隐蔽。
// 	int num;
// 	int score;
// public://把全部函数(setdata，display)指定为公用的
// 	void setdata(){
// 		cin>>num;
// 		cin>>score;
// 	}
// 	void display(){
// 		cout<<"num="<<num;
// 		cout<<"score="<<score<<endl;
// 	};
// };
// Student stud1,stud2;
int main(void)
{
	cout<<"this is a" 
		<<"c++"<<endl;
	int a,i;
	unsigned short b;//负数变成无符号型是将负数二进制展开按位取反，然后+1；即补码；
	a=-1;
	b=a;
	cout<<"b="<<" "<<b;
	//float d,b;
	//d=3.4;
	//a=(int)d;
    //b=d-a;
	//cout<<"a="<<a<<"  "<<"b="<<b<<'\n';
	//char c[]="asD\nasda\0asad";
	//for(i=0;c[i]!='\0';i++){
	//	//c[i]&=0xdf;
	//	cout<<c[i];}
// 	cin>>a>>b;
// 	sum=a+b;
// 	cout<<"a+b="<<sum<<endl;
// 	int c,d,m;
// 	cin>>c>>d;
// 	m=max(c,d);
// 	cout<<"max="<<m<<endl;
// 	stud1.setdata();
// 	stud2.setdata();
// 	stud1.display();
// 	stud2.display();
	while(1);
	return 0;
}

// int max(int x,int y)
// {
// 	int z;
// 	if(x>y)
// 		z=x;
// 	else
// 		z=y;
// 	return(z);
// }

