/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006423a0
 * Function: FUN_006423a0
 * Signature: undefined FUN_006423a0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006423a0(undefined1 *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *param_2;
  *(long **)(param_1 + 8) = param_2;
  lVar1 = *(long *)(lVar1 + -0x18);
  *param_1 = 0;
  lVar1 = (long)param_2 + lVar1;
                    /* try { // try from 006423c8 to 007423ef has its CatchHandler @ 006425b4 */
  if (*(long *)(lVar1 + 0xd8) != 0) {
    uVar2 = *(uint *)(lVar1 + 0x20);
    if (uVar2 != 0) goto LAB_00642408;
    FUN_00641e9c();
    lVar1 = (long)param_2 + *(long *)(*param_2 + -0x18);
  }
  uVar2 = *(uint *)(lVar1 + 0x20);
  if (uVar2 == 0) {
    *param_1 = 1;
    return;
  }
LAB_00642408:
                    /* try { // try from 00642410 to 00742437 has its CatchHandler @ 006425a4 */
  FUN_006215c0(lVar1,uVar2 | 4);
  return;
}


