/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062abc4
 * Function: FUN_0062abc4
 * Signature: undefined FUN_0062abc4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0062abc4(undefined8 param_1,long param_2)

{
  undefined1 auStack_8 [8];
  
                    /* try { // try from 0062abcc to 0072abd3 has its CatchHandler @ 0062b160 */
                    /* try { // try from 0062abe0 to 0072abe7 has its CatchHandler @ 0062b048 */
  FUN_00666bb8(param_1,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x38),auStack_8);
  return param_1;
}


