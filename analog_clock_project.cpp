#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	
	int h,m,s,err,a;
	err=a=1;

	
	while (err==1){
		cout << "Enter hour : " <<endl;
		cin >> h;
		
		cout << "Enter min : " <<endl;
		cin >> m;
		
		cout << "Enter second : " <<endl;
		cin>> s;
		
		if(h<13 && m<60 && s<60)
		{
			err++;
		}
		
		else
			system("cls");
		
		
	}
	
	while (a==1) {
		cout << h << ":" << m << ":" << s << endl;
		Sleep (1000);
		s++;{
			
			if(s>59){
				s=0;
				m++;
				}
				
			if(m>59){
				m=0;
				s=0;
				h++;
				}
				
			if(h>12){
				h=1;
				m=0;
				s=0;	
			}		
			}
		
	}
	
	return 0;
}
