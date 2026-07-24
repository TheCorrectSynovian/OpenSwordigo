/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062a8b4
 * Function: FUN_0062a8b4
 * Signature: undefined FUN_0062a8b4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062a8b4(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == param_1) {
    plVar4 = (long *)*param_2;
    if (plVar4 != param_2) {
      puVar1 = (undefined8 *)param_2[1];
      plVar2[1] = (long)puVar1;
      *plVar2 = (long)plVar4;
      *puVar1 = plVar2;
      plVar4[1] = (long)plVar2;
                    /* catch() { ... } // from try @ 0062a830 with catch @ 0062a928 */
      param_2[1] = (long)param_2;
      *param_2 = (long)param_2;
                    /* catch() { ... } // from try @ 0062a7e8 with catch @ 0062a930 */
      return;
    }
  }
  else {
    plVar4 = (long *)*param_2;
    if (plVar4 == param_2) {
      puVar1 = (undefined8 *)param_1[1];
      plVar4[1] = (long)puVar1;
      *plVar4 = (long)plVar2;
      *puVar1 = plVar4;
      plVar2[1] = (long)plVar4;
      param_1[1] = (long)param_1;
      *param_1 = (long)param_1;
      return;
    }
    *param_1 = (long)plVar4;
    *param_2 = (long)plVar2;
    lVar3 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = lVar3;
    lVar3 = *param_1;
    *(long **)param_1[1] = param_1;
    *(long **)(lVar3 + 8) = param_1;
    lVar3 = *param_2;
    *(long **)param_2[1] = param_2;
    *(long **)(lVar3 + 8) = param_2;
  }
  return;
}


