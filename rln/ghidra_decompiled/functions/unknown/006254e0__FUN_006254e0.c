/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006254e0
 * Function: FUN_006254e0
 * Signature: undefined FUN_006254e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_006254e0(long *param_1,undefined8 param_2)

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
                    /* try { // try from 00625540 to 00725543 has its CatchHandler @ 006258c4 */
                    /* try { // try from 00625544 to 00725567 has its CatchHandler @ 0062543c */
    (**(code **)(*plVar2 + 0x10))
              (plVar2,*(undefined8 *)(lVar1 + 0xe8),0xffffffff,0,0xffffffff,lVar1,&local_4,param_2);
    if (local_4 != 0) {
                    /* try { // try from 00625568 to 00725573 has its CatchHandler @ 006258dc */
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_00620c14(lVar1,local_4 | *(uint *)(lVar1 + 0x20));
      return param_1;
    }
  }
  return param_1;
}


