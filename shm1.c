#include<stdio.h>
#include<sys/shm.h>
#include<sys/ipc.h>
#include<string.h>


int main()
{
	int shmid;
	char *p;
	key_t shmkey=0xffaab00;
	shmid=shmget(shmkey,980,IPC_CREAT|0777);
	printf("shared memory ID = %d\n", shmid);
	p=shmat(shmid,0,0);//0 -> read & write SHM_RDONLY->read only

	strcpy(p,"shared memory IPC mechanisim in linux kernel");
	shmdt(p);

}

