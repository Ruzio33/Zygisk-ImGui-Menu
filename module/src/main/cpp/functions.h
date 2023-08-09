#ifndef ZYCHEATS_SGUYS_FUNCTIONS_H
#define ZYCHEATS_SGUYS_FUNCTIONS_H

// here you can define variables for the patches
bool ;

monoString *CreateIl2cppString(const char *str) {
    monoString *(*String_CreateString)(void *instance, const char *str) = (monoString*(*)(void*, const char*)) (g_il2cppBaseMap.startAddress + string2Offset(OBFUSCATE("0x2596B20")));
    return String_CreateString(NULL, str);
}


void Pointers() {

}

void Patches() {
  
}

// declare your hooks here
void (*old_Backend)(void *instance);
void Backend(void *instance) {
    if (instance != NULL) {
       
    }
    return old_Backend(instance);
}



void Hooks() {
    
}

#endif //ZYCHEATS_SGUYS_FUNCTIONS_H
