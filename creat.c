#include<stdio.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<string.h>

int main()

{
	key_t mqkey=0xff1a1b00;
	int mqid;
	mqid=msgget(mqkey, IPC_CREAT|0777); //IPC_CREAT
	printf("message queue ID = %d\n", mqid);

}
