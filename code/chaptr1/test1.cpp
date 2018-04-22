#include "apue.h"
#include "error.c"
#include <strings.h>
#include <string>
using namespace std;

int main(void){
    std::string str = "from_unixtime(1518019199)";
    int tmpIndex1 = str.find( "(" );
    int tmpIndex2 = str.find( ")" );
    str = str.substr( tmpIndex1 + 1, tmpIndex2-tmpIndex1-1 );
    str = "1997";
    printf("%s\n",str.c_str());
    //转为彗¥彜~_庠¼廾O 
    const char *timestampstr = str.c_str();
    time_t timenum = ( time_t )strtol( timestampstr, NULL, 10 );
    struct tm *ttime ;
    ttime = localtime( &timenum );
    char timestr[64];
    strftime( timestr, 64, "%Y-%m-%d %H:%M:%S", ttime );
    std::string newTimeString( timestr );
    newTimeString = "'" + newTimeString + "'";
    printf("%s\n",newTimeString.c_str());
    return 0;
}

