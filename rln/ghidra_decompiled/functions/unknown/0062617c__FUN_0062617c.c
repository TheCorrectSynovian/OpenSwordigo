/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062617c
 * Function: FUN_0062617c
 * Signature: undefined FUN_0062617c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0062617c(long *param_1,undefined2 *param_2)

{
  long lVar1;
  long *plVar2;
  char local_10 [4];
  uint local_c;
  long local_8;
  
  FUN_00625fe4(local_10,param_1,0);
  if (local_10[0] != '\0') {
    local_c = 0;
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 006261b8 to 007261bf has its CatchHandler @ 006262c8 */
    plVar2 = *(long **)(lVar1 + 0x100);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
    (**(code **)(*plVar2 + 0x18))
              (plVar2,*(undefined8 *)(lVar1 + 0xe8),0xffffffff,0,0xffffffff,lVar1,&local_c,&local_8)
    ;
    if (local_8 < -0x8000) {
                    /* try { // try from 006261f4 to 00726247 has its CatchHandler @ 00626284 */
      *param_2 = 0x8000;
    }
    else {
      if (local_8 < 0x8000) {
        *param_2 = (short)local_8;
        if (local_c == 0) {
          return param_1;
        }
        goto LAB_00626238;
      }
      *param_2 = 0x7fff;
    }
    local_c = local_c | 4;
    if (local_c != 0) {
LAB_00626238:
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00626248 to 007262b3 has its CatchHandler @ 00625fb4 */
      FUN_006215c0(lVar1,local_c | *(uint *)(lVar1 + 0x20));
      return param_1;
    }
  }
  return param_1;
}


