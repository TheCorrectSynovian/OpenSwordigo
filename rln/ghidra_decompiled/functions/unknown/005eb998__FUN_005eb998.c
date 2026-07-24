/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eb998
 * Function: FUN_005eb998
 * Signature: undefined FUN_005eb998(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005eb998(long param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_38;
  undefined4 local_2c;
  long local_28;
  
                    /* try { // try from 005eb9a0 to 006eba93 has its CatchHandler @ 005eb8c4 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0;
  local_38 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 **)(param_1 + 0xa8) = &local_38;
  (*param_2)(param_1,param_3);
  *(undefined8 *)(param_1 + 0xa8) = local_38;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_2c);
}


