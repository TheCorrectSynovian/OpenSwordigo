/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061d2e4
 * Function: __cxa_end_catch
 * Signature: undefined __cxa_end_catch(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void __cxa_end_catch(void)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  
  plVar1 = (long *)__cxa_get_globals_fast();
  lVar2 = *plVar1;
  if (lVar2 != 0) {
                    /* try { // try from 0061d304 to 0071d30f has its CatchHandler @ 0061d93c */
    if (1 < *(long *)(lVar2 + 0x50) + 0xb8b1aabcbcd4d500U) {
      *plVar1 = 0;
      FUN_00681ab8(lVar2 + 0x50);
      return;
    }
    iVar3 = *(int *)(lVar2 + 0x28);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
      if (iVar3 == 0) {
                    /* try { // try from 0061d358 to 0071d35f has its CatchHandler @ 0061db00 */
        *plVar1 = *(long *)(lVar2 + 0x20);
                    /* try { // try from 0061d360 to 0071d373 has its CatchHandler @ 0061d938 */
        *(undefined4 *)(lVar2 + 0x28) = 0;
        return;
      }
    }
    else {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        *plVar1 = *(long *)(lVar2 + 0x20);
                    /* try { // try from 0061d374 to 0071d387 has its CatchHandler @ 0061d8e4 */
        FUN_00681ab8(lVar2 + 0x50);
        return;
      }
                    /* try { // try from 0061d330 to 0071d357 has its CatchHandler @ 0061d7b8 */
      if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
    }
    *(int *)(lVar2 + 0x28) = iVar3;
  }
  return;
}


