

int main(int argc, int *argv){
  initLibrary();

    
	lock(); 

	println();
	println();
	printInteger(getpid());
	printInteger(getpid());
	printInteger(getpid());
	println();
	println();

	unlock();

	return 0;
}


