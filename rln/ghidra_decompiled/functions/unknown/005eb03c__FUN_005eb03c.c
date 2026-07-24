/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eb03c
 * Function: FUN_005eb03c
 * Signature: undefined FUN_005eb03c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005eb03c(long param_1,ulong param_2,undefined8 param_3)

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
  local_40 = 0;
  puVar3 = *(ulong **)(param_1 + 0x28);
  uVar4 = *puVar3;
  puVar5 = (&PTR_s_nil_0069a2c8_0xf_007d8858)[*(int *)(param_2 + 8)];
  do {
    if (puVar3[2] <= uVar4) {
LAB_005eb0ec:
      FUN_005eb320(param_1,"attempt to %s a %s value",param_3,puVar5);
LAB_005eb104:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
                    /* try { // try from 005eb090 to 006eb09b has its CatchHandler @ 005eb158 */
    if (param_2 == uVar4) {
      lVar2 = FUN_005eb12c(param_1,puVar3,param_2 - *(long *)(param_1 + 0x18) >> 4,&local_40);
      if (lVar2 != 0) {
        FUN_005eb320(param_1,"attempt to %s %s \'%s\' (a %s value)",param_3,lVar2,local_40,puVar5);
        goto LAB_005eb104;
      }
      goto LAB_005eb0ec;
    }
    uVar4 = uVar4 + 0x10;
                    /* try { // try from 005eb09c to 006eb2b7 has its CatchHandler @ 005eaf20 */
  } while( true );
}


