/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035a030
 * Function: FUN_0035a030
 * Signature: undefined FUN_0035a030(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0035a030(long *param_1,char *param_2,long *param_3)

{
  long lVar1;
  size_t sVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_2);
  *param_1 = (long)(PTR_DAT_007e5de8 + 0x18);
  FUN_00667088(param_1,*(long *)(*param_3 + -0x18) + sVar2);
  FUN_006677d4(param_1,param_2,sVar2);
  FUN_00667614(param_1,param_3);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


