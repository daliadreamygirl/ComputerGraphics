#include <iostream>
#include<graphics.h>
using namespace std;

int main(int argc, char *argv[])
{
    int choice, gd,gm;

    do
    {
        cout << "Main Menu\n";
        cout << "Please Choose any Option: \n";
        cout << "1 - Emoji\n";
        cout << "2 - Car\n";
        cout << "3 - House \n";
        cout << "4 - Moving \n";
        cout << "5 - Monitor\n";
        cout << "6 - Boat\n";
        cout << "7 - See my name\n";
        cout << "Selection: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            gd=DETECT,gm;
            initgraph(&gd,&gm," ");

            //head
            setcolor(WHITE);
            setfillstyle(1,YELLOW);
            circle(200,200,100);
            floodfill(200,200,WHITE);

            //eyes
            setfillstyle(1,RED);
            circle(230,170,20);
            floodfill(230,170,WHITE);

            //eyes
            setfillstyle(1,RED);
            circle(170,170,20);
            floodfill(170,170,WHITE);

            setcolor(BLACK);
            ellipse(200,220,180,360,30,20);
            break;
        case 2:
            gd=DETECT,gm;
            initgraph(&gd,&gm," ");
            rectangle(80,250,450,280);
            //top part
            line(200,200,300,200);
            line(200,200,165,250);
            line(300,200,335,250);
            line(250,250,250,200);

            //state line
            line(50,310,470,310);

            //chaka one
            setcolor(RED);
            setfillstyle(1,RED);
            circle(180,290,20);
            floodfill(181,291,RED);

            //chaka two
            setcolor(RED);
            setfillstyle(1,RED);
            circle(350,290,20);
            floodfill(350,291,RED);
            break;

        case 3:
            gd=DETECT,gm;
            initgraph(&gd,&gm," ");

            // Big Rectangle
            setcolor(WHITE);
            setfillstyle(1,YELLOW);
            rectangle(50,200,250,400);
            floodfill(52,205,WHITE);

            //small Rectangle
            setcolor(LIGHTGRAY);
            setfillstyle(2,LIGHTGRAY);
            rectangle(110,300,180,399);
            floodfill(111,305,LIGHTGRAY);

            //line
            setcolor(RED);
            setfillstyle(1,RED);
            line(50,200,250,200);
            line(50,200,150,150);
            line(250,200,150,150);
            floodfill(102,190,RED);
            break;

        case 4:
            gd = DETECT, gm;
            initgraph(&gd, &gm, "");
            initwindow(1000, 800, "Moving House");

            for (int i = 0; i <= 1000; i += 10)
            {
                setcolor(WHITE);
                line(0, 500, 1000, 500); // base line

                // House structure
                line(50 + i, 310, 10 + i, 400);
                line(50 + i, 310, 90 + i, 400);
                line(10 + i, 400, 90 + i, 400);

                setfillstyle(SOLID_FILL, RED);
                floodfill(50 + i, 320, WHITE);

                line(10 + i, 400, 10 + i, 490);
                line(10 + i, 400, 100 + i, 400);
                line(10 + i, 490, 100 + i, 490);
                line(100 + i, 400, 100 + i, 490);

                setfillstyle(SOLID_FILL, GREEN);
                floodfill(50 + i, 410, WHITE);

                delay(100);
                cleardevice();
            }

            closegraph();

            break;


        case 5:

            gd=DETECT,gm;
            initgraph(&gd,&gm," ");
            //upper
            rectangle(100,100,350,350);

            circle(235,170,20);

            // down
            ellipse(230,410,360,360,25,25);
            //line
            line(205,415,205,350);
            line(255,415,255,350);
            // down
            ellipse(230,410,360,360,25,25);
            //line
            line(205,415,205,350);
            line(255,415,255,350);
            //traffic
            rectangle(200,140,270,320);

            setcolor(GREEN);
            setfillstyle(1,GREEN);
            circle(235,170,20);
            floodfill(236,171,GREEN);

            setcolor(YELLOW);
            setfillstyle(1,YELLOW);
            circle(235,225,20);
            floodfill(236,226,YELLOW);

            setcolor(BLACK);
            setfillstyle(1,BLACK);
            circle(235,170,20);
            floodfill(236,281,BLACK);

            setcolor(RED);
            setfillstyle(1,RED);
            circle(235,280,20);
            floodfill(236,281,RED);

            //middle
            setcolor(WHITE);
            setfillstyle(1,WHITE);
            rectangle(110,110,340,340);
            floodfill(111,111,WHITE);

            break;


        case 6:
            gd=DETECT,gm;
            initgraph(&gd,&gm," ");

            //sky
            setcolor(BLUE);
            setfillstyle(1,BLUE);
            rectangle(0,0,635,479);
            floodfill(1,1,BLUE);

            //water
            setcolor(LIGHTBLUE);
            setfillstyle(3,LIGHTBLUE);
            rectangle(0,220,635,479);
            floodfill(1,221,LIGHTBLUE);

            // sun
            setcolor(LIGHTRED);
            setfillstyle(1,LIGHTRED);
            circle(400,50,30);
            floodfill(401,51,LIGHTRED);

            // flag
            setcolor(GREEN);
            setfillstyle(1,GREEN);
            rectangle(160,100,330,200);
            floodfill(161,101,GREEN);

            //flag circle
            setcolor(RED);
            setfillstyle(1,RED);
            circle(245,150,20);
            floodfill(245,150,RED);

            // flag stand
            setcolor(BROWN);
            setfillstyle(1,BROWN);
            line(235,250,235,200);
            line(255,250,255,200);
            line(235,250,255,250);
            line(235,200,255,200);
            floodfill(236,202,BROWN);

            // boat top part
            setcolor(WHITE);
            setfillstyle(1,YELLOW);
            line(150,300,190,250);
            line(330,300,290,250);
            line(190,250,290,250);
            line(150,300,330,300);
            floodfill(320,298,WHITE);

            // boat down part
            setcolor(WHITE);
            setfillstyle(1,LIGHTGRAY);
            line(100,300,400,300);
            line(100,300,160,380);
            line(400,300,320,380);
            line(160,380,320,380);
            floodfill(201,308,WHITE);
            break;
        case 7:

            gd = DETECT, gm;
            initgraph(&gd, &gm, "");

            ellipse(50, 55, 0, 180, 20, 45);
            ellipse(50, 55, 180, 360, 20, 45);
            line(30, 10, 30, 100);
            line(30, 10, 50, 10);
            line(30, 100, 50, 100);

            line(70, 100, 90, 10);
            line(90, 10, 110, 100);
            line(80, 55, 100, 55);

            line(130, 10, 130, 100);
            line(130, 100, 150, 100);

            line(170, 10, 170, 100);

            line(190, 100, 210, 10);
            line(210, 10, 230, 100);
            line(200, 55, 220, 55);

            getch();
            closegraph();

            break;









        default:
            cout << "Main Menu\n";
            cout << "Please Choose any Option: \n";
            cout << "1 - Emoji\n";
            cout << "2 - Car\n";
            cout << "3 - House \n";
            cout << "4 - Moving \n";
            cout << "5 - Monitor\n";
            cout << "6 - Boat \n";
            cout << "7 - See my name\n";
            cout << "Selection: ";
        }
    }
    while(choice !=6);
    system("PAUSE");
    return EXIT_SUCCESS;

    getch();
    closegraph();
}


