#include<stdlib.h>
#include<sys/types.h>
#include<time.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
int main(void){
char*path,path1[10];
struct stat*nfile;
nfile=(struct stat*)malloc(sizeof(struct stat));
printf("Enter the name of file: ");
scanf("%s",path1);
stat(path1,nfile);
printf("user id: %s ",nfile->st_uid);
printf("Block size: %s",nfile->st_blksize);
printf("Access time: %s",ctime(&nfile->st_atime));
printf("Production mode: %s",nfile->st_mode);
printf("size of file: %s",nfile->st_size);
printf("Number of link: %s",nfile->st_nlink);

}
