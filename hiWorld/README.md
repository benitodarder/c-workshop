# c-workshop/hiWorld/

* Borland 5.5:
   - Compile: 
      +  C:\programs\borlandC5.5\Bin\bcc32.exe -IC:\Programs\borlandC5.5\Include\ -c -tWC -ohiWorldCompiled.obj hiWorld.c
         - -o<Output object file> is not mandatory, included here for informative purposes
   - Link:
      + ilink32.exe -LC:\programs\borlandC5.5\lib /ap  c0x32.obj hiWorldCompiled.obj, hiWorld.exe, ,import32.lib cw32.lib,,

* GCC/TDM:
   - Compile:
      + gcc  -c -ogcc/hiWorld.o hiWorld.c
   - Link:
      + gcc -o hiWorld.exe gcc/hiWorld.o
