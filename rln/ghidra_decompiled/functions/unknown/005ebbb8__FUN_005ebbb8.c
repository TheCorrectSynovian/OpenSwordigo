/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ebbb8
 * Function: FUN_005ebbb8
 * Signature: undefined FUN_005ebbb8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ebbb8(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 < param_2) {
    FUN_005eba24(param_1,iVar1 + param_2);
    return;
  }
                    /* try { // try from 005ebbd0 to 006ebbeb has its CatchHandler @ 005ebb20 */
  FUN_005eba24(param_1,iVar1 << 1);
  return;
}


