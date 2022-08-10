#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdbool.h>
void pujan(x,y){
COORD puj;
puj.X=x;
puj.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),puj);
}
struct coordinateofpointer1{
int x1,y1;
}coo1;
struct coordinateofpointer2{
int x2,y2;
}coo2;
void drawsnake(a,b,l,num){
    int s=b;
    for(int i=1;i<=l-1;i++){
            if(num==92||num==80||num==54)
        pujan(a-2,s);
        else
        pujan(a+3,s);
        if(i==1){
        printf("%c",404);}
         else if(i==(l-1)){printf("%c",458);}
         else
        printf("%c",455);
        s=s+1;
    }
}
void drawladder(a,b,l){
    int s=b;
    for(int i=1;i<=l-1;i++){
        pujan(a+2,s-1);
        printf("%c-%c",477,477);
        s=s-1;
    }
}
void drawnumbers(){
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int from[10]={6,21,27,32,50,57,76};
    int to[10]={46,41,87,72,90,77,96};
    int diefrom[10]={44,54,65,80,92,93,98 };
    int dieto[10]={4,14,25,20,12,53,38};
    int len,len2;
int    a=13,b=48,k=1;
for(int i=1;i<=100;i++){
        pujan(a,b);
    printf("%d",i);
    for(int j=0;j<7;j++){
        if(from[j]==i){
            len=(to[j]-from[j])/2;
            SetConsoleTextAttribute(hConsole, 6);
            drawladder(a,b,len);
            SetConsoleTextAttribute(hConsole, 4);
        }
        if(diefrom[j]==i){
            len2=(diefrom[j]-dieto[j])/2;
            SetConsoleTextAttribute(hConsole, 10);
            drawsnake(a,b,len2,diefrom[j]);
            SetConsoleTextAttribute(hConsole, 4);

        }
    }
if(i%10==0){
        if(k==1){k=0;}
        else if(k==0){k=1;}
    b=b-5;
    continue;
}
if(k==1)a=a+10;
else if(k==0)a=a-10;
}
}
void drawhorizontal1(){
    int i;
    printf("\t");
for(i=0;i<=100;i++){
    printf("%c",254);
    switch(i){
    case 0:drawverticle(0);break;
    case 10:drawverticle(10);break;
    case 20:drawverticle(20);break;
    case 30:drawverticle(30);break;
    case 40:drawverticle(i);break;
    case 50:drawverticle(i);break;
    case 60:drawverticle(i);break;
    case 70:drawverticle(i);break;
    case 80:drawverticle(i);break;
    case 90:drawverticle(i);break;
    case 100:drawverticle(i);break;
    default:break;
    }}}
    void drawhorizontal(){
for(int i=0;i<=100;i++){
    printf("%c",254);
    }
    }
void drawverticle(t){
    int a=t+8;
        int b=0;
    for(int i=0;i<=50;i++){
        pujan(a,b);
        printf("%c",219);
        b+=1;}
    pujan(a+1,0);
    }
void framed2();

    void snake()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    bool goty1=true,goty2=true;
     int from[10]={6,21,27,32,50,57,76};
    int to[10]={46,41,87,72,90,77,96};
    int diefrom[10]={44,54,65,80,92,93,98 };
    int dieto[10]={4,14,25,20,12,53,38};
    int len1,len2,sum=0,store[5],store2[5];
    int k,nva=0,lk=0,mn=1,nb,mn2=1;
    bool player1=false,player2=false;
    int game=1;
    int y=0,va,vb;
    int dice,ghj;
    char dc;
    for(int i=0;i<=50;){
        switch(i){
case(0):drawhorizontal1();break;
case(5):drawhorizontal();break;
    case(15):drawhorizontal();break;
    case(20):drawhorizontal();break;
            case(25):drawhorizontal();break;
             case(30):drawhorizontal();break;
              case(35):drawhorizontal();break;
               case(40):drawhorizontal();break; case(10):drawhorizontal();break;
                case(45):drawhorizontal();break;
                 case(50):drawhorizontal();break;
        }
        i+=1;
        printf("\n\t");
    }
    coo1.x1=13;coo1.y1=46;coo2.x2=13;coo2.y2=46;
    SetConsoleTextAttribute(hConsole, 4);
    drawnumbers();
    SetConsoleTextAttribute(hConsole, 9);
    for(int j=0;;j++){
        srand(time(NULL));
        pujan(110,14);
        printf("Dice");
        again:
        pujan(110,15);
        dc=getch();
        if(dc=='s'|| dc=='S'){
            dice=(rand()%6)+1;
            pujan(110,16);
            printf(">[  %d  ]<",dice);
            if(dice==1){
                if(game==1 && goty1==true){player1=true;player2=false;goty1=false;continue;}
                if(game==2 && goty2==true){player2=true;player1=false;goty2=false;continue;}}
            Sleep(500);
            if(player1==true){
                    if(game==1){
                    pujan(coo1.x1,coo1.y1);
                    printf("\b   ");
                     pujan(coo1.x1,coo1.y1+1);
                     printf("\b  ");
                     store[0]=coo1.x1;store[1]=coo1.y1;store[2]=mn;
                for(int f=0;f<dice;f++){
                        mn=mn+1;
                        va=coo1.x1;
                vb=coo1.y1;
                if(mn>100){break;}
                        if((va==103 && (vb==46||vb==36||vb==26||vb==16||vb==6))||(va==13 && (vb==41||vb==31||vb==21||vb==11) ) ){
                            coo1.y1-=5;
                            sum=sum+10;
                            if(lk==0)lk=1;
                            else if(lk==1)lk=0;}
                        else{
                        if(lk==0){
                    coo1.x1+=10;}
                    else coo1.x1-=10;}
                pujan(coo1.x1,coo1.y1);
                Sleep(500);}
                if(mn>100){coo1.x1 =store[0];mn=store[2];coo1.y1=store[1];continue;};
                 pujan(105,4);
                 pujan(coo1.x1,coo1.y1);
                for(int uy=0;uy<7;uy++){
                   if(mn==from[uy]){
                    len1=(to[uy]-from[uy])/2;
                    mn=mn+((to[uy]-from[uy]));
                    coo1.y1-=len1;}
                   if(mn==diefrom[uy]){//here
                    len1=(diefrom[uy]-dieto[uy])/2;
                    mn=mn-((diefrom[uy]-dieto[uy]));
                    coo1.y1+=len1;}}
                pujan(coo1.x1,coo1.y1);
                  printf("%c",232);
                  }}

                  if(player2==true){
                    if(game==2){
                    pujan(coo2.x2,coo2.y2);
                    printf("\b   ");
                     pujan(coo2.x2,coo2.y2+1);
                     printf("\b  ");
                     store2[0]=coo2.x2;store2[1]=coo2.y2;store2[2]=mn2;
                for(int f=0;f<dice;f++){
                        mn2=mn2+1;
                        va=coo2.x2;
                vb=coo2.y2;
                if(mn>100){break;}
                        if((va==103 && (vb==46||vb==36||vb==26||vb==16||vb==6))||(va==13 && (vb==41||vb==31||vb==21||vb==11) ) ){
                            coo2.y2-=5;
                            sum=sum+10;
                            if(lk==0)lk=1;
                            else if(lk==1)lk=0;}
                        else{
                        if(lk==0){
                    coo2.x2+=10;}
                    else coo2.x2-=10;}
                pujan(coo2.x2,coo2.y2);
                Sleep(500);}
                if(mn>100){coo2.x2 =store2[0];mn2=store2[2];coo2.y2=store2[1];continue;}
                 pujan(105,4);
                 pujan(coo2.x2,coo2.y2);
                for(int uy=0;uy<7;uy++){
                   if(mn2==from[uy]){
                    len1=(to[uy]-from[uy])/2;
                    mn2=mn2+((to[uy]-from[uy]));
                    coo2.y2-=len1;}
                   if(mn2==diefrom[uy]){//here
                    len1=(diefrom[uy]-dieto[uy])/2;
                    mn2=mn2-((diefrom[uy]-dieto[uy]));
                    coo2.y2+=len1;}}
                pujan(coo2.x2,coo2.y2);
                  printf("%c",282);
                  }}
                  }
        else if(dc=='q')main();
        else
            goto again;

        }
         if(game==1) game=2;
        if(game==2) game=1;
    getch();
}


void camera();
int dictionary(){
    system("cls");
    HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
    printf("\t\t");
    SetConsoleTextAttribute(hconsole,3);
    for(int j=0;j<=70;j++)
    printf("%c",203);
    SetConsoleTextAttribute(hconsole,6);
    printf("\n\t\t %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c DICTIONARY  "
           "%c %c %c %c %c %c %c %c %c %c %c %c %c %c "
           " \n",221,221,221,221,221,221,221,221,221,221,221,221,221,221,221,221,221,221,221,221,221,221,221,221,221,221,221,221,221,221,221);
     printf("\t\t");
     SetConsoleTextAttribute(hconsole,3);
    for(int j=0;j<=70;j++)
    printf("%c",202);
    SetConsoleTextAttribute(hconsole,9);
    FILE *pujan;
    bool go=false,find=false;
    int k=0;
    char *sizeu,ch,word[50],gb;
    sizeu=(char*)calloc(100,sizeof(char));
    pujan=fopen("dictionary.dll","r");
    printf("\n\n\t\tEnter the word you want to find the meaning of:\n\t\t\t\t\t\t");
    SetConsoleTextAttribute(hconsole,4);
    gets(word);
    fflush(stdin);
    SetConsoleTextAttribute(hconsole,11);
    fseek(pujan,0,0);
    while(!feof(pujan)){
        ch=fgetc(pujan);
        if(go==true){
            if(ch!=' '){
            sizeu[k]=ch;
            k+=1;}}
        if(k==strlen(word)){
            sizeu[k]='\0';
            go=false;
            k=0;
            if(strcmp(strupr(sizeu),strupr(word))==0){
            find=true;
            printf("\n\n\t\t%s->",sizeu);
            for(int y=0;;y++){
                gb=getc(pujan);
                if (y==70 || y==140)printf("\n\t\t\t  ");
                if(gb=='\n')break;
                else printf("%c",gb);}
                printf(".");
         break;}}
        if(ch=='#')
            go=true;}
        if(find==false){ SetConsoleTextAttribute(hconsole,4);printf("\t\t\tSorry no result found !!!!!");}
        SetConsoleTextAttribute(hconsole,14);
        printf("\n\n\n\t\tPress a to search again\n\t\tPress q to quit");
        again:
        if(getch()=='a')dictionary();
        else if(getch()=='q')main(1);
        else goto again;
    fclose(pujan);
    getch();}
void contact(){
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    FILE *pujan;
    int k=0,l,t,count=0,h=0,done=0,n=0,kk=0;
    char vb;
    bool b1=false;
    char name[500],phone[100],whose[50],jk;
    char newa[200];
    char anewa[30],g;
     printf("\n\n\t\t\t");
     SetConsoleTextAttribute(hConsole,4);
     for(int g=0;g<=55;g++)printf("%c",254);
            printf("\n");
            SetConsoleTextAttribute(hConsole,6);
     printf("\t\t\t%c                   CONTACTS                           %c",478,478);
     SetConsoleTextAttribute(hConsole,4);
    printf("\n\t\t\t%c                                                      %c\n\t\t\t",478,478);
            for(int g=0;g<=55;g++)printf("%c",254);
            printf("\n\n");
            SetConsoleTextAttribute(hConsole,2);
    printf("\t\t\t   NAME");for(int a=0;a<=30;a++)printf(" ");printf("Phone number\n\t\t\t ");
    SetConsoleTextAttribute(hConsole,7);
    for(int g=0;g<=52;g++)printf("%c",431);
    pujan=fopen("contact.dll","a+");
    SetConsoleTextAttribute(hConsole,3);
   while(!feof(pujan))
       fgets(name,500,pujan);
   for(int i=0;i<=strlen(name);i++){
        kk=kk+1;
    if(name[i]=='*'){printf("\n\t\t\t   ");kk=0;b1=true;}
    else if(name[i]=='#'){
        for(int j=0;j<=(35-kk);j++)printf(" ");
    }
   else if(b1==true) printf("%c",name[i]);
   }
   SetConsoleTextAttribute(hConsole,14);
   printf("\n\t\t\t"); for(int g=0;g<=55;g++)printf("%c",254);
   printf("\n\n\t\t\tPress a to add contact\n\t\t\tpress d to delete contact");
   again:
    g=getch();
if(g=='a'|| g=='A'){
        printf("\n\t\t\tName:   ");
        gets(name);
        fprintf(pujan,name);
        fprintf(pujan,"#");
        printf("\n\t\t\tPhone number:");
         gets(name);
         for(int b=0;b<=4;b++){printf("\r                                            \r \t\t\tSaving");
                for(int y=0;y<=5;y++){Sleep(100);printf(".");}
                } printf("\r                                         \r\t\t\tSaved");
                Sleep(1000);
        fprintf(pujan,name);
        fprintf(pujan,"*");
        fclose(pujan);
        contact();}
if(g=='d'|| g=='D'){
        fclose(pujan);
        printf("\n\t\t\tWhose contact You want to delete:");gets(whose);
    pujan=fopen("contact.dll","r");
    while(!feof(pujan)){
        count=0;
        vb=fgetc(pujan);
        if(vb=='*' && done==0){
            for(int o=0;o<strlen(whose);o++){
                anewa[o]=name[k+o+1];
            }
            anewa[strlen(whose)]='\0';
            t=k+1;
            while(name[t]!='*'){count+=1;t=t+1;}
            if(strcmp(strupr(whose),strupr(anewa))==0){
                fseek(pujan,count+1,1);for(int b=0;b<=4;b++){printf("\r                                            \r \t\t\tdeleting");
                for(int y=0;y<=5;y++){Sleep(100);printf(".");}
                }printf("\r                                         \r\t\t\tDELETED");done=1;}}
        newa[k]=vb;
        k=k+1;}
    fseek(pujan,0,0);
    newa[k-1]='\0';
    Sleep(1000);
    fclose(pujan);
    fopen("contact.dll","w");
     fprintf(pujan,"*");
    fprintf(pujan,newa);
    fseek(pujan,0,0);fprintf(pujan," ");
    fclose(pujan);
    contact();
    }
    else if(g=='q'|| g=='Q'){main();}
    else if(g=='b'|| g=='B'){menu();}
    else{goto again;}
}

void start(a,b,x,y,point,life){
 system("cls");
 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            pujan(a,b);
             SetConsoleTextAttribute(hConsole, 5);
            printf("%c",254);
            pujan(60,2);
             SetConsoleTextAttribute(hConsole, 6);
            printf("Your score:%d",point);
            pujan(60,5);
             SetConsoleTextAttribute(hConsole, 6);
            printf("life remaining:%d",life);
            pujan(x,y);
             SetConsoleTextAttribute(hConsole, 4);
            printf("O||O");}
void func()
{
   HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    pujan(10,4);
    int a,b;
     SetConsoleTextAttribute(hConsole, 12);
    printf("\n\n\n\n\t\t\t\t\tWELCOME TO SHOOT EM UP GAME\n\n\t\t\t\t\t(PRESS ANY KEY TO CONTINUE)");
    getche();
    system("cls");
    pujan(34,10);

    printf("LOADING");
    pujan(34,11);
    for(int ik=0;ik<=16;ik++){
        printf("%c",176);
        Sleep(150);
    }
    srand(time(NULL));
    next:
     a=rand()%15;
     b=rand()%15;
    if (a==0){
        goto next;
    }
    int check=0;
    int i=0,x=10,y=27,point=0,life=5;
    for(i=0;;i++){
            ab:
                  if(life==0){
                system("cls");
                SetConsoleTextAttribute(hConsole, 3);
            printf("\t\tGAME OVER!!!!!!\n\t\tToo Much misses");
           printf("\n\n\t\tyour score: %d\n",point);
           getch();
           break;
           }
            if(check==1){
                    for(int u=0;u<=5;u++){
                 a=rand()%10;
                b=rand()%10;}
                check=0;
            }
            if(x<0){
                x=0;goto ab;}
            if(x>20){
                x=20;goto ab;}
           start(a,b,x,y,point,life);
        char qw=getch();
        if (qw=='A'||qw=='a'||(int)qw==38){
         x=x-1;
         goto ab;}
        if (qw=='D'||qw=='d'){
         x=x+1;
         goto ab;}
        if (qw=='!'||qw=='q'){
         main();}
        if (qw=='f'|| qw=='F'){
                int loop,mn;
            for(loop=y;loop>=0;loop--){
            mn=x+1;
           start(a,b,x,y);
           pujan(mn,loop);

           if((mn==a) && loop==b){
            point+=1;check=1;
            printf("\b\b\bWell Done");
            Sleep(200);
            goto ab;}
            Sleep(5);
           printf("O");
           if(loop==0){
            life=life-1;
           }}}}}
 int shoote(){
     jk:
 func();
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 char ask;
 system("cls");
 SetConsoleTextAttribute(hConsole, 1);
 printf("\t\tdo you want to play again(y\\n)");
 ask=getche();
 if(ask=='y'|| ask=='Y'){
    goto jk;
 }
 else if(ask=='n'||ask=='N'){
  game();
 }
 else{
 system("cls");
    printf("wrong input");
    return 0;
 }}
int shuffle(int list1[],int n){
    int random,temp;
    for(int i=0;i<n;i++){
            random=rand()%n;
        temp=list1[i];
        list1[i]=list1[random];
        list1[random]=temp;
    }
    }
void frame2(x,y,k){
    int i,j;
for(i=1;i<=5;i++){
        pujan(x,y);

    printf("%c",177);
    y=y+1;
    for(j=0;j<=k+10;j++){
        if (i==1 || i==5){
            printf("%c",177);
        }
        else
            printf(" ");
    }
    printf("%c\n",177);}}
void frame(x,y,k){
    int i,j;
for(i=1;i<=5;i++){
        pujan(x,y);
    printf("%c",178);
    y=y+1;
    for(j=0;j<=k+10;j++){
        if (i==1 || i==5){
            printf("%c",178);
        }
        else
            printf(" ");}
    printf("%c\n",178);}}
void frame3(int x1,int y1,int x,int y){
    int i,j;
for(i=1;i<=y1;i++){
        pujan(x,y);
y=y+1;
    printf("%c",178);
    for(j=0;j<=x1;j++){
        if (i==1 || i==y1){
            printf("%c",254);}
        else
            printf(" ");}
    printf("%c\n",178);}}
int typingtutor()
{
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
char ans[50];
int n=13;
pujan(45,15);
SetConsoleTextAttribute(hConsole, 2);
frame3(50,10,35,10);
pujan(38,14);
SetConsoleTextAttribute(hConsole, 9);
printf("     WELCOME  TO  TYPYING  TUTOR");
pujan(42,15);
for(int qw=0;qw<=30;qw++){
    printf("%c",196);
}
pujan(38,16);
printf("     press any key..");
getch();
system("cls");
frame2(40,1,10);
pujan(42,3);
printf("  TYPING TUTOR");
    int k,h,i,t,point=0,checkw=0,led=0,totaldiff=0,totalk=0,per;
    int x=15,y=10,xx=10,yy=8;
char    mainword[50];
int startime,endtime;
int list1[100]={0,1,2,3,4,5,6,7,8,9,10,11,12};
    char word1[50]="Tesla Cybertruck",word2[50]="Langlauf",word3[50]="mythomane",word4[50]="Imponederabilia",
    word5[50]="Beaucoup",word6[50]="Oneiric",word7[50]="euchred",word8[50]="Anacronistic",word9[50]="Apocryphal",word10[50]="Camaraderie",word11[50]="cognizant",word12[50]="Conflagration",word13[50]="Demagogue";
    for(int u=1;u<=5;u++){
            startime=time(NULL);
    shuffle(list1,n);
    srand(time(NULL));
    int r=rand()%n;
    h=list1[r];
    switch(h){
case 0: strcpy(mainword,word1);break;
case 1: strcpy(mainword,word2);break;
case 2: strcpy(mainword,word3);break;
case 3: strcpy(mainword,word4);break;
case 4: strcpy(mainword,word5);break;
case 5: strcpy(mainword,word6);break;
case 6: strcpy(mainword,word7);break;
case 7: strcpy(mainword,word8);break;
case 8: strcpy(mainword,word9);break;
case 9: strcpy(mainword,word10);break;
case 10: strcpy(mainword,word11);break;
case 11: strcpy(mainword,word12);break;
case 12: strcpy(mainword,word13);break;
}
k=strlen(mainword);
SetConsoleTextAttribute(hConsole, 6);
    frame(xx,yy,k);
    SetConsoleTextAttribute(hConsole, 2);
    pujan(x,y);
    printf("%s",mainword);
    SetConsoleTextAttribute(hConsole, 4);
    frame(xx+50,yy,k);
    pujan(x+50,y);
    fflush(stdin);
    SetConsoleTextAttribute(hConsole, 1);
    gets(ans);
    for(int g=0;g<=k;g++){
        if(ans[g]!=mainword[g]){
            checkw=1;
            break;
        }}
    if(checkw==0){
        pujan(x+80,y);
        SetConsoleTextAttribute(hConsole,9);
        printf("Correct !!!!");
        point=point+1;
    }
    else{
        pujan(x+80,y);
        SetConsoleTextAttribute(hConsole,11);
        printf("wrong !!!!");
        checkw=0;}
     y=y+10;
    yy=yy+10;
    endtime=time(NULL);
    int dif=abs(startime-endtime);
    totaldiff=totaldiff+dif;
    totalk=totalk+k;
    if(dif>=k){
        led=1;
        break;
    }}
    system("cls");
    pujan(0,0);
    per=((totalk-totaldiff)*100)/totalk;
    if(led==1){
        frame3(100,25,0,0);
            pujan(35,10);
            SetConsoleTextAttribute(hConsole,14);
        printf("You  took too much time and were disqualified");
        pujan(35,12);
    }
    else{
        frame3(115,28,0,0);
        pujan(35,12);}
    SetConsoleTextAttribute(hConsole,13);
    printf("YOUR SCORE:%d",point);
    pujan(35,13);
    SetConsoleTextAttribute(hConsole,15);
    printf(" Your time percent:%d%%",per);
    pujan(35,14);
    if(point==5)printf("Excellent typing speed");
    else if (point<5 && point>3) printf("not bad but try hard");
    else printf("Keep trying You must try more");}
void typet(){
    char msd;
    typingtutor();
     ab:
    pujan(35,16);
    printf("DO YOU WANT TO PLAY AGAIN ?(y/n)");
    msd=getch();
    if(msd=='y'||msd=='Y'){
        typingtutor();
        goto ab;
    }
    else
        menu();}
struct coordinates{
int x;int y;
} coos;
void star(k){
int i;
int x=k,y=7;
pujan(x,y);
for(i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("%c",240);
        }
        pujan(x,y+1);
}
y=y+5;
pujan(x,y);
for(i=0;i<=2;i++){
        for(int j=0;j<=2;j++)
            printf("%c",240);
pujan(x,y+1);
}
}
void intostar(num,k){
const a=0,b=0;
int x=k,y=5;
int s=5;
coos.y=5;
for(int i=1;i<=7*s;i++){
       if(i>=1 && i<=s){
       pujan(x,y);

       y=y+1;
       if(num==0||num==4||num==5 || num==6||num==8||num==9||num==1)
       printf("%c",254);//1
       }
       else if (i >=s+1 && i<= 2*s){

       pujan(x,y);
         y=y+1;
        if(num==0||num==2||num==6 ||num==8||num==1)
       printf("%c",254);//2
}
       else if (i>=(2*s+1)&& i<= (3*s)){

       pujan(x,y);
         x=x+2;
        if(num==0||num==2||num==3||num==5 || num==6||num==8||num==9)
       printf("%c",254);
       }//3
       else if (i>= 3*s+1 && i<= 4*s){

       pujan(x,y);
       y=y-1;
       if(num!=2 && num!=1)
       printf("%c",254);}//4
       else if(i>= 4*s+1 && i<= 5*s){

       pujan(x,y);
         y=y-1;
        if(num!=6 && num!=5 && num!=1)
       printf("%c",254);}//5
       else if (i>=5*s+1 && i<= 6*s){
       pujan(x,y);
              x=x-2;
       if(num!=1 && num!=4)
       printf("%c",254);}//6
       else if (i>=6*s+1 && i<= 7*s){
       pujan(x,y);
       x=x-2;
        if(num==2||num==3||num==8 ||num==4|| num==6||num==9||num==5)
       printf("%c",254);}//7
if (i==6*s){x=k+2*s;y=s+coos.y;}
}
if (num==1){
    pujan(x,2*s+coos.y);
    printf("%c",254);
}
coos.x=k+2*s;
if (num==1){
    coos.x=k+s-2;
}
}
void stopwatch(){
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k;
    k=90;
    char say,a,vb;
int s1=0,s2=0,m1=0,m2=0,h1=0,h2=0;
ch:
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
 intostar(s1,k);
    k=k-15;
     intostar(s1,k);
     k=k-5;
     SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    star(k);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    k=k-15;
     intostar(s1,k);
    k=k-15;
    intostar(s1,k);
    k=k-5;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    star(k);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    k=k-15;
     intostar(s1,k);
    k=k-15;
     intostar(s1,k);
    k=90;
    pujan(10,20);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("Press a to start\n");
    printf("\t  press s to stop\n");
    printf("\t  press r to reset");
    again:
say=getch();
if (say=='a'||say=='A'){
do{
        fg:
        system("cls");
        pujan(10,20);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("press s to stop or resume\n");
    printf("\t  press r to reset");
    printf("\n\tPress q to quit");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    intostar(s1,k);
    k=k-15;
     intostar(s2,k);
     k=k-5;
      SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    star(k);
     SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    k=k-15;
     intostar(m1,k);
    k=k-15;
    intostar(m2,k);
    k=k-5;
     SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    star(k);
     SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);k=k-15;
     intostar(h1,k);
    k=k-15;
     intostar(h2,k);
    k=90;
    Sleep(993);
     s1=s1+1;
 if(s1==10){
    s1=0;
    s2=s2+1;
 }
 if(s2==6){
    s1=0;
    s2=0;
    m1=m1+1;
 }
 if(m1==10){
    s1=0;
    s2=0;
    m1=0;
    m2=m2+1;
 }
 if(m2==6){
    s1=0;
    m2=0;
    h1=h1+1;
 }
 if(h1==10){
    s1=0;
    h1=0;
    h2=h2+1;
 }
}while(!kbhit());
 a=getch();
if (a=='s'||a=='S'){
        l:
    vb=getch();
    if (vb=='r'){
            system("cls");
         s1=0,s2=0,m1=0,m2=0,h1=0,h2=0,k=90;
         goto ch;
    }
    else if (vb=='s'||vb=='S'){
        goto fg;
    }
      else if (vb=='q'||vb=='Q'){
        main();
    }
    else
        goto l;}
        else if(a=='q'|| a=='Q') main();
        else{goto fg;}
}
else if(say=='q'|| say=='Q')main();
else
    goto again;
}

int checkleap(year){
if((year%4==0&&year%100!=0)||year%400==0){
 return(1);}
else{
    return(0);
}
}
int checkspecial(month,check,day){
bool ab=false;
if (check==1){
    switch(month+1){
case 1:
    switch(day){case 1:case 11:case 15:case 24: ab=true;break;}break;
case 2:
    switch(day){case 21:case 24:ab=true;break;}break;
case 3:
    switch(day){case 8: ab=true;break;}break;
case 5:
    switch(day){case 1:case 7: ab=true;break;}break;
case 4:
    switch(day){case 1:case 13:ab=true;break;}break;
case 8:
    switch(day){case 13: ab=true;break;}break;
case 9:
    switch(day){case 19: ab=true;break;}break;
case 12:
    switch(day){case 25:ab=true;break;}break;}
    }
else{
    switch(month+1){
case 1:
    switch(day){case 1:case 15:case 11:case 24: ab=true;break;}break;
case 2:
    switch(day){case 21:case 24:ab=true;break;}break;
case 3:
    switch(day){case 9: ab=true;break;}break;
case 5:
    switch(day){case 1:case 8: ab=true;break;}break;
case 4:
    switch(day){case 14:ab=true;break;}break;
case 8:
    switch(day){case 14: ab=true;break;}break;
case 9:
    switch(day){case 18: ab=true;break;}break;
case 12:
    switch(day){case 25:ab=true;break;}break;}
    }
if(ab==false) return 0;
else if(ab==true) return 1;
}

int whichday(int y,int m,int feb){
int d=1;
	switch(m)
	{
		case 2:
			d=d+31;
			break;
		case 3:
			d=d+31+feb;
			break;
		case 4:
			d=d+31+feb+31;
			break;
		case 5:
			d=d+31+feb+31+30;
			break;
		case 6:
			d=d+31+feb+31+30+31;
			break;
		case 7:
			d=d+31+feb+31+30+31+30;
			break;
		case 8:
			d=d+31+feb+31+30+31+30+31;
			break;
		case 9:
			d=d+31+feb+31+30+31+30+31+31;
			break;
		case 10:
			d=d+31+feb+31+30+31+30+31+31+30;break;
		case 11:
			d=d+31+feb+31+30+31+30+31+31+30+31;break;
		case 12:
			d=d+31+feb+31+30+31+30+31+31+30+31+30;break;
	}
	d=(y+(y-1)/4+(y-1)/400-(y-1)/100+d)%7;
	return(d);}
void specialday(month,check){
    printf("\n\t\t\t");

switch(month+1)
    {
		case 1:
			printf("Special days:\n\t\t\t\t1 --> New Year day\n\t\t\t\t11 -->Suraj's Birthday\n\t\t\t\t15-->Maghe Sakrati\n\t\t\t\t24 --> Gyampo Lhosar");
			break;
		case 2:
			printf("Special days:\n\t\t\t\t21--> Maha Shivaratri\n\t\t\t\t24 --> Gyalpyo Lhosar");
			break;
        case 4:
            if(check==1){
                printf("Special days:\n\t\t\t\t1 --> My birthday\n\t\t\t\t 13 --> Nepali New Year");
		}
          else
            printf("Special days:\n\t\t\t\t14 --> Nepali New Year");
			break;
        case 3:
			if(check==1){
                     printf("Special days:\n\t\t\t8 --> Nari Diwas");
		}
          else
            printf("Special days:\n\t\t\t9 --> Nari Diwas");
			break;
        case 5:
			if(check==1){
                     printf("Special days:\n\t\t\t\t1 --> International Workers Day\n\t\t\t\t7 --> Buddha Jayanti");
		}
          else
            printf("Special days:\n\n\t\t\t\t1 --> International Workers Day\n\t\t\t\t8 --> Buddha Jayanti");
			break;
        case 6:
           printf("Special days:\n\t\t\t\t(no such days)");break;

        case 7:
		     printf("Special days:\n\t\t\t\t(no such days)");break;
        case 8:
			 if(check==1){
                     printf("Special days:\n\t\t\t\t13 --> Ozone's Birthday");
		}
          else
            printf("Special days:\n\n\t\t\t\t14 --> Ozone's Birthday");
			break;
        case 9:
			 if(check==1){
                     printf("Special days:\n\t\t\t\t19 --> Constitution Day");
		}
          else
           printf("Special days:\n\t\t\t\t18 --> Constitution Day");
			break;
        case 10:
			 printf("Special days:\n\t\t\t\t(no such days)");break;
        case 11:
			 printf("Special days:\n\t\t\t\t(no such days)");break;
         case 12:
			 printf("Special days:\n\t\t\t\t25 --> Christmas Day");break;
}
}
void calender()
{
int i,j,func1,find,check,jgh=0;
char bas[10];
int jan=31,feb,mar=31,apr=30,may=31,june=30,july=31,aug=31,sept=30,oct=31,nov=30,dec=31;
time_t now = time(NULL);
   struct tm *t = localtime(&now);
   int cmonth=t->tm_mon+1 ;
   int cday=t->tm_mday ;
   int cyear= t->tm_year+1900 ;
    int chour=t->tm_hour;
   int cmin= t->tm_min;
   int index=cmonth-1;
   if(chour>12){
    chour=chour-12;
    jgh=1;
   }
   int csec= t->tm_sec;
int year=2020,hold;
char as[10];
ab :
check=checkleap(year);
if (check==1)feb=29;
else feb=28;
int month[12]={jan,feb,mar,apr,may,june,july,aug,sept,oct,nov,dec};
switch(index){
        case 0:
			strcpy(as,"January");break;
        case 1:
			strcpy(as,"February");break;
        case 2:
			strcpy(as,"March");break;
        case 3:
			strcpy(as,"April");break;
        case 4:
			strcpy(as,"May");break;
        case 5:
			strcpy(as,"June");break;
        case 6:
			strcpy(as,"July");break;
        case 7:
			strcpy(as,"August");break;
        case 8:
			strcpy(as,"September");break;
        case 9:
			strcpy(as,"October");break;
        case 10:
			strcpy(as,"November");break;
       case 11:
			strcpy(as,"December");break;
	}
	switch(cmonth-1){
        case 0:
			strcpy(bas,"January");break;
        case 1:
			strcpy(bas,"February");break;
        case 2:
			strcpy(bas,"March");break;
        case 3:
			strcpy(bas,"April");break;
        case 4:
			strcpy(bas,"May");break;
        case 5:
			strcpy(bas,"June");break;
        case 6:
			strcpy(bas,"July");break;
        case 7:
			strcpy(bas,"August");break;
        case 8:
			strcpy(bas,"September");break;
        case 9:
			strcpy(bas,"October");break;
        case 10:
			strcpy(bas,"November");break;
       case 11:
			strcpy(bas,"December");break;}
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, 7);
printf("\n\n");
printf("\t\t\t");
if(chour<10)printf("0%d:",chour);
else printf("%d:",chour);
if(cmin<10)printf("0%d",cmin);
else printf("%d",cmin);
if(jgh==1){
    printf(" PM");
    jgh=0;
}
else printf(" AM");
printf("                              %d %s,%d\n\t\t\t",cday,bas,cyear);
for(int o=0;o<=50;o++){
printf("-");}
printf("\n");
 SetConsoleTextAttribute(hConsole, 3);
printf("\t\t\t\t\t   Year=%d AD\n\n",year);
SetConsoleTextAttribute(hConsole, 11);
printf("\t\t\t\t\t   Month=%s\n\n",as);
SetConsoleTextAttribute(hConsole, 7);
printf("\t\t\t");
for(int o=0;o<=50;o++){
    printf("-");
}
printf("\n\t\t\tSAT\tSUN\tMON\tTUES\tWED\tTHUR\tFRI\n\n");
printf("\t\t\t");
   for(int o=0;o<=50;o++){
    printf("-");
}
printf("\n");
SetConsoleTextAttribute(hConsole, 6);
func1=whichday(year,index+1,feb);
for(i=1;i<=(func1+3);i++){
    printf("\t");}
int nextline=(func1);
for(i=1;i<=month[index];i++){
    if(year==cyear && index==cmonth-1&&i==cday){
            SetConsoleTextAttribute(hConsole,3);
        printf("\b(");
        if(nextline==0){
         SetConsoleTextAttribute(hConsole, 4);}
        else if (checkspecial(index,check,i)==1)SetConsoleTextAttribute(hConsole,1);
        else SetConsoleTextAttribute(hConsole,6);
        printf("%d",i);
        SetConsoleTextAttribute(hConsole,3);
        printf(")\t");
    }
    else{
            if(nextline==0){
         SetConsoleTextAttribute(hConsole, 4);
    }
            else if (checkspecial(index,check,i)==1){SetConsoleTextAttribute(hConsole,12);};

    printf("%d\t",i);}
     nextline+=1;
    SetConsoleTextAttribute(hConsole, 6);
    if(nextline==0){
     SetConsoleTextAttribute(hConsole, 4);}
    if(nextline==7){
        printf("\n\t\t\t");
        nextline=0;
    }
    if(nextline==0){
         SetConsoleTextAttribute(hConsole, 4);
    }
}
th:
    printf("\n\t\t\t");
    SetConsoleTextAttribute(hConsole, 7);
    for(int o=0;o<=50;o++){
    printf("-");
}
 SetConsoleTextAttribute(hConsole, 14);
 specialday(index,check);
 printf("\n\t\t\t");
 SetConsoleTextAttribute(hConsole, 7);
    for(int o=0;o<=50;o++){
    printf("-");}
    SetConsoleTextAttribute(hConsole, 10);
printf("\n\n\t\t\tpress 1 to change year\n\t\t\tpress 2 to change month\n\t\t\tpress 3 to change both");
char pujan=getche();

if(pujan=='1'){
    printf("\n\t\t\tenter the year:");
    scanf("%d",&hold);
    year=hold;
    system("cls");
    goto ab;}
else if(pujan=='2'){
    printf("\n\t\t\tenter the number of the month:");
    scanf("%d",&hold);
    index=hold-1;
    system("cls");
    goto ab;
    }
else if(pujan=='3'){
      printf("\n\t\t\tenter the year:");
    scanf("%d",&year);
    printf("\t\t\tenter the number of the month:");
    scanf("%d",&hold);
    index=hold-1;
    system("cls");
    goto ab;}
else if(pujan=='q'||pujan=='Q')main();
else if(pujan=='b'||pujan=='B')menu();
else if(pujan=='d'||pujan=='D'){index=index+1;
if(index>11){index=0;year=year+1;}system("cls");goto ab;}
else if(pujan=='a'||pujan=='A'){index=index-1;
if(index<0){index=11;year=year-1;}system("cls");goto ab;}
else if (pujan=='w'||pujan=='W'){year=year-1;system("cls");goto ab;}
else if (pujan=='s'||pujan=='S'){year=year+1;system("cls");goto ab;}
else{
    goto th;}}

void framed(b){
    int x ,y;
    char ch=193;
    x=35;y=b;
for(int i=1;i<=92;i++){
        pujan(x,y);
        if(  i!=92)
printf("%c",ch);
    switch(i){
        case 1 ... 40:{ch=193;x=x+1;break;}
        case 41:{ch=442;x=x+1;break;}
        case 42 ... 44 :{ch=442;y=y+1;break;}
        case 45 ... 85 :{ch=194;x=x-1;break;}
        case 88 ... 92:{ch=442;y=y-1;break;}
        case 87:{ch=442;x=x-1;break;}
        }}}
void extras(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    int k=1,n,p=3;
    char wh,vg[10];
    do{
         system("cls");
    SetConsoleTextAttribute(hConsole,9);
    pujan(0,0);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(0,1);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(0,2);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(0,3);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(0,4);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(46,2);
    SetConsoleTextAttribute(hConsole,2);
    printf("      EXTRAS       ");
    pujan(46,3);
     SetConsoleTextAttribute(hConsole,5);
    for(int y=0;y<=18;y++){
        printf("%c",145);
    }
     SetConsoleTextAttribute(hConsole,4);
    pujan(0,4);
     for(int y=0;y<=115;y++){
        printf("%c",492);}
     SetConsoleTextAttribute(hConsole,6);
    pujan(50,7);printf("Calender");
      pujan(50,12);printf("Camera");
      pujan(50,17);printf("Dictionary");
      pujan(50,22);printf("Stopwatch");
             pujan(0,31);
              SetConsoleTextAttribute(hConsole,4);
     for(int y=0;y<=115;y++){
        printf("%c",492);}
    if(k==1)n=6;
    if(k==2)n=11;
    if(k==3)n=16;
    if(k==4)n=21;
     SetConsoleTextAttribute(hConsole,8);
    framed(n);
    wh=getch();
    if(wh=='s'||wh=='S')k+=1;
   else if(wh=='w'||wh=='W')k-=1;
   else if(wh=='E'|| wh=='e')
        {if(k==1){system("cls");calender();}
   if(k==2){system("cls");camera(1);}
        if(k==3){system("cls");dictionary();}
   if(k==4){system("cls");stopwatch();}};
 if(wh=='Q'||wh=='q')main();
 if(wh=='b'||wh=='B')menu();
    if(k<=0)k=4;
    if(k>4)k=1;}
    while(p);}
void menu()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    int k=1,n,p=3;
    char wh,vg[10];
    do{
         system("cls");
         SetConsoleTextAttribute(hConsole,9);
    pujan(0,0);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(0,1);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(0,2);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(0,3);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(0,4);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(46,2);
    SetConsoleTextAttribute(hConsole,2);
    printf("    MAIN  MENU     ");
    pujan(46,3);
     SetConsoleTextAttribute(hConsole,5);
    for(int y=0;y<=18;y++){
        printf("%c",145);
    }
     SetConsoleTextAttribute(hConsole,4);
    pujan(0,4);
     for(int y=0;y<=115;y++){
        printf("%c",492);}
     SetConsoleTextAttribute(hConsole,6);
    pujan(50,7);printf("Browser");
      pujan(50,12);printf("Contacts");
        pujan(50,17);printf("Extras");
          pujan(50,22);printf("Games");
            pujan(50,27);printf("Settings");
             pujan(0,31);
              SetConsoleTextAttribute(hConsole,4);
     for(int y=0;y<=115;y++){
        printf("%c",492);}
    if(k==1)n=6;
    if(k==2)n=11;
    if(k==3)n=16;
    if(k==4)n=21;
    if(k==5)n=26;
    if(k==6)n=31;
     SetConsoleTextAttribute(hConsole,8);
    framed(n);
    wh=getch();
    sprintf(vg,"%c",13);
    if(wh=='s'||wh=='S')k+=1;
   else if(wh=='w'||wh=='W')k-=1;
   else if(wh=='E'|| wh=='e'){if(k==1){system("cls");browser();}
   if(k==2){system("cls");contact();}
   if(k==3){system("cls");extras();}
    if(k==4){system("cls");game();}
     if(k==5){system("cls");setting();}
     };
 if(wh=='Q'||wh=='q')main();
 if(wh=='b'||wh=='B')main();
   printf("%s",vg);
    if(k<=0)k=5;
    if(k>5)k=1;}
    while(p);}

void game(){
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    int k=1,n,p=3;
    char wh,vg[10];
    do{
         system("cls");
    SetConsoleTextAttribute(hConsole,9);
    pujan(0,0);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(0,1);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(0,2);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(0,3);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(0,4);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(46,2);
    SetConsoleTextAttribute(hConsole,2);
    printf("      GAMES        ");
    pujan(46,3);
     SetConsoleTextAttribute(hConsole,5);
    for(int y=0;y<=18;y++){
        printf("%c",145);
    }
     SetConsoleTextAttribute(hConsole,4);
    pujan(0,4);
     for(int y=0;y<=115;y++){
        printf("%c",492);}
     SetConsoleTextAttribute(hConsole,6);
    pujan(50,7);printf("Shoot-em-up");
      pujan(50,12);printf("Snake-Ladder");
      pujan(50,17);printf("Typing-tutor");
             pujan(0,31);
              SetConsoleTextAttribute(hConsole,4);
     for(int y=0;y<=115;y++){
        printf("%c",492);}
    if(k==1)n=6;
    if(k==2)n=11;
    if(k==3)n=16;
     SetConsoleTextAttribute(hConsole,8);
    framed(n);
    wh=getch();
    if(wh=='s'||wh=='S')k+=1;
   else if(wh=='w'||wh=='W')k-=1;
   else if(wh=='E'|| wh=='e'){if(k==1){system("cls");shoote();}
   if(k==2){system("cls");snake();}
    if(k==3){system("cls");typet();}};
 if(wh=='Q'||wh=='q')main();
 if(wh=='b'||wh=='B')menu();
    if(k<=0)k=3;
    if(k>3)k=1;
    }
    while(p);}
void browser(){
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    int k=1,n,p=3;
    char wh,vg[10];
    do{
    system("cls");
    SetConsoleTextAttribute(hConsole,9);
    pujan(0,0);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(0,1);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(0,2);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(0,3);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(0,4);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(46,2);
    SetConsoleTextAttribute(hConsole,2);
    printf("      Internet       ");
    pujan(46,3);
     SetConsoleTextAttribute(hConsole,5);
    for(int y=0;y<=18;y++){
        printf("%c",145);
    }
     SetConsoleTextAttribute(hConsole,4);
    pujan(0,4);
     for(int y=0;y<=115;y++){
        printf("%c",492);}
     SetConsoleTextAttribute(hConsole,6);
    pujan(50,7);printf("Facebook");
      pujan(50,12);printf("Search");
             pujan(0,31);
              SetConsoleTextAttribute(hConsole,4);
     for(int y=0;y<=115;y++){
        printf("%c",492);}
    if(k==1)n=6;
    if(k==2)n=11;
     SetConsoleTextAttribute(hConsole,8);
    framed(n);
    wh=getch();
    if(wh=='s'||wh=='S')k+=1;
   else if(wh=='w'||wh=='W')k-=1;
   else if(wh=='E'|| wh=='e'){if(k==1){system("cls");camera(2);}
   if(k==2){system("cls");camera(3);}};
 if(wh=='Q'||wh=='q')main();
 if(wh=='b'||wh=='B')menu();
    if(k<=0)k=2;
    if(k>2)k=1;
    }
    while(p);}
void camera(z){
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    int k=1,n,p=3;
    char wh,vg[10];
    do{
         system("cls");
    pujan(30,10);
    SetConsoleTextAttribute(hConsole,13);
    if(z==1)
    printf("Allow mini mobile to open your camera ? \a\a\a");
    if(z==2)
    printf("Allow mini mobile to open your browser ? \a\a\a");
    if(z==3)
    printf("Allow mini mobile to open your browser ? \a\a\a");
    if(k==1)n=12;
    if(k==2)n=15;
     SetConsoleTextAttribute(hConsole,9);
    framed2(n);
    SetConsoleTextAttribute(hConsole,4);
    pujan(52,13);printf("Yes");
      pujan(52,16);printf("No");
             pujan(0,31);
    wh=getch();
    if(wh=='s'||wh=='S')k+=1;
   else if(wh=='w'||wh=='W')k-=1;
   else if(wh=='E'|| wh=='e'){if(z==1){if(k==1){system("cls");system("start microsoft.windows.camera:"); menu();}
   if(k==2){system("cls");menu();}}
   else if(z==2){if(k==1){system("cls");system("explorer http://www.facebook.com"); menu();}
   if(k==2){system("cls");menu();}}
   else if(z==3){if(k==1){system("cls");system("explorer http://www.google.com"); menu();}
   if(k==2){system("cls");menu();}}
   };
 if(wh=='Q'||wh=='q')main();
 if(wh=='b'||wh=='B')menu();
    if(k<=0)k=2;
    if(k>2)k=1;
    }
    while(p);
}
void setting(){
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    int k=1,n,p=3;
    char wh,vg[10];
    do{
    system("cls");
    SetConsoleTextAttribute(hConsole,9);
    pujan(0,0);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(0,1);for(int g=0;g<=115;g++)printf("%c",432);
    pujan(0,2);for(int g=0;g<=115;g++)printf("%c",432);pujan(0,3);for(int g=0;g<=115;g++)printf("%c",432);pujan(0,4);for(int g=0;g<=115;g++)printf("%c",432);   pujan(46,2);
    SetConsoleTextAttribute(hConsole,2);
    printf("     SETTINGS      ");
    pujan(46,3);
     SetConsoleTextAttribute(hConsole,5);
    for(int y=0;y<=18;y++){
        printf("%c",145);
    }
     SetConsoleTextAttribute(hConsole,4);
    pujan(0,4);
     for(int y=0;y<=115;y++){
        printf("%c",492);}
     SetConsoleTextAttribute(hConsole,6);
    pujan(46,7);printf("Background color");
      pujan(46,12);printf("Background style");
             pujan(0,31);
              SetConsoleTextAttribute(hConsole,4);
     for(int y=0;y<=115;y++){
        printf("%c",492);}
    if(k==1)n=6;
    if(k==2)n=11;
    if(k==3)n=16;
     SetConsoleTextAttribute(hConsole,8);
    framed(n);
    wh=getch();
    if(wh=='s'||wh=='S')k+=1;
   else if(wh=='w'||wh=='W')k-=1;
   else if(wh=='E'|| wh=='e'){if(k==1){system("cls");SetConsoleTextAttribute(hConsole,11);change();}
   if(k==2){system("cls");style();}};
 if(wh=='Q'||wh=='q')main();
 if(wh=='b'||wh=='B')menu();
    if(k<=0)k=2;
    if(k>2)k=1;
    }
    while(p);
}
void change(){
FILE *lone;
system("cls");
pujan(40,2);
for(int i=0;i<=35;i++)printf("%c",344);
pujan(50,3);
printf("Background Changer:");
pujan(40,4);for(int i=0;i<=35;i++)printf("%c",344);
char color[10];
pujan(40,10);
printf("CHOOSE AMONG THE FOLLOING COLORS:");
pujan(40,12);printf("red\t\t\tblue");
pujan(40,13);printf("Sky blue\t\tgreen");
pujan(40,14);printf("Yellow\t\t\twhite");
pujan(40,15);printf("Gray\t\t\tPurple");
pujan(40,18);
printf("---->");
gets(color);
lone=fopen("background.txt","w");
fseek(lone,0,0);
if(strcmp(strlwr(color),"red")==0)fprintf(lone,"4");
else if(strcmp(strlwr(color),"blue")==0)fprintf(lone,"1");
else if(strcmp(strlwr(color),"sky blue")==0)fprintf(lone,"3");
else if(strcmp(strlwr(color),"green")==0)fprintf(lone,"2");
else if(strcmp(strlwr(color),"yellow")==0)fprintf(lone,"6");
else if(strcmp(strlwr(color),"white")==0)fprintf(lone,"7");
else if(strcmp(strlwr(color),"gray")==0)fprintf(lone,"8");
else if(strcmp(strlwr(color),"purple")==0)fprintf(lone,"5");
else fprintf(lone,"0");
fclose(lone);
main();
}
void framed2(a){
int y=a;
for(int i=0;i<3;i++){
        pujan(45,y);
    for(int j=0;j<=16;j++){
        printf("%c",176);}
    y+=1;}}
void style(){
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");
    int k=1,n,p=3;
    char wh,vg[10];
    do{
         system("cls");
         pujan(46,0);
    SetConsoleTextAttribute(hConsole,9);
    printf("Background Style changer:       \n\n\n\t\t\t\t\t  Choose among the following styles:\n\t\t\t\t\t  (press E to select)");
    SetConsoleTextAttribute(hConsole,4);
    if(k==1)n=6;
    else if(k==2)n=8;
    else if(k==3)n=10;
   else  if(k==4)n=12;
    else if(k==5)n=14;
    else if(k==6)n=16;
    else if(k==7)n=18;
    else if(k==8)n=20;
    else if(k==9)n=22;
    else if(k==10)n=24;
    else if(k==11)n=26;
    framed2(n);
    SetConsoleTextAttribute(hConsole,6);
    pujan(50,7);printf("None");
      pujan(50,9);printf("Block");
      pujan(50,11);printf("Boxed");
      pujan(50,13);printf("Brick");
      pujan(50,15);printf("Dashed");
      pujan(50,17);printf("Dimmed");
      pujan(50,19);printf("Fenced");
      pujan(50,21);printf("Hydra");
      pujan(50,23);printf("Plain");
      pujan(50,25);printf("Roped");
      pujan(50,27);printf("Liner");
pujan(54,5);
    wh=getch();
    FILE *style;
    style=fopen("style.txt","w");
    if(wh=='s'||wh=='S')k+=1;
   else if(wh=='w'||wh=='W')k-=1;
   else if(wh=='E'|| wh=='e'){if(k==1){fprintf(style,"0"); fclose(style);system("cls");main();}
   if(k==2){system("cls");fprintf(style,"1"); fclose(style);main();}
    if(k==3){system("cls");fprintf(style,"2"); fclose(style);main();}
    if(k==4){fprintf(style,"3");system("cls"); fclose(style);main();}
    if(k==5){fprintf(style,"4");system("cls"); fclose(style);main();}
    if(k==6){fprintf(style,"5");system("cls"); fclose(style);main();}
    if(k==7){fprintf(style,"6");system("cls"); fclose(style);main();}
    if(k==8){fprintf(style,"7");system("cls"); fclose(style);main();}
    if(k==9){fprintf(style,"8");system("cls"); fclose(style);main();}
    if(k==10){fprintf(style,"9");system("cls"); fclose(style);main();}
    if(k==11){fprintf(style,"*");system("cls"); fclose(style);main();}};
 if(wh=='Q'||wh=='q')main();
 if(wh=='b'||wh=='B')menu();
    if(k<=0)k=11;
    if(k>11)k=1;
    }
    while(p);}
int main()
{
    system("cls");
    FILE *back;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 0);
    int ch=254,a=1,b=1, hr,min,sec,month,year,day,bar,ko,sty;
    char styl;
    char st,bara[15],as[20],color[10];
    int x=0,y=0;
    SetConsoleTextAttribute(hConsole, 45);
    back=fopen("background.txt","r");
    ko=fgetc(back);
    fclose(back);
    back=fopen("style.txt","r");
    styl=fgetc(back);
    fclose(back);
    switch(styl){
    case '0':sty=255;break;case '1':sty=178;break;
    case '2':sty=197;break;case '3':sty=177;break;
    case '4':sty=169;break;case '5':sty=176;break;
    case '6':sty=221;break;case '7':sty=139;break;
    case '8':sty=219;break;case '9':sty=236;break;
    case '*':sty=254;break;
    }
    for(int i=1;i<=284;i++){
        pujan(x,y);
        printf("%c",ch);
         switch(i){
        case 1 ... 114:{ch=254;x=x+1;break;}
        case 115 ... 142 :{ch=219;y=y+1;break;}
        case 143 ... 256 :{ch=254;x=x-1;break;}
        case 257 ... 284:{ch=219;y=y-1;break;}}
        }
           SetConsoleTextAttribute(hConsole, ko-48);
        for(int k=0;k<=26;k++){
        pujan(a,b);
        for(int g=0;g<=112;g++){printf("%c",sty);}
        b=b+1;
        }
        SetConsoleTextAttribute(hConsole, 10);
        pujan(46,10);
        printf("                          ");
        pujan(46,11);
        printf("      MINI  MOBILE        ");
        pujan(46,12);
         printf("                          ");SetConsoleTextAttribute(hConsole, 14);
         pujan(55,23);printf("  MENU  ");
         pujan(55,24);printf("  [M]   ");
         time_t now = time(NULL);
   struct tm *t = localtime(&now);
   hr=t->tm_hour;min=t->tm_min;sec=t->tm_sec;
   month=t->tm_mon;year=t->tm_year+1900;day=t->tm_mday;   bar=t->tm_wday;
   switch(bar){
   case 0:strcpy(bara,"Sunday");break;
     case 2:strcpy(bara,"Tuesday");break;
       case 3:strcpy(bara,"Wednesday");break;
         case 4:strcpy(bara,"Thursday");break;
           case 5:strcpy(bara,"Friday");break;
             case 6:strcpy(bara,"Saturday");break;
               case 1:strcpy(bara,"Monday");break;}
   switch(month){
        case 0:
			strcpy(as,"January");break;
        case 1:
			strcpy(as,"February");break;
        case 2:
			strcpy(as,"March");break;
        case 3:
			strcpy(as,"April");break;
        case 4:
			strcpy(as,"May");break;
        case 5:
			strcpy(as,"June");break;
        case 6:
			strcpy(as,"July");break;
        case 7:
			strcpy(as,"August");break;
        case 8:
			strcpy(as,"September");break;
        case 9:
			strcpy(as,"October");break;
        case 10:
			strcpy(as,"November");break;
       case 11:
			strcpy(as,"December");break;}
   pujan(50,2);
   printf("  %d  %s  ,%d  ",day,as,year);
   pujan(77,2);printf("   %s  ",bara);
   pujan(24,2);printf("  [ No Signal ]  ");pujan(10,2);printf("  GPS   ");
         do{
          pujan(105,2);if(hr>12)printf("pm  ");else if(hr==12 && min)printf("pm  ");else printf("am  ");
           pujan(101,2);if(min<10)printf("\b  0%d ",min); else printf("\b  %d ",min);
            pujan(98,2);if(hr<10)printf("\b  0%d:",hr); else printf("\b  %d:",hr);
            Sleep(1000);
            sec=sec+1;
            if(sec>60){sec=0;min=min+1;}
            if(min>60){min=0;hr=hr+1;}
         }while(!kbhit());
         st=getch();
         if(st=='M'||st=='m'){
           menu();}
           if(st=='q'||st=='Q'){
           exit(1);}
            if(st=='b'||st=='B'){
           change();}if(st=='c'||st=='C'){camera(1);}
getch();
}
