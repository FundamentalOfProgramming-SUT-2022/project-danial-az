#include<stdio.h>
#include<string.h>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#define root "C:\\Users\\Danial\\Desktop\\root"

char *cutstr(char *,char*,int ,int,int,char );
char *copystr(char*,int ,int,int,char );

struct savedirandfile{
char *saved;

};
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
    char op[1000];
    for(int i=1;i<io;i++)
        op[i-1]=a[i];
    creatfile(op);
}
else if(a[0]=='r'){


    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='\n'||a[io]==' '){
            break;
            }
        io++;
    }
char op[1000];
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
    char op[1000];
    for(int i=1;i<io;i++)
        op[i-1]=a[i];
    cat(op);
}
else if(a[0]=='r'){


    while(1){
       scanf("%c",&a[io]);
        if(a[io]=='\n'){
            break;
            }
        io++;
    }
char op[1000];
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
op[io]='\0';
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
op[io]='\0';
}
else
    printf("wrong address.\n");

char pi[15];
getchar();
scanf("%s",pi);
if(strcmp(pi,"--str")){
char au[10000];
char pip[10000];
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
printf("%s %s",op,pip);
 insertinfile(op,pip,line,pos);

 }
 else
    printf("invalid syntax\n");
}
else
    printf("invalid syntax\n");
}
else
    printf("invalid syntax\n");
}
void getremovestr(){
char a[2000];
int io=1;
getchar();
char op[1000];
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
       removestr(op,line,pos,size,y);
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
char op[1000];
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
op[io]='\0';
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
op[io]='\0';
}
else
    printf("wrong address.\n");

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

 paststr(op,line,pos,past);

 }
 else
    printf("invalid syntax\n");
}
else
    printf("invalid syntax\n");
}



int existfile(const char* name){
DIR* dir = opendir(name);
if (dir) {
        return 1;
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
      //printf("Unable to create directory\n");
      exit(1);
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
    printf("this file is exist.");
else{
FILE *ptr;
ptr=fopen(po,"w");
if(ptr == NULL)
   {
      printf("Error!");
      exit(1);
   }
   printf("your file created");
fclose(ptr);
}


}

void cat(char *esmfile){
char *took;
char ro[]=root;
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
char ro[]=root;
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
char ro[]=root;
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
}
else if(a=='b'){
    for(int i=0;i<count-size;i++){
            *(jadid+i)=*(back+i);

    }
    fputs(jadid,ptr1);
    fputs(forward,ptr1);
}

fclose(ptr1);
}
char* copystr(char *add,int line,int pos,int size,char a){


    char *took;
char ro[]=root;
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
insertinfile(add,past,line,pos);
}
int main(){
char vorodi[1500];
char* past;
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
else if(strcmp(vorodi,"paststr")==0){
 char yoi[10];
scanf("%s",yoi);

if(strcmp(yoi,"--file")==0)
  getpaststr(past);
else
    printf("invalid input");
}
else if(strcmp(vorodi,"exit")==0)
    break;}
return 0;

}
