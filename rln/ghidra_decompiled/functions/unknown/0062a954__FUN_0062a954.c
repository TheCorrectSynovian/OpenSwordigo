/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062a954
 * Function: FUN_0062a954
 * Signature: undefined FUN_0062a954(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062a954(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_1 != param_3) {
    plVar2 = *(long **)(param_3 + 8);
    plVar3 = *(long **)(param_2 + 8);
    plVar1 = *(long **)(param_1 + 8);
    *plVar2 = param_1;
    *plVar3 = param_3;
    *plVar1 = param_2;
    *(long **)(param_1 + 8) = plVar2;
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
    *(long **)(param_2 + 8) = plVar1;
  }
                    /* try { // try from 0062a984 to 0072a98f has its CatchHandler @ 0062a738 */
  return;
}


