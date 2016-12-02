

int main(int argc, int *argv){
	int* a;
	initLibrary();
	a=malloc(100);
	*(a+1)=20;
	printInteger((a+1));
	println();
	return 0;
}
