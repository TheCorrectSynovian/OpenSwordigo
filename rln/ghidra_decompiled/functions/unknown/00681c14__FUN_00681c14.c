/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00681c14
 * Function: FUN_00681c14
 * Signature: undefined FUN_00681c14(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_00681c14(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 006816ec with catch @ 00681c18 */
  iVar1 = -(uint)(*(ulong *)(param_2 + 8) < *(ulong *)(param_3 + 8));
  if (*(ulong *)(param_3 + 8) < *(ulong *)(param_2 + 8)) {
    iVar1 = 1;
  }
  return iVar1;
}


