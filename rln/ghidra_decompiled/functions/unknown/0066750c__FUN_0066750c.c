/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066750c
 * Function: FUN_0066750c
 * Signature: undefined FUN_0066750c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0066750c(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
                    /* try { // try from 0066751c to 007675a3 has its CatchHandler @ 00667ffc */
  sVar1 = strlen(param_2);
  if (sVar1 != 0) {
    FUN_00667254(param_1,param_2,sVar1);
  }
  return param_1;
}


