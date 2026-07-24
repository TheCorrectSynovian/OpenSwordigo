/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00681368
 * Function: FUN_00681368
 * Signature: undefined FUN_00681368(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00681368(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_00681080();
  if (*(int *)(param_2 + *(long *)(param_2 + 0x668) * 0x10 + 8) == 6) {
    *(undefined8 *)(param_1 + 0x318) = 0;
  }
  else {
    uVar1 = FUN_0067ff08(param_1);
    *(undefined8 *)(param_1 + 0x318) = uVar1;
  }
  return;
}


