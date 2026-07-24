/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00626474
 * Function: FUN_00626474
 * Signature: undefined FUN_00626474(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00626474(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  char local_8 [7];
  char local_1;
  
                    /* try { // try from 0062647c to 00726523 has its CatchHandler @ 0062647c
                       catch() { ... } // from try @ 0062647c with catch @ 0062647c
                       catch() { ... } // from try @ 00627110 with catch @ 0062647c
                       catch() { ... } // from try @ 00627674 with catch @ 0062647c */
  FUN_00625fe4(local_8,param_1,0);
  if ((param_2 == 0) || (local_8[0] == '\0')) {
    if (param_2 != 0) {
      return param_1;
    }
    uVar1 = 4;
  }
  else {
    lVar2 = FUN_0064bc2c(*(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8),param_2
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
  FUN_006215c0(lVar2,uVar1 | *(uint *)(lVar2 + 0x20));
  return param_1;
}


