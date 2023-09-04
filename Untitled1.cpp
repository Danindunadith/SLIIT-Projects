int main(){
	
	int pid=fork();
	if(pid==0)
	printf("hello\n");
	
	else 
	sleep(100);
	return 0;
	
}
