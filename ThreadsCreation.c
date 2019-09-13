#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>

void *mythread()
{

  printf("Hello i am thread created by prashanth\n");
  sleep(5);
 
}

int main()
{
 
   pthread_t threadid;
  
   int err;
    
   err = pthread_create(&threadid, NULL, mythread, NULL);
   
   if(err != 0)
   {
       printf("Thread didnot create successfully\n");
   }
   else
   {
       printf("Thread created successfully\n");
   }

   pthread_join(threadid, NULL);

   exit(0);

}



