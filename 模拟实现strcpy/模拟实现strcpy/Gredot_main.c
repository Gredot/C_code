char* __cdecl strcpy(char* dst, const char* src)
{
    char* cp = dst;

    while ((*cp++ = *src++) != '\0')
        ;               /* Copy src over dst */

    return(dst);
}
