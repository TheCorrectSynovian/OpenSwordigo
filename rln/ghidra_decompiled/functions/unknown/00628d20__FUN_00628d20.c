/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00628d20
 * Function: FUN_00628d20
 * Signature: undefined FUN_00628d20(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00628d20(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  char local_8 [4];
  uint local_4;
  
                    /* try { // try from 00628d30 to 00728da7 has its CatchHandler @ 00628db0 */
  FUN_00625fe4(local_8,param_1,0);
  if (local_8[0] != '\0') {
    local_4 = 0;
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    plVar2 = *(long **)(lVar1 + 0x100);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00628dcc to 00728dcf has its CatchHandler @ 00628de0 */
      FUN_006652c8();
    }
    (**(code **)(*plVar2 + 0x60))
              (plVar2,*(undefined8 *)(lVar1 + 0xe8),0xffffffff,0,0xffffffff,lVar1,&local_4,param_2);
    if (local_4 != 0) {
                    /* try { // try from 00628da8 to 00728dbb has its CatchHandler @ 00627e78 */
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* catch() { ... } // from try @ 00628744 with catch @ 00628db0
                       catch() { ... } // from try @ 00628d30 with catch @ 00628db0 */
      FUN_006215c0(lVar1,local_4 | *(uint *)(lVar1 + 0x20));
                    /* catch() { ... } // from try @ 00628dd0 with catch @ 00628dbc */
      return param_1;
    }
  }
  return param_1;
}


