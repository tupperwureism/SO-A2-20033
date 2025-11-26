#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main ()
{
    int pid;

    pid = fork(); /* Duplikasi proses, Child dan parent */
    
    if (pid != 0) /* jika pid tidak nol, artinya saya parent */
    {
        while (1) /* Tidak Terminate dan tidak mengeksekusi wait() */
        {
           sleep(100); /* berhenti selama 100 detik */
        }
    }
    else /* pid adalah nol, artinya saya child */
    {
        exit(42); /* exit dengan angka berapapun */
    }
}
