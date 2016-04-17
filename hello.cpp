// mlastUsedStack first program in C++
#include <iostream>
#include <array>
#include <stack>
using namespace std;

 
stack<int> stab1;
stack<int> stab2;
stack<int> stab3;

int actualStack ;
int lastUsedStack = 4;

int z; //Piedra que se mueve
int interruptor= 1; //Interruptor

void movPos1(){

	actualStack = 1;
	interruptor = 0;

	if(stab1.empty()!=1)
	{
		z = stab1.top();

		if (stab2.empty()==1 && lastUsedStack !=1)
		{
			stab1.pop();
			stab2.push(z);
			lastUsedStack = 2;
			interruptor= 1;
			cout << "("+to_string(actualStack)+","+to_string(lastUsedStack)+") ";
		}
		else if(stab2.top()>z && lastUsedStack !=1){
			stab1.pop();
			stab2.push(z);
			lastUsedStack = 2;
			interruptor= 1;
			cout << "("+to_string(actualStack)+","+to_string(lastUsedStack)+") ";
		}

		else if (stab3.empty()==1 && lastUsedStack !=1)
		{
			stab1.pop();
			stab3.push(z);
			lastUsedStack = 3;
			interruptor= 1;
			cout << "("+to_string(actualStack)+","+to_string(lastUsedStack)+") ";
		}

		else if(stab3.empty()!=1 && stab3.top()>z && lastUsedStack !=1)
		{
			stab1.pop();
			stab3.push(z);
			lastUsedStack = 3;
			interruptor= 1;
			cout << "("+to_string(actualStack)+","+to_string(lastUsedStack)+") ";
		}
	}
}

void movPos2(){

	interruptor= 0;
	actualStack = 2;

	if(stab2.empty()!=1)
	{
		z = stab2.top();

		if (stab3.empty()==1 && lastUsedStack !=2)
		{
			stab2.pop();
			stab3.push(z);
			lastUsedStack = 3;
			interruptor= 1;
			cout << "("+to_string(actualStack)+","+to_string(lastUsedStack)+") ";
		}
		else if(stab3.top()>z && lastUsedStack !=2)
		{
			stab2.pop();
			stab3.push(z);
			lastUsedStack = 3;
			interruptor= 1;
			cout << "("+to_string(actualStack)+","+to_string(lastUsedStack)+") ";
		}
		else if (stab1.empty()==1 && lastUsedStack !=2)
		{
			stab2.pop();
			stab1.push(z);
			lastUsedStack = 1;
			interruptor= 1;
			cout << "("+to_string(actualStack)+","+to_string(lastUsedStack)+") ";
		}
		else if(stab1.empty()!=1 && stab1.top()>z && lastUsedStack !=2)
		{
			stab2.pop();
			stab1.push(z);
			lastUsedStack = 1;
			interruptor= 1;
			cout << "("+to_string(actualStack)+","+to_string(lastUsedStack)+") ";
		}
	}
}

void movPos3(){

	interruptor= 0;
	actualStack = 3;

	if(stab3.empty()!=1)
	{
		z = stab3.top();

		if (stab1.empty()==1 && lastUsedStack !=3)
		{
			stab3.pop();
			stab1.push(z);
			lastUsedStack = 1;
			interruptor= 1;
			cout << "("+to_string(actualStack)+","+to_string(lastUsedStack)+") ";
		}
		else if(stab1.top()>z && lastUsedStack !=3){
			stab3.pop();
			stab1.push(z);
			lastUsedStack = 1;
			interruptor= 1;
			cout << "("+to_string(actualStack)+","+to_string(lastUsedStack)+") ";
		}

		else if (stab2.empty()==1 && lastUsedStack !=3)
		{
			stab3.pop();
			stab2.push(z);
			lastUsedStack = 2;
			interruptor= 1;
			cout << "("+to_string(actualStack)+","+to_string(lastUsedStack)+") ";
		}

		else if(stab2.empty()!=1 && stab2.top()>z && lastUsedStack !=3)
		{
			stab3.pop();
			stab2.push(z);
			lastUsedStack = 2;
			interruptor= 1;
			cout << "("+to_string(actualStack)+","+to_string(lastUsedStack)+") ";
		}
	}
}


int main()
{
	

	for(int i=5;i>0;i--){
		stab1.push(i);
	}

 	while(stab2.size()<5)
 	{
 		movPos1();	

 		if (interruptor==0){
	 		movPos2();	
	 		if (interruptor==0){
		 		movPos3();	
			}
		}
		
		// cout << stab1.size();
		// cout << stab2.size();
		// cout << stab3.size();
		
	}
}
