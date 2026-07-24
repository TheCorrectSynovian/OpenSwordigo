/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066839c
 * Function: FUN_0066839c
 * Signature: undefined FUN_0066839c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066839c(long *param_1,char param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*param_1 + -0x18);
  if (lVar3 != 0) {
    uVar2 = lVar3 - 1;
    if (uVar2 < param_3) {
      param_3 = uVar2;
    }
    do {
      if (param_3 == 0xffffffffffffffff) {
                    /* try { // try from 006683e0 to 0076842f has its CatchHandler @ 00668460 */
        return;
      }
      pcVar1 = (char *)(*param_1 + param_3);
      param_3 = param_3 - 1;
                    /* try { // try from 006683cc to 007683cf has its CatchHandler @ 0066844c */
    } while (*pcVar1 != param_2);
  }
  return;
}


