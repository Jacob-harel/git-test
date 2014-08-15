// This is stored in file "world.c" 
void worldTask() { 
	for (;;) { 
		printf("world\n"); 
      SynthOS_call(world2Task(3));
		SynthOS_sleep(); 
	}
}

//this an added part for github testing
void testing()
{
   while(1)
   {
      printf("this is a test");
   }
}


void world2Task(int ii)
{
   int jj

   for(jj=0;jj<ii;jj++)
   {
      printf("waiting ... ");
   }
}