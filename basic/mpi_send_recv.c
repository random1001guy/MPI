#include <mpi.h>
#include <stdio.h>


int main(int argc, char *argv[]){

	MPI_Init(&argc, &argv);

	int rank,number;
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);

	
	if(rank==0){
		number = 23;
		printf("\nHey, this is process with rank %d. I'm sending the number %d to process with rank 1.\n", rank, number );
		MPI_Send(&number,1,MPI_INT,1,0,MPI_COMM_WORLD);
	}
	else if (rank == 1){
		MPI_Recv(&number,1,MPI_INT,0,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
		printf("\nI received the number %d from the process with rank 0. My rank is %d.\n",number ,rank);
	}
	else{
		printf("\nI'm the process with rank %d\n",rank);
	}

	MPI_Finalize();

}