/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063f5c0
 * Function: FUN_0063f5c0
 * Signature: undefined FUN_0063f5c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063f5c0(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
                    /* try { // try from 0063f5c8 to 0073f607 has its CatchHandler @ 0063f514 */
  lVar1 = *param_2;
  *param_1 = lVar1;
  lVar1 = *(long *)(lVar1 + -0x18);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0063f5a0 with catch @ 0063f5dc
                        */
  *(long *)((long)param_1 + lVar1) = param_2[1];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0063f558 with catch @ 0063f5e4
                        */
  FUN_006210e8((long)param_1 + lVar1,param_3);
  return;
}


