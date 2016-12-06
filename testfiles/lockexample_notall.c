

int main(int argc, int *argv){
  initLibrary();

	if(getpid()!=2){
		lock(); 
	}

	println();
	println();
	printInteger(getpid());
	printInteger(getpid());
	printInteger(getpid());
	println();
	println();
	if(getpid()!=2){
		unlock();
	}

	return 0;
}


