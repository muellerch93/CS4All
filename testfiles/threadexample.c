
int myGlobalVar;
//int globalCount;
int main(int argc, int *argv){
	int myVariable;
	int i;
	int* array;
	myVariable=0;
	i=0;
	initLibrary();


	
	lock();
	*array=malloc(100);
	myVariable=myVariable+1;
	myGlobalVar=myGlobalVar+1;
	*(array+0)=getpid();
	print("global var: ");
	printInteger(myGlobalVar);
	println();
	print("local var: ");
	printInteger(myVariable);
	println();
	print("heap var: ");
	printInteger(*(array+0));
	println();
	unlock();
 

	return myGlobalVar;
}


