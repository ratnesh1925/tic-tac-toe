			    //Tic Tac Toe GAME
			    //BY-RATNESH KUMAR

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
char box[10] = {'o','1','2','3','4','5','6','7','8','9'};
void help();
int checkwin();
void board();
main()
{
clrscr();
char ch[20];
textcolor(GREEN);
for(int y=3;y>=1;y--)
{
if(y==3)
{cprintf("Enter the password within %d trials:-",y);cout<<endl;}
else
{cprintf("RE-Enter the password within %d trials:-",y);cout<<endl;}
for(int z=0;z<7;z++)
{
ch[z]=getch();
cprintf("*");
}
if(ch[0]=='r'&&ch[1]=='a'&&ch[2]=='t'&&ch[3]=='n' &&ch[4]=='e'&&ch[5]=='s'&&ch[6]=='h')
{
cprintf("\nACESS GRANTED");
getch();
break;
}
else
{
cprintf("\nACESS DENIED!");cout<<endl;
getch();
if(y==1)
exit(0);
}
}


int player = 1,i,choice,option;
char sign,choice1;
clrscr();
do
{
clrscr();
cprintf("1.ENTER THE GAME ");cout<<endl;cprintf("2.HELP");cout<<endl;cprintf("3.EXIT");cout<<endl;
cin>>option;
switch(option)
{
case 1:
do
{
board();
player=(player%2)?1:2;
cprintf("Player %d, enter a number:  ",player);
cin >> choice;
sign=(player == 1) ? 'X' : 'O';
if (choice == 1 && box[1] == '1')
box[1] = sign;
else if (choice == 2 && box[2] == '2')
box[2] = sign;
else if (choice == 3 && box[3] == '3')
box[3] = sign;
else if (choice == 4 && box[4] == '4')
box[4] = sign;
else if (choice == 5 && box[5] == '5')
box[5] = sign;
else if (choice == 6 && box[6] == '6')
box[6] = sign;
else if (choice == 7 && box[7] == '7')
box[7] = sign;
else if (choice == 8 && box[8] == '8')
box[8] = sign;
else if (choice == 9 && box[9] == '9')
box[9] = sign;
else if (choice == 0)
exit(0);
else
{
cprintf("\nInvalid move ");
player--;
getch();
}
i=checkwin();
player++;
}while(i==-1);
board();
if(i==1)
cprintf("==>\nPlayer %d win ",--player);
else
cprintf("==>\nGame draw");break;

case 2:help();
	break;

case 3:exit(0);break;
default:cprintf("\nWrong Choice");
}
cprintf("\nDo you want to continue");cout<<endl;
cin>>choice1;
if(choice1=='y'||choice1=='Y')
{
box[1]='1';
box[2]='2';
box[3]='3';
box[4]='4';
box[5]='5';
box[6]='6';
box[7]='7';
box[8]='8';
box[9]='9';
}
}while(choice1=='y'||choice1=='Y');
getch();
cprintf("\n\n-*-*-*-*-*-*-*-*-*-*-*-*SPECIAL THANKS TO RATNESH KUMAR*-*-*-*-*-*-*-*-*-*-*-*-");
getch();
}


void board()
{
clrscr();
cout<<"\t\t\t\t";cprintf("Tic Tac Toe");cout<<"\n\t\t\t";cprintf("      Press 0 to exit");cout<<endl;
cprintf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
cout<<"\t";
cprintf("\n\nPlayer 1 (X)  -  Player 2 (O)");
cout<<endl<<endl;
cout<< endl;
cout<<"\t\t";
cprintf("     |     |     ");
cout<< endl;
cout<<"\t\t  " << box[1] ;
cprintf( "  |  ");
cout<< box[2];
cprintf( "  |  ");
cout << box[3] << endl;
cout<<"\t\t";
cprintf("_____|_____|_____");
cout<< endl;
cout<<"\t\t";
cprintf("     |     |     ");
cout<< endl;
cout<<"\t\t  " << box[4];
cprintf( "  |  ");
cout<< box[5];
cprintf( "  |  ");
cout << box[6] << endl;
cout<<"\t\t";
cprintf("_____|_____|_____");
cout<<endl;
cout<<"\t\t";
cprintf("     |     |     ");
cout<<endl;
cout<<"\t\t  " << box[7];
cprintf( "  |  ");
cout<< box[8];
cprintf( "  |  ");
cout << box[9] << endl;
cout<<"\t\t";
cprintf("     |     |     " );
cout<< endl << endl;
}

int checkwin()
{

if (box[1] == box[2] && box[2] == box[3])
return 1;
else if (box[4] == box[5] && box[5] == box[6])
return 1;
else if (box[7] == box[8] && box[8] == box[9])
return 1;
else if (box[1] == box[4] && box[4] == box[7])
return 1;
else if (box[2] == box[5] && box[5] == box[8])
return 1;
else if (box[3] == box[6] && box[6] == box[9])
return 1;
else if (box[1] == box[5] && box[5] == box[9])
return 1;
else if (box[3] == box[5] && box[5] == box[7])
return 1;
else if (box[1] != '1' && box[2] != '2' && box[3] != '3' && box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7] != '7' && box[8] != '8' && box[9] != '9')
return 0;
else
return -1;
}

void help()
{
clrscr();
cout<<"The TIC-TAC-TOE games board is similar to that of # key\nor it looks something like this:"<<endl;
cout<<"\t\t__|__|__"<<endl;
cout<<"\t\t__|__|__"<<endl;
cout<<"\t\t  |  |  "<<endl;
cout<<"\nIn these gaps one by one 'X' and 'O' have to be filled up";
cout<<"\nIn this game Player have to fill simultaneous 3 boxes with similar sign ('X' or 'O') to win the game.";
cout<<"\nThe 'X or 'O' filled may be:-"<<endl;
cout<<"1.Horizontally:-"<<endl;
cout<<"\t\tx|x|x"<<endl;
cout<<"\t\t_|_|_"<<endl;
cout<<"\t\t | | "<<endl;
cout<<"2.Vertically:-"<<endl;
cout<<"\t\tx|_|_"<<endl;
cout<<"\t\tx|_|_"<<endl;
cout<<"\t\tx| | "<<endl;
cout<<"3.Diagonally:-"<<endl;
cout<<"\t\tx|_|_"<<endl;
cout<<"\t\t_|x|_"<<endl;
cout<<"\t\t | |x"<<endl;

}
