#include<iostream>
#include<string.h>
using namespace std;


class WindowImp{
	public:
		virtual void getWindowImp(){
			cout<<"hello i am WindowImp"<<endl;        printing
		}
	
};

class LinuxImplementor: public WindowImp{
	public:
		void getWindowImp(){
			cout<<"hello i am Linux"<<endl;
		}
		
};

class MacImplementor: public WindowImp{
	public:
		void getWindowImp(){
			cout<<"hello i am Mac"<<endl;
		}
		
};

class Window{
	public:
		LinuxImplementor lin;
		MacImplementor min;
		virtual void getWindow(){
			cout<<"hello i am Window"<<endl;
		}
		
	

};

class DesktopWindow: public Window{
	public:
		
		void getWindow(){
			cout<<"hello i am  Desktop Window"<<endl;
			lin.getWindowImp();
		}
		
};


class MobileWindow: public Window{
	public:
		void getWindow(){
			cout<<"hello i am Mobile Window"<<endl;
			min.getWindowImp();
		}
};


int main(){
	
	DesktopWindow ._dw;
	dw.getWindow();
	
	cout<<endl;
	MobileWindow _m;
	m.getWindow();
	cout<<endl;
	
	
	
	
	
	
}



