/**
   freemem.h
   
      Must declare IS_WINDOWS or not accordingly... As this depends heavily on the OS.
   
   - getTotalSystemMemory() return system free memory in bytes.
     
**/

/* Return system free memory in bytes. */
unsigned long long getTotalSystemMemory();
