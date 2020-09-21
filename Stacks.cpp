#include <iostream>
#include <stdlib.h>

using namespace std;


class Stacks{
	private:
		int Max=5;
		int boyut=0;
		int *size = (int *)malloc(boyut*sizeof(int));
		
	public:
		
		Stacks():boyut(0){};
		//void push(int);
		bool push(int);
		void pop();
		void print();
		int peek();
};

int Stacks::peek()
{
	return size[boyut-1];
}

void Stacks::pop()
{
	if(boyut <= 0)
	{
		cout << "Stack de cikaralicak eleman yok ki !!! " << endl;
	}
	else{
		size[boyut--]--;
	}
	
}
void Stacks::print()
{
	for(int i=0;i<boyut;i++)
	{
		cout << size[i] << endl;
	}
}
/*
void Stacks::push(int x)
{
	size[boyut] = x;
	boyut++;
	
}*/

 //pushes element on to the stack
   bool Stacks::push(int item)
   {
      if (boyut >= Max) {
      cout << "Stack Overflow!!!";
      return false;
   }
else {
   size[boyut] = item;
   boyut++;
   return true;
   }
}

void menu()
{
	Stacks stack;
	
	int islem=10;
	while(islem!=0){
		cout << "1.Push\n2.Pop\n3.Peek\n4.Print\n5.Exit" << endl;
		cout << "Yapmak istediginiz islemi seciniz " << endl;
		cin >> islem; 
		
		if(islem == 1)
		{
			int deger = 0;
			cout << "Eklemek istediðiniz Deðer : " << endl;
			cin >> deger;
			stack.push(deger);
		}
		else if(islem == 2)
		{
			stack.pop();
		}
		else if(islem == 3)
		{
			cout << stack.peek() << endl;
		}
		else if(islem == 4)
		{
			stack.print();
		}
		else if(islem == 5)
		{
			break;
		}
		else{
			cout << "Yanlis islem secimi " << endl;
		}
	}
	
}


int main()
{
	Stacks stack;
	//Deneme
	/*
	stack.push(5);
	stack.push(9);
	stack.push(10);
	stack.push(17);
	stack.print();
	stack.pop();
	cout << "Pop sonrasý print " << endl;
	stack.print();
	cout << "Peek Value : " << stack.peek() << endl;	
	*/
	
	menu();
	
	
	
	system("Pause");
	return 0;
}
