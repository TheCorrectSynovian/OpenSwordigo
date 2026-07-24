/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f8824
 * Function: FUN_005f8824
 * Signature: undefined FUN_005f8824(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005f8824(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if ((ulong)param_2[2] < param_3) {
    if (param_3 < 0x21) {
      param_3 = 0x20;
    }
    if (param_3 + 1 < 0xfffffffffffffffe) {
      uVar1 = FUN_005eed74(param_1,*param_2,param_2[2],param_3);
    }
    else {
      uVar1 = FUN_005eede0();
    }
    *param_2 = uVar1;
    param_2[2] = param_3;
  }
  else {
    uVar1 = *param_2;
  }
  return uVar1;
}


