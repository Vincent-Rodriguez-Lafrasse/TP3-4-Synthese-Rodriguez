#include <time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/utsname.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>



void promptGetTftp(char * argv[]);
void promptPutTftp( char * argv[]);

typedef struct 
		{
			char* Frame, *File, *Mode;
			int length;	
		}FrameRRQ;

FrameRRQ RRQ(char* filename,char* mode);
