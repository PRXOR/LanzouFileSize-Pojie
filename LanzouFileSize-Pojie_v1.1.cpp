#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void rm_main(char a[],char b[])
{
	int result;
	result= rename(a,b);
	if(result!=0)
	{
		printf("Error!Something wrong happened!\n");
		system("pause");
		exit(0);
	}
	return ;
}
void rm1()
{
	string x;
	printf("示例:如果你的文件是example.part01.rar,example.part02.rar……example.part88.rar\n那么你应该输入:\nexample\n88\n");
	printf("请输入你先要修改的文件名和分卷数量:\n");
	getline(cin,x);
	int k;
	cin>>k;
	int d=k,f=0;
	string t="0";
	d/=10;
	while(d/=10) t[t.length()]='0',f++;
	cout<<t<<endl;
	for(int i=1;i<=k;i++)
	{
		for(int j=f;j>=0;j--)
		{
			t[j]++;
			if(t[j]<='9') break;
			else t[j]='0';
		}
		cout<<t<<endl;
		string aa=x+".part"+t+".rar";
		string bb=x+".p"+t+".rar";
		char a[999];
		for(int j=0;j<aa.length();j++) a[j]=aa[j];
		char b[999];
		for(int j=0;j<bb.length();j++) b[j]=bb[j];
		rm_main(a,b);
	}
	return ;
}
void rm2()
{
	string x;
	printf("示例:如果你的文件是example.p01.rar,example.p02.rar……example.p88.rar\n那么你应该输入:\nexample\n88\n");
	printf("请输入你先要修改的文件名和分卷数量:\n");
	getline(cin,x);
	int k;
	cin>>k;
	int d=k,f=0;
	string t="0";
	d/=10;
	while(d/=10) t[t.length()]='0',f++;
	cout<<t<<endl;
	for(int i=1;i<=k;i++)
	{
		for(int j=f;j>=0;j--)
		{
			t[j]++;
			if(t[j]<='9') break;
			else t[j]='0';
		}
		cout<<t<<endl;
		string aa=x+".p"+t+".rar";
		string bb=x+".part"+t+".rar";
		char a[999];
		for(int j=0;j<aa.length();j++) a[j]=aa[j];
		char b[999];
		for(int j=0;j<bb.length();j++) b[j]=bb[j];
		rm_main(a,b);
	}
	return ;
}
int main()
{
	printf("请选择你需要的操作:\n1.part*.rar->p*.rar\n2.p*.rar->part*.rar\n");
	char x=getch();
	if(x=='1') rm1();
	else if(x=='2') rm2();
	else main();
	return 0;
}
