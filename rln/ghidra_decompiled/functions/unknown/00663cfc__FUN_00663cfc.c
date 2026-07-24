/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00663cfc
 * Function: FUN_00663cfc
 * Signature: undefined FUN_00663cfc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00663cfc(long *param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  
                    /* try { // try from 00663d00 to 00763d0b has its CatchHandler @ 00663c74 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00663cf8 with catch @ 00663d08
                        */
                    /* try { // try from 00663d0c to 00763d4b has its CatchHandler @ 00663d0c
                       catch() { ... } // from try @ 00663d0c with catch @ 00663d0c
                       catch() { ... } // from try @ 00663d50 with catch @ 00663d0c
                       catch() { ... } // from try @ 00663d98 with catch @ 00663d0c
                       catch() { ... } // from try @ 00663e54 with catch @ 00663d0c
                       catch() { ... } // from try @ 00663f34 with catch @ 00663d0c
                       catch() { ... } // from try @ 00663f94 with catch @ 00663d0c
                       catch() { ... } // from try @ 00664060 with catch @ 00663d0c */
  lVar1 = FUN_00663bdc(param_1 + 2,*param_2,param_3 | 8);
  if (lVar1 != 0) {
    FUN_006215c0((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00663d4c to 00763d4f has its CatchHandler @ 00663fe0 */
                    /* try { // try from 00663d50 to 00763d93 has its CatchHandler @ 00663d0c */
  FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  return;
}


