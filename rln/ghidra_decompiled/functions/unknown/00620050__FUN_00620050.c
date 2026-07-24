/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620050
 * Function: FUN_00620050
 * Signature: undefined FUN_00620050(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00620050(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
                    /* try { // try from 0062006c to 00720073 has its CatchHandler @ 00620078 */
  *param_1 = &PTR_FUN_007d9bb0;
                    /* catch() { ... } // from try @ 0062006c with catch @ 00620078 */
  uVar1 = FUN_0063be10();
                    /* catch() { ... } // from try @ 0061fe68 with catch @ 0062007c
                       catch() { ... } // from try @ 0061ff7c with catch @ 0062007c */
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 3) = 0;
                    /* catch() { ... } // from try @ 0062009c with catch @ 00620088 */
  FUN_00620aac(param_1);
  return;
}


