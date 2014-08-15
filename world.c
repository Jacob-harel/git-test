// This is stored in file "world.c" 
void worldTask() { 
	for (;;) { 
		printf("world\n"); 
      SynthOS_call(world2Task(3));
		SynthOS_sleep(); 
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