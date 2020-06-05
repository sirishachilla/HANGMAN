#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<graphics.h>
int gd=DETECT,gy;
int i,j,c,count=0,ans=0,flag=0,number;
char a[40];
char b[20],alpha;
char d='_';

void main()
{
initgraph(&gd,&gy,"c:\\TURBOC3\\bgi");
//clrscr();
setbkcolor(GREEN);
clrscr();
srand(time(NULL));
x:number=rand()%100+1;
if(number<=40)
{
switch(number)
 {
case 1:
strcpy(a,"bottle");
printf("What has a neck but no head?");
break;
case 2:
strcpy(a,"towel");
printf("What gets wetter as it dries?");
break;
case 3:
strcpy(a,"dictionary");
printf("where does a friday comes before a thursday?");
break;
case 4:
strcpy(a,"silence");
printf("What is so delecate that saying its name breaks it?");
break;
case 5:
strcpy(a,"window");
printf("What invention lets you look right through a wall?");
break;
case 6:
strcpy(a,"incorrectly");
printf("Which word in dictionary is spelled incorrectly?");
break;
case 7:
strcpy(a,"phone");
printf("What has many rings but no fingers?");
break;
case 8:
strcpy(a,"cupcake");
printf("What kind of cup cant hold water?");
break;
case 9:
strcpy(a,"mushroom");
printf("A room with no door or window");
break;
case 10:
strcpy(a,"battery");
printf("Have no life but can die");
break;
case  11:
strcpy(a,"secret");
printf("If i have it i dont share it. if i share it i dont have it");
break;
case  12:
strcpy(a,"tomorrow");
printf("Always comes but never arrives");
break;
case  13:
strcpy(a,"thunder");
printf("can clap without hands");
break;
case  14:
strcpy(a,"trouble");
printf("easy to get in but hard to get out");
break;
case  15:
strcpy(a,"promise");
printf("Can break without being held");
break;
case  16:
strcpy(a,"onion");
printf("You regret killing me");
break;
case  17:
strcpy(a,"teapot");
printf("Starts,ends and holds the same");
break;
case  18:
strcpy(a,"mercury");
printf("iam god and i measure temperature");
break;
case  19:
strcpy(a,"shadow");
printf("Your own property");
break;
case  20:
strcpy(a,"riverbank");
printf("bank without money");
break;
case 21:
strcpy(a,"electricity");
printf("city with no people");
break;
case 22:
strcpy(a,"doorbell");
printf("Never ask question but is often answered");
break;
case 24:
strcpy(a,"candle");
printf("Im tall when young,short when becomes old");
break;
case 25:
strcpy(a,"gravity");
printf("Everyone falls for me every one is attracted to me");
break;
case 26:
strcpy(a,"mirror");
printf("I make two people out of one");
break;
case 27:
strcpy(a,"vegetable");
printf("A good table to eat");
break;
case 28:
strcpy(a,"fence");
printf("Runs around the house but doesnot move");
break;
case 29:
strcpy(a,"coin");
printf("have head and tail but no body");
break;
case 30:
strcpy(a,"river");
printf("Has a bed but doesnot sleep and a mouth but never eat");
break;
case 31:
strcpy(a,"finger");
printf("Can point in every direction but not by its own");
break;
case 32:
strcpy(a,"watermelon");
printf("You got red but stop at green");
break;
case 33:
strcpy(a,"citywall");
printf("Run around the city but never move");
break;
case 34:
strcpy(a,"remark");
printf("Can be hear,caught but never seen");
break;
case 35:
strcpy(a,"paper");
printf("Dorp me from building, I live.Drop me in water, I die");
break;
case 36:
strcpy(a,"advice");
printf("you need it but dont use it");
break;
case 37:
strcpy(a,"button");
printf("Round as ring,has two eyes,cant see a thing");
break;
case 38:
strcpy(a,"truth");
printf("You always ask for it but you dont face it");
break;
case 39:
strcpy(a,"footsteps");
printf("The more you take,the more appear behind you");
break;
case 40:
strcpy(a,"future");
printf("Always in front of you but never here");
break;
default:
break;
 }
}
else
goto x;
c=strlen(&a[0]);
printf("\n\n\n\n\n\t\t\t ** HANGMAN ** \n");
	printf("\n\n\t\t\t**************\t\t\t");
		printf("\n\n\t\t\t..............\n\n\t\t\t  ");
for(j=0;j<c;j++)
	{ printf("%c ",d);
	b[j]=d;
	  }
	printf("\n\n\n\t\t\t..............\t\t\t");
		printf("\n\n\t\t\t**************");
while(count<6)
 {
flag=0;
       //	printf("\n\n\n\n\t enter a alphabet");
	 y:	alpha=getche();
		for(i=0;i<c;i++)
		{
		if(alpha==b[i])
		{
		printf("\n\nAlready exist!!!");
		    goto y;
		    }
		    }
		for(i=0;i<c;i++)
		{
			if (alpha==a[i])
		   {	b[i]=a[i];
		flag=1;
			ans++;
			 }
		}
		clrscr();
		printf("\n\n\n\n\n\t\t\t ** HANGMAN ** \n");
		printf("\n\n\t\t\t**************\t\t\t");
		printf("\n\n\t\t\t..............\n\n\t\t\t ");
		for(i=0;i<c;i++)
		printf("%c ",b[i]);
		printf("\n\n\t\t\t..............\t\t\t");
		printf("\n\n\t\t\t**************");

		if(flag==0)
		{
		count++;
		printf("\n\n\n\n\t\t%c is a wrong guess",alpha);
		printf("\n\n\t\t (u have %d more guesses)",6-count);
		   if(count==1)
			 {
			 setcolor(RED);
			 circle(450,250,30);
			 }
		   else if(count==2)
		      {
			 circle(450,250,30);
			 line(450,280,450,380);
		      }
		  else if(count==3)
		      {
			 circle(450,250,30);
			 line(450,280,450,380);
			 line(450,295,420,330);
			 line(450,295,480,330);
		       }
		  else if(count==4)
		      {
			circle(450,250,30);
			 line(450,280,450,380);
			 line(450,295,420,330);
			 line(450,295,480,330);
			 line(450,380,420,415);
			 line(450,380,480,415);
		       }
		  else if(count==5)
		       {
			 circle(450,250,30);
			 line(450,280,450,380);
			 line(450,295,420,330);
			 line(450,295,480,330);
			 line(450,380,420,415);
			 line(450,380,480,415);
			 line(550,180,550,415);
			 line(450,180,550,180);
			 line(530,180,550,185);
		       }
		 else if(count==6)
		      {
			 circle(450,250,30);
			 line(450,280,450,380);
			 line(450,295,420,330);
			 line(450,295,480,330);
			 line(450,380,420,415);
			 line(450,380,480,415);
			 line(550,180,550,415);
			 line(450,180,550,180);
			 line(530,180,550,185);
			 line(450,220,450,180);

		       }
		       else
		       ;
		       }
		else
		{
		printf("\n\n\n\t\t you r correct!!");
	   }
		if(ans==c) break;
 }
if(ans==c)
{
 printf("\n\n\n\t YOU WON!!");
 }
else{
printf("\n\n\t\t  YOU LOSE.\n\n \t\t **SORRY  U R HANGED**\n\n\t\tANSWER:");
for(i=0;i<c;i++)
printf("%c",a[i]);
  }
getch();
closegraph();
}

