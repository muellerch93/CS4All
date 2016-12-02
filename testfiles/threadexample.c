

int main(int argc, int *argv){
  int i;
  initLibrary();
  i=0;
	println();
	println();



	printInteger(getpid());
    
	lock(); 
	println();
	printInteger(getpid());
	printInteger(getpid());
	printInteger(getpid());
	println();
	unlock();
		 

	println();
	println();
	return 0;
}


