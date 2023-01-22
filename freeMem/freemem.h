/**
 * freemem.h
 * 
 * Must declare IS_WINDOWS or not accordingly... As this depends heavily on the OS.
 * 
 * - getTotalSystemMemory() return system free memory in bytes.
 * As described in https://stackoverflow.com/questions/2513505/how-to-get-available-memory-c-g
**/

/* Return system free memory in bytes. */
unsigned long long getTotalSystemMemory();
