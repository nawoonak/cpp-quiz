// insta || tel || twitter : @NAWOONAM
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <fstream>
using namespace std;

class quiz{
	private:
		string first_name;
		string last_name;
		int random_number;
		int count;	
		int password;	
		
	public:
		char choice1 , choice2 , choice3 , choice4 , choice5 ;	
		void name();
		void take_quiz();
		void answers();
		void score();
};

void quiz :: name(){
		cout<<"\t\t\t-----------------------------------------------------------\n";
		cout<<"\n\t\t\t\t\t[1] Enter your details.\n";
		cout<<"\n\n\t\t\t\tYour first name : \t";
		cin>>first_name;
		cout<<"\t\t\t\tYour last name  : \t";
		cin>>last_name;
		srand(time(0));
    	random_number = rand() % 1000 + 1;
    	cout<<"\n\t\t\t-----------------------------------------------------------\n";
    	cout<<"\t\t      YOUR PASSWORD FOR THE KEY OF THE QUIZ (## Remember it ##) : "<<random_number<<endl;
    	cout<<"\t\t\t-----------------------------------------------------------\n";
    	
}

void quiz :: take_quiz(){
	cout<<"\t\t\t-----------------------------------------------------------\n";
	cout<<"\n\n\t\t\t\t\t       Hello friend (:"<<endl;
	cout<<"\t\t\t\t\t Let's go for the quiz *-* \n";
	cout<<"\t\t\t\t      ==============================\n\n";

	
	cout<<"\n\t\t\t[1] what is the answer of 2+2 ? \n\t\t\t a) 12 \n\t\t\t b) 4 \n\t\t\t c) 2 \n\t\t\t d) 7 ";
	cout<<"\n\n\t\t\tYour choice :  ";
	cin>>choice1;
	if(choice1 == 'b' || choice1 == 'B'){
		count=count+20;
	}
	cout<<"\n\t\t\tPress enter to continue....";
	getch();	
	
	cout<<"\n\n\t\t\t-----------------------------------------------------------\n";


		
	cout<<"\n\n\t\t\t[2] which football team is the worst team ever ?\n\t\t\t a) long \n\t\t\t b) LONG \n\t\t\t c) LoNg\n\t\t\t d) Looooooooong\n";
	cout<<"\n\n\t\t\tYour choice :  ";
	cin>>choice5;
	switch(choice5){
		case 'a' :
		case 'A' :
		case 'b' :
		case 'B' :
		case 'c' :
		case 'C' :
		case 'd' :
		case 'D' :	count=count+20;
					break;
	}
	

	cout<<"\n\n\t\t\t-----------------------------------------------------------\n";


	
	cout<<"\n\n\t\t\t[3] who is the best programmer in the world ?\n\t\t\t a) Mark Zuckerburg \n\t\t\t b) Hamed Pahlane \n\t\t\t c) Amin Hayaee\n\t\t\t d) Nawoonak (:\n";
	cout<<"\n\n\t\t\tYour choice :  ";
	cin>>choice3;
	if(choice3 == 'd' || choice3 == 'D'){
		count=count+20;
	}
	cout<<"\n\t\t\tPress enter to continue....";
	getch();
	
	cout<<"\n\n\t\t\t-----------------------------------------------------------\n";


	
	cout<<"\n\n\t\t\t[4] what is Mehran Modiri's job ?\n\t\t\t a) He is a driver \n\t\t\t b) He is an engneer \n\t\t\t c) He is an actor \n\t\t\t d) He is a teacher \n";
	cout<<"\n\n\t\t\tYour choice :  ";
	cin>>choice4;
	if(choice4 == 'c' || choice4 == 'C'){
		count=count+20;
	}
	cout<<"\n\t\t\tPress enter to continue....";
	getch();
	
	cout<<"\n\n\t\t\t-----------------------------------------------------------\n";

	cout<<"\n\n\t\t\t[5] what univercity is the best in the world ? \n\t\t\t a) Oxford univercity \n\t\t\t b) MIT univercity \n\t\t\t c) Lorestan univercity \n\t\t\t d) Sharif univercity\n";
	cout<<"\n\t\t\tYour choice :  ";
	cin>>choice2;
	if(choice2 == 'c' || choice2 == 'C'){
		count=count+20;
	}
	cout<<"\n\t\t\tPress enter to continue....";
	getch();

	
	cout<<"\n\n\t\t\t-----------------------------------------------------------\n"; 
	
	
	ofstream f1;
	f1.open("a.dat");
	f1<<count;
	f1.close();
}

void quiz :: score(){
	
	ifstream f2;
	f2.open("a.dat");
	f2>>count;
	f2.close();
	
	
	cout<<"\t\t\t\t\t[3] Your score.\n";	
	cout<<"\t\t\t-----------------------------------------------------------\n";
	cout<<"\t\t\t       Type your password to see your grade :  ";
	cin>>password;
	cout<<"\t\t\t-----------------------------------------------------------\n";
		
	if(password==random_number){
		cout << "\n\n\t\t\t\t      Press enter to see the result (: \n";
		getch();
    	cout<<"\n\t\t\t\t------------------Your score------------------";
   	    cout <<"\n\t\t\t\t\t\t  **("<<count<<")**"<<endl;
  	    if (count>=60)
    		cout<<"\n\t\t\t       Congratulations, you could pass the quiz "<<first_name<<"  *-* ";
    	else
    		cout<<"\t\t\t\t  Oops... I think you have to try harder "<<first_name<<"  ): ";
	}
	else
		cout<<"\n\t\t\t\t\t ## WRONG PASSWORD ## ";
}	

void quiz :: answers(){
	cout<<"\n\t\t\t\t\t[4] Solutions of the quiz.\n\n";
		cout<<"\t\t\t-----------------------------------------------------------\n";
	cout<<"\t\t\tType your password to get the key for your answers:  ";
	cin>>password;
		cout<<"\t\t\t-----------------------------------------------------------\n";
	if(password==random_number){
		cout<<"\n\t\t\t\tOk "<<first_name<<" Let's see what are your answers  (:\n\n"<<endl;
		cout<<"\n\t\t\t        Question [1] :\n\t\t\t\t         The correct answer : b \n";
		cout<<"\t\t\t\t         Your answer : "<<choice1;
		cout<<endl;
		cout<<"\n\t\t\t        Question [2] :\n\t\t\t\t         The correct answer : c \n";
		cout<<"\t\t\t\t         Your answer : "<<choice2;
		cout<<endl;
		cout<<"\n\t\t\t        Question [3] :\n\t\t\t\t         The correct answer : d \n";
		cout<<"\t\t\t\t         Your answer : "<<choice3;
		cout<<endl;
		cout<<"\n\t\t\t        Question [4] :\n\t\t\t\t         The correct answer : c \n";
		cout<<"\t\t\t\t         Your answer : "<<choice4;
		cout<<endl;
		cout<<"\n\t\t\t        Question [5] :\n\t\t\t\t         The correct answer : all of them (: \n";
		cout<<"\t\t\t\t         Your answer : "<<choice5;
		cout<<endl;
	}
	else
		cout<<"\n\t\t\t\t\t ## WRONG PASSWORD ## ";
}
		
int main(){
	int ch;
	int x;
	quiz obj;
	cout<<"\n\n\t\t\t\t\t    WELCOME TO THIS QUIZ"<<endl;
	cout<<"\t\t\t\t       ==============================\n";
	
	cout<<"\n\t\t\t    ****** PLEASE SELECT ONE OF THE OPTIONS BELLOW ******\n\n\n";
 	
	 do{
		cout<<"\n\n\t\t\t\t\t[1] Enter your details.\n";
		cout<<"\t\t\t\t\t[2] Go to the quiz.\n";
		cout<<"\t\t\t\t\t[3] Your score.\n";
		cout<<"\t\t\t\t\t[4] Solution of the quiz.\n";
		cout<<"\t\t\t\t\t[5] Exit.\n";
		
		cout<<"\n\n\t\t\t\t\tYOUR CHOICE : ";
		cin>>ch;
		cout<<"\n";
		switch(ch)
		{
			case 1	:	obj.name();
						break;
			case 2	:	obj.take_quiz();
						break;
			case 3  :   obj.score();
						break;
			case 4	:	obj.answers();
						break;
			case 5  :   exit(0);
			
			}
			cout<<"\n\n\n\t\t     If you want to select the next option, then press : y \n";
			cout<<"\t\t     If you want to exit, then press : n \n\n";
			x=getch();
			if(x=='n')
				exit(0);
			cout<<"\n\t\t\t-----------------------------------------------------------\n";
		}while(x=='y');
		 
	getch();
	return 0;
}
