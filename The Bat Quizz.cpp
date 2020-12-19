//The Bat-Quizz
#include <iostream>//needed for cin/cout commands
//#include <stdio.h>//further development
//#include<stdlib.h>//further development
#include <windows.h>//to use sytem inputs in the windows command prompt

using namespace std;

class question{
	public:
		//variáveis
		int answer;
		string *rawnser;
		string right_answer="nothing was made";
		string main_text;
		string A;
		string B;
		string C;
		string D;
		//métodos
		void set_alternative(string text,string alternative);
		void set_main_text(string j);
		void show_main_text();
		void show_alternative(string alternative);
		string compile(string g);
		void qanswer();		
		void teste();

	private:
			
};

void question::set_main_text(string j){
	this->main_text=j;
}	
void question::show_main_text(){
	cout<<this->main_text;
}
void question::show_alternative(string alternative){
	if (alternative=="A"){
		cout<<this->A ;
	}
	else if (alternative=="B"){
		cout<<this->B ;
	}
	else if (alternative=="C"){
		cout<<this->C ;
	}
	else if (alternative=="D"){
		cout<<this->D ;
	}
	else{
		cout<<"\n"<<this->A;
		cout<<"\n"<<this->B ;
		cout<<"\n"<<this->C ;
		cout<<"\n"<<this->D ;
	}
	
}
void question::set_alternative(string text,string alternative){
	if (alternative=="A"){
		this->A=text;
	}
	else if (alternative=="B"){
		this->B=text;
	}
	else if (alternative=="C"){
		this->C=text;
	}
	else if (alternative=="D"){
		this->D=text;
	}
	
}
string question::compile(string g){
	cout<<this->main_text<<"\n\n";
	cout<<"A) "<<this->A<<"\n\n";
	cout<<"B) "<<this->B<<"\n\n";
	cout<<"C) "<<this->C<<"\n\n";
	cout<<"D) "<<this->D<<"\n\n";
	right_answer=g;
	return right_answer;
}






class score{
	
	public:
		//variables
		int value=5;
		//methods
		int increment(int x);
		int decrement(int y);
		void show();
		
	private:
};

int score::increment(int x){
	this->value+=x;
	
	return this->value;
}
int score::decrement(int y){
	this->value-=y;
	
	return this->value;
}
void score::show(){
	cout<<this->value;

}


class menu{
	public:
		//variables
		int teste=0;
		//methods
		void main_menu();
		void options();
		void wrong();
		void right();
		void Riddler_wins();
		void Batman_wins();
		void credits();
		
	private:
};

void menu::main_menu(){
//std::cin.clear();
system("cls");
std::cin.clear();
cout<<"Welcome to the BAT QUIZZ!!!! \n\n";
cout<<"       _,    _   _    ,_\n";
cout<<"  .o888P     Y8o8Y     Y888o.\n";
cout<<" d88888      88888      88888b\n";
cout<<"d888888b_  _d88888b_  _d888888b\n";
cout<<"8888888888888888888888888888888\n";
cout<<"8888888888888888888888888888888\n";
cout<<"YJGS8PY888PY888PY888PY88888888\n";
cout<<" Y888   '8'   Y8P   '8'   888Y\n";
cout<<"  '8o          V          o8'\n";
cout<<"   `                     `\n";
cout<<"THE RIDDLER  MANAGED TO SET UP BOMBS ALL OVER GOTHAM!!";
cout<<"IF I'M TO SAVE GOTHAM, I HAVE TO REACH THESE BOMBS AND ANSWER HIS INSANE QUESTIONS...";
cout<<"\n\n\nPress any key to start the game\n\n";
//cin>>this->teste;
//
//return this->teste;
}
void menu::options(){
	system("cls");
	std::cin.clear();
	cout<<"1)Choose Color\n\n";
	cout<<"2)Back\n\n";
	cout<<"  					    |_|\n";
	cout<<"  					   (* *)\n";
	cout<<"  					  __)#(__\n";
	cout<<"  					 ( )...( )(_)\n";
	cout<<"  					 || |_| ||//\n";
	cout<<"					  >==() | | ()/\n";
	cout<<"                       _(___)_\n";
	cout<<"                      [-]   [-]MJP\n\n";

}
void menu::right(){
		system("cls");
cout<<"         _____       _____\n";
cout<<"     ,-'``_.-'` \   / `'-._``'-.\n";
cout<<"    ,`   .'      |`-'|      `.   `\n.";
cout<<"  ,`    (    /\  |   |  /\    )    `.\n";
cout<<" |      `--'  `-'   `-'  `--'      |\n";
cout<<" |                                 |\n";
cout<<" \      .--.  ,--.   ,--.  ,--.      /\n";
cout<<"  `.   (    \/ lt.\ /    \/    )   ,'\n";
cout<<"    `._ `--.___    V    ___.--' _,'\n";
cout<<"       `'----'`         `'----'`\n";
cout<<"\n\nRIGHT ANSWER!!!!\n\nYou're one step closer to save Gotham!!!!\n\n";
cout<<"\nPress any key  for the next question";	
}
void menu::wrong (){
		system("cls");
cout<<"		      _________\n";
cout<<"              |MMMMMMMMM|                _\n";
cout<<"  ________    |MMMMMMMMM|              _|l|_\n";
cout<<" |!!!!!!!_|___|MMMMMMMMM|             |lllll|\n";
cout<<" |!!!!!!|=========|MMMMM|             |lllll|______\n";
cout<<" |!!!!!!|=========|MMMMM|            _|lllll|HHHHHHH|\n";
cout<<" |!!!!!!|=========|MMMMM|   ________|lllllllll|HHHHH|\n";
cout<<" |!!!!!!|=========|MMMMM|  |unununun|lllllllll|HHHHH|____\n";
cout<<" |!!!!!!|=========|MMMMM|  |nunununu|lllllllll|HH|:::::::::|\n";
cout<<" |!!!!!!|=========|MMM__|..|un__unun|lllllllll|HH|:::::::::|\n";
cout<<" |!!!!!!|=======_=|M_( ')' );' .)unu|lllllllll|HH|:::::::::|\n";
cout<<" |!!!_!!|======( )|(. ` ,) (_ ', )un|lllllllll|HH|:::::::::| ~~~\n";
cout<<" |!!(.)!|===__(`.')_(_ ')_,)(. _)unu|lllllllll|HH|:__::::::|~~  ~~\n";
cout<<" |!(.`')|==( .)' .)MMM|M|| |un|nunun|lllllllll|``|( ,)_::::| ~~~~ ~\n";
cout<<"  -(: _)|=(`. ')_)|---|- '  ``|`````|lll____ll|  (_; `'):::|~~~  ~~~\n";
cout<<"     |  |==(_'_)|=|    ______        ''/\   \'   |(_'_)::::|\~~~~__|)__\n";
cout<<"     |   ''''|''o/`.-``~~~~~ ``-.     /--\___\    ``|`````` /____\____/\n";
cout<<" jrei        |  h ( `; ~~~ ~~  ~ )    |M_|#_#|      ' --   __________|~\n";
cout<<"       --   *      '-.._~~__~..-'   --           -* -     /  ~~~~ ~~~~~~\n";
cout<<" *   -   -      --           ----         ---         _.-'~~~~~     ~ ~~\n";
cout<<"__--_________............-------------'''''''''''''''` ~~~~~    ~~~ ~~~~\n";
cout<<"~~    ~~~~~~~~     ~~~~~~~   ~~~~~~~~~   ~~~~~~~~~~      ~~~~~~~     ~~~\n";
cout<<"~~~~~~~~~  ~~~~  ~~~~~ ~~~~~~~~~ ~ ~      ~~~~~~ ~~~~~~     ~~~~    ~~~~\n";
cout<<"~~~~~~~~     ~~~~~~~~~~~~~~~        ~~~~~~~~~~~~ ~~~~~~  ~~~ ~~~~~~  ~~~\n";
cout<<"\nDamn!!!!\n\nNow the Riddler is closer to destroying Gotham!!!\n\n"		;
cout<<"\n Press any key  for the next question";	
	
	
}
void menu::Batman_wins(){
cout<<"                 T\ T\\n";
cout<<"                 | \| \\n";
cout<<"                 |  |  :\n";
cout<<"           _____I__I  |\n";
cout<<"         .'            '.\n";
cout<<"       .'                '\n";
cout<<"      |   ..             '\n";
cout<<"      |  /__.            |\n";
cout<<"      :.' -'             |\n";
cout<<"       /__.                |\n";
cout<<"      /__, \               |\n";
cout<<"         |__\        _|    |\n";
cout<<"        :  '\     .'|     |\n";
cout<<"        |___|_,,,/  |     |    _..--.\n";
cout<<"     ,--_-   |     /'      \../ /  /\\\n";
cout<<"    ,'|_ I---|    7    ,,,_/ / ,  / _\\\n";
cout<<"   ,-- 7 \|  / ___..,,/   /  ,  ,_/   '-----.\n";
cout<<"  /   ,   \  |/  ,____,,,__,,__/            '\\n";
cout<<" ,   ,     \__,,/                             |\n";
cout<<" | '.       _..---.._                         !.\n";
cout<<" ! |      .' z_M__s. '.                        |\n";
cout<<" .:'      | (-_ _--')  :          L            !\n";
cout<<" .'.       '.  Y    _.'             \,         :\n";
cout<<" .          '-----'                 !          .\n";
cout<<" .           /  \                   .          .\n";
cout<<"\nENOUGH OF THIS RIDDLER!!!\nYou're going to Arkham Now!!!\n";
cout<<"\n\nCongratulations!!! You've beat the game and saved Gotham!\n";
}
void menu::Riddler_wins(){
	cout<<"         ________\n";
cout<<"          _jgN########Ngg_\n";
cout<<"        _N##N@@""      ""9NN##Np_\n";
cout<<"       d###P            N####p\n";
cout<<"       ^^^^              T####\n";
cout<<"                         d###P\n";
cout<<"                      _g###@F\n";
cout<<"                   _gN##@P\n";
cout<<"                 gN###F\n";
cout<<"                d###F\n";
cout<<"               0###F\n";
cout<<"               0###F\n";
cout<<"               0###F\n";
cout<<"               NN@'\n";
cout<<"  \n";
cout<<"              \n"; 
cout<<"               q###r\n";
cout<<"                ""\n";
cout<<"\nRIDDLE ME THIS...I can fly but got no wings...I think I have a great intellect but I'm no match for Riddler...'\n";
cout<<"I THOUGHT I COULD SAVE GOTHAM...\n\n\nBUT I LOST!!!!";
cout<<"\n\n HAHAHAHAHAHAHAHAHAHHAHAHA\n\n";
cout<<"The Riddler Won...Now there is no hope...Gotham is doomed...\n";
}
void menu::credits(){
	//under development
	
	
	
	
	
}

int main(){
	string a;
	int b;
	setlocale(LC_ALL,"");

	question *question1=new question();
	question *question2=new question();
	question *question3=new question();
	menu *menu1=new menu();
	score *score1=new score();
	
	question1->set_main_text("Which authors are credited as being the creators of Batman?");
	question1->set_alternative("Bob Kane and Bill Finger","A");
	question1->set_alternative("Stan Lee and Richard Dawkins","B");
	question1->set_alternative("Peter Parker and Bruce Wayne","C");
	question1->set_alternative("Stan Lee and Bob Kane","D");
	
	question2->set_main_text("What is the true identity of the Riddler?");
	question2->set_alternative("Harry Potter","A");
	question2->set_alternative("Lucius Lane","B");
	question2->set_alternative("Edward E. Nigma","C");
	question2->set_alternative("Frank Cassidy","D");
	
	question3->set_main_text("When did the Killer Croc first appeared in the comics ?");
	question3->set_alternative(	"Batman 5-1948","A");
	question3->set_alternative("Batman And the mistery of the spell-2010","B");
	question3->set_alternative("Batman detective comics 3-2020","C");
	question3->set_alternative("Batman 357-1983","D");
	

	menu1->main_menu();
	cin>>a;
	cin.clear();
	system("cls");
	
	//question 1================================================================================
	question1->compile("A");
	cin>>a;
	if(a==question1->right_answer||a=="a"){
		score1->increment(5);
		menu1->right();
		cin>>a;
		cin.clear();
	}
	else {
		score1->decrement(5);
		menu1->wrong();
		cin>>a;
		cin.clear();
	
	}

	system ("cls");
		//question 2================================================================================
	question2->compile("C");
	cin>>a;
	if(a==question2->right_answer||a=="c"){
		score1->increment(5);
		menu1->right();
		cin>>a;
		cin.clear();
	}
	else {
		score1->decrement(5);
		menu1->wrong();
		cin>>a;
		cin.clear();
	
	}
	system ("cls");
		//question 3================================================================================
	question3->compile("D");
	cin>>a;
	if(a==question3->right_answer||a=="d"){
		score1->increment(5);
		menu1->right();
		cin>>a;
		cin.clear();
	}
	else {
		score1->decrement(5);
		menu1->wrong();
		cin>>a;
		cin.clear();
	
	}
	
//==============check player results=================================
	system("cls");
if (score1->value>=5){
	menu1->Batman_wins();
}
else{
	menu1->Riddler_wins();
}

	
	return 0;

}
