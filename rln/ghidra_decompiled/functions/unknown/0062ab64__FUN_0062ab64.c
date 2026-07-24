/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062ab64
 * Function: FUN_0062ab64
 * Signature: undefined FUN_0062ab64(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0062ab64(undefined8 param_1,long param_2)

{
  undefined1 auStack_8 [8];
  
                    /* try { // try from 0062ab6c to 0072ab77 has its CatchHandler @ 0062b14c */
                    /* try { // try from 0062ab78 to 0072ab83 has its CatchHandler @ 0062b0ec */
  FUN_00666bb8(param_1,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10),auStack_8);
                    /* try { // try from 0062ab84 to 0072ab93 has its CatchHandler @ 0062b090 */
  return param_1;
}


