/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eb474
 * Function: FUN_005eb474
 * Signature: undefined FUN_005eb474(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005eb474(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005eb494 to 006eb4bb has its CatchHandler @ 005eb5e4 */
  local_40 = 0;
  puVar3 = *(ulong **)(param_1 + 0x28);
  if (1 < *(int *)(param_2 + 8) - 3U) {
    param_3 = param_2;
  }
                    /* try { // try from 005eb4bc to 006eb617 has its CatchHandler @ 005eb2f4 */
  uVar4 = *puVar3;
  puVar5 = (&PTR_s_nil_0069a2c8_0xf_007d8858)[*(int *)(param_3 + 8)];
  do {
    if (puVar3[2] <= uVar4) {
LAB_005eb534:
      FUN_005eb320(param_1,"attempt to %s a %s value","concatenate",puVar5);
LAB_005eb550:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (param_3 == uVar4) {
      lVar2 = FUN_005eb12c(param_1,puVar3,param_3 - *(long *)(param_1 + 0x18) >> 4,&local_40);
      if (lVar2 != 0) {
        FUN_005eb320(param_1,"attempt to %s %s \'%s\' (a %s value)","concatenate",lVar2,local_40,
                     puVar5);
        goto LAB_005eb550;
      }
      goto LAB_005eb534;
    }
    uVar4 = uVar4 + 0x10;
  } while( true );
}


