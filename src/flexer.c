#include <stdio.h>
#include <time.h>

int main() {

struct timespec tim25, tim35, tim40, tim50, tim100;

tim25.tv_sec = 0;
tim25.tv_nsec = 250000000L;

tim35.tv_sec = 0;
tim35.tv_nsec = 350000000L;

tim40.tv_sec = 0;
tim40.tv_nsec = 400000000L;

tim50.tv_sec = 0;
tim50.tv_nsec = 500000000L;

tim100.tv_sec = 1;
tim100.tv_nsec = 0L;


while(1)
{
printf("Reading package lists... Done\n");
nanosleep(&tim25, NULL);
printf("Building dependency tree\n");
nanosleep(&tim25, NULL);
printf("Reading state information... Done\n");
nanosleep(&tim25, NULL);
printf("Suggested packages:\n\thunspell\n");
nanosleep(&tim25, NULL);
printf("The following NEW packages will be installed:\n");
printf("\tnano\n");
nanosleep(&tim35, NULL);
printf("0 upgraded, 1 newly installed, 0 to remove and 0 not upgraded.\n");
nanosleep(&tim25, NULL);
printf("Need to get 252 kB of archives.\n");
nanosleep(&tim25, NULL);
printf("After this operation, 754 kB of additional disk space will be used.\n");
nanosleep(&tim35, NULL);
printf("Get:1 http://ports.ubuntu.com/ubuntu-ports focal/main armhf nano armhf\n");
nanosleep(&tim25, NULL);
printf("4.8-1ubuntu1 [252 kB]\n");
nanosleep(&tim40, NULL);
printf("Fetched 252 kB in 3s (77.7 kB/s)\n");
nanosleep(&tim25, NULL);
printf("debconf: delaying package configuration, since apt-utils is not installed\n");
nanosleep(&tim25, NULL);
printf("Selecting previously unselected package nano.\n");
nanosleep(&tim35, NULL);
printf("(Reading database ... 21749 files and directories currently installed.)\n");
nanosleep(&tim25, NULL);
printf("Preparing to unpack .../\n");
nanosleep(&tim50, NULL);
printf("nano_4.8-1ubuntu1_armhf.deb ...\n");
nanosleep(&tim25, NULL);
printf("Unpacking nano (4.8-1ubuntu1) ...\n");
nanosleep(&tim40, NULL);
printf("Setting up nano (4.8-1ubuntu1) ...\n");
nanosleep(&tim35, NULL);
printf("update-alternatives: using /bin/nano to provide /usr/bin/editor (editor) in auto mode\n");
nanosleep(&tim25, NULL);
printf("update-alternatives: using /bin/nano to provide /usr/bin/pico (pico) in auto mode\n");
nanosleep(&tim100, NULL);
}
}
