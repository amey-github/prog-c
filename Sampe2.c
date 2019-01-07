#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* jobs_left(int n, int m, int comp[], int* rem);
void assign(int* rem, int* chef, int* asschef, int ctr);

void main()
{
    int T=0, i=0, n=0, m=0, j;

    scanf("%d", &T);

    for(i=0 ; i<T ; i++)
    {
        int ctr = 0;
        int M[T], N[T];
        scanf("%d %d", &N[i] , &M[i]);

        int* chef, *asschef, *rem;

        //n = total no of jobs
        n = N[i];

        //m = no of completed jobs
        m = M[i];
        int comp[m];

        //printf("%d %d\n", N[i], M[i]);

        //store m no of completed job indexes
        for(j=0 ; j<m ; j++)
            scanf("%d", &comp[j]);

        /*for(j=0 ; j<m ; j++)
            printf("%d ", comp[j]);*/

        rem = jobs_left(n , m, comp, rem);
        ctr = n-m;

        /*for(j=0 ; j<ctr ; j++)
        printf("%d ", rem[j]);*/

        assign(rem, chef, asschef, n-m);
    }
}

//store remaining jobs in array
int* jobs_left(int n, int m, int comp[], int* rem)
{
    int i=0, j=0, ctr = 0, flag = 1;
    rem = (int*)malloc((n-m)*sizeof(int));

    for(i=1 ; i<=n ; i++)
    {
        int flag = 1;

        //checking if job_index != comp job
        for(j=0 ; j<m ; j++)
        {
            if(i==comp[j])
                flag = 0;
        }

        //if job not comp, then store
        if(flag)
        {
            rem[ctr] = i;
            //printf("%d\t", rem[ctr]);
            ctr++;
            //printf("\n%d", ctr);
        }

    }
    return rem;
}

//assign  rem jobs to chef and asschef
void assign(int* rem, int* chef, int* asschef, int ctr)
{
    int i=0;
    chef = (int*)malloc((ctr/2+1)*sizeof(int));
    asschef = (int*)malloc((ctr/2)*sizeof(int));

    for(i=0 ; i<ctr ; i++)
    {
        if(i%2==0)
            chef[i/2] = rem[i];

        else
            asschef[i/2] = rem[i];
    }

    //puts("\nCHEF : \n");
    for(i=0 ; i<ctr-(ctr/2) ; i++)
        printf("%d ", chef[i]);

    puts("");

    //puts("\nASSCHEF : \n");
    for(i=0 ; i<(ctr/2) ; i++)
        printf("%d ", asschef[i]);
}
