/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b120
 * Function: FUN_0064b120
 * Signature: undefined FUN_0064b120(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0064b120(undefined8 param_1,long *param_2,undefined8 param_3)

{
                    /* catch() { ... } // from try @ 0064b0cc with catch @ 0064b134 */
                    /* catch() { ... } // from try @ 0064afd8 with catch @ 0064b138 */
  FUN_0063b7dc(param_1,param_2 + 7);
  (**(code **)(*param_2 + 0x10))(param_2,param_3);
  FUN_0063c028(param_2 + 7,param_3);
  return param_1;
}


