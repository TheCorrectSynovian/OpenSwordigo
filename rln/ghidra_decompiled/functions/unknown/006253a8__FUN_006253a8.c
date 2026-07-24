/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006253a8
 * Function: FUN_006253a8
 * Signature: undefined FUN_006253a8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_006253a8(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  char local_8 [4];
  uint local_4;
  
  FUN_006230e4(local_8,param_1,0);
  if (local_8[0] != '\0') {
    local_4 = 0;
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    plVar2 = *(long **)(lVar1 + 0x100);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
    (**(code **)(*plVar2 + 0x30))
              (plVar2,*(undefined8 *)(lVar1 + 0xe8),0xffffffff,0,0xffffffff,lVar1,&local_4,param_2);
    if (local_4 != 0) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 0062543c to 0072553f has its CatchHandler @ 0062543c
                       catch() { ... } // from try @ 0062543c with catch @ 0062543c
                       catch() { ... } // from try @ 00625544 with catch @ 0062543c
                       catch() { ... } // from try @ 006257f8 with catch @ 0062543c
                       catch() { ... } // from try @ 006258c0 with catch @ 0062543c
                       catch() { ... } // from try @ 0062592c with catch @ 0062543c */
      FUN_00620c14(lVar1,local_4 | *(uint *)(lVar1 + 0x20));
      return param_1;
    }
  }
  return param_1;
}


