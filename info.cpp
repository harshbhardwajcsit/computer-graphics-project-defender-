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
