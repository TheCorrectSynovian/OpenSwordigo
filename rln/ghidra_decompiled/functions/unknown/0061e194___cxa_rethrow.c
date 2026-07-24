/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e194
 * Function: __cxa_rethrow
 * Signature: undefined __cxa_rethrow(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void __cxa_rethrow(void)

{
  long *plVar1;
  long lVar2;
  
                    /* try { // try from 0061e194 to 0071e25b has its CatchHandler @ 0061e264 */
  plVar1 = (long *)__cxa_get_globals();
  lVar2 = *plVar1;
  *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
  if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 0061e084 with catch @ 0061e1c0 */
    if (*(long *)(lVar2 + 0x50) + 0xb8b1aabcbcd4d500U < 2) {
      *(int *)(lVar2 + 0x28) = -*(int *)(lVar2 + 0x28);
    }
    else {
      *plVar1 = 0;
    }
    FUN_006819c0(lVar2 + 0x50);
    __cxa_begin_catch(lVar2 + 0x50);
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


