/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00625000
 * Function: FUN_00625000
 * Signature: undefined FUN_00625000(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00625000(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  char local_8 [4];
  uint local_4;
  
                    /* try { // try from 0062501c to 00725027 has its CatchHandler @ 00625114 */
  FUN_006230e4(local_8,param_1,0);
  if (local_8[0] != '\0') {
    local_4 = 0;
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    plVar2 = *(long **)(lVar1 + 0x100);
                    /* try { // try from 00625040 to 0072504f has its CatchHandler @ 00625110 */
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
    (**(code **)(*plVar2 + 0x20))
              (plVar2,*(undefined8 *)(lVar1 + 0xe8),0xffffffff,0,0xffffffff,lVar1,&local_4,param_2);
                    /* try { // try from 00625068 to 0072506f has its CatchHandler @ 0062510c */
    if (local_4 != 0) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_00620c14(lVar1,local_4 | *(uint *)(lVar1 + 0x20));
      return param_1;
    }
  }
                    /* try { // try from 00625070 to 0072512f has its CatchHandler @ 00624d10 */
  return param_1;
}


