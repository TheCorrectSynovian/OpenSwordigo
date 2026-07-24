/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00666634
 * Function: FUN_00666634
 * Signature: undefined FUN_00666634(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_00666634(ulong *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  bVar1 = true;
  if (uVar2 <= param_2) {
    bVar1 = uVar2 + *(long *)(uVar2 - 0x18) < param_2;
  }
  return bVar1;
}


