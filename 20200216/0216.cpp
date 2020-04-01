int main()
{
int fd=open(filename,O_RDONLY);
if(fd<0){
perrot("open error");
return -1;
}
printf("open success");

while(1)
{
char buf[1024]={0};
int ret=read(fd,buf,1024);
if(ret<0)
{
perror("read error");
return -1;
}
printf("read buf:[%s]\n",buf);
}
close(fd);
return 0;
}

