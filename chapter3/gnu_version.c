#include <stdio.h>
#include <stdlib.h>
#include <gnu/libc-version.h>
#include <unistd.h>
int main(){
        printf("%s\n",gnu_get_libc_version());
        char *gun_libc_version_buf;
        size_t n;
        n = confstr(_CS_GNU_LIBC_VERSION,NULL,(size_t) 0);
        if (n > 0) {
                gun_libc_version_buf = malloc(n);
        }
        if (gun_libc_version_buf == NULL)
                abort();
        confstr(_CS_GNU_LIBC_VERSION, gun_libc_version_buf, n);
        printf("_CS_GNU_LIBC_VERSION, the GNU C library version on this system: %s\n" \
                        , gun_libc_version_buf);
        free(gun_libc_version_buf);
        gun_libc_version_buf = NULL;

        return 0;
}
