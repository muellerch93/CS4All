
int myGlobalVar;
//int globalCount;
int main(int argc, int *argv){
	int myVariable;
	int i;
	initLibrary();
	myVariable=0;
	i=0;
	while(i<10){
		myGlobalVar=myGlobalVar+1;
		myVariable=myVariable+1;
		i=i+1;
	}
	print("globalVarValue:");
	printInteger(myGlobalVar);
	println();
  //while(globalCount<10){
  //  print("Second loop");
  //  globalCount=globalCount+1;
  //}
  myVariable=myVariable+1;
  myVariable=myVariable+1;
  myVariable=myVariable+1;
  myVariable=myVariable+1;
  myVariable=myVariable+1;
  myVariable=myVariable+1;
	return myVariable;
}


