/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ecb9c
 * Function: FUN_005ecb9c
 * Signature: undefined FUN_005ecb9c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined4 FUN_005ecb9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = 0;
  local_48 = 0;
  local_60 = param_2;
  uStack_40 = param_3;
  uVar2 = FUN_005ec9bc(param_1,FUN_005ecc2c,&local_60,
                       *(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x40),
                       *(undefined8 *)(param_1 + 0xb0));
  FUN_005eed74(param_1,local_58,local_48,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


