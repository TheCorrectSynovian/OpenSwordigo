/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064ca60
 * Function: FUN_0064ca60
 * Signature: undefined FUN_0064ca60(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int * FUN_0064ca60(int *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar4 = *(int **)(param_1 + 4);
                    /* try { // try from 0064ca74 to 0074cb4f has its CatchHandler @ 0064c70c */
  if (piVar4 == (int *)0x0) {
    piVar7 = *(int **)(param_1 + 6);
  }
  else {
    piVar5 = *(int **)(param_1 + 6);
    piVar6 = piVar5;
    piVar7 = piVar4;
    if (piVar5 != (int *)0x0) {
      do {
        piVar1 = piVar6;
        piVar6 = *(int **)(piVar1 + 4);
      } while (*(int **)(piVar1 + 4) != (int *)0x0);
      piVar7 = *(int **)(piVar1 + 6);
      if (param_1 != piVar1) {
        *(int **)(piVar4 + 2) = piVar1;
        *(int **)(piVar1 + 4) = piVar4;
        piVar4 = piVar1;
        if (piVar5 != piVar1) {
          piVar4 = *(int **)(piVar1 + 2);
          piVar6 = piVar4;
          if (piVar7 != (int *)0x0) {
            *(int **)(piVar7 + 2) = piVar4;
            piVar6 = *(int **)(piVar1 + 2);
          }
          *(int **)(piVar6 + 4) = piVar7;
          *(int **)(piVar1 + 6) = piVar5;
                    /* catch() { ... } // from try @ 0064ca4c with catch @ 0064cae0 */
          *(int **)(*(long *)(param_1 + 6) + 8) = piVar1;
        }
        if (*(int **)(param_2 + 8) == param_1) {
          *(int **)(param_2 + 8) = piVar1;
          lVar3 = *(long *)(param_1 + 2);
        }
        else {
          lVar3 = *(long *)(param_1 + 2);
          if (*(int **)(lVar3 + 0x10) == param_1) {
            *(int **)(lVar3 + 0x10) = piVar1;
          }
          else {
            *(int **)(lVar3 + 0x18) = piVar1;
          }
        }
        iVar2 = *piVar1;
        *piVar1 = *param_1;
        *(long *)(piVar1 + 2) = lVar3;
        *param_1 = iVar2;
        goto LAB_0064cb1c;
      }
    }
  }
  piVar4 = *(int **)(param_1 + 2);
  if (piVar7 != (int *)0x0) {
    *(int **)(piVar7 + 2) = piVar4;
  }
  if (*(int **)(param_2 + 8) == param_1) {
    *(int **)(param_2 + 8) = piVar7;
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
                    /* try { // try from 0064cca8 to 0074cccf has its CatchHandler @ 0064cd54 */
    if (*(int **)(lVar3 + 0x10) == param_1) {
      *(int **)(lVar3 + 0x10) = piVar7;
    }
    else {
      *(int **)(lVar3 + 0x18) = piVar7;
    }
  }
  if (*(int **)(param_2 + 0x10) == param_1) {
    piVar6 = piVar7;
    if (*(long *)(param_1 + 6) == 0) {
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 2);
    }
    else {
      do {
        piVar5 = piVar6;
        piVar6 = *(int **)(piVar5 + 4);
      } while (piVar6 != (int *)0x0);
      *(int **)(param_2 + 0x10) = piVar5;
    }
  }
  if (*(int **)(param_2 + 0x18) == param_1) {
    piVar6 = piVar7;
    if (*(long *)(param_1 + 4) == 0) {
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 2);
      iVar2 = *param_1;
    }
    else {
      do {
        piVar5 = piVar6;
                    /* catch() { ... } // from try @ 0064cca8 with catch @ 0064cd54 */
        piVar6 = *(int **)(piVar5 + 6);
      } while (piVar6 != (int *)0x0);
      iVar2 = *param_1;
      *(int **)(param_2 + 0x18) = piVar5;
    }
  }
  else {
                    /* try { // try from 0064ccd0 to 0074cdc3 has its CatchHandler @ 0064cc64 */
    iVar2 = *param_1;
  }
LAB_0064cb1c:
  lVar3 = param_2 + 8;
  if (iVar2 == 0) {
    return param_1;
  }
LAB_0064cb64:
  do {
    piVar6 = piVar7;
    if (*(int **)(param_2 + 8) == piVar7) {
LAB_0064cc18:
      if (piVar6 == (int *)0x0) {
        return param_1;
      }
LAB_0064cc1c:
      *piVar6 = 1;
      return param_1;
    }
    if ((piVar7 != (int *)0x0) && (*piVar7 != 1)) goto LAB_0064cc1c;
    piVar6 = *(int **)(piVar4 + 4);
    if (piVar6 == piVar7) {
      piVar7 = *(int **)(piVar4 + 6);
      if (*piVar7 == 0) {
        *piVar7 = 1;
        *piVar4 = 0;
        FUN_0064c580(piVar4,lVar3);
        piVar7 = *(int **)(piVar4 + 6);
      }
      piVar5 = *(int **)(piVar7 + 4);
      if ((piVar5 == (int *)0x0) || (*piVar5 == 1)) {
        piVar1 = *(int **)(piVar7 + 6);
        if ((piVar1 == (int *)0x0) || (*piVar1 == 1)) {
          *piVar7 = 0;
          piVar7 = piVar4;
          piVar4 = *(int **)(piVar4 + 2);
          goto LAB_0064cb64;
        }
LAB_0064cbf0:
        *piVar7 = *piVar4;
        *piVar4 = 1;
LAB_0064cc04:
        *piVar1 = 1;
      }
      else {
        piVar1 = *(int **)(piVar7 + 6);
        if ((piVar1 != (int *)0x0) && (*piVar1 != 1)) goto LAB_0064cbf0;
        *piVar5 = 1;
        *piVar7 = 0;
        FUN_0064c5e0(piVar7,lVar3);
        piVar1 = *(int **)(*(int **)(piVar4 + 6) + 6);
        **(int **)(piVar4 + 6) = *piVar4;
        *piVar4 = 1;
        if (piVar1 != (int *)0x0) goto LAB_0064cc04;
      }
      FUN_0064c580(piVar4,lVar3);
      goto LAB_0064cc18;
    }
    if (*piVar6 == 0) {
      *piVar6 = 1;
      *piVar4 = 0;
      FUN_0064c5e0(piVar4,lVar3);
      piVar6 = *(int **)(piVar4 + 4);
    }
    piVar5 = *(int **)(piVar6 + 6);
    if ((piVar5 != (int *)0x0) && (*piVar5 != 1)) {
      piVar1 = *(int **)(piVar6 + 4);
      if ((piVar1 == (int *)0x0) || (*piVar1 == 1)) {
        *piVar5 = 1;
        *piVar6 = 0;
        FUN_0064c580(piVar6,lVar3);
        piVar1 = *(int **)(*(int **)(piVar4 + 4) + 4);
        **(int **)(piVar4 + 4) = *piVar4;
        *piVar4 = 1;
        if (piVar1 != (int *)0x0) goto LAB_0064cc6c;
      }
      else {
LAB_0064cc5c:
        *piVar6 = *piVar4;
                    /* catch() { ... } // from try @ 0064ccd0 with catch @ 0064cc64 */
        *piVar4 = 1;
LAB_0064cc6c:
        *piVar1 = 1;
      }
      FUN_0064c5e0(piVar4,lVar3);
      piVar6 = piVar7;
      if (piVar7 == (int *)0x0) {
        return param_1;
      }
      goto LAB_0064cc1c;
    }
    piVar1 = *(int **)(piVar6 + 4);
    if ((piVar1 != (int *)0x0) && (*piVar1 != 1)) goto LAB_0064cc5c;
    piVar5 = *(int **)(piVar4 + 2);
    *piVar6 = 0;
    piVar7 = piVar4;
    piVar4 = piVar5;
  } while( true );
}


