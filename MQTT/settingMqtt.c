#include <stdio.h>
#include <string.h>
#include <mosquitto.h>
int main()
{
    printf("*********\n Mosquitto world\n******!\n");
    int rc;     //retrn var
    struct mosquitto *mosqt ;
    mosquitto_lib_init();   //initalize mosquitto lib

    //create client instance
     mosqt = mosquitto_new("publisher-test",true, NULL);

     //connect mqtt broker
     rc = mosquitto_connect(mosqt, "localhost", 1883, 60);
     if(rc != 0){
         printf("Couldnot connect to the remote location ! Errro code : %d\n", rc);
         mosquitto_destroy(mosqt);
     }
     printf("We are connected \n");
     const char* msg ="Hello Mosquttio";
     int size = strlen(msg);
     char end;

     //publish message
     mosquitto_publish(mosqt, NULL, "test/t1", size , msg, 0, false);
     end = getchar();
     if(end=='E'){
         mosquitto_publish(mosqt, NULL, "test/t1", size , "Disconneted", 0, false);
         mosquitto_disconnect(mosqt);
         mosquitto_destroy(mosqt);
         mosquitto_lib_cleanup();
         printf("Diconnect \n");

     }
     //publish message
     



     
     return 0;
     
}

