#include "app.h"
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char** argv) {
   
   if( argc != 3 )
   {
      printf( "ERROR: tick [ID] [tickets]\n" );
      return 1;
   }

   int ID                = atoi( argv[1] );
   int number_of_tickets = atoi( argv[2] );
   
   if(number_of_tickets > 16 || number_of_tickets < 0)
   {
      printf("ERROR: invaild ticket count\n");
      return 1;
   }

   settickets( number_of_tickets );

   while(1)
   {
      printf("Process %d tick\n", ID);
   }

   return 0;
}
