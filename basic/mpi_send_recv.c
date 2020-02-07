#include <mpi.h>
#include <stdio.h>


int main(int argc, char *argv[]){

	MPI_Init(&argc, &argv);

	int rank,number;
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);

	
	if(rank==0){
		number = 23;
		MPI_Send(&number,1,MPI_INT,1,0,MPI_COMM_WORLD);
	}
	else if (rank == 1){
		MPI_Recv(&number,1,MPI_INT,0,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
		printf("I received the number %d from the process with rank 0. My rank is %d.\n",number ,rank);
	}

	MPI_Finalize();

}