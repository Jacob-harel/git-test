// This is stored in file "hello.c"
void helloTask() {
	for (;;) {
		printf("Hello, ");
		SynthOS_sleep();
	}
}