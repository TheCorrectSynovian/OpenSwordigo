/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006203e0
 * Function: FUN_006203e0
 * Signature: undefined FUN_006203e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1 * FUN_006203e0(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  if (param_2 < param_3) {
    do {
      uVar1 = (**(code **)(*param_1 + 0x20))(param_1,*param_2);
      puVar2 = param_2 + 1;
      *param_2 = uVar1;
      param_2 = puVar2;
    } while (puVar2 != param_3);
  }
  return param_3;
}


