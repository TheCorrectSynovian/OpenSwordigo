/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064c8a0
 * Function: FUN_0064c8a0
 * Signature: undefined FUN_0064c8a0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064c8a0(char param_1,int *param_2,long param_3,long param_4)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  
  *(long *)(param_2 + 2) = param_3;
  param_2[4] = 0;
  param_2[5] = 0;
                    /* try { // try from 0064c8c8 to 0074c8ef has its CatchHandler @ 0064c9ac */
  param_2[6] = 0;
  param_2[7] = 0;
  lVar1 = param_4 + 8;
  *param_2 = 0;
  if (param_1 == '\0') {
    *(int **)(param_3 + 0x18) = param_2;
    if (*(long *)(param_4 + 0x18) == param_3) {
      *(int **)(param_4 + 0x18) = param_2;
    }
  }
  else {
    *(int **)(param_3 + 0x10) = param_2;
    if (param_3 == param_4) {
      *(int **)(param_4 + 8) = param_2;
      *(int **)(param_4 + 0x18) = param_2;
    }
    else if (*(long *)(param_4 + 0x10) == param_3) {
      *(int **)(param_4 + 0x10) = param_2;
    }
  }
                    /* try { // try from 0064c8f0 to 0074ca4b has its CatchHandler @ 0064c70c */
  piVar4 = *(int **)(param_4 + 8);
  do {
    while( true ) {
      if ((param_2 == piVar4) || (piVar7 = *(int **)(param_2 + 2), *piVar7 != 0)) {
        *piVar4 = 1;
        return;
      }
      piVar6 = *(int **)(piVar7 + 2);
      piVar2 = *(int **)(piVar6 + 4);
      if (piVar7 == piVar2) break;
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0)) {
        piVar4 = piVar7;
        if (*(int **)(piVar7 + 4) == param_2) {
                    /* catch() { ... } // from try @ 0064c80c with catch @ 0064ca28 */
          FUN_0064c5e0(piVar7,lVar1);
          piVar4 = *(int **)(piVar7 + 2);
          param_2 = piVar7;
        }
        lVar5 = *(long *)(piVar6 + 6);
        *piVar4 = 1;
        *piVar6 = 0;
        lVar3 = *(long *)(lVar5 + 0x10);
        *(long *)(piVar6 + 6) = lVar3;
        if (lVar3 != 0) {
          *(int **)(lVar3 + 8) = piVar6;
        }
        *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(piVar6 + 2);
                    /* catch() { ... } // from try @ 0064c8c8 with catch @ 0064c9ac */
        if (piVar6 == *(int **)(param_4 + 8)) {
          *(long *)(param_4 + 8) = lVar5;
        }
        else {
          lVar3 = *(long *)(piVar6 + 2);
          if (piVar6 == *(int **)(lVar3 + 0x10)) {
                    /* catch() { ... } // from try @ 0064c7fc with catch @ 0064ca1c */
            *(long *)(lVar3 + 0x10) = lVar5;
          }
          else {
            *(long *)(lVar3 + 0x18) = lVar5;
          }
        }
        *(int **)(lVar5 + 0x10) = piVar6;
        *(long *)(piVar6 + 2) = lVar5;
        piVar4 = *(int **)(param_4 + 8);
      }
      else {
LAB_0064c928:
        *piVar7 = 1;
        *piVar2 = 1;
        *piVar6 = 0;
        param_2 = piVar6;
      }
    }
    piVar2 = *(int **)(piVar6 + 6);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) goto LAB_0064c928;
    piVar4 = piVar7;
    if (*(int **)(piVar7 + 6) == param_2) {
                    /* try { // try from 0064ca4c to 0074ca73 has its CatchHandler @ 0064cae0 */
      FUN_0064c580(piVar7,lVar1);
      piVar4 = *(int **)(piVar7 + 2);
      param_2 = piVar7;
    }
    *piVar4 = 1;
    *piVar6 = 0;
    FUN_0064c5e0(piVar6,lVar1);
    piVar4 = *(int **)(param_4 + 8);
  } while( true );
}


