/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006637f4
 * Function: FUN_006637f4
 * Signature: undefined FUN_006637f4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006637f4(long *param_1,long *param_2)

{
  long lVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006637b0 with catch @ 0066380c
                        */
                    /* try { // try from 00663810 to 00763817 has its CatchHandler @ 00663820 */
  lVar1 = param_2[2];
  *param_1 = lVar1;
                    /* try { // try from 00663818 to 00763823 has its CatchHandler @ 00663780 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00663810 with catch @ 00663820
                        */
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
                    /* try { // try from 00663824 to 007638d7 has its CatchHandler @ 00663824
                       catch() { ... } // from try @ 00663824 with catch @ 00663824
                       catch() { ... } // from try @ 00663960 with catch @ 00663824
                       catch() { ... } // from try @ 00663a64 with catch @ 00663824
                       catch() { ... } // from try @ 00663bfc with catch @ 00663824
                       catch() { ... } // from try @ 00663c68 with catch @ 00663824 */
  param_1[1] = 0;
  FUN_006219c8((long)param_1 + *(long *)(lVar1 + -0x18),0);
  lVar1 = param_2[4];
  param_1[2] = lVar1;
  lVar1 = *(long *)(lVar1 + -0x18);
  *(long *)((long)param_1 + lVar1 + 0x10) = param_2[5];
  FUN_006219c8((long)param_1 + lVar1 + 0x10,0);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[6];
  param_1[2] = param_2[7];
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[8];
  param_1[2] = param_2[9];
  FUN_00662010(param_1 + 3);
  FUN_006219c8((long)param_1 + *(long *)(*param_1 + -0x18),param_1 + 3);
  return;
}


