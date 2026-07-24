/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061f550
 * Function: FUN_0061f550
 * Signature: undefined FUN_0061f550(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0061f550(long *param_1,int param_2,undefined4 param_3)

{
  char *__modes;
  FILE *__stream;
  
  __modes = (char *)FUN_0061f31c(param_3);
  if ((__modes != (char *)0x0) && (*param_1 == 0)) {
    __stream = fdopen(param_2,__modes);
    *param_1 = (long)__stream;
    if (__stream != (FILE *)0x0) {
                    /* catch() { ... } // from try @ 0061f338 with catch @ 0061f59c */
      *(undefined1 *)(param_1 + 1) = 1;
      if (param_2 != 0) {
        return param_1;
      }
      setvbuf(__stream,(char *)0x0,2,0);
      return param_1;
    }
  }
  return (long *)0x0;
}


