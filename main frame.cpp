//MAX FILE
//MAX FILE
#include<iostream>
#include<string>
#include<fstream>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define _WIN32_WINNT 0x0500
#include<windows.h>
#include<ctime>
#include<graphics.h>
#include<dos.h>
#include<_mingw.h>
#include<MMSystem.h>
#include<cwchar>
#include<Mmsystem.h>
#include<audevcod.h>
#pragma comment(lib, "Winmm.lib")
using namespace std;
string name;
float lifescore=0;
int schoolscore=0;
int collegepoints=0;
float bankaccount=0;


//void loadscreen()
/*{
    for(int i=0; i<=2; i++)
    {
              cout<<R"(
                     ╔════╤╤╤╤════╗
                     ║    │││ \   ║
                     ║    │││  O  ║
                     ║    OOO     ║
                     ║            ║
                     ║            ║
                     ║            ║

                     l o a d i n g .)";
             Sleep(200);
             system("clear");
             cout<<R"(
                     ╔════╤╤╤╤════╗
                     ║    ││││    ║
                     ║    ││││    ║
                     ║    OOOO    ║
                     ║            ║
                     ║            ║
                     ║            ║

                     l o a d i n g   .)";
             Sleep(200);
             system("clear");
             cout<<R"(
                     ╔════╤╤╤╤════╗
                     ║   / │││    ║
                     ║  O  │││    ║
                     ║     OOO    ║
                     ║            ║
                     ║            ║
                     ║            ║

                     l o a d i n g     .)";
             Sleep(200);
             system("clear");
             cout<<R"(
                     ╔════╤╤╤╤════╗
                     ║    ││││    ║
                     ║    ││││    ║
                     ║    OOOO    ║
                     ║            ║
                     ║            ║
                     ║            ║

                     l o a d i n g .)";
             Sleep(200);
             system("clear");

    }

}*/

void loadscreen()
{
//PlaySound("Name.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
//PlaySound("Name.wav", GetModuleHandle(NULL), SND_FILENAME);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
 cout<<"\n\n\n\n\n\a\t\t\t\tLoading game...\n\n";
 char a=177, b=219;
 cout<<"\t\t\t\t";
 for (int i=0;i<=15;i++)
 cout<<a;
 cout<<"\r";
 cout<<"\t\t\t\t";
 for (int i=0;i<=15;i++)
 {
  cout<<b;
  Sleep(500);
 }

 system("cls");
}

void schoolmenu()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    cout<<endl<<"School choices"<<endl<<endl;
    cout<<"1. Study"<<endl<<"2. Give a test"<<endl<<"3. Join a club"<<endl<<"4. Learn a new language"<<endl<<"5. Play tic-tac-toe"<<endl<<"6. Doze off in class"<<endl<<endl;
}
void collegemenu()
{
    cout<<endl<<"College options"<<endl<<endl;
    cout<<"1. Attend lecture"<<endl<<"2. Party"<<endl<<"3. Work on a project"<<endl<<"4. Go late to class"<<endl<<"5. Work a part time job"<<endl<<"6. Shop"<<endl<<endl;
}

void collgepartymenu()
{
    cout<<endl<<"Party choices"<<endl<<endl;
    cout<<"1. Introduce yourself"<<endl<<"2. Dance"<<endl<<"3. Perform a party trick"<<endl<<endl;
}
int studyland(){
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                            cout<<endl<<endl<<"Choose what to study"<<endl<<endl;
                            cout<<"a. Math"<<endl<<"b. English"<<endl<<"c. Science"<<endl<<"d. History"<<endl;
                            int studys=1;

                            cout<<"You can only study 3 subjects due to a time constraint...(Tip: It's better to study subjects you are weak at)"<<endl;
                            for (int g=1; g<=3; g++)
                            {
                                          char sub_choice;

                                          cout<<endl<<endl<<"Enter subject "<<g<<"'s character"<<endl<<endl;

                                          cin>>sub_choice;
                                          switch(sub_choice)
                                           {
                                            case 'a'://Math
                                            cout<<endl<<endl<<"Math Class: Let's learn Factorials!"<<endl<<endl;
                                            Sleep(2000);
                                            cout<<"Factorials are very simple things. They're just products, indicated by an exclamation mark."<<endl;
                                            cout<<"For instance, 'four factorial' is written as '4!' and means 1x2x3x4=24."<<endl<<"In general, n! (enn factorial) means the product of all the whole numbers from 1 to n; that is, n! = 1x2x3x...xn."<<endl;
                                            cout<<"(For various reasons, 0! is defined to be equal to 1, not 0. Memorize this now: 0!=1.) Thus 6!= 1x2x3x4x5x6=720"<<endl<<endl;
                                            Sleep(2000);
                                            cout<<"You've studied math."<<endl<<endl;
                                            schoolscore= schoolscore + 600;
                                            break;
                                            case 'b'://English
                                            cout<<endl<<endl<<"English Class: Let's learn Literary Devices!"<<endl<<endl;
                                            Sleep(2000);
                                            cout<<"Alliteration is a literary device where words are used in quick succession and begin with letters belonging to the same sound group."<<endl;
                                            cout<<"Whether it is the consonant sound or a specific vowel group, the alliteration involves creating a repetition of similar sounds in the sentence."<<endl;
                                            cout<<"Example: The Wicked Witch of the West went her own way. (The ‘W’ sound is repeated throughout the sentence."<<endl<<endl;
                                            Sleep(2000);
                                            cout<<"A hyperbole is a literary device wherein the author uses specific words and phrases that exaggerate and overemphasize the basic crux of the statement in order to produce a grander, more noticeable effect."<<endl;
                                            cout<<"The purpose of hyperbole is to create a larger-than-life effect and overly stress a specific point."<<endl;
                                            cout<<"Example: I am so tired I can't even walk an inch or I am so hungry I can eat an elephant"<<endl<<endl;
                                            Sleep(2000);
                                            cout<<"An imagery is one of the strongest devices is imagery wherein the author uses words and phrases to create “mental images” for the reader. Imagery helps the reader to visualize more realistically the author’s writings."<<endl;
                                            cout<<"Example: The gushing brook stole its way down the lush green mountains, dotted with tiny flowers in a riot of colors and trees coming alive with gaily chirping birds."<<endl<<endl;
                                            Sleep(2000);
                                            cout<<"Onomatopoeia refer to words whose very sound is very close to the sound they are meant to depict."<<endl;
                                            cout<<"Example: Grunt, huff, buzz, snap etc."<<endl<<endl;
                                            Sleep(2000);
                                            cout<<"You've studied English."<<endl<<endl;
                                            schoolscore= schoolscore + 300;
                                            break;
                                            case 'c'://Science
                                            cout<<endl<<endl<<"Science Class: Let's learn about Light!"<<endl<<endl;
                                            Sleep(2000);
                                            cout<<"Light is electromagnetic radiation within a certain portion of the electromagnetic spectrum."<<endl;
                                            cout<<"The word usually refers to visible light, which is the visible spectrum that is visible to the human eye and is responsible for the sense of sight."<<endl;
                                            cout<<"Visible light is usually defined as having wavelengths in the range of 400 to 700 nanometres (nm)."<<endl;
                                            cout<<"The main source of light on Earth is the Sun."<<endl;
                                            cout<<"Sunlight provides the energy that green plants use to create sugars mostly in the form of starches, which release energy into the living things that digest them."<<endl;
                                            cout<<"Light behaves like a particle and wave."<<endl;
                                            cout<<"This dual wave-like and particle-like nature of light is known as the wave–particle duality."<<endl<<endl;
                                            Sleep(2000);
                                            cout<<"You've studied Science"<<endl<<endl;
                                            schoolscore= schoolscore + 700;

                                            break;
                                            case 'd'://History
                                            cout<<endl<<endl<<"History Class: Let's learn about the French Revolution!"<<endl<<endl;
                                            Sleep(2000);
                                            cout<<"The French Revolution was a period of far-reaching social and political upheaval in France and its colonies that lasted from 1789 until 1799."<<endl;
                                            cout<<"It was partially carried forward by Napoleon during the later expansion of the French Empire."<<endl;
                                            cout<<"Historians widely regard the Revolution as one of the most important events in human history."<<endl;
                                            cout<<"The causes of the revolution were the rising social and economic inequalities."<<endl;
                                            cout<<"France was experiencing such a severe economic depression that there wasn't enough food to go around."<<endl;
                                            cout<<"Poor harvests lasting several years and an inadequate transportation system both contributed to making food more expensive."<<endl<<endl;
                                            Sleep(2000);
                                            cout<<"You've studied Science"<<endl<<endl;
                                            schoolscore+=400;
                                            break;
                                            default: cout<<"You should've chosen a valid option.";
                                            }

                            }

                    }
string testrun;
void testland()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout<<endl<<endl<<"Test rules: +5 for a correct answer and -2 for a wrong answer"<<endl<<endl;
    Sleep(1500);
    cout<<endl<<endl<<"Please answer in characters 'a', 'b', 'c', 'd' or 'e'."<<endl<<endl;

    testrun=("yes");

                     int g;
                     srand(time(0));
                     for(int x = 1; x < 2; x++)
                     {
                             g= 1+(rand()%6);
                     }

                     switch(g)
                     {
                        case 1:
                        cout<<"Q1. What is the value of 3!/4!?"<<endl;
                        char ans1;
                        cout<<"a. 1/4"<<endl;
                        cout<<"b. 3"<<endl;
                        cout<<"c. 5"<<endl;
                        cout<<"d. 4!"<<endl;
                        cout<<"e. irrational"<<endl;
                        cin>>ans1;
                        if (ans1=='a')schoolscore=schoolscore + 500;
                        else schoolscore= schoolscore - 200;


                        cout<<endl<<endl;


                        break;

                        case 2:
                        cout<<"Q1. What is the value of 5!+9!?"<<endl;
                        char ans5;
                        cout<<"a. 14!"<<endl;
                        cout<<"b. 36500"<<endl;
                        cout<<"c. 65000"<<endl;
                        cout<<"d. 36300"<<endl;
                        cout<<"e. too big"<<endl;
                        cin>>ans1;
                        if (ans5=='d')schoolscore=schoolscore + 500;
                        else schoolscore=schoolscore - 200;

                        cout<<endl<<endl;

                        break;

                        case 3:
                        cout<<"Q1. What is the value of 13!-9!?"<<endl;
                        char ans9;
                        cout<<"a. 4!"<<endl;
                        cout<<"b. 6226657820"<<endl;
                        cout<<"c. 6226657920"<<endl;
                        cout<<"d. 7000080000"<<endl;
                        cout<<"e. irrational"<<endl;
                        cin>>ans9;
                        if (ans9=='c')schoolscore=schoolscore + 500;
                        else schoolscore=schoolscore - 200;

                        cout<<endl<<endl;

                        break;

                        case 4:
                        cout<<"Q1. What is the value of 3!^3!?"<<endl;
                        char ans13;
                        cout<<"a. 81"<<endl;
                        cout<<"b. 45565"<<endl;
                        cout<<"c. 46656"<<endl;
                        cout<<"d. 9"<<endl;
                        cout<<"e. irrational"<<endl;
                        cin>>ans13;
                        if (ans13=='c')schoolscore=schoolscore + 500;
                        else schoolscore=schoolscore - 200;

                        cout<<endl<<endl;

                        break;


                        default:
                        cout<<"Q1. What is the value of 3!/4!?"<<endl;
                        char ans17;
                        cout<<"a. 1/4"<<endl;
                        cout<<"b. 3"<<endl;
                        cout<<"c. 5"<<endl;
                        cout<<"d. 4!"<<endl;
                        cout<<"e. irrational"<<endl;
                        cin>>ans17;
                        if (ans17=='a')schoolscore=schoolscore + 500;
                        else schoolscore=schoolscore - 200;

                        cout<<endl<<endl;
                      }

                        int h;
                        srand(time(0));
                         for(int y = 1; y < 2; y++)
                         {
                                 h= 1+(rand()%6);
                         }

                     switch(g)
                     {
                        case 1:
                        cout<<"Q2. Dunkin Donuts is a/an"<<endl;
                        char ans2;
                        cout<<"a. Imagery"<<endl;
                        cout<<"b. Alliteration"<<endl;
                        cout<<"c. Hyperbole"<<endl;
                        cout<<"d. Onomatopoeia"<<endl;
                        cout<<"e. Metaphor"<<endl;
                        cin>>ans2;
                        if (ans2=='b')schoolscore=schoolscore + 500;
                        else schoolscore=schoolscore - 200;

                        cout<<endl<<endl;


                        break;

                        case 2:
                        cout<<"Q2. 'Glittering white, the blanket of snow covered everything in sight.' This is the example of a/an"<<endl;
                        char ans6;
                        cout<<"a. Imagery"<<endl;
                        cout<<"b. Alliteration"<<endl;
                        cout<<"c. Hyperbole"<<endl;
                        cout<<"d. Onomatopoeia"<<endl;
                        cout<<"e. Metaphor"<<endl;
                        cin>>ans6;
                        if (ans6=='a')schoolscore=schoolscore + 500;
                        else schoolscore=schoolscore - 200;

                        cout<<endl<<endl;

                        break;

                        case 3:
                        cout<<"Q2. 'I have a ton of homework' is an example of a/an"<<endl;
                        char ans10;
                        cout<<"a. Imagery"<<endl;
                        cout<<"b. Alliteration"<<endl;
                        cout<<"c. Hyperbole"<<endl;
                        cout<<"d. Onomatopoeia"<<endl;
                        cout<<"e. Metaphor"<<endl;
                        cin>>ans10;
                        if (ans10=='c')schoolscore=schoolscore + 500;
                        else schoolscore=schoolscore - 200;

                        cout<<endl<<endl;

                        break;

                        case 4:
                        cout<<"Q2. Gurgle is an example of a/an"<<endl;
                        char ans14;
                        cout<<"a. Imagery"<<endl;
                        cout<<"b. Alliteration"<<endl;
                        cout<<"c. Hyperbole"<<endl;
                        cout<<"d. Onomatopoeia"<<endl;
                        cout<<"e. Metaphor"<<endl;
                        cin>>ans14;
                        if (ans14=='d')schoolscore=schoolscore + 500;
                        else schoolscore=schoolscore - 200;

                        cout<<endl<<endl;

                        break;


                        default:
                         cout<<"Q2. 'Glittering white, the blanket of snow covered everything in sight.' This is the example of a/an"<<endl;
                        char ans18;
                        cout<<"a. Imagery"<<endl;
                        cout<<"b. Alliteration"<<endl;
                        cout<<"c. Hyperbole"<<endl;
                        cout<<"d. Onomatopoeia"<<endl;
                        cout<<"e. Metaphor"<<endl;
                        cin>>ans18;
                        if (ans18=='a')schoolscore=schoolscore + 500;
                        else schoolscore=schoolscore - 200;

                        cout<<endl<<endl;

                      }

                       int f;
                       srand(time(0));
                       for(int z = 1; z < 2; z++)
                       {
                          f= 1+(rand()%6);
                       }

                     switch(g)
                     {
                        case 1:
                        cout<<"Q3. Light has"<<endl;
                        char ans19;
                        cout<<"a. Particle nature"<<endl;
                        cout<<"b. Wave nature"<<endl;
                        cout<<"c. Particle and wave nature"<<endl;
                        cout<<"d. No nature"<<endl;
                        cout<<"e. Undetermined nature"<<endl;
                        cin>>ans19;
                        if (ans19=='c')schoolscore=schoolscore + 500;
                        else schoolscore=schoolscore - 200;

                        cout<<endl<<endl;

                        break;

                        case 2:
                        cout<<"Q3. The main source of light on the earth is"<<endl;
                        char ans15;
                        cout<<"a. The sun"<<endl;
                        cout<<"b. The moon"<<endl;
                        cout<<"c. The infinite stars of the galaxy"<<endl;
                        cout<<"d. Light bulbs"<<endl;
                        cout<<"e. God"<<endl;
                        cin>>ans15;
                        if (ans15=='d')schoolscore=schoolscore + 500;
                        else schoolscore=schoolscore - 200;

                        cout<<endl<<endl;

                        break;

                        case 3:

                        cout<<"Q3. Light is a/an"<<endl;
                        char ans11;
                        cout<<"a. Electronic radiation"<<endl;
                        cout<<"b. Electro-magnetic radiation"<<endl;
                        cout<<"c. Magnetic radiation"<<endl;
                        cout<<"d. Source of potential energy"<<endl;
                        cout<<"e. All of the above"<<endl;
                        cin>>ans11;
                        if (ans11=='b')schoolscore=schoolscore + 500;
                        else schoolscore=schoolscore - 200;

                        cout<<endl<<endl;

                        break;

                        case 4:
                        cout<<"Q3. Light has"<<endl;
                        char ans7;
                        cout<<"a. Particle nature"<<endl;
                        cout<<"b. Wave nature"<<endl;
                        cout<<"c. Particle and wave nature"<<endl;
                        cout<<"d. No nature"<<endl;
                        cout<<"e. Undetermined nature"<<endl;
                        cin>>ans7;
                        if (ans7=='c')schoolscore=schoolscore + 500;
                        else schoolscore=schoolscore - 200;

                        cout<<endl<<endl;

                        break;


                        default:
                        cout<<"Q3. The wavelength of light ranges from"<<endl;
                        char ans3;
                        cout<<"a. 4-7 angstroms"<<endl;
                        cout<<"b. 10-15 nanometers"<<endl;
                        cout<<"c. 7-9 nanometers"<<endl;
                        cout<<"d. 4-7x10^(-7) meters"<<endl;
                        cout<<"e. 3x10^(8)m/s"<<endl;
                        cin>>ans3;
                        if (ans3=='d')schoolscore=schoolscore + 500;
                        else schoolscore=schoolscore - 200;

                        cout<<endl<<endl;
                      }


                        int i;
                           srand(time(0));
                           for(int s = 1; s < 2; s++)
                           {
                              i= 1+(rand()%6);
                           }

                     switch(i)
                     {
                        case 1:
                        cout<<"Q4. The French Revolution started around the year"<<endl;
                        char ans4;
                        cout<<"a. 1799"<<endl;
                        cout<<"b. 1755"<<endl;
                        cout<<"c. 1789"<<endl;
                        cout<<"d. 1788"<<endl;
                        cout<<"e. 2018"<<endl;
                        cin>>ans4;
                        if (ans4=='c')schoolscore=schoolscore + 500;
                        else schoolscore=schoolscore - 200;
                        break;

                        cout<<endl<<endl;

                        break;

                        case 2:
                        cout<<"Q4. A main figure in the French Revolution was"<<endl;
                        char ans8;
                        cout<<"a. Thomas Jefferson"<<endl;
                        cout<<"b. Abraham Lincoln"<<endl;
                        cout<<"c. Denzel Washington"<<endl;
                        cout<<"d. Napoleon"<<endl;
                        cout<<"e. Queen Elizabeth"<<endl;
                        cin>>ans8;
                        if (ans8=='d')schoolscore=schoolscore + 500;
                        else schoolscore=schoolscore - 200;


                        cout<<endl<<endl;

                        break;

                        case 3:

                        cout<<"Q4. The French Revolution was mainly due to "<<endl;
                        char ans12;
                        cout<<"a. The rising social injustice"<<endl;
                        cout<<"b. The new political image of the era"<<endl;
                        cout<<"c. Napoleon fanicied a revolution"<<endl;
                        cout<<"d. The rising social and economic inequalities"<<endl;
                        cout<<"e. None of the above"<<endl;
                        cin>>ans12;
                        if (ans12=='d')schoolscore=schoolscore + 500;
                        else schoolscore=schoolscore - 200;

                        cout<<endl<<endl;

                        break;

                        case 4:
                        cout<<"Q4. The French Revolution gave birth to an economic depression due to the fact that"<<endl;
                        char ans16;
                        cout<<"a. There were not enough coins"<<endl;
                        cout<<"b. The currency's value had suddenly dropped in the market"<<endl;
                        cout<<"c. Food scarcity"<<endl;
                        cout<<"d. The wars"<<endl;
                        cout<<"e. Napoleon wanted to feel rich"<<endl;
                        cin>>ans16;
                        if (ans16=='c')schoolscore=schoolscore + 500;
                        else schoolscore=schoolscore - 200;


                        cout<<endl<<endl;

                        break;


                        default:

                        cout<<"Q4. The French Revolution started around the year"<<endl;
                        char ans20;
                        cout<<"a. 1799"<<endl;
                        cout<<"b. 1755"<<endl;
                        cout<<"c. 1789"<<endl;
                        cout<<"d. 1788"<<endl;
                        cout<<"e. 2018"<<endl;
                        cin>>ans20;
                        if (ans20=='c')schoolscore=schoolscore + 500;
                        else schoolscore=schoolscore - 200;

                        cout<<endl<<endl;
                      }

}

void clubland()
{
                            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                            cout<<"Enter the corresponding club's number to which you want to sign up to, you can only sign up to 3 clubs"<<endl<<endl;
                            for(int aa=0; aa<=2; aa++)
                            {       cout<<endl<<"Clubs options:"<<endl;
                                    int clubchoice;
                                    cout<<"1. Basketball Club"<<endl<<"2. Swimming Club"<<endl<<"3. Football Club"<<endl<<"4. Volleyball Club"<<endl<<"5. Cricket Club"<<endl<<"6. Choir"<<endl<<"7. Dramatics Club"<<endl<<"8. Wood Shop"<<endl<<"9. Robotics Club"<<endl<<"10. Art Club"<<endl<<"11. Debate Club"<<endl<<"12. Culinary Club"<<endl<<"13. Dance Club"<<endl<<"14. Fight Club"<<endl<<endl;
                                    cin>>clubchoice;
                                    schoolscore= schoolscore + 500;

                                    cout<<"You have successfully joined the club. This shall help you in a later stage of life.";
                            }
}

void languageland()
{
    int g;
    srand(time(0));

    for(int x = 1; x < 2; x++)
                 {
                         g= 1+(rand()%8);
                 }
        string language;

            switch(g)
            {
                    case 1:
                        language= ("Arabic");
                        schoolscore=schoolscore + 500;
                        break;
                    case 2:
                        language=("Spanish");
                        schoolscore=schoolscore + 800;
                        break;
                    case 3:
                        language=("French");
                        schoolscore=schoolscore + 700;
                        break;
                    case 4:
                        language=("Japanese");
                        schoolscore=schoolscore + 1000;
                        break;
                    case 5:
                        language=("German");
                        schoolscore=schoolscore + 500;
                        break;
                    case 6:
                        language=("Portugese");
                        schoolscore=schoolscore + 300;
                        break;
                    case 7:
                        language=("Mandarin");
                        schoolscore=schoolscore + 900;
                        break;
                    default: language=("Hindi");
            }

            cout<<"You have learnt "<<language<<" quite fluently."<<endl;
            cout<<"This shall help you in life."<<endl<<endl;

}
void dozeland(){

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
cout<<R"(
$$$$$$$$\                     $$$$$$$$\
\____$$  |                    \____$$  |
    $$  / $$$$$$$$\ $$$$$$$$\     $$  / $$$$$$$$\ $$$$$$$$\
   $$  /  \____$$  |\____$$  |   $$  /  \____$$  |\____$$  |
  $$  /     $$$$ _/   $$$$ _/   $$  /     $$$$ _/   $$$$ _/
 $$  /     $$  _/    $$  _/    $$  /     $$  _/    $$  _/
$$$$$$$$\ $$$$$$$$\ $$$$$$$$\ $$$$$$$$\ $$$$$$$$\ $$$$$$$$\ $$\ $$\ $$\
\________|\________|\________|\________|\________|\________|\__|\__|\__|



)"<<endl<<endl;

srand(time(0));
                int ab;
                 for(int y = 1; y < 2; y++)
                 {
                         ab= 1+(rand()%7);
                 }

switch(ab){
            case 1:cout<<"You were caught while sleeping"<<endl;
                   schoolscore=schoolscore -500;
                   break;
            case 2:cout<<"You were caught while sleeping"<<endl;
                   schoolscore=schoolscore-500;
                   break;
            case 3:cout<<"You were not caught while sleeping"<<endl;
                   schoolscore=schoolscore + 700;
                   break;
            case 4:cout<<"You were caught while sleeping"<<endl;
                   schoolscore=schoolscore-500;
                   break;
            case 5:cout<<"You were not caught while sleeping"<<endl;
                   schoolscore=schoolscore + 700;
                   break;
            default:cout<<"You were caught while sleeping"<<endl;


    }
}

void sleeps(float x)
{
   for(int aa=0; aa<=x; aa++);
}

void lectureattend()
{
                     int g;
                     srand(time(0));
                     for(int x = 1; x < 2; x++)
                     {
                             g= 1+(rand()%5);
                     }
                     switch(g)
                     {
                        case 1: cout<<endl<<"It's a good choice attending this lecture.";
                                collegepoints= collegepoints+600;
                                break;
                        case 2: cout<<endl<<"You seem to be getting along well with your professors.";
                                collegepoints= collegepoints+500;
                                break;
                        case 3: cout<<endl<<"You'll pass your exams quite easily.";
                                collegepoints= collegepoints+400;
                                break;
                        case 4: cout<<endl<<"You attended a lecture. Good job.";
                                collegepoints= collegepoints+300;
                                break;
                        default: cout<<endl<<"You attended a lecture. Good job.";
                                 collegepoints= collegepoints+600;


                     }


}
int countparty=0;

void collegeparty()
{
    if (countparty==0)
        {
            cout<<endl<<endl<<"Welcome to your first college party."<<endl<<"Enjoy!";
        }
   countparty++;
   int partychoice;
   collgepartymenu();
   cin>>partychoice;
   switch(partychoice)
   {
    case 1: //introducing yourself
            string gender2;
            string name2;
            int a;
            srand(time(0));
            for(int j = 1; j < 2; j++)
                         {
                                 a= 1+(rand()%7);
                         }
            switch(a)
            {
            case 1:
                gender2= ("Male") ;
                break;
            case 2:
                gender2=("Female");
                break;
            case 3:
                gender2=("Male");
            case 4:
                gender2=("Female");
            case 5:
                gender2=("Male");
            case 6:
                gender2=("Female");
            case 7:
                gender2=("Male");
            default: gender2=("Female");

            }
            int b;
            for(int k = 1; k < 2; k++)
                         {
                                 b= 0+(rand()%7);
                         }
            string location2;
            int locationscore2;
            switch(b)
            {
                case 1:
                     location2=("Australia");
                     locationscore2=300;
                     break;

                case 2:
                     location2=("Dubai");
                     locationscore2=500;
                     break;
                case 3:
                     location2=("Singapore");
                     locationscore2=600;
                     break;
                case 4:
                     location2=("Los Angeles");
                     locationscore2=400;
                     break;
                case 5:
                     location2=("Sweden");
                     locationscore2=400;
                     break;
                case 6:
                     location2=("Canada");
                     locationscore2=700;
                     break;
                case 7:
                     location2=("Tokyo");
                     locationscore2=800;
                     break;
                default: location2=("India");
             }
               if (gender2=="Male")
            {
                 srand(time(0));
                    int c;
                for(int l = 1; l < 2; l++)
                             {
                                     c= 0+(rand()%7);
                             }
                    switch(c)
                {
                    case 1:
                         name2=("Jake Orlando");
                         break;
                    case 2:
                         name2=("Josh Pyke");
                         break;
                    case 3:
                         name2=("Felix Arvid Ulf Kjellberg");
                         break;
                    case 4:
                         name2=("Ryan Gosling");
                         break;
                    case 5:
                         name2=("Tom Hardy");
                         break;
                    case 6:
                         name2=("Peter Parker");
                         break;
                    case 7:
                         name2=("Yusuf Rashid");
                         break;
                    default: name2=("Tony Stark");
                }
            }

            if (gender2=="Female")
            {
                    int d;
                for(int f = 1; f < 2; f++)
                             {
                                     d= 0+(rand()%7);
                             }
                    switch(d)
                {
                    case 1:
                         name2=("Anne Hall");
                         break;

                    case 2:
                         name2=("Jennifer Kingston");
                         break;
                    case 3:
                         name2=("Julia Baker");
                         break;
                    case 4:
                         name2=("Hailey Baldwin");
                         break;
                    case 5:
                         name2=("Ashley Kutcher");
                         break;
                    case 6:
                         name2=("Scarlet Johansson");
                         break;
                    case 7:
                         name2=("Kaitlyn Keller");
                         break;
                    default: name2=("Natlie Koffman");
                }
            }
            cout<<gender2<<" :";Sleep(200);cout<<"Hey, ";Sleep(200);cout<<"I'm ";Sleep(200);cout<<name2;Sleep(200);cout<<". And ";Sleep(200);cout<<"you ";Sleep(200);cout<<"are?"<<endl;
            string speech1;
            cout<<"You :";
            cin>>speech1;
            if(speech1==name)
            {
                cout<<name2<<": Nice ";
                Sleep(200);
                cout<<"to ";
                Sleep(200);
                cout<<"meet ";
                Sleep(200);
                cout<<"you, ";
                Sleep(200);
                cout<<name;
            }
            else cout<<name2<<": Oh, really.";
}





   }

int death()
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    cout<<R"(
                                           .""--..__
                     _                     []       ``-.._
                  .'` `'.                  ||__           `-._
                 /    ,-.\                 ||_ ```---..__     `-.
                /    /:::\\               /|//}          ``--._  `.
                |    |:::||              |////}                `-. \
                |    |:::||             //'///                    `.\
                |    |:::||            //  ||'The grim             `|
                /    |:::|/        _,-//\  || reaper has come
               /`    |:::|`-,__,-'`  |/  \ || to collect your dead body.
             /`  |   |'' ||           \   |||
           /`    \   |   ||            |  /||
         |`       |  |   |)            \ | || It is quite unfortunate that
        |          \ |   /      ,.__    \| || life had to come to an end in this way.
        /           `         /`    `\   | ||
       |                     /        \  / ||
       |                     |        | /  || You have played a your role quite sufficiently
       /         /           |        `(   || and we can only hope for you to see another day
      /          .           /          )  || in this two dimensional world that recreates life.
     |            \          |     ________||
    /             |          /     `-------.|
   |\            /          |              ||
   \/`-._       |           /              ||
    //   `.    /`           |              ||
   //`.    `. |             \              ||
  ///\ `-._  )/             |              ||
 //// )   .(/               |              ||
 ||||   ,'` )               /              // This is the Game of Life, signing out.
 ||||  /                    /             ||
 `\\` /`                    |             //
     |`                     \            ||
    /                        |           //
  /`                          \         //
/`                            |        ||
`-.___,-.      .-.        ___,'        (/
         `---'`   `'----'`)";


         cout<<"God has signed you a cheque of a life-score of "<<lifescore<<". Maybe some of it shall return back to you as karma";
         return 0;
}

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


int main()
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
  printf("");

    string gender;
    int a;
    srand(time(0));
    for(int j = 1; j < 2; j++)
                 {
                         a= 1+(rand()%7);
                 }
    switch(a)
    {
    case 1:
        gender= ("male") ;
        break;
    case 2:
        gender=("female");
        break;
    case 3:
        gender=("male");
    case 4:
        gender=("female");
    case 5:
        gender=("male");
    case 6:
        gender=("female");
    case 7:
        gender=("male");
    default: gender=("female");
    }

    int b;
    for(int k = 1; k < 2; k++)
                 {
                         b= 0+(rand()%7);
                 }
    string location;
    int locationscore;
    switch(b)
    {
        case 1:
             location=("Australia");
             locationscore=300;
             break;

        case 2:
             location=("Dubai");
             locationscore=500;
             break;
        case 3:
             location=("Singapore");
             locationscore=600;
             break;
        case 4:
             location=("Los Angeles");
             locationscore=400;
             break;
        case 5:
             location=("Sweden");
             locationscore=400;
             break;
        case 6:
             location=("Canada");
             locationscore=700;
             break;
        case 7:
             location=("Tokyo");
             locationscore=800;
             break;
        default: location=("India");
     }




if (gender=="male")
{
     srand(time(0));
        int c;
    for(int l = 1; l < 2; l++)
                 {
                         c= 0+(rand()%7);
                 }
        switch(c)
    {
        case 1:
             name=("Jake Orlando");
             break;
        case 2:
             name=("Josh Pyke");
             break;
        case 3:
             name=("Felix Arvid Ulf Kjellberg");
             break;
        case 4:
             name=("Ryan Gosling");
             break;
        case 5:
             name=("Tom Hardy");
             break;
        case 6:
             name=("Peter Parker");
             break;
        case 7:
             name=("Yusuf Rashid");
             break;
        default: name=("Tony Stark");
    }
}

if (gender=="female")
{
        int d;
    for(int f = 1; f < 2; f++)
                 {
                         d= 0+(rand()%7);
                 }
        switch(d)
    {
        case 1:
             name=("Anne Hall");
             break;

        case 2:
             name=("Jennifer Kingston");
             break;
        case 3:
             name=("Julia Baker");
             break;
        case 4:
             name=("Hailey Baldwin");
             break;
        case 5:
             name=("Ashley Kutcher");
             break;
        case 6:
             name=("Scarlet Johansson");
             break;
        case 7:
             name=("Kaitlyn Keller");
             break;
        default: name=("Natlie Koffman");
    }
}
SetConsoleTitle("Game of Life");
//SMALL_RECT windowSize={0,0,79,24};
//SetConsoleWindowInfo(hConsole,true,&windowSize);
system("mode con COLS=700");
ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);

//SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE),CONSOLE_FULLSCREEN_MODE,0);
/*_CONSOLE_SCREEN_BUFFER_INFO info;

GetConsoleScreenBufferInfo(hConsole,&info);

SMALL_RECT windowMaxSize = {0, 0, info.dwMaximumWindowSize.X-1, info.dwMaximumWindowSize.Y-1};*/
HWND hWnd;
    RECT WinRect;
    hWnd = FindWindow(NULL,
                      "Game of Life");

    GetWindowRect(hWnd,
                  &WinRect);

    MoveWindow(hWnd,
               0,
               0,
               WinRect.right - WinRect.left,
               WinRect.bottom - WinRect.top,
               TRUE);


//system("MODE 650");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
loadscreen();

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
cout<<"You are "<<name <<" of "<<location<<". You are currently 14 years old in the year 2001."<<endl;
cout<<endl;
sleeps(50000);
Sleep(2000);
//add nice font
cout<<"W";
Sleep(200);
cout<<"e";
Sleep(200);
cout<<"l";
Sleep(200);
cout<<"c";
Sleep(200);
cout<<"o";
Sleep(200);
cout<<"m";
Sleep(200);
cout<<"e";
Sleep(200);
cout<<" ";
Sleep(200);
cout<<"t";
Sleep(200);
cout<<"o";
Sleep(200);
cout<<" ";
Sleep(200);
cout<<"t";
Sleep(200);
cout<<"h";
Sleep(200);
cout<<"e";
Sleep(200);
cout<<endl<<endl;
Sleep(1500);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
  printf("");
cout<<R"(
_____/\\\\\\\\\\\\____________________________________________________________________________/\\\\\______/\\\__________________________/\\\\\________________
 ___/\\\//////////___________________________________________________________________________/\\\///______\/\\\________________________/\\\///_________________
  __/\\\_____________________________________________________________________________________/\\\__________\/\\\______________/\\\_____/\\\_____________________
   _\/\\\____/\\\\\\\__/\\\\\\\\\_______/\\\\\__/\\\\\_______/\\\\\\\\__________/\\\\\_____/\\\\\\\\\_______\/\\\_____________\///___/\\\\\\\\\_______/\\\\\\\\__
    _\/\\\___\/////\\\_\////////\\\____/\\\///\\\\\///\\\___/\\\/////\\\_______/\\\///\\\__\////\\\//________\/\\\______________/\\\_\////\\\//______/\\\/////\\\_
     _\/\\\_______\/\\\___/\\\\\\\\\\__\/\\\_\//\\\__\/\\\__/\\\\\\\\\\\_______/\\\__\//\\\____\/\\\__________\/\\\_____________\/\\\____\/\\\_______/\\\\\\\\\\\__
      _\/\\\_______\/\\\__/\\\/////\\\__\/\\\__\/\\\__\/\\\_\//\\///////_______\//\\\__/\\\_____\/\\\__________\/\\\_____________\/\\\____\/\\\______\//\\///////___
       _\//\\\\\\\\\\\\/__\//\\\\\\\\/\\_\/\\\__\/\\\__\/\\\__\//\\\\\\\\\\______\///\\\\\/______\/\\\__________\/\\\\\\\\\\\\\\\_\/\\\____\/\\\_______\//\\\\\\\\\\_
        __\////////////_____\////////\//__\///___\///___\///____\//////////_________\/////________\///___________\///////////////__\///_____\///_________\//////////__
)"<<endl<<endl;
Sleep(1000);
/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
cout<<R"(

 ______     ______     __    __     ______        ______     ______      __         __     ______   ______
/\  ___\   /\  __ \   /\ "-./  \   /\  ___\      /\  __ \   /\  ___\    /\ \       /\ \   /\  ___\ /\  ___\
\ \ \__ \  \ \  __ \  \ \ \-./\ \  \ \  __\      \ \ \/\ \  \ \  __\    \ \ \____  \ \ \  \ \  __\ \ \  __\
 \ \_____\  \ \_\ \_\  \ \_\ \ \_\  \ \_____\     \ \_____\  \ \_\       \ \_____\  \ \_\  \ \_\    \ \_____\
  \/_____/   \/_/\/_/   \/_/  \/_/   \/_____/      \/_____/   \/_/        \/_____/   \/_/   \/_/     \/_____/


)"<<endl<<endl;*/

sleeps(50000);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
  printf("");
cout<<"Every choice you take from this moment onwards shapes the being of your character."<<endl;
cout<<"Smart moves combined with a bit of luck can take you up the ladder of success."<<endl;
//add on touchy feely stuff

cout<<endl<<endl<<endl;


//school

Sleep(5000);


cout<<"C";
Sleep(200);
cout<<"h";
Sleep(200);
cout<<"a";
Sleep(200);
cout<<"p";
Sleep(200);
cout<<"t";
Sleep(200);
cout<<"e";
Sleep(200);
cout<<"r";
Sleep(200);
cout<<" ";
Sleep(200);
cout<<"1";
Sleep(200);
cout<<":";
Sleep(200);
cout<<" ";
Sleep(200);
cout<<"S";
Sleep(200);
cout<<"c";
Sleep(200);
cout<<"h";
Sleep(200);
cout<<"o";
Sleep(200);
cout<<"o";
Sleep(200);
cout<<"l";
Sleep(200);

cout<<endl<<endl;
Sleep(1500);

cout<<"School is where your character develops. From the company you keep to the decisions you take."<<endl<<"In this chapter of life you have to take the most apt decisions even when distractions surround you."<<endl<<endl<<endl;
//edit
Sleep(2500);
schoolmenu();

cout<<"You have 4 choices to take before you leave school"<<endl;
int choice;

for(int e=1; e<=4; e++)
{
        cout<<"Enter choice number "<<e<<endl<<endl;
        cin>>choice;
        switch(choice)
        {
                case 1:    studyland();
                           Sleep(2000);
                           schoolmenu();
                           Sleep(2000);
                           break;

                case 2:    testland();
                           Sleep(2000);
                           schoolmenu();
                           Sleep(2000);
                           break;

                case 3:    clubland();
                           Sleep(2000);
                           schoolmenu();
                           Sleep(2000);
                           break;

                case 4:    languageland();
                           Sleep(2000);
                           schoolmenu();
                           Sleep(2000);
                           break;
                case 5://complex game program
                           Sleep(2000);
                           schoolmenu();
                           Sleep(2000);
                           break;

                case 6:    dozeland();
                           Sleep(2000);
                           schoolmenu();
                           Sleep(2000);
                           break;


                default: cout<<"You should've chosen a valid option.";


        }



}

cout<<endl<<endl;

if (testrun=="yes")
{
    cout<<"You passed school. Well, this means your path to a successful life might be a little less rocky. We wish you luck.";
}
else
{
    cout<<"You seemingly made your way through school. Not taking any tests might act up as a bit of a sour apple in the later stages of life.";
}

//college
cout<<endl<<endl;
Sleep(3000);

cout<<"C";
Sleep(200);
cout<<"h";
Sleep(200);
cout<<"a";
Sleep(200);
cout<<"p";
Sleep(200);
cout<<"t";
Sleep(200);
cout<<"e";
Sleep(200);
cout<<"r";
Sleep(200);
cout<<" ";
Sleep(200);
cout<<"2";
Sleep(200);
cout<<":";
Sleep(200);
cout<<" ";
Sleep(200);
cout<<"C";
Sleep(200);
cout<<"o";
Sleep(200);
cout<<"l";
Sleep(200);
cout<<"l";
Sleep(200);
cout<<"e";
Sleep(200);
cout<<"g";
Sleep(200);
cout<<"e";
Sleep(200);

cout<<endl<<endl;
Sleep(1500);
cout<<"Freedom comes with a cost."<<endl<<"In this chapter of life you have to take the most apt decisions even when distractions surround you."<<endl<<endl<<endl;
//edit

collegemenu();

cout<<"You have 7 choices to take before you leave college"<<endl;
int choice_2;

for(int f=1; f<=7; f++)
{
        cout<<"Enter choice number "<<f<<endl<<endl;
        cin>>choice_2;
        switch(choice_2)
        {
                case 1:    //lectureattend();
                           collegemenu();
                           break;

                case 2:    collegeparty();
                           collegemenu();
                           break;

                case 3:    //collgeproject();
                           collegemenu();
                           break;

                case 4:    //lateclass();
                           collegemenu();
                           break;

                case 5:    //shop();
                           collegemenu();
                           break;

                case 6:    //collegework();
                           collegemenu();
                           break;


                default: cout<<"You should've chosen a valid option.";


        }



}



death();
return 0;

}

