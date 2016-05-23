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
