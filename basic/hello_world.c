#include <mpi.h>
#include <stdio.h>


int main(int argc, char *argv[]){

	MPI_Init(&argc, &argv);

	int rank;
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);

	printf("Hello World!\n");
	if(rank==0){
		printf("I have rank %d\n", rank);
	}

	MPI_Finalize();

}