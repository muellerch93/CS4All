
int myGlobalVar;
int globalCount;
int main(int argc, int *argv){
	int i;
	initLibrary();
	while(i<10){
		myGlobalVar=myGlobalVar+1;
		i=i+1;
	}
	print("globalVarValue:");
	printInteger(myGlobalVar);
	println();
  while(globalCount<10){
    print("Second loop");
    globalCount=globalCount+1;
  }
	return 0;
}


