#include "coutLog.h"
int repeat(int times, string message){   
    for(int i = 0; i < times; i++){
        log(message);
    }
    return 0;
}
