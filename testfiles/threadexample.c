

int main(int argc, int *argv){
  initLibrary();

    
	lock();
	print("Thread "); 
	printInteger(getpid());
	print(" executing critical section!")
	println();

	printInteger(getpid());
	printInteger(getpid());
	printInteger(getpid());
	printInteger(getpid());

	println();
	print("Thread ");
	printInteger(getpid());
	print(" leaving critical section!");
	println();
	unlock();



	return 0;
}


