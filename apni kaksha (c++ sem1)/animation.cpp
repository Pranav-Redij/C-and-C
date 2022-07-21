#include<graphics>
 main()
{
    intitwindow(1000,500);
    for(int i=0;i<900;i++)
    {
        circle(100+i,250,50)
        delay(100);
        cleardevice();
    }
}