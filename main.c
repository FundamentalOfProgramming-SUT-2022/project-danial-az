#include<stdio.h>
#include<string.h>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#define root "C:\\Users\\Danial\\Desktop\\root"



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
        if(a[io]=='\n'){
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
printf("%s\n",op);
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

    while(1){
       scanf("%c",&au[io]);
        if(pip[io]=='"')
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
printf("%s %s",op,pip);
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
    printf("invalid syntax");
}
else
    printf("invalid syntax");
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
    if(file==NULL)
        printf("file isn,t exist");

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


int main(){
char vorodi[1500];
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

return 0;

}
