/*
Anandi is involved in developing a new web browser
After many sleepless nights she finishes most of the modules of her new web browser and only server error pages notification module is left out.
She is planning to launch her browser within a weeks time. So can you help her to complete the error page module?
Functional Description:
400-BAD REQUEST
401-UNAUTHORIZED
403-FORBIDDEN
404-Not Found
500-Internal Server Error
*/
#include <stdio.h>
typedef enum{BADREQUEST=400,UNAUTHORIZED=401,FORBIDDEN=403,NOTFOUND=404,INTERNALSERVERERROR=500}Status;
int main()
{
    Status serverstatuscode;
    scanf("%u",&serverstatuscode);
    if(serverstatuscode==400) printf("BAD REQUEST");
    if(serverstatuscode==401) printf("UNAUTHORIZED");
    if(serverstatuscode==403) printf("FORBIDDEN");
    if(serverstatuscode==404) printf("NOT FOUND");
    if(serverstatuscode==500) printf("INTERNAL SERVER ERROR");
    return 0;
}
