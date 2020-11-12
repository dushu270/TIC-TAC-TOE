#include<iostream>
//#include<stdlib.h>
using namespace std;
//char c[3][3]={'_','_','_','_','_','_','_','_','_'},p1[10],p2[10];
char p1[10],p2[10];
char s;
int X=0;  
int O=0;
int ch=0;
int z=0;
int b=0;
void print(char c[3][3]);
void write(char c[3][3]);
void checkX(char c[3][3]);
void checkO(char c[3][3]);
void full(char c[3][3]);
int main()
{char c[3][3]={'_','_','_','_','_','_','_','_','_'};

    cout<<"---------------------------------------------------TIC TAC TOE-------------------------------------------------------------\n\n\n";
    cout<<"------------------RULES-------------------\n";
    cout<<"1.SHOULD WRITE CAPITAL X OR CAPITAL O\n";
    cout<<"2.CONSECUTIVE X'S OR O'S IN A ROW OR COLUMN IS CONSIDERED AS WIN\n";
    cout<<"3.SHOULD FILL X OR O IN BOXES CONTAINS '_' SYMBOLS\n";
    cout<<"4.X SHOULD ALWAYS START\n\n\n";
    cout<<"--------------OPTIONS------------------\n";
     cout<<"1 for entering X or O to TOP LEFT\n";
    cout<<"2 for entering X or O to TOP MIDDLE\n";
    cout<<"3 for entering X or O to TOP RIGHT\n";
    cout<<"4 for entering X or O to MIDDLE LEFT\n";
    cout<<"5 for entering X or O to MIDDLE\n";
    cout<<"6 for entering X or O to MIDDLE RIGHT\n";
    cout<<"7 for entering X or O to LOWER LEFT\n";
    cout<<"8 for entering X or O to LOWER MIDDLE\n";
    cout<<"9 for entering X or O to LOWER RIGHT\n\n\n";
    cout<<"--------------PLAYERS----------------\n";
    cout<<"ENTER PLAYERS NAMES\n";
    cout<<"ENTER PLAYER WHO PLAY WITH X:";
    cin>>p1;
    cout<<"ENTER PLAYER WHO PLAY WITH O:";
    cin>>p2;
    cout<<"\n\n\n";
    
   
    while(1)
    {
        print(c);
        write(c);                                       
        if(X==1)
        {   print(c);                                                         
            cout<<"\n\n\n"<<p1<<" WINS";
            break;
        }
        if(O==1)
        {   print(c);
            cout<<"\n\n\n"<<p2<<" WINS";
            break;
        }
        if(b==1)
        break;
        
        
    }
    if(X==0&&O==0)
    {
    	print(c);
	cout<<"\n\n\nMATCH TIED";
}
    
    cout<<"\n\n\nPLAY AGAIN? PRESS Y TO QUIT PRESS N\n";
    char a;
    cin>>a;
    if(a=='Y')
    {
	 X=0;  
     O=0;
     ch=0;
     z=0;
     b=0;
    main();
}
    else if(a=='N')
    exit(0);
    
}

void print(char c[3][3])                        /*THIS IS FOR PRINTING GAME AFTER EVERY INPUT*/
{
	int i,j;
	cout<<"\n\n";
    for(i=0;i<3;i++)
    {
        for( j=0;j<3;j++)                                   
        {
            cout<<c[i][j]<<"\t\t";
        
        }
        cout<<"\n\n\n";
    }
    
}


void write(char c[3][3])                                   /*THIS IS FOR WRITING INPUT INTO GAME*/
{
    int opt;

    if(ch==0)
    {
        cout<<p1<<" TURN\n";
    }
    if(ch==1)                                                     
    {
        cout<<p2<<" TURN\n";
    }
            
   // fflush(stdin);
    cin>>s;
    if(ch==0&&s=='X'||ch==1&&s=='O')
    {
	
    cout<<"ENTER OPTION\n";
    cin>>opt;
   
    
    switch(opt)
    {
        case 1:
        	
			
        if(c[0][0]=='_')
        {
        c[0][0]=s;
        }
        else
       {
		 cout<<"BOX ALREADY FILLED TRY ANOTHER BOX\n";z=1;}
        break;
    
         case 2: if(c[0][1]=='_')
        {
        c[0][1]=s;
        }
        else
        {
		cout<<"BOX ALREADY FILLED TRY ANOTHER BOX\n";z=1;}
        break;
         case 3: if(c[0][2]=='_')
        {
        c[0][2]=s;
        }
        else
        {
		cout<<"BOX ALREADY FILLED TRY ANOTHER BOX\n";z=1;}
        break;
         case 4: if(c[1][0]=='_')
        {
        c[1][0]=s;
        }
        else
        {
		cout<<"BOX ALREADY FILLED TRY ANOTHER BOX\n";z=1;}
        break;
         case 5: if(c[1][1]=='_')
        {
        c[1][1]=s;
        }
        else
        {
		cout<<"BOX ALREADY FILLED TRY ANOTHER BOX\n";z=1;}
		break;
         case 6: if(c[1][2]=='_')
        {
        c[1][2]=s;
        }
        else{
		cout<<"BOX ALREADY FILLED TRY ANOTHER BOX\n";z=1;}
		break;
         case 7: if(c[2][0]=='_')
        {
        c[2][0]=s;
        }
        else
        {
		cout<<"BOX ALREADY FILLED TRY ANOTHER BOX\n";z=1;}
        break;
         case 8:
		  if(c[2][1]=='_')
        {
        c[2][1]=s;
        }
        else
        {
		cout<<"BOX ALREADY FILLED TRY ANOTHER BOX\n";z=1;}
        break;
         case 9: 
		 if(c[2][2]=='_')
        {
        c[2][2]=s;
        }
        else
       {
		cout<<"BOX ALREADY FILLED TRY ANOTHER BOX\n";z=1;}
        break;
        default:
		{
		cout<<"INVALID SELECTION TRY AGAIN\n";z=1;} 
    }
    

    checkX(c);
}
else
{
cout<<"INVALID INPUT TRY AGAIN\n";z=1;}


 if(z==1)
  {
    if(ch==0)
    {
    	ch=0;z=0;
	}
	else if(ch==1)
	{
		ch=1;z=0;
	}
}
   else if(z==0)
   {
   	if(ch==0)
   	ch=1;
   	else if(ch==1)
   	ch=0;
   }
    
   

    
    
    
}


void checkX(char c[3][3])                                        /*THIS IS FOR CHECKING CONSECUTIVE X'S*/
 {
    if(c[0][0]=='X'&&c[0][1]=='X'&&c[0][2]=='X')
    X=1;
    else if(c[1][0]=='X'&&c[1][1]=='X'&&c[1][2]=='X')
    X=1;
    else if(c[2][0]=='X'&&c[2][1]=='X'&&c[2][2]=='X')
    X=1;
    else if(c[0][0]=='X'&&c[1][0]=='X'&&c[2][0]=='X')
    X=1;
    else if(c[0][1]=='X'&&c[1][1]=='X'&&c[2][1]=='X')
    X=1;
    else if(c[0][2]=='X'&&c[1][2]=='X'&&c[2][2]=='X')
    X=1;
    else if(c[0][0]=='X'&&c[1][1]=='X'&&c[2][2]=='X')
    X=1;
    else if(c[0][2]=='X'&&c[1][1]=='X'&&c[2][0]=='X')
    X=1;
    else 
    checkO(c);
    
}

void checkO(char c[3][3])                                          /*THIS IS FOR CHECKING CONSECUTIVE O'S*/
{
    if(c[0][0]=='O'&&c[0][1]=='O'&&c[0][2]=='O')
    O=1;
    else if(c[1][0]=='O'&&c[1][1]=='O'&&c[1][2]=='O')
    O=1;
    else if(c[2][0]=='O'&&c[2][1]=='O'&&c[2][2]=='O')
    O=1;
    else if(c[0][0]=='O'&&c[1][0]=='O'&&c[2][0]=='O')
    O=1;
    else if(c[0][1]=='O'&&c[1][1]=='O'&&c[2][1]=='O')
    O=1;
    else if(c[0][2]=='O'&&c[1][2]=='O'&&c[2][2]=='O')
    O=1;
    else if(c[0][0]=='O'&&c[1][1]=='O'&&c[2][2]=='O')
    O=1;
    else if(c[0][2]=='O'&&c[1][1]=='O'&&c[2][0]=='O')
    O=1;
    
    full(c);
}

void full(char c[3][3])
{
   if(c[0][0]!='_'&&c[0][1]!='_'&&c[0][2]!='_'&&c[1][0]!='_'&&c[1][1]!='_'&&c[1][2]!='_'&&c[2][0]!='_'&&c[2][1]!='_'&&c[2][2]!='_')	
   b=1;
}





