
#ifndef _MYPRINTF_H_
#define _MYPRINTF_H_

#define PRINTSWITCH    0      //��������

#if PRINTSWITCH 

    #define  myPrint  printf
#else
    
    #define  myPrint(...)
#endif


int myPrintFunction(const char* str, ...);


#endif

