/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00623578
 * Function: FUN_00623578
 * Signature: undefined FUN_00623578(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00623578(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  char local_8 [7];
  char local_1;
  
  FUN_006230e4(local_8,param_1,0);
  if ((param_2 == 0) || (local_8[0] == '\0')) {
    if (param_2 != 0) {
      return param_1;
    }
    uVar1 = 4;
  }
  else {
    lVar2 = FUN_0064ba94(*(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8),param_2
                         ,&local_1);
    if (lVar2 == 0) {
      uVar1 = 6;
      if (local_1 == '\0') {
        uVar1 = 4;
      }
    }
    else {
      if (local_1 == '\0') {
        return param_1;
      }
      uVar1 = 2;
    }
  }
  lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar2,uVar1 | *(uint *)(lVar2 + 0x20));
  return param_1;
}


