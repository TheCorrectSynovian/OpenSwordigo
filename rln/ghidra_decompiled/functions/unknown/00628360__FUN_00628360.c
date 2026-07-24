/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00628360
 * Function: FUN_00628360
 * Signature: undefined FUN_00628360(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00628360(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  char local_8 [4];
  uint local_4;
  
                    /* try { // try from 00628370 to 00728373 has its CatchHandler @ 00628568 */
  FUN_00625fe4(local_8,param_1,0);
  if (local_8[0] != '\0') {
    local_4 = 0;
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    plVar2 = *(long **)(lVar1 + 0x100);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
                    /* try { // try from 006283ac to 007283af has its CatchHandler @ 00628558 */
    (**(code **)(*plVar2 + 0x18))
              (plVar2,*(undefined8 *)(lVar1 + 0xe8),0xffffffff,0,0xffffffff,lVar1,&local_4,param_2);
    if (local_4 != 0) {
                    /* try { // try from 006283e8 to 007283eb has its CatchHandler @ 00628548 */
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_006215c0(lVar1,local_4 | *(uint *)(lVar1 + 0x20));
      return param_1;
    }
  }
  return param_1;
}


