
int myGlobalVar;
//int globalCount;
int main(int argc, int *argv){
	int myVariable;
	int i;
	myVariable=0;
	i=0;
	initLibrary();

	lock();
	myVariable=myVariable+1;
	myGlobalVar=myGlobalVar+1;
	print("global var: ");
	printInteger(myGlobalVar);
	println();
	print("local var: ");
	printInteger(myVariable);
	println();
	print("heap var: ");
	unlock();
 

	return myGlobalVar;
}


