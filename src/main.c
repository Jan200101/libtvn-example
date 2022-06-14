#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "steam.h"
#include "toast.h"

int main()
{
    char* of_dir = getOpenFortressDir();
    if (!of_dir)
        of_dir = strdup("Not Found");
    printf("Install Directory:\n\t%s\n", of_dir);

    char* remote = getLocalRemote(of_dir);
    printf("Server:\n\t%s\n", remote);
    free(remote);

    int local_rev = getLocalRevision(of_dir);
    printf("Revision:\t\n");
    if (local_rev == -1)
        puts("\tNot installed");
    else
        printf("\t%i\n", local_rev);

    free(of_dir);

    return 0;
}