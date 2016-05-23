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
