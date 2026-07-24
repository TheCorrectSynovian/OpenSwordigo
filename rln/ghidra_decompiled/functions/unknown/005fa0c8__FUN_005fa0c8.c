/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa0c8
 * Function: FUN_005fa0c8
 * Signature: undefined FUN_005fa0c8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void * FUN_005fa0c8(undefined8 param_1,void *param_2,undefined8 param_3,size_t param_4)

{
  void *pvVar1;
  
  if (param_4 != 0) {
    pvVar1 = realloc(param_2,param_4);
    return pvVar1;
  }
  free(param_2);
                    /* try { // try from 005fa0ec to 006fa0ff has its CatchHandler @ 005faec0 */
  return (void *)0x0;
}


