//создал класс родителя "транспорт" и детишки: "летающий", "однмоторный" и марка "Cessna"
//функция "полета"...позволяет летать на...символами O_o
//суть наследования ясна :)

#include <iostream> 
#include <conio.h>
#include <Windows.h>
 
using namespace std; 
 
class transport
{ 
public:
       int weight; 
	   int speed;
       
}; 
 
class flying :  public transport
{ 

public: 
       int NumofWings; 
	   int amountPassengers;
	   void flight();
}; 
 
class singleEngine :  public flying
{ 
public: 
      int  MaxHeight;                         
}; 
 
class Сessna : public singleEngine
{ 
public: 
       string SerialNumber;

}; 

void flying::flight(){
system("color B0");

	char code;                               
    COORD position;                                     
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    position.X = 10;                                
    position.Y = 10;   
	system("cls");
    SetConsoleCursorPosition(hConsole, position);
    int x=10,y=10;
    cout << (char)(206);

  for(;;){
		switch(code=getch()){
   case 72:
		position.X=x; //движение вверх
		position.Y=y-=1;
		system("cls");
		SetConsoleCursorPosition(hConsole, position);
		cout<<(char)(175);
	break;
   case 80:
		position.X=x; //движение вниз
		position.Y=y+=1;
		system("cls");
		SetConsoleCursorPosition(hConsole, position);
		cout<<(char)(33);
	break;

   case 75:
		position.X=x-=1; //движение влево
		position.Y=y;
		system("cls");
		SetConsoleCursorPosition(hConsole, position);
		cout<<(char)(60);
    break;

   case 77:
		position.X=x+=1; //движение вправо
		position.Y=y;
		system("cls");
		SetConsoleCursorPosition(hConsole, position);
		cout<<(char)(62);
 
    }
}

}

 
int main() 
{ 
    system("color F0");

	setlocale(LC_ALL, "rus");

	cout << "Я самолётик...тыр тыр тыр\n";
	cout << "Прстегните ремни :D полет через 5 секунд...ту ду ду";

	Sleep(5000);

	Сessna Cessna172;
	Cessna172.flight();

	system("PAUSE");
    return 0; 
} 