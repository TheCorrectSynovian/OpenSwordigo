/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00667890
 * Function: FUN_00667890
 * Signature: undefined FUN_00667890(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00667890(long *param_1,undefined1 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  
  lVar2 = *param_1;
                    /* try { // try from 006678ac to 007678bf has its CatchHandler @ 00667fb0 */
  lVar3 = *(long *)(lVar2 + -0x18);
  uVar1 = lVar3 + 1;
  if ((*(ulong *)(lVar2 + -0x10) < uVar1) || (0 < *(int *)(lVar2 + -8))) {
    FUN_00667088(param_1,uVar1);
    lVar2 = *param_1;
    lVar3 = *(long *)(lVar2 + -0x18);
  }
  *(undefined1 *)(lVar2 + lVar3) = param_2;
  puVar4 = (undefined1 *)*param_1;
  if (puVar4 == &DAT_007fd2f8) {
    return;
  }
  *(ulong *)(puVar4 + -0x18) = uVar1;
  *(undefined4 *)(puVar4 + -8) = 0;
  puVar4[uVar1] = 0;
  return;
}


