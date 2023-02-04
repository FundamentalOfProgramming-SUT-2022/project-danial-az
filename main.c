#include<stdio.h>
#include<string.h>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include<dirent.h>
#include<locale.h>
#define zo strlen(content)
#define root "C:\\Users\\Danial\\Desktop\\root"

char *cutstr(char *,char*,int ,int,int,char );
char *copystr(char*,int ,int,int,char );
char fileghabli[500];
char fileghabli1[500];
struct savedirandfile{
char *saved;

};
int counterarray=0;

struct savefinds{
int location;
int word;
int andaze;
};
void copysaz(char *add){
    for(int i=0;i<500;i++)
        fileghabli[i]='\0';
    for(int i=0;i<500;i++)
        fileghabli1[i]='\0';



    char add2[500];
    strcpy(add2,"C:\\Users\\Danial\\Desktop\\root1\\");
    strcat(add2,add+29);

    // Assume that the program takes two arguments the source path followed
    // by the destination path.

   FILE* avall = fopen(add,"r");
    FILE* dovam= fopen(add2,"w");
    char c;


    while (1) {
        c=fgetc(avall);
        //printf("%c",c);
        if(c==EOF)
            break;
        fprintf(dovam,"%c",c);

    }

    fclose(avall);
    fclose(dovam);
}
void copysaz1(char *add){
     char add2[500];
    strcpy(add2,"C:\\Users\\Danial\\Desktop\\root1\\");
    strcat(add2,add+29);

    FILE* avall = fopen(add2,"r");
    if(avall==NULL)
        printf("in file nadarad marhale ghabl\n");
    FILE* dovam= fopen(add,"w");
        if(dovam==NULL)
            printf("file ro dorost vared kon\n");
    char c;

    while (1) {
        c=fgetc(avall);

        if(c==EOF)
            break;
        fprintf(dovam,"%c",c);

    }

    fclose(avall);
    fclose(dovam);
}
struct savefinds *findoption(char *,int ,struct savedirandfile*,int );
void getcrf(){
char a[2000];
int io=1;
getchar();
scanf("%c",&a[0]);
if(a[0]=='"'){

    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='"')
            break;
        io++;
    }
    char op[10000];
    for(int i=0;i<10000;i++)
    op[i]='\0';
    for(int i=1;i<io;i++)
        op[i-1]=a[i];
        op[io-1]='\0';
    creatfile(op);
}
else if(a[0]=='r'){


    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='\n'){
            break;
            }
        io++;
    }
char op[10000];
for(int i=0;i<10000;i++)
    op[i]='\0';
    for(int i=0;i<io;i++)
        op[i]=a[i];


    creatfile(op);
}
else
    printf("wrong address.\n");
}
void getcat(){
char a[2000];

int io=1;
getchar();
scanf("%c",&a[0]);
if(a[0]=='"'){

    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='"')
            break;
        io++;
    }
    char op[10000];
    for(int i=0;i<10000;i++)
    op[i]='\0';
    for(int i=1;i<io;i++)
        op[i-1]=a[i];
        op[io-1]='\0';

    cat(op);
}
else if(a[0]=='r'){


    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='\n'||a[io]==' '){
            break;
            }
        io++;
    }
char op[10000];
for(int i=0;i<10000;i++)
    op[i]='\0';
    for(int i=0;i<io;i++)
        op[i]=a[i];

    cat(op);
}
else
    printf("wrong address.\n");


}
void getinsert(){
char a[2000];
char op[1000];
int io=1;
getchar();
scanf("%c",&a[0]);
if(a[0]=='"'){

    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='"')
            break;
        io++;
    }

    for(int i=1;i<io;i++)
        op[i-1]=a[i];
        op[io-1]='\0';


getchar();
}
else if(a[0]=='r'){


    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='\n'||a[io]==' '){
            break;
            }
        io++;
    }

    for(int i=0;i<io;i++)
        op[i]=a[i];
op[io]='\0';

}
else
    printf("wrong address.\n");

char pi[15];
scanf("%s",pi);

if(strcmp(pi,"--str")==0){
char au[10000];
char pip[10000];
for(int i=0;i<10000;i++)
    pip[i]='\0';
io=1;
getchar();
scanf("%c",&au[0]);
if(au[0]=='"'){
int f=0;
    while(1){
       scanf("%c",&au[io]);
       if(au[io]=='\\'){
        f=2;
       }
        if(au[io]=='"'&&f==0)
            break;
        io++;
        if(f>0)
            f--;
    }

    for(int i=1;i<io;i++)
        pip[i-1]=au[i];
        getchar();
        int h=0;
for(int i=0;i<io;i++)
        {
            if(pip[i]=='\\')
            {   if(pip[i+1]=='\\'){
                pip[i]='\\';
                for(int j=i+1;j<io;j++)
                    pip[j]=pip[j+1];
                    h=2;

                    }
                else if(pip[i+1]=='"'){
                    pip[i]='"';
                    for(int j=i+1;j<io;j++)
                        pip[j]=pip[j+1];
                }


                else if(pip[i+1]=='n'&&h==0){
                pip[i]='\n';
                for(int j=i+1;j<io;j++)
                    pip[j]=pip[j+1];


            }}
            if(h>0)
                h--;

        }

}

else{


    while(1){
       scanf("%c",&au[io]);
        if(au[io]==' '){
            break;
            }
        io++;
    }

    for(int i=0;i<io;i++)
        pip[i]=au[i];

}

char posi[20];
scanf("%s",posi);
if(strcmp(posi,"--pos")==0)
{
 int line;
 int pos;
 char p;
 getchar();
 scanf("%d%c%d",&line,&p,&pos);
 if(p==':'){

 insertinfile(op,pip,line,pos);

 }
 else
    printf("invalid syntax1\n");
}
else
    printf("invalid syntax2\n");
}
else
    printf("invalid syntax3\n");
}
void getremovestr(){

char a[2000];
int io=1;
getchar();
char op[1000];
for(int i=0;i<1000;i++)
    op[i]='\0';
scanf("%c",&a[0]);
if(a[0]=='"'){

    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='"')
            break;
        io++;
    }

    for(int i=1;i<io;i++)
        op[i-1]=a[i];
        op[io-1]='\0';

}
else if(a[0]=='r'){


    while(1){
       scanf("%c",&a[io]);

        if(a[io]=='\n'||a[io]==' '){
            break;
            }
        io++;
    }

    for(int i=0;i<io;i++)
        op[i]=a[i];

}
else
    printf("wrong address.\n");

char p[10];
scanf("%s",p);

if(strcmp(p,"--pos")==0){


getchar();
int line;
int pos;
char oo;
scanf("%d%c%d",&line,&oo,&pos);
if(oo==':'){
 getchar();
 char uy[100];
 scanf("%s",uy);
 if(strcmp(uy,"-size")==0)
 {
  getchar();
  int size;
  scanf("%d",&size);
  char x,y;
  getchar();
  scanf("%c%c",&x,&y);
  if(x=='-'&&(y=='f'||y=='b')){

       removestr(op,line,pos,size,y);}

 }
else
    printf("invalid syntax1");
}

else
    printf("invalid syntax2");



}
else
    printf("invalid syntax3");






}
char* getcopystr(){

char a[2000];
int io=1;
getchar();
char op[10000];
for(int i=0;i<10000;i++)
    op[i]='\0';
scanf("%c",&a[0]);
if(a[0]=='"'){

    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='"')
            break;
        io++;
    }

    for(int i=1;i<io;i++)
        op[i-1]=a[i];
        op[io-1]='\0';

}
else if(a[0]=='r'){


    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='\n'||a[io]==' '){
            break;
            }
        io++;
    }

    for(int i=0;i<io;i++)
        op[i]=a[i];

}
else
    printf("wrong address.\n");

char p[10];
scanf("%s",p);

if(strcmp(p,"--pos")==0){
getchar();
int line;
int pos;
char oo;
scanf("%d%c%d",&line,&oo,&pos);
if(oo==':'){
 getchar();
 char uy[100];
 scanf("%s",uy);
 if(strcmp(uy,"-size")==0)
 {
  getchar();
  int size;
  scanf("%d",&size);
  char x,y;
  getchar();
  scanf("%c%c",&x,&y);
  if(x=='-'&&(y=='f'||y=='b'))
    return copystr(op,line,pos,size,y);
 }
else
    printf("invalid syntax1");
}

else
    printf("invalid syntax2");



}
else
    printf("invalid syntax3");



}
char* getcutstr(){
char a[2000];
int io=1;
getchar();
char *op = (char *)calloc(8000, sizeof(char));
    for(int i=0;i<8000;i++)
    *(op+i)='\0';

    char *os= (char *)calloc(8000, sizeof(char));
    for(int i=0;i<8000;i++)
    *(os+i)='\0';


scanf("%c",&a[0]);
if(a[0]=='"'){

    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='"')
            break;
        io++;
    }

    for(int i=1;i<io;i++)
        op[i-1]=a[i];
        for(int i=1;i<io;i++)
        os[i-1]=a[i];
        op[io-1]='\0';


}
else if(a[0]=='r'){


    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='\n'||a[io]==' '){
            break;
            }
        io++;
    }

    for(int i=0;i<io;i++)
        op[i]=a[i];
    for(int i=0;i<io;i++)
        os[i]=a[i];


}
else
    printf("wrong address.\n");

char p[10];
scanf("%s",p);

if(strcmp(p,"--pos")==0){
getchar();
int line;
int pos;
char oo;
scanf("%d%c%d",&line,&oo,&pos);
if(oo==':'){
 getchar();
 char uy[100];
 scanf("%s",uy);
 if(strcmp(uy,"-size")==0)
 {
  getchar();
  int size;
  scanf("%d",&size);
  char x,y;
  getchar();
  scanf("%c%c",&x,&y);
  if(x=='-'&&(y=='f'||y=='b'))
    return cutstr(os,op,line,pos,size,y);
 }
else
    printf("invalid syntax1");
}

else
    printf("invalid syntax2");



}
else
    printf("invalid syntax3");



}
void getpaststr(char *past){
char a[2000];
char op[10000];
for(int i=0;i<10000;i++)
    op[i]='\0';
int io=1;
getchar();
scanf("%c",&a[0]);
if(a[0]=='"'){

    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='"')
            break;
        io++;
    }

    for(int i=1;i<io;i++)
        op[i-1]=a[i];
        op[io-1]='\0';

}
else if(a[0]=='r'){


    while(1){
       scanf("%c",&a[io]);
        if(a[io]==' '){
            break;
            }
        io++;
    }

    for(int i=0;i<io;i++)
        op[i]=a[i];

}
else
    printf("wrong address.\n");

  char posi[20];
scanf("%s",posi);
//printf("%s",posi);
if(strcmp(posi,"--pos")==0)
{
 int line;
 int pos;
 char p;
 getchar();
 scanf("%d%c%d",&line,&p,&pos);
 if(p==':'){

 paststr(op,line,pos,past);

 }
 else
    printf("invalid syntax\n");
}
else
    printf("invalid syntax\n");
}
void getfind(){
char au[10000];
char pip[10000];
int contersaved;
int h=0;
struct savedirandfile strha[100];
int io=1;
getchar();
scanf("%c",&au[0]);
if(au[0]=='"'){
int f=0;
    while(1){
       scanf("%c",&au[io]);
       if(au[io]=='\\'){
        f=2;
       }
        if(au[io]=='"'&&f==0)
            break;
        io++;
        if(f>0)
            f--;
    }

    for(int i=1;i<io;i++)
        pip[i-1]=au[i];

    for(int i=0;i<io;i++)
        {
            if(pip[i]=='\\')
            {   if(pip[i+1]=='*'){
                pip[i]='*';
                for(int j=i+1;j<io;j++)
                    pip[j]=pip[j+1];
                    h=1;

                    }



               }
        }
char *tak;


 contersaved=0;
tak=strtok(pip," ");
while(tak!=NULL){
    strha[contersaved].saved=(char *)malloc(50*sizeof(char));
    strcpy(strha[contersaved].saved,tak);
    tak=strtok(NULL," ");
    contersaved++;
}

}

else{


    while(1){
       scanf("%c",&au[io]);
        if(au[io]==' '){
            break;
            }
        io++;
    }

    for(int i=0;i<io;i++)
        pip[i]=au[i];

 strha[0].saved=(char *)malloc(10000*sizeof(char));
strcpy(strha[0].saved,pip);
 contersaved=1;
}
//printf("%s",strha[0].saved);
char posi[20];
scanf("%s",posi);
//printf("%s",posi);
if(strcmp(posi,"--file")==0){

char a[2000];
char op[1000];
int io=1;
getchar();
scanf("%c",&a[0]);
if(a[0]=='"'){

    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='"')
            break;
        io++;
    }

    for(int i=1;i<io;i++)
        op[i-1]=a[i];
        op[io-1]='\0';

}
else if(a[0]=='r'){


    while(1){
       scanf("%c",&a[io]);
        if(a[io]==' '||a[io]=='\n'){
            break;
            }
        io++;
    }

    for(int i=0;i<io;i++)
        op[i]=a[i];

}
else
    printf("wrong address.\n");
//printf("%s",op);
//char f;
//f=getchar();
//printf("%s",op);
if(a[io]==' '){
char ot[10];
scanf("%s",ot);
if(strcmp(ot,"-count")==0){
    struct savefinds *arr=findoption(op,contersaved,strha,h);
    if(arr[0].location==-1||arr[0].location>1000)
    printf("0\n");
    else
        printf("%d\n",counterarray);
    counterarray=0;
}
else if(strcmp(ot,"-at")==0){
    int mored;
    scanf("%d",&mored);
    char c;
    c=getchar();

    if(c=='\n'){
        struct savefinds *arr=findoption(op,contersaved,strha,h);
    if(mored<=counterarray){

         printf("%d\n",arr[mored-1].location);
         counterarray=0;
}   else
        printf("nadarim\n");
    }
    else {char uy[12];
    scanf("%s",uy);
    if(strcmp(uy,"-byword")==0){
             struct savefinds *arr=findoption(op,contersaved,strha,h);
        if(counterarray!=0&&mored<=counterarray){

            printf("%d\n",arr[mored-1].word+1);
            counterarray=0;
        }
        else
            printf("nadarim\n");


    }
    else
        printf("dorost vared kon\n");
    }}
else if(strcmp(ot,"-byword")==0){
    char c;
c=getchar();
if(c=='\n'){
    struct savefinds *arr=findoption(op,contersaved,strha,h);
    printf("%d\n",arr[0].word+1);
    counterarray=0;}
    else { char uy[12];
    scanf("%s",uy);
    if(strcmp(uy,"-all")==0){
        struct savefinds *arr=findoption(op,contersaved,strha,h);
        if(counterarray!=0){
        for(int i=0;i<counterarray;i++)
            printf(" %d,",arr[i].word+1);
            counterarray=0;
        printf("\n");}
        else
            printf("nadarim\n");

    }
    else if(strcmp(uy,"-at")==0){
        int mored;
        scanf("%d",&mored);
        struct savefinds *arr=findoption(op,contersaved,strha,h);
        if(counterarray!=0&&mored<=counterarray){

            printf("%d\n",arr[mored-1].word+1);
            counterarray=0;
        }
        else
            printf("nadarim\n");
    }
    else
        printf("dorost vared kon\n");
}}
else if(strcmp(ot,"-all")==0){
        char c;
c=getchar();
if(c=='\n'){
     struct savefinds *arr=findoption(op,contersaved,strha,h);
     if(counterarray!=0){
        for(int i=0;i<counterarray;i++)
            printf(" %d,",arr[i].location);
            counterarray=0;
        printf("\n");}
        else
            printf("nadarim\n");

        }
else{
    char uy[12];
    scanf("%s",uy);
    if(strcmp(uy,"-byword")==0){
        struct savefinds *arr=findoption(op,contersaved,strha,h);
        if(counterarray!=0){
        for(int i=0;i<counterarray;i++)
            printf(" %d,",arr[i].word+1);
            counterarray=0;
        printf("\n");}
        else
            printf("nadarim\n");
        }
        else
            printf("dorost vared kon\n");
}
}
else
    printf("invalid syntax\n");

}
else if(a[io]=='"'){
    char f;
    f=getchar();
    if(f=='\n'){
        struct savefinds *arr=findoption(op,contersaved,strha,h);
        if(counterarray!=0){

            printf("%d\n",arr[0].location);
            counterarray=0;
       }
        else
            printf("nadarim\n");
    }
    else if(f==' '){
       char ot[10];
scanf("%s",ot);
if(strcmp(ot,"-count")==0){
    struct savefinds *arr=findoption(op,contersaved,strha,h);
    if(arr[0].location==-1||arr[0].location>1000)
    printf("0\n");
    else
        printf("%d\n",counterarray);
    counterarray=0;
}
else if(strcmp(ot,"-at")==0){
    int mored;
    scanf("%d",&mored);
    char c;
    c=getchar();

    if(c=='\n'){
        struct savefinds *arr=findoption(op,contersaved,strha,h);
    if(mored<=counterarray){

         printf("%d\n",arr[mored-1].location);
         counterarray=0;
}   else
        printf("nadarim\n");
    }
    else {char uy[12];
    scanf("%s",uy);
    if(strcmp(uy,"-byword")==0){
             struct savefinds *arr=findoption(op,contersaved,strha,h);
        if(counterarray!=0&&mored<=counterarray){

            printf("%d\n",arr[mored-1].word+1);
            counterarray=0;
        }
        else
            printf("nadarim\n");


    }
    else
        printf("dorost vared kon\n");
    }}
else if(strcmp(ot,"-byword")==0){
    char c;
c=getchar();
if(c=='\n'){
    struct savefinds *arr=findoption(op,contersaved,strha,h);
    printf("%d\n",arr[0].word+1);
    counterarray=0;}
    else { char uy[12];
    scanf("%s",uy);
    if(strcmp(uy,"-all")==0){
        struct savefinds *arr=findoption(op,contersaved,strha,h);
        if(counterarray!=0){
        for(int i=0;i<counterarray;i++)
            printf(" %d,",arr[i].word+1);
            counterarray=0;
        printf("\n");}
        else
            printf("nadarim\n");

    }
    else if(strcmp(uy,"-at")==0){
        int mored;
        scanf("%d",&mored);
        struct savefinds *arr=findoption(op,contersaved,strha,h);
        if(counterarray!=0&&mored<=counterarray){

            printf("%d\n",arr[mored-1].word+1);
            counterarray=0;
        }
        else
            printf("nadarim\n");
    }
    else
        printf("dorost vared kon\n");
}}
else if(strcmp(ot,"-all")==0){
        char c;
c=getchar();
if(c=='\n'){
     struct savefinds *arr=findoption(op,contersaved,strha,h);
     if(counterarray!=0){
        for(int i=0;i<counterarray;i++)
            printf(" %d,",arr[i].location);
            counterarray=0;
        printf("\n");}
        else
            printf("nadarim\n");

        }
else{
    char uy[12];
    scanf("%s",uy);
    if(strcmp(uy,"-byword")==0){
        struct savefinds *arr=findoption(op,contersaved,strha,h);
        if(counterarray!=0){
        for(int i=0;i<counterarray;i++)
            printf(" %d,",arr[i].word+1);
            counterarray=0;
        printf("\n");}
        else
            printf("nadarim\n");
        }
        else
            printf("dorost vared kon\n");
}
}
else
    printf("invalid syntax\n");
    }
else
    printf("dorost vared kon\n");
}
else if(a[io]=='\n')
    {
      struct savefinds *arr=findoption(op,contersaved,strha,h);
        if(counterarray!=0){

            printf("%d\n",arr[0].location);
            counterarray=0;
       }
        else
            printf("nadarim\n");
    }
else
    printf("dorost vared kon\n");
}

else
    printf("invalid syntax\n");
}
void getreplace(){
char au[10000];
char pip[10000];
for(int i=0;i<10000;i++)
    pip[i]='\0';
int contersaved;
int h=0;
struct savedirandfile strha[100];
int io=1;
getchar();
scanf("%c",&au[0]);
if(au[0]=='"'){
int f=0;
    while(1){
       scanf("%c",&au[io]);
       if(au[io]=='\\'){
        f=2;
       }
        if(au[io]=='"'&&f==0)
            break;
        io++;
        if(f>0)
            f--;
    }

    for(int i=1;i<io;i++)
        pip[i-1]=au[i];

    for(int i=0;i<io;i++)
        {
            if(pip[i]=='\\')
            {   if(pip[i+1]=='*'){
                pip[i]='*';
                for(int j=i+1;j<io;j++)
                    pip[j]=pip[j+1];
                    h=1;

                    }



               }
        }
char *tak;


 contersaved=0;
tak=strtok(pip," ");
while(tak!=NULL){
    strha[contersaved].saved=(char *)malloc(50*sizeof(char));
    strcpy(strha[contersaved].saved,tak);
    tak=strtok(NULL," ");
    contersaved++;
}

}

else{


    while(1){
       scanf("%c",&au[io]);
        if(au[io]==' '){
            break;
            }
        io++;
    }

    for(int i=0;i<io;i++)
        pip[i]=au[i];

 strha[0].saved=(char *)malloc(1000*sizeof(char));
strcpy(strha[0].saved,pip);
 contersaved=1;
}
//getchar();
char ab[10];
scanf("%s",ab);
char pip1[10000];
for(int i=0;i<10000;i++)
    pip1[i]='\0';
if(strcmp(ab,"--str2")==0){
    getchar();
    char au1[10000];

int contersaved1;
int h1=0;
struct savedirandfile strha1[100];
int io1=1;
//getchar();
scanf("%c",&au1[0]);
if(au1[0]=='"'){
int f1=0;
    while(1){
       scanf("%c",&au1[io1]);
       if(au1[io1]=='\\'){
        f1=2;
       }
        if(au1[io1]=='"'&&f1==0)
            break;
        io1++;
        if(f1>0)
            f1--;
    }

    for(int i=1;i<io1;i++)
        pip1[i-1]=au1[i];

    for(int i=0;i<io1;i++)
        {
            if(pip1[i]=='\\')
            {   if(pip1[i+1]=='*'){
                pip1[i]='*';
                for(int j=i+1;j<io1;j++)
                    pip1[j]=pip1[j+1];
                    h1=1;

                    }



               }
        }
char *tak1;


 contersaved1=0;

}

else{


    while(1){
       scanf("%c",&au1[io1]);
        if(au1[io1]==' '||au1[io1]=='\n'){
            break;
            }
        io1++;
    }

    for(int i=0;i<io1;i++)
        pip1[i]=au1[i];


}

}
else{
    printf("dorost vared kon\n");
}

char fi[20];
scanf("%s",fi);
if(strcmp(fi,"--file")==0){
char a[2000];
char op[1000];
for(int i=0;i<10000;i++)
    op[i]='\0';
int io=1;
getchar();
scanf("%c",&a[0]);
if(a[0]=='"'){

    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='"')
            break;
        io++;
    }

    for(int i=1;i<io;i++)
        op[i-1]=a[i];
        op[io-1]='\0';

}
else if(a[0]=='r'){


    while(1){
       scanf("%c",&a[io]);
        if(a[io]==' '||a[io]=='\n'){
            break;
            }
        io++;
    }

    for(int i=0;i<io;i++)
        op[i]=a[i];

}
else
    printf("wrong address.\n");
char oiy[1000];
char oiy1[1000];
char temp[1000];
strcpy(oiy,op);
strcpy(oiy1,op);
strcpy(temp,op);
if(a[io]==' '||a[io]=='\n'){
    if(a[io]=='\n'){
        struct savefinds *arr=findoption(op,contersaved,strha,h);
        if(counterarray!=0){

            removestr(oiy,1,arr[0].location-1,arr[0].andaze,'f');
            insertinfile(oiy1,pip1,1,arr[0].location);

            counterarray=0;
       }
        else
            printf("nadarim\n");
    }
    else if(a[io]==' '){
        char danial[30];
        scanf("%s",danial);
        if(strcmp(danial,"-at")==0){
            int mored1;
            scanf("%d",&mored1);
            struct savefinds *arr=findoption(op,contersaved,strha,h);
            if(mored1<=counterarray){
                 removestr(oiy,1,arr[mored1-1].location-1,arr[mored1-1].andaze,'f');
            insertinfile(oiy1,pip1,1,arr[mored1-1].location);

            counterarray=0;

            }
            else
                printf("nadarim\n");
        }
        else if(strcmp(danial,"-all")==0){
            struct savefinds *arr=findoption(op,contersaved,strha,h);
            if(counterarray!=0){
            for(int iuyt=0;iuyt<counterarray;iuyt++){
                 removestr(oiy,1,arr[iuyt].location-1,arr[iuyt].andaze,'f');
            insertinfile(oiy1,pip1,1,arr[iuyt].location);

            strcpy(oiy,temp);
            strcpy(oiy1,temp);
            strcpy(op,temp);

            }
             counterarray=0;}
             else printf("nadarim\n");
        }
    }
}
else if(a[io]=='"'){
    char lk=getchar();

    if(lk=='\n'){
       struct savefinds *arr=findoption(op,contersaved,strha,h);
        if(counterarray!=0){

            removestr(oiy,1,arr[0].location-1,arr[0].andaze,'f');
            insertinfile(oiy1,pip1,1,arr[0].location);

            counterarray=0;
       }
        else
            printf("nadarim\n");
    }
    else if(lk==' '){
          char danial[30];
        scanf("%s",danial);
        if(strcmp(danial,"-at")==0){
            int mored1;
            scanf("%d",&mored1);
            struct savefinds *arr=findoption(op,contersaved,strha,h);
            if(mored1<=counterarray){
                 removestr(oiy,1,arr[mored1-1].location-1,arr[mored1-1].andaze,'f');
            insertinfile(oiy1,pip1,1,arr[mored1-1].location);

            counterarray=0;

            }
            else
                printf("nadarim\n");
        }
        else if(strcmp(danial,"-all")==0){
            struct savefinds *arr=findoption(op,contersaved,strha,h);
            if(counterarray!=0){
            for(int iuyt=0;iuyt<counterarray;iuyt++){
                 removestr(oiy,1,arr[iuyt].location-1,arr[iuyt].andaze,'f');
            insertinfile(oiy1,pip1,1,arr[iuyt].location);
            strcpy(oiy,temp);
            strcpy(oiy1,temp);
            strcpy(op,temp);


            }
             counterarray=0;
            }
             else printf("nadarim\n");
        }
    }else
    printf("dorost bezan\n");
}
else
    printf("eshtebah dari mizani:))\n");


}}
void getgrep(){
    char halat[20];
    scanf("%s",halat);
    if(strcmp(halat,"--str")==0){
            char au[10000];
            char pip[10000];
            int contersaved;
            int h=0;

            int io=1;
            getchar();
            scanf("%c",&au[0]);
            if(au[0]=='"'){
            while(1){
                   scanf("%c",&au[io]);

                    if(au[io]=='"')
                        break;
                        io++;

                }

                for(int i=1;i<io;i++)
                    pip[i-1]=au[i];
                    getchar();
            }
                else{
                while(1){
                   scanf("%c",&au[io]);
                    if(au[io]==' '){
                        break;
                        }
                    io++;
                }

                for(int i=0;i<io;i++)
                    pip[i]=au[i];
                }
                char fi[20];
                scanf("%s",fi);
                if(strcmp(fi,"--files")==0){
                struct savedirandfile filha[10];
                int flag=0;
                int contet=0;
                getchar();
                while(flag==0){
                filha[contet].saved=(char *)malloc(400*sizeof(char));

                char a[2000];
                char op[1000];
                int io=1;

                scanf("%c",&a[0]);

                if(a[0]=='"'){

                    while(1){
                       scanf("%c",&a[io]);
                        if(a[io]=='"')
                            break;
                        io++;
                    }

                    for(int i=1;i<io;i++)
                        op[i-1]=a[i];
                        //op[io-1]='\0';
                        strcpy(filha[contet].saved,op);
                        char olgo;
                        olgo=getchar();
                        if(olgo=='\n')
                            flag++;

                }
                else if(a[0]=='r'){


                    while(1){
                       scanf("%c",&a[io]);
                        if(a[io]==' '){
                            break;
                            }
                        if(a[io]=='\n'){
                            flag++;
                            break;
                        }
                        io++;
                    }

                    for(int i=0;i<io;i++)
                        op[i]=a[i];
                        strcpy(filha[contet].saved,op);

                }
                else
                printf("wrong address.\n");
                contet++;
                for(int i=0;i<1000;i++)
                    op[i]='\0';
                }
                for(int ip=0;ip<contet;ip++){

                grep(filha[ip].saved,pip,0);
                }

    }
    }
    else if(strcmp(halat,"-c")==0){
            char halat[20];
    scanf("%s",halat);
    if(strcmp(halat,"--str")==0){
            char au[10000];
            char pip[10000];
            int contersaved;
            int h=0;

            int io=1;
            getchar();
            scanf("%c",&au[0]);
            if(au[0]=='"'){
            while(1){
                   scanf("%c",&au[io]);

                    if(au[io]=='"')
                        break;
                        io++;

                }

                for(int i=1;i<io;i++)
                    pip[i-1]=au[i];
                    getchar();
            }
                else{
                while(1){
                   scanf("%c",&au[io]);
                    if(au[io]==' '){
                        break;
                        }
                    io++;
                }

                for(int i=0;i<io;i++)
                    pip[i]=au[i];
                }
                char fi[20];
                scanf("%s",fi);
                if(strcmp(fi,"--files")==0){
                struct savedirandfile filha[10];
                int flag=0;
                int contet=0;
                getchar();
                while(flag==0){
                filha[contet].saved=(char *)malloc(400*sizeof(char));

                char a[2000];
                char op[1000];
                int io=1;

                scanf("%c",&a[0]);

                if(a[0]=='"'){

                    while(1){
                       scanf("%c",&a[io]);
                        if(a[io]=='"')
                            break;
                        io++;
                    }

                    for(int i=1;i<io;i++)
                        op[i-1]=a[i];
                        //op[io-1]='\0';
                        strcpy(filha[contet].saved,op);
                        char olgo;
                        olgo=getchar();
                        if(olgo=='\n')
                            flag++;

                }
                else if(a[0]=='r'){


                    while(1){
                       scanf("%c",&a[io]);
                        if(a[io]==' '){
                            break;
                            }
                        if(a[io]=='\n'){
                            flag++;
                            break;
                        }
                        io++;
                    }

                    for(int i=0;i<io;i++)
                        op[i]=a[i];
                        strcpy(filha[contet].saved,op);

                }
                else
                printf("wrong address.\n");
                contet++;
                for(int i=0;i<1000;i++)
                    op[i]='\0';
                }
                int tu=0;
                for(int ip=0;ip<contet;ip++){
                 tu+=grep(filha[ip].saved,pip,1);

                }
                printf("%d\n",tu);

    }

    }}
    else if(strcmp(halat,"-l")==0){
              char halat[20];
    scanf("%s",halat);
    if(strcmp(halat,"--str")==0){
            char au[10000];
            char pip[10000];
            int contersaved;
            int h=0;

            int io=1;
            getchar();
            scanf("%c",&au[0]);
            if(au[0]=='"'){
            while(1){
                   scanf("%c",&au[io]);

                    if(au[io]=='"')
                        break;
                        io++;

                }

                for(int i=1;i<io;i++)
                    pip[i-1]=au[i];
                    getchar();
            }
                else{
                while(1){
                   scanf("%c",&au[io]);
                    if(au[io]==' '){
                        break;
                        }
                    io++;
                }

                for(int i=0;i<io;i++)
                    pip[i]=au[i];
                }
                char fi[20];
                scanf("%s",fi);
                if(strcmp(fi,"--files")==0){
                struct savedirandfile filha[10];
                int flag=0;
                int contet=0;
                getchar();
                while(flag==0){
                filha[contet].saved=(char *)malloc(400*sizeof(char));

                char a[2000];
                char op[1000];
                int io=1;

                scanf("%c",&a[0]);

                if(a[0]=='"'){

                    while(1){
                       scanf("%c",&a[io]);
                        if(a[io]=='"')
                            break;
                        io++;
                    }

                    for(int i=1;i<io;i++)
                        op[i-1]=a[i];
                        //op[io-1]='\0';
                        strcpy(filha[contet].saved,op);
                        char olgo;
                        olgo=getchar();
                        if(olgo=='\n')
                            flag++;

                }
                else if(a[0]=='r'){


                    while(1){
                       scanf("%c",&a[io]);
                        if(a[io]==' '){
                            break;
                            }
                        if(a[io]=='\n'){
                            flag++;
                            break;
                        }
                        io++;
                    }

                    for(int i=0;i<io;i++)
                        op[i]=a[i];
                        strcpy(filha[contet].saved,op);

                }
                else
                printf("wrong address.\n");
                contet++;
                for(int i=0;i<1000;i++)
                    op[i]='\0';
                }

                for(int ip=0;ip<contet;ip++){
                 grep(filha[ip].saved,pip,2);

                }


    }

    }

    }
    else
        printf("dorost vared kon\n");
}

//***************************************************************************************************************
int existfile(const char* name){
DIR* dir = opendir(name);
if (dir) {
        ;
    /* Directory exists. */
    closedir(dir);
} else if (ENOENT == errno) {
    return 0;
    /* Directory does not exist. */
} else {
    return -1;

    /* opendir() failed for some other reason. */
}
}
void creatfile(char *khat){
char *took;
char ro[]=root;
struct savedirandfile a[100];
int contersaved=0;
took=strtok(khat,"/");
while(took!=NULL){
    a[contersaved].saved=took;

    took=strtok(NULL,"/");
    contersaved++;
}
for(int i=1;i<contersaved-1;i++){
char o[]="\\";
strcat(ro,o);

strcat(ro,a[i].saved);

 if(existfile(ro)==0){
   int c =mkdir(ro);
    if (!c);
      //printf("Directory created\n");
   else {
      printf("directory vojod darad\n");
      //exit(1);
   }
 }
    else;
    //printf("kljsdf");
}
char o[]="\\";
strcat(ro,o);
strcat(ro,a[contersaved-1].saved);

char po[1500];
strcpy(po,ro);
int s=access(ro,F_OK);

if(s==0)
    printf("this file is exist.\n");
else{
FILE *ptr;
ptr=fopen(po,"w");
if(ptr == NULL)
   {
      printf("Error!\n");
      exit(1);
   }
   printf("your file created\n");
fclose(ptr);
}


}

void cat(char *esmfile){
char *took;
char ro[10000];
strcpy(ro,root);
int contersaved=0;
took=strtok(esmfile,"/");
while(took!=NULL){

    if(contersaved!=0){
        strcat(ro,"\\");
        strcat(ro,took);
    }

    took=strtok(NULL,"/");
    contersaved++;
}
//printf("%s",ro);
FILE *ptr=fopen(ro,"r");
if(ptr==NULL){
    printf("this file not exist");
    return;}
else{
    char str[1000];
    while(fgets(str,1000,ptr)!=NULL){
        printf("%s",str);
        if(str[strlen(str) - 1] != '\n')
            printf("\n");
            }

fclose(ptr);

    }

}

int insertinfile( char *add,char *str, int line, int pos)
{

char *took;
char ro[1000];
strcpy(ro,root);
int contersaved=0;
took=strtok(add,"/");
while(took!=NULL){

    if(contersaved!=0){
        strcat(ro,"\\");
        strcat(ro,took);
    }

    took=strtok(NULL,"/");
    contersaved++;
}

    FILE *file = fopen(ro, "r");
    if(file==NULL){
        printf("file isn,t exist");
    return 0;
    }
    copysaz(ro);
    char *text = (char *)calloc(8000, sizeof(char));
    int Linenow = 0;
    for (int i = -1;i>-3; i++)
    {
        char c;
        if (i == -1)
        {
            c = '\n';
        }
        else
        {
            c = fgetc(file);
        }

        if (c == '\n' && ++Linenow == line)
        {
            *(text + i) = c;
            i++;
            for (int j = 0; j < pos; j++)
            {
                c = fgetc(file);
                if (c == '\n' || c == EOF)
                {
                    int nSpace = pos - j;
                    for (int k = 0; k < nSpace; k++)
                    {
                        *(text + i) = ' ';
                        i++;
                        j++;
                    }
                }
                else
                {
                    *(text + i) = c;
                    i++;
                }
            }
            *(text + i) = '\0';
            strcat(text, str);
            i += strlen(str) - 1;
        }
        else if (c == EOF && line > Linenow)
        {
            for (int j = 0; j < line - Linenow; j++)
            {
                *(text+ i) = '\n';
                i++;
            }
            for (int j = 0; j < pos; j++)
            {
                *(text+ i) = ' ';
                i++;
            }
            *(text + i) = '\0';
            strcat(text, str);
            i += strlen(str);
            *(text + i) = '\n';
            break;
        }
        else if (c == EOF)
        {
            if (*(text + i - 1) != '\n')
            {
                *(text + i) = '\n';
            }
            break;
        }
        else
        {
            *(text + i) = c;
        }
    }
    fclose(file);
    FILE *ptr = fopen(ro, "w");
    fprintf(file, "%s", text);
    fclose(ptr);
    return 0;
}
void removestr(char *add,int line,int pos,int size,char a){

    char *took;
char ro[1000];
strcpy(ro,root);
int contersaved=0;
took=strtok(add,"/");
while(took!=NULL){

    if(contersaved!=0){
        strcat(ro,"\\");
        strcat(ro,took);
    }

    took=strtok(NULL,"/");
    contersaved++;
}

    FILE *ptr=fopen(ro,"r");
if(ptr==NULL){
    printf("this file not exist\n");
    return 0;}
    copysaz(ro);
    int count;
    int linenow=1;
    int posnow=0;
    char c;
    int io=0;
    char *back = (char *)calloc(8000, sizeof(char));
    for(int i=0;i<8000;i++)
    *(back+i)='\0';

    char *forward = (char *)calloc(8000, sizeof(char));
    for(int i=0;i<8000;i++)
    *(forward+i)='\0';
    if(pos==-1){
        while(1)
    {
        c=fgetc(ptr);

        if(c==EOF)
            break;
             *(forward+io)=c;
            io++;


    }
    }
    else{
    while(linenow!=line){
        c=fgetc(ptr);
        *(back+io)=c;

        if(c=='\n')
        {

            linenow++;

        }
        io++;
        if(c==EOF){
            printf("line eshtebah\n");
            return 0;}
    }

    while(posnow!=pos)
    {
        c=fgetc(ptr);
        *(back+io)=c;
        if(c=='\n')
            {
                printf("position eshtbah ast\n");
                return ;
            }
            io++;
            posnow++;
    }
    count=io;
    io=0;

    while(1)
    {
        c=fgetc(ptr);

        if(c==EOF)
            break;
             *(forward+io)=c;
            io++;


    }}
fclose(ptr);

FILE *ptr1;
ptr1=fopen(ro,"w");
char *jadid = (char *)calloc(8000, sizeof(char));
for(int i=0;i<8000;i++)
    *(jadid+i)='\0';
if (a=='f'){
  for(int i=0;;i++){
    if(i==0)
        *(jadid)=*(forward);
    else{
        *(jadid+i)=*(forward+i+size);
    }
    if(*(forward+i+size)=='\0')
        break;
  }
fputs(back,ptr1);
fputs(jadid,ptr1);
//printf("anjam shod\n");
}
else if(a=='b'){
    for(int i=0;i<count-size;i++){
            *(jadid+i)=*(back+i);

    }
    fputs(jadid,ptr1);
    fputs(forward,ptr1);
    //printf("anjam shod\n");
}

fclose(ptr1);
}
char* copystr(char *add,int line,int pos,int size,char a){

    char *took;
char ro[1000];
strcpy(ro,root);
int contersaved=0;
took=strtok(add,"/");
while(took!=NULL){

    if(contersaved!=0){
        strcat(ro,"\\");
        strcat(ro,took);
    }

    took=strtok(NULL,"/");
    contersaved++;
}

     FILE *ptr=fopen(ro,"r");
if(ptr==NULL){
    printf("this file not exist\n");
    return 0;}
    int linenow=1;
    int posnow=0;
    char c;
    int io=0;
    char *back = (char *)calloc(8000, sizeof(char));
    for(int i=0;i<8000;i++)
    *(back+i)='\0';

    char *forward = (char *)calloc(8000, sizeof(char));
    for(int i=0;i<8000;i++)
    *(forward+i)='\0';


    while(linenow!=line){
        c=fgetc(ptr);
        *(back+io)=c;

        if(c=='\n')
        {

            linenow++;

        }
        io++;
        if(c==EOF){
            printf("line eshtebah\n");
            return 0;}
    }

    while(posnow!=pos)
    {
        c=fgetc(ptr);
        *(back+io)=c;
        if(c=='\n')
            {
                printf("position eshtbah ast\n");
                return ;
            }
            io++;
            posnow++;
    }
    int count=io;
    io=0;

    while(1)
    {
        c=fgetc(ptr);

        if(c==EOF)
            break;
             *(forward+io)=c;
            io++;


    }
fclose(ptr);


char *copyclip = (char *)calloc(8000, sizeof(char));
for(int i=0;i<8000;i++)
    *(copyclip+i)='\0';
if (a=='f'){
  for(int i=1;i<=size;i++){
    *(copyclip+i-1)=*(forward+i);
  }

}
else if(a=='b'){

    for(int i=count;i>count-size;i--){
            *(copyclip+i+size-count-1)=*(back+i-1);

    }


}
//printf("copy shod\n");
return (char*)copyclip;
}
char * cutstr(char *add1,char *add,int line,int pos,int size,char a){



char *cp=copystr(add, line,pos, size, a);
if(cp==0)
    return 0;
removestr(add1, line,pos, size, a);
return cp;

}
void paststr(char *add,int line,int pos,char *past){
//printf("past shod\n");
insertinfile(add,past,line,pos);
}

int check_kalameavall(char *kalamefile,char *kalamevorodi){
    int sizekalmevordi=strlen(kalamevorodi);
    int sizekalmefile=strlen(kalamefile);

  if(strstr(kalamefile,kalamevorodi)!=NULL) {
    if(*(kalamefile+sizekalmefile-1)==*(kalamevorodi+sizekalmevordi-1))
        return 1;
    return 0;
  }
  return 0;
}
int check_kalamevasat(char *kalamefile,char *kalamevorodi){
if(strcmp(kalamefile,kalamevorodi)==0)
    return 1;
return 0;
}
int check_kalameakhar(char *kalamefile,char *kalamevorodi){
if(strstr(kalamefile,kalamevorodi)!=NULL) {
    if(*(kalamefile)==*(kalamevorodi))
        return 1;
    return 0;
  }
  return 0;

}
int check_kalametanha(char *kalamefile,char *kalamevorodi){
if(strstr(kalamefile,kalamevorodi)!=NULL)
    return abs(kalamefile-strstr(kalamefile,kalamevorodi));
return -1;
}
int check_vojodwild(char *kalamevorodi){
if(strchr(kalamevorodi,'*')!=NULL)
    return 1;
return 0;
}
int makanwild(char *kalamevorodi){
if(*(kalamevorodi)=='*')
    return -1;
else
    return 1;
}
int check_wildcard(char *kalamefile,char *kalamevorodi,int makan){
    if(makan==-1){
        char *copy=(char *)malloc(100*sizeof(char ));
        strcpy(copy,kalamevorodi);
        removeChar(copy,'*');
        int sizekalmevordi=strlen(copy);
        int sizekalmefile=strlen(kalamefile);

        if(strstr(kalamefile,copy)!=NULL) {
            return 0;

        }
    return -1;
    }
    else if(makan==1){
        char *copy=(char *)malloc(100*sizeof(char ));
        strcpy(copy,kalamevorodi);
        removeChar(copy,'*');
        if(strstr(kalamefile,copy)!=NULL){

                return abs(kalamefile-strstr(kalamefile,copy));
        }
        return -1;
    }

}
int check_wildcard1(char *kalamefile,char *kalamevorodi,int makan){
    if(makan==-1){
        char *copy=(char *)malloc(100*sizeof(char ));
        strcpy(copy,kalamevorodi);
        removeChar(copy,'*');
        int sizekalmevordi=strlen(copy);
        int sizekalmefile=strlen(kalamefile);

        if(strstr(kalamefile,copy)!=NULL&&(*(kalamefile+sizekalmefile-1)==*(copy+sizekalmevordi-1))) {
            return 0;

        }
    return -1;
    }
    else if(makan==1){
        char *copy=(char *)malloc(100*sizeof(char ));
        strcpy(copy,kalamevorodi);
        removeChar(copy,'*');

        if(strstr(kalamefile,copy)!=NULL&&(*(kalamefile)==*(copy))){

                return abs(kalamefile-strstr(kalamefile,copy));
        }
        return -1;
    }

}
void removeChar(char *str, char garbage) {

    char *src, *dst;
    for (src = dst = str; *src != '\0'; src++) {
        *dst = *src;
        if (*dst != garbage) dst++;
    }
    *dst = '\0';
}

struct savefinds *findoption(char *esmfile,int tedad,struct savedirandfile kalmatvorodi[],int h){

   struct savefinds *array = malloc(sizeof(struct savefinds) * 100);

    char *took;
char ro[1000];
strcpy(ro,root);
int contersaved=0;
took=strtok(esmfile,"/");
while(took!=NULL){

    if(contersaved!=0){
        strcat(ro,"\\");
        strcat(ro,took);
    }

    took=strtok(NULL,"/");
    contersaved++;
}
FILE *ptr=fopen(ro,"r");
//printf("d");
int yere=0;
if(ptr==NULL){
    printf("in file ra ");
    return;}
while(1){
    char c=fgetc(ptr);
    if(c==' ')
        yere++;
    else
        break;
}
fclose(ptr);
//printf("%s",ro);

ptr=fopen(ro,"r");
    int i=0;
    char c;
    int xox=0;
    char *filestr=(char *)calloc(100000,sizeof(char ));
    while(1){
        c=fgetc(ptr);
        *(filestr+i)=c;
        if(c==EOF)
            break;
     i++;
    }
    *(filestr+i+1)='\0';
    fclose(ptr);
    char *word;
    struct savedirandfile kalame[100];
    int con=0;
    word=strtok(filestr," ");
    while(word!=NULL){
        kalame[con].saved=word;

        word=strtok(NULL," ");
        con++;
    }
    //printf("D");
    int loc=-1;
    int sign=0;
    int x=0;
    int joke=0;
    int start;
    int counterkalamevrodi=0;

        for(int counterkalamefile=0;counterkalamefile<con;counterkalamefile++){

            if(tedad==1){
                   // printf("D");
                   //printf("%s",kalmatvorodi[0].saved);
                if(check_vojodwild(kalmatvorodi[0].saved)&&h==0){
                     int makan=makanwild(kalmatvorodi[0].saved);

                     if(check_wildcard(kalame[counterkalamefile].saved,kalmatvorodi[0].saved,makan)!=-1){
                       int sum=0;
                        for(int shut=0;shut<counterkalamefile;shut++)
                           sum+=strlen(kalame[shut].saved);
                   array[counterarray].location=yere+counterkalamefile+sum+check_wildcard(kalame[counterkalamefile].saved,kalmatvorodi[0].saved,makan);
                    array[counterarray].word=counterkalamefile;
                     char *copy2=(char *)malloc(100*sizeof(char ));
                                    strcpy(copy2,kalmatvorodi[counterkalamevrodi].saved);
                                    removeChar(copy2,'*');
                                    if(makan==1){
                                       array[counterarray].andaze=strlen(kalame[counterkalamefile].saved)-(strstr(kalame[counterkalamefile].saved,copy2)-kalame[counterkalamefile].saved);
                                    }
                                    else{
                                        char *opi=strstr(kalame[counterkalamefile].saved,copy2);
                                        char *back=opi;
                                        while(1){
                                            back=opi;

                                            if(strstr(opi+1,copy2)==NULL)
                                                break;
                                             opi=strstr(opi+1,copy2);

                                        }


                                        array[counterarray].andaze=back-kalame[counterkalamefile].saved+1;
                                    }
                    joke=counterkalamefile;
                    counterarray++;
                   // printf("t");
                }}
                else{
                        //printf("d");
                    if(check_kalametanha(kalame[counterkalamefile].saved,kalmatvorodi[0].saved)!=-1){
                        int sum=0;

                        for(int shut=0;shut<counterkalamefile;shut++)
                           sum+=strlen(kalame[shut].saved);
                   array[counterarray].location=yere+counterkalamefile+sum+check_kalametanha(kalame[counterkalamefile].saved,kalmatvorodi[0].saved);
                array[counterarray].word=counterkalamefile;
                array[counterarray].andaze=strlen(kalmatvorodi[0].saved);
                    joke=counterkalamefile;
                    counterarray++;
                    char *tat=strstr(kalame[counterkalamefile].saved,kalmatvorodi[0].saved);
                           while(1){
                                if(strstr(tat+1,kalmatvorodi[0].saved)==NULL)
                                    break;
                                tat=strstr(tat+1,kalmatvorodi[0].saved);
                   array[counterarray].location=counterkalamefile+sum+check_kalametanha(kalame[counterkalamefile].saved,kalmatvorodi[0].saved)+(tat-kalame[counterkalamefile].saved);
                array[counterarray].word=counterkalamefile;
                 array[counterarray].andaze=strlen(kalmatvorodi[0].saved);
                    joke=counterkalamefile;
                    counterarray++;}
                }}

            }
            else{

                if(counterkalamevrodi==0){

                    if(check_vojodwild(kalmatvorodi[counterkalamevrodi].saved)&&h==0){
                        int makan=makanwild(kalmatvorodi[counterkalamevrodi].saved);
                        if(check_wildcard(kalame[counterkalamefile].saved,kalmatvorodi[counterkalamevrodi].saved,makan)!=-1){
                            int sum=0;
                        for(int shut=0;shut<counterkalamefile;shut++)
                           sum+=strlen(kalame[shut].saved);
                         array[counterarray].location =yere+counterkalamefile+sum+check_wildcard(kalame[counterkalamefile].saved,kalmatvorodi[counterkalamevrodi].saved,makan);loc++;
                           array[counterarray].word=counterkalamefile;
                           start=array[counterarray].location;
                          joke=counterkalamefile;
                          x=0;
                          sign=0;
                          counterarray++;
                          counterkalamevrodi++;



                    }}
                    else{
                         if(check_kalametanha(kalame[counterkalamefile].saved,kalmatvorodi[counterkalamevrodi].saved)!=-1){

                        int sum=0;
                        for(int shut=0;shut<counterkalamefile;shut++)
                           sum+=strlen(kalame[shut].saved);
                    array[counterarray].location =yere+counterkalamefile+sum+check_kalametanha(kalame[counterkalamefile].saved,kalmatvorodi[counterkalamevrodi].saved);loc++;
                    joke=counterkalamefile;
                    array[counterarray].word=counterkalamefile;
                    start=array[counterarray].location;
                    x=0;
                    sign=0;

                    counterarray++;

                    counterkalamevrodi++;
                    }

                }
                if(counterkalamefile==con-tedad&&loc==-1){

                     array[counterarray].location =-1;
                        array[counterarray].word=-1;
                        array[counterarray].andaze=-1;
                }


                }

                else if(counterkalamevrodi==tedad-1){
                       //printf("%s %s\n",kalame[counterkalamefile].saved,kalmatvorodi[counterkalamevrodi]);

                    if(check_vojodwild(kalmatvorodi[counterkalamevrodi].saved)&&h==0){
                         int makan=makanwild(kalmatvorodi[counterkalamevrodi].saved);
                         if(makan==-1){
                                if(check_wildcard(kalame[counterkalamefile].saved,kalmatvorodi[counterkalamevrodi].saved,makan)!=-1){
                                    x++;
                                     int s=-1;
                                   char *copy1=(char *)malloc(100*sizeof(char ));
                                            strcpy(copy1,kalmatvorodi[counterkalamevrodi].saved);
                                            removeChar(copy1,'*');

                            for(int ju=0;ju<counterkalamefile;ju++)
                                s += strlen(kalame[ju].saved)+1;
                                s+=strstr(kalame[counterkalamefile].saved,copy1)-kalame[counterkalamefile].saved+strlen(copy1);
                                array[counterarray-1].andaze=s-start+1;

                                     }
                         }
                         else {
                                if(check_wildcard1(kalame[counterkalamefile].saved,kalmatvorodi[counterkalamevrodi].saved,makan)!=-1){

                                    x++;
                                     int s=-1;

                            for(int ju=0;ju<=counterkalamefile;ju++)
                                s += strlen(kalame[ju].saved)+1;
                                array[counterarray-1].andaze=s-start;


                                    }
                         }

                    }
                    else{
                        if(check_kalameakhar(kalame[counterkalamefile].saved,kalmatvorodi[counterkalamevrodi].saved)){
                            x++;
                            int s=-1;

                            for(int ju=0;ju<counterkalamefile;ju++)
                                s += strlen(kalame[ju].saved)+1;
                                s+=strlen(kalmatvorodi[tedad-1].saved);
                            array[counterarray-1].andaze=s-start+1;

                     }}
                        //printf("%d%s %s\n",x,kalame[counterkalamefile].saved,kalmatvorodi[counterkalamevrodi].saved);
                    if(x==0){
                        counterarray--;
                        array[counterarray].location=-1;
                        array[counterarray].word=-1;
                        array[counterarray].andaze=-1;

                    }

                counterkalamevrodi=0;}

                else{

                    if(check_vojodwild(kalmatvorodi[counterkalamevrodi].saved)&&h==0){
                         int makan=makanwild(kalmatvorodi[counterkalamevrodi].saved);
               // printf("%s %s\n",kalame[counterkalamefile].saved,kalmatvorodi[counterkalamevrodi].saved);
                            if(check_wildcard1(kalame[counterkalamefile].saved,kalmatvorodi[counterkalamevrodi].saved,makan)!=-1){
                                sign++;
                                joke=counterkalamefile;
                                counterkalamevrodi++;}
                                else
                                    sign--;
                    }
                    else{
                        if(check_kalamevasat(kalame[counterkalamefile].saved,kalmatvorodi[counterkalamevrodi].saved)){
                            sign++;
                            joke=counterkalamefile;
                            counterkalamevrodi++;}
                            else
                                sign--;
                    }

                    if(counterkalamefile==con-2&&sign!=tedad-2){
                       array[counterarray-1].location =-1;
                       array[counterarray-1].word =-1;
                       array[counterarray-1].andaze=-1;




                }}
            }


        }

//printf("D");

return array;

}
int  grep(char *add,char *morednazar,int a){
char *file=malloc(1000*sizeof(char));
for(int i=0;i<1000;i++)
    file[i]='\0';
strcpy(file,add);
//printf("%s\n",file);
    char *took;
char ro[1000];
strcpy(ro,root);
int contersaved=0;
took=strtok(add,"/");
while(took!=NULL){

    if(contersaved!=0){
        strcat(ro,"\\");
        strcat(ro,took);
    }

    took=strtok(NULL,"/");
    contersaved++;
}

struct savedirandfile khatha[100];
int counterkhat=0;
int shom=0;
int tokhat=0;
FILE* ptr=fopen(ro,"r");
if(ptr==NULL){
    printf("file ro nadarim\n");
    return ;
}

khatha[0].saved=(char *)malloc(1000*sizeof(char));
char c;
while(1){
    c=fgetc(ptr);
    if(c=='\n'){
            *(khatha[counterkhat].saved+tokhat)='\0';
        counterkhat++;
        shom++;
        khatha[shom].saved=(char *)malloc(1000*sizeof(char));
        tokhat=0;
        continue;

    }
    if(c==EOF){
         *(khatha[counterkhat].saved+tokhat)='\0';
        counterkhat++;
        break;}

    *(khatha[counterkhat].saved+tokhat)=c;
    tokhat++;
}fclose(ptr);
 //printf("%s",khatha[1].saved);
 int t=0;

if(a==0){

for(int i=0;i<counterkhat;i++){

    if(strstr(khatha[i].saved,morednazar)!=NULL)
         printf("%s : %s\n",file,khatha[i].saved);
}}

else if (a==1){
 for(int i=0;i<counterkhat;i++){
    if(strstr(khatha[i].saved,morednazar)!=NULL)
         t++;
}
return t;
}
if(a==2){

for(int i=0;i<counterkhat;i++){
    if(strstr(khatha[i].saved,morednazar)!=NULL)
         printf("%s\n",file);
}}

}
void undo(){
char a[2000];
char op[1000];
int io=1;
char uy[15];
scanf("%s",uy);
if(strcmp(uy,"--file")==0){
getchar();
scanf("%c",&a[0]);

if(a[0]=='"'){

    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='"')
            break;
        io++;
    }

    for(int i=1;i<io;i++)
        op[i-1]=a[i];
        op[io-1]='\0';


getchar();
}
else if(a[0]=='r'){


    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='\n'||a[io]==' '){
            break;
            }
        io++;
    }

    for(int i=0;i<io;i++)
        op[i]=a[i];
op[io]='\0';

}
else
    printf("wrong address.\n");
char *took;
char ro[1000];
strcpy(ro,root);
int contersaved=0;
took=strtok(op,"/");
while(took!=NULL){

    if(contersaved!=0){
        strcat(ro,"\\");
        strcat(ro,took);
    }

    took=strtok(NULL,"/");
    contersaved++;
}
copysaz1(ro);}
else
    printf("eshteb vared kardi\n");
}
int shomaresh(int u,char* content){
    int si=0;
for(int o=u;o>=0;o--)
{
    if (content[o] == '{'){
                    si++;
    }else if(content[o] == '}'){
                    si--;
                }
}
return si;
}
void indghozari(){
char a[2000];
char op[1000];
int io=1;
char uy[15];
scanf("%s",uy);
if(strcmp(uy,"--file")==0){
getchar();
scanf("%c",&a[0]);

if(a[0]=='"'){

    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='"')
            break;
        io++;
    }

    for(int i=1;i<io;i++)
        op[i-1]=a[i];
        op[io-1]='\0';


getchar();
}
else if(a[0]=='r'){


    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='\n'||a[io]==' '){
            break;
            }
        io++;
    }

    for(int i=0;i<io;i++)
        op[i]=a[i];
op[io]='\0';

}
else
    printf("wrong address.\n");
char *took;
char ro[1000];
strcpy(ro,root);
int contersaved=0;
took=strtok(op,"/");
while(took!=NULL){

    if(contersaved!=0){
        strcat(ro,"\\");
        strcat(ro,took);
    }

    took=strtok(NULL,"/");
    contersaved++;
}
char *content=(char *)malloc(1000000*sizeof(char));

FILE *ptr=fopen(ro,"r");
int conterfile=0;
if(ptr==NULL){
    printf("na");
    return 0;}
copysaz(ro);
while(1){
    char c=fgetc(ptr);
    if(c==EOF)
        break;
    content[conterfile]=c;
    conterfile++;
}
content[conterfile]='\0';
fclose(ptr);
//printf("//%s//\n",content);
int i=0;

while(i<zo){
    if(content[i]=='{' && content[i-1]!=' '&&i!=0){
        for(int u=zo-1;u>i-1;u--)
            content[u+1]=content[u];
        content[i]=' ';
        i+=2;
    }

    i++;
}
//content[i]='\0';
i=0;
//printf("//%s//\n",content);
while(i<zo){
    if(content[i]=='{'){
        for(int u=i+1;u<zo;u++){
            if(content[u]!=' '){
                for(int s=i+1;s<zo;s++)
                   content[s] =content[s+u-i-1];
                break;
            }

        }
    }

 i++;
}
i=0;

while(i<zo){
    if(content[i]=='{'){
        for(int u=i-1;u>=0;u--){
               //printf("d");
            if(content[u]!=' '){
                    if ((i - u) > 2){
                for(int s=u+2;s<zo;s++){

                    content[s]=content[s+i-u-2];}}
            break;
            }
        }
    }
    i++;
}
//printf("//%s//\n",content);
i=0;
while(i<zo){
    if(content[i]=='}'){
        for(int u=i+1;u<zo;u++){
            if(content[u]!=' '){
                for(int s=i+1;s<zo;s++)
                   content[s] =content[s+u-i-1];
                break;
            }

        }
    }

 i++;
}
//printf("1//%s//\n",content);
i=0;
while(i<zo){
    if(content[i]=='}'){
        for(int u=i-1;u>=0;u--){
            if(content[u]!=' '){

                for(int s=u+1;s<zo;s++)
                    content[s]=content[s+i-u-1];
            break;
            }
        }
    }
    i++;
}
i=0;
int sum=0;
while(i<zo){
        if(content[i]=='{'){
            sum++;

         for (int p = zo; p > i; p--){
                content[p+(sum*4+1)] = content[p];
            }content[i+1]='\n';
            int tr=2;
            for(int u=tr;u<sum*4+2;u++)
                content[u+i]=' ';}
        else if(content[i]=='}'){
            sum--;
            for (int p = i-1; p >= 0; p--){
                if (content[p] != ' ' && content[p] != '\n'){
                        for (int dani = zo-1; dani> p; dani--){
                            content[dani+(sum*4+1)] = content[dani];
                        }
            content[p+1] = '\n';
            for (int u= 2; u < sum*4+2; u++){
                content[u+p] = ' ';
            }
            break;
        }

}
 i += sum*4+1;
}
i++;}
//printf("//%s//\n",content);
i=0;

while(i<zo){
    if (content[i] == '}' && content[i+1] != '\n' && content[i+1] != '}'){

        int braket=shomaresh(i,content);

        for (int t = zo-1; t > i; t--){
                content[t+(braket*4+1)] = content[t];
            }
            content[i+1] = '\n';
            for (int rise = 2; rise < braket*4+2; rise++){
                content[rise+i] = ' ';
            }
            i += braket*4+1;
            braket= 0;
    }
    i++;
}
//printf("//%s//\n",content);
int unit=zo;
for (int i1 = 0; i1 < unit; i1++){
        if (content[i1] == '}'){
            for (int ko= i1-1; ko >= 0; ko--){
                if (content[ko] != ' ' && content[ko] != '\n'){
                    if (content[ko] == '{'){
                        for (int j = i1-4; j < unit; j++){
                            content[j] = content[j+4];
                        }
                    } else {
                        break;
                    }
                    break;
}}}}
content[zo-1] = '\0';
FILE* osi=fopen(ro,"w");
fprintf(osi,"%s",content);
fclose(osi);}
else
    printf("doroat vared kon\n");
}
void textcomparator(char * add,char* add1){
    char *took;
char ro[1000];
strcpy(ro,root);
int contersaved=0;
took=strtok(add,"/");
while(took!=NULL){

    if(contersaved!=0){
        strcat(ro,"\\");
        strcat(ro,took);
    }

    took=strtok(NULL,"/");
    contersaved++;
}
struct savedirandfile khatha[100];
int counterkhat=0;
int shom=0;
int tokhat=0;
FILE* ptr=fopen(ro,"r");
//printf("%s\n",ro);
if(ptr==NULL){
    printf("file 1 ro nadarim\n");
    return ;
}

khatha[0].saved=(char *)malloc(1000*sizeof(char));
char c;
while(1){
    c=fgetc(ptr);
    if(c=='\n'){
            *(khatha[counterkhat].saved+tokhat)='\0';
        counterkhat++;
        shom++;
        khatha[shom].saved=(char *)malloc(1000*sizeof(char));
        tokhat=0;
        continue;

    }
    if(c==EOF){
             *(khatha[counterkhat].saved+tokhat)='\0';
             counterkhat++;
        break;}


    *(khatha[counterkhat].saved+tokhat)=c;
    tokhat++;
}fclose(ptr);
char *took1;
char ro1[1000];
strcpy(ro1,root);
int contersaved1=0;
took=strtok(add1,"/");
while(took1!=NULL){

    if(contersaved1!=0){
        strcat(ro1,"\\");
        strcat(ro1,took1);
    }

    took1=strtok(NULL,"/");
    contersaved1++;
}
struct savedirandfile khatha1[100];
int counterkhat1=0;
int shom1=0;
int tokhat1=0;
//printf("%s\n",ro1);
FILE* ptr1=fopen(ro1,"r");
//printf("%s",ro1);
if(ptr1==NULL){
    printf("file 2 ro nadarim\n");
    return ;
}

khatha1[0].saved=(char *)malloc(1000*sizeof(char));
char c1;
while(1){
    c1=fgetc(ptr1);
    if(c1=='\n'){
            *(khatha1[counterkhat1].saved+tokhat1)='\0';
        counterkhat1++;
        shom1++;
        khatha1[shom1].saved=(char *)malloc(1000*sizeof(char));
        tokhat1=0;
        continue;

    }
    if(c1==EOF){
             *(khatha1[counterkhat1].saved+tokhat1)='\0';
             counterkhat1++;
        break;}

    *(khatha1[counterkhat1].saved+tokhat1)=c1;
    tokhat1++;
}fclose(ptr1);
if(shom==shom1){
for(int i=0;i<=shom;i++){

    if(strcmp(khatha1[i].saved,khatha[i].saved)!=0){
        printf("\n========#%d========\n",i+1);
        printf("%s\n",khatha[i].saved);
        printf("%s\n",khatha1[i].saved);
    }
}
}
else{
    if(shom>shom1){
        for(int i=0;i<=shom1;i++){

    if(strcmp(khatha1[i].saved,khatha[i].saved)!=0){
        printf("\n========#%d========\n",i+1);
        printf("%s\n",khatha[i].saved);
        printf("%s\n",khatha1[i].saved);
    }
    }
     printf("\n>>>>>>>>>>> #%d - #%d>>>>>>>>>>>>\n",shom1+2,shom+1);
    for(int i=shom1+1;i<=shom;i++){
       printf("%s\n",khatha[i].saved);
    }
    }
    if(shom<shom1){
        for(int i=0;i<=shom;i++){

    if(strcmp(khatha1[i].saved,khatha[i].saved)!=0){
        printf("\n========#%d========\n",i+1);
        printf("%s\n",khatha[i].saved);
        printf("%s\n",khatha1[i].saved);
    }
    }
     printf("\n>>>>>>>>>>> #%d - #%d>>>>>>>>>>>>\n",shom+2,shom1+1);
    for(int i=shom+1;i<=shom1;i++){
       printf("%s\n",khatha1[i].saved);
    }
    }
}
}
void tree(char *basePath, const int deph,int mpi)
{
    int i;
    char path[1000];
    struct dirent *dp;
    DIR *dir = opendir(basePath);

    if (!dir)
        return;

    while ((dp = readdir(dir)) != NULL)
    {
        if (strcmp(dp->d_name, ".") != 0 && strcmp(dp->d_name, "..") != 0)
        {
            for (i=0; i<deph; i++)
            {
                if (i%2 == 0 || i == 0)
                    printf("%c", 179);
                else
                    printf(" ");

            }

            printf("%c%c%s\n", 195, 196, dp->d_name);

            strcpy(path, basePath);
            strcat(path, "/");
            strcat(path, dp->d_name);
             if(2*mpi>deph)
            tree(path, deph + 2,mpi);
        }
    }

    closedir(dir);
}

int main(){
char vorodi[1500];
char* past=(char *)malloc(100000*sizeof(char));
while(1){
scanf("%s",vorodi);

if(strcmp(vorodi,"crf")==0){
char yoi[10];
scanf("%s",yoi);

if(strcmp(yoi,"--file")==0)
    getcrf();
else
    printf("invalid input");
}
else if(strcmp(vorodi,"cat")==0){
  char yoi[10];
scanf("%s",yoi);

if(strcmp(yoi,"--file")==0)
    getcat();
else
    printf("invalid input");
}
else if(strcmp(vorodi,"insertstr")==0){
 char yoi[10];
scanf("%s",yoi);

if(strcmp(yoi,"--file")==0)
    getinsert();
else
    printf("invalid input");
}
else if(strcmp(vorodi,"removestr")==0){
 char yoi[10];
scanf("%s",yoi);

if(strcmp(yoi,"--file")==0)
   getremovestr();
else
    printf("invalid input");
}
else if(strcmp(vorodi,"copystr")==0){
 char yoi[10];
scanf("%s",yoi);

if(strcmp(yoi,"--file")==0)
  past=getcopystr();
else
    printf("invalid input");
}
else if(strcmp(vorodi,"cutstr")==0){
 char yoi[10];
scanf("%s",yoi);

if(strcmp(yoi,"--file")==0)
  past=getcutstr();
else
    printf("invalid input");
}
else if(strcmp(vorodi,"pastestr")==0){
 char yoi[10];
scanf("%s",yoi);

if(strcmp(yoi,"--file")==0)
  getpaststr(past);
else
    printf("invalid input");
}
else if(strcmp(vorodi,"find")==0){
 char yoi[10];
scanf("%s",yoi);

if(strcmp(yoi,"--str")==0)
  getfind();
else
    printf("invalid input");
}
else if(strcmp(vorodi,"replace")==0){
 char yoi[10];
scanf("%s",yoi);

if(strcmp(yoi,"--str1")==0)
  getreplace();
else
    printf("invalid input");
}
else if(strcmp(vorodi,"grep")==0){
  getgrep();

}
else if(strcmp(vorodi,"undo")==0){
    undo();
}
else if(strcmp(vorodi,"auto-indent")==0){
    indghozari();}
else if(strcmp(vorodi,"compare")==0){
    char a[2000];

int io=1;
getchar();
scanf("%c",&a[0]);
char op[10000];
for(int i=0;i<10000;i++)
    op[i]='\0';
if(a[0]=='"'){

    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='"')
            break;
        io++;
    }
    for(int i=1;i<io;i++)
        op[i-1]=a[i];
        op[io-1]='\0';
getchar();

}
else if(a[0]=='r'){


    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='\n'||a[io]==' '){
            break;
            }
        io++;
    }

    for(int i=0;i<io;i++)
        op[i]=a[i];
}
  char a1[2000];

int io1=1;

scanf("%c",&a1[0]);
char op1[10000];
for(int i=0;i<10000;i++)
    op1[i]='\0';
if(a1[0]=='"'){

    while(1){
       scanf("%c",&a1[io1]);
        if(a1[io1]=='"')
            break;
        io1++;
    }
    for(int i=1;i<io1;i++)
        op1[i-1]=a1[i];
        op1[io-1]='\0';
getchar();

}
else if(a1[0]=='r'){


    while(1){
       scanf("%c",&a1[io1]);
        if(a1[io1]=='\n'||a1[io1]==' '){
            break;
            }
        io1++;
    }

    for(int i=0;i<io1;i++)
        op1[i]=a1[i];
}
printf("%s %s\n",op,op1);
textcomparator(op,op1);
}
else if(strcmp(vorodi,"tree")==0){
    int poe;
    scanf("%d",&poe);
    if(poe<-1)
        printf("valid nist\n");
    else if(poe==-1)
        tree(root,0,25);
    else
        tree(root,0,poe);
}
else if(strcmp(vorodi,"exit")==0){
    break;}
else
    printf("in dastor vojod nadard\n");
}
return 0;



}
