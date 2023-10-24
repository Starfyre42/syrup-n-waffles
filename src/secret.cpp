#include "secret.h"

bool Secret::check(string ln){
return ln == trigger;
}
void Secret::exec(){
    cout<<msg<<endl;
    
}