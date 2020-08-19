//
unigned int buggy_global = -1;

int main()
{

    int *a = malloc(10000);

    a++;
    free(a);
}
