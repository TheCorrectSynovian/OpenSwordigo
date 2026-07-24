/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eb578
 * Function: FUN_005eb578
 * Signature: undefined FUN_005eb578(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005eb578(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_005f5ef0(param_2,auStack_50);
  local_40 = 0;
  if (lVar2 != 0) {
    param_2 = param_3;
  }
  puVar3 = *(ulong **)(param_1 + 0x28);
  uVar4 = *puVar3;
  puVar5 = (&PTR_s_nil_0069a2c8_0xf_007d8858)[*(int *)(param_2 + 8)];
  do {
    if (puVar3[2] <= uVar4) {
LAB_005eb640:
      FUN_005eb320(param_1,"attempt to %s a %s value","perform arithmetic on",puVar5);
LAB_005eb65c:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (param_2 == uVar4) {
                    /* catch() { ... } // from try @ 005eb428 with catch @ 005eb5f8 */
      lVar2 = FUN_005eb12c(param_1,puVar3,param_2 - *(long *)(param_1 + 0x18) >> 4,&local_40);
      if (lVar2 != 0) {
                    /* try { // try from 005eb618 to 006eb687 has its CatchHandler @ 005eb68c */
        FUN_005eb320(param_1,"attempt to %s %s \'%s\' (a %s value)","perform arithmetic on",lVar2,
                     local_40,puVar5);
        goto LAB_005eb65c;
      }
      goto LAB_005eb640;
    }
                    /* catch() { ... } // from try @ 005eb494 with catch @ 005eb5e4 */
    uVar4 = uVar4 + 0x10;
                    /* catch() { ... } // from try @ 005eb408 with catch @ 005eb5e8
                       catch() { ... } // from try @ 005eb44c with catch @ 005eb5e8 */
  } while( true );
}


