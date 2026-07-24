/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061d518
 * Function: __cxa_get_globals
 * Signature: undefined __cxa_get_globals(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * __cxa_get_globals(void)

{
  int iVar1;
  undefined8 *__pointer;
  
  if (DAT_007fbd0c == '\0') {
    __pointer = (undefined8 *)&DAT_007fbd10;
  }
  else {
    __pointer = pthread_getspecific(DAT_007fbd08);
    if (__pointer == (undefined8 *)0x0) {
      __pointer = malloc(0x10);
      if ((__pointer == (undefined8 *)0x0) ||
         (iVar1 = pthread_setspecific(DAT_007fbd08,__pointer), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      *__pointer = 0;
                    /* try { // try from 0061d584 to 0071d5b3 has its CatchHandler @ 0061db80 */
      *(undefined4 *)(__pointer + 1) = 0;
    }
  }
  return __pointer;
}


