#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<process.h>
#include<math.h>
#include<iostream.h>
#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define GroundY ScreenHeight*0.75
       void game();
       void info();
       void rain(int );
       int i,j,ch,x,y,n,m,score=0;
       char choice;
       void gameover();
       void main()
       {
       int gd=DETECT,gm;
    int score=0;/// x=0,y=-1,
    int i=500,j=900;//m=200,n=200;
	char ch;
	    // void *ball;
     initgraph(&gd,&gm,"c:\\tc\\bgi");
    setfillstyle(SOLID_FILL,8);
    setbkcolor(BLUE);

    setcolor(RED);
    line(100,100,500,100);
    setcolor(GREEN);
    line(100,100,100,300);
    setcolor(RED);
    line(100,300,500,300);
    setcolor(GREEN);
    floodfill(400,300,RED);
    line(500,100,500,300);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,8);
    outtextxy(170,130,"WELCOME TO THE  ADVENTURE GAME");
    //setcolor(RED);
    outtextxy(150,150,"A COMPUTER GRAPHICS COURSE PROJECT");
    outtextxy(270,180,"MADE BY");
    outtextxy(240,200,"HARSH BHARDWAJ");
   // delay(2000);
   setcolor(WHITE);
    outtextxy(150,270,"<<Exit");
    outtextxy(400,270,">>proceed");
    choice=getch();
    if((choice=='e')||(choice=='E'))
    {
    exit(0);
    }

      if((choice=='p')||(choice=='P'))
    {
    info();
    }



		     getch();
    }
     void game()
  {
  //bar(50,60,100,150);
  i=500,900;
  setcolor(BLUE);
//delay(500000);
setbkcolor(BLACK);
    while(1)
    {
    //rain(x);
   int rx=rand()% ScreenWidth;
//int ry=rand()% ScreenHeight;
    //line(100,300,500,300);
  //  bar(50,60,70,150);
//    bar(50,150,150,180);
    //bar(150,80,1500,110);
    //bar(50,180,600,210);
   // bar(200,150,600,300);
   bar(500,90,520,300);
   for(int k=50;k<1000;k+=50)
   {
   circle(k,60,5);
   }
   for(int r=50;r<1000;r+=10)
   {
   putpixel(r,60,15);
   }
    for(int p=0;p<500;p+=50)
   {
   circle(p,100,5);
   }
    for(int q=0;q<500;q+=10)
   {
   putpixel(q,100,15);
   }

    circle(i,j,12);

   // circle(rx,200,5);
    outtextxy(400,400,"PRESS<Esc>to exit");

   // circle(rx,80,5);
   // delay(1000);

if(i>50&&i<1000)
{
if(j==60)
{
 gameover();
}
}
if(i>0&&i<500)
{
if(j==100)
{
gameover();
}
}
    score+=1;

   // int p=30;
    if(kbhit())
    {
     ch=getch();

    if(ch==72)  //upaward
    {
    x=0;
    y=-1;

    }

     if(ch==75)
    {                    //left
    y=0;
    x=-1;

    }


     if(ch==80)                //down
    {
    x=0;
    y=1;
 }

    if(ch==77)                       //right
    {
    x=1;

    y=0;
    }


     if(ch==27)

    exit(0);



    }
    i=i+x;
    j=j+y;
    delay(10);
    cleardevice();
    }

}
void info()
{
   cleardevice();

   sound(300);
   delay(70);
   sound(100);
  // delay();

 setcolor(RED);
    line(100,100,500,100);
    setcolor(GREEN);
    line(100,100,100,300);
    setcolor(RED);
    line(100,300,500,300);
    setcolor(GREEN);
    line(500,100,500,300);
    setcolor(WHITE);
    outtextxy(150,150,"use UPWARD ARROW to move up");
    outtextxy(150,180,"use DOWNWARD ARROW to move down");
    outtextxy(150,210,"use RIGHT ARROW to move right");
    outtextxy(150,240,"use LRFT ARROW to move up");
    outtextxy(150,270,"<<back");
    outtextxy(400,270,">>play");
    choice=getch();
    if((choice=='b')||(choice=='B'))
    {
    main();
    }
    if((choice=='p')||(choice=='P'))
    {
    //rain(x);
    //delay(1000);
    game();
    }


}

void rain(int x )
{
int i,rx,ry;
for(i=0;i<400;i++)
{
rx=rand()% ScreenWidth;
ry=rand()% ScreenHeight;
if(ry<GroundY-120||(ry>GroundY-120&&(rx<x-20||rx>x+60)))
line(rx,ry,rx+0.5,ry+4);
}}
void gameover()
{

for(j=0;j<=320;j+=50)
    {
     setfillstyle(1,j);
     bar(j,0,j+50,480);
     bar(640-j,0,(640-j)-50,480);
     delay(50);
    }
    setcolor(4);
    settextstyle(1,0,5);
    outtextxy(220,220,"Game Over");
    settextstyle(1,0,2);
    setcolor(BLACK);

     gotoxy(240,400) ;
     cout<<"your score="<<score;
    do
    {
     sound(300);
     delay(50);
     sound(100);
     delay(100);
     sound(200);
     delay(50);
    }

    while(!kbhit());
    nosound();
    exit(0);
   }
