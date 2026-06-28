#include<iostream>
#include<ctime>
using namespace std;



// output time

// int main(){
//     clock_t before = clock();
//     int k = 0;
//     for(int i = 0;i<100000; i++){
//         k += i;
//     }
//     clock_t duration = clock() - before;
//     cout << "Duration: " << (float)duration / CLOCKS_PER_SEC << " seconds";
//     return 0;
// }




// seconds till new year

int main(){
    time_t now;
    time_t nextyear;
    struct tm datetime;

    now = time(NULL);
    datetime = *localtime(&now);
    datetime.tm_year = datetime.tm_year + 1;
    datetime.tm_mon = 0;
    datetime.tm_mday = 1;
    datetime.tm_hour = 0; datetime.tm_min = 0;
    datetime.tm_sec = 0;
    datetime.tm_isdst = -1;
    nextyear = mktime(&datetime);

    int diff = difftime(nextyear,now);
    cout << diff << " Seconds until next year";

    return 0;
}