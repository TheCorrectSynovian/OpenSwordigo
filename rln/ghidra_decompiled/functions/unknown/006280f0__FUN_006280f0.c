/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006280f0
 * Function: FUN_006280f0
 * Signature: undefined FUN_006280f0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_006280f0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  char local_8 [4];
  uint local_4;
  
                    /* try { // try from 00628100 to 00728103 has its CatchHandler @ 006285c8 */
  FUN_00625fe4(local_8,param_1,0);
  if (local_8[0] != '\0') {
    local_4 = 0;
                    /* try { // try from 00628124 to 00728127 has its CatchHandler @ 006285b8 */
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    plVar2 = *(long **)(lVar1 + 0x100);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
                    /* try { // try from 00628148 to 0072814b has its CatchHandler @ 006285a8 */
    (**(code **)(*plVar2 + 0x20))
              (plVar2,*(undefined8 *)(lVar1 + 0xe8),0xffffffff,0,0xffffffff,lVar1,&local_4,param_2);
    if (local_4 != 0) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_006215c0(lVar1,local_4 | *(uint *)(lVar1 + 0x20));
      return param_1;
    }
  }
                    /* try { // try from 0062816c to 0072816f has its CatchHandler @ 00628598 */
  return param_1;
}


