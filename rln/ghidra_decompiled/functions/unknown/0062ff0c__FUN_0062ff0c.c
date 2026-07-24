/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062ff0c
 * Function: FUN_0062ff0c
 * Signature: undefined FUN_0062ff0c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062ff0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,int *param_8)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 0062fcc8 with catch @ 0062ff0c */
                    /* catch() { ... } // from try @ 0062fc80 with catch @ 0062ff1c */
                    /* catch() { ... } // from try @ 0062fc38 with catch @ 0062ff2c */
  iVar1 = FUN_0062f63c(param_6,param_4,param_2,param_3,param_7,param_7 + *param_8);
                    /* try { // try from 0062ff50 to 00730177 has its CatchHandler @ 00630180 */
  *param_8 = iVar1 - (int)param_6;
  return;
}


