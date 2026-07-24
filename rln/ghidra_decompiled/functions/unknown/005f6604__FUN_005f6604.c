/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f6604
 * Function: FUN_005f6604
 * Signature: undefined FUN_005f6604(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_005f6604(long param_1,double *param_2,double *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
                    /* try { // try from 005f6604 to 006f660b has its CatchHandler @ 005f7190 */
  uVar2 = 1;
  switch(*(int *)(param_2 + 1)) {
  case 0:
    break;
  case 1:
    uVar2 = (ulong)(*(int *)param_2 == *(int *)param_3);
    break;
  default:
    uVar2 = (ulong)(*param_2 == *param_3);
    break;
  case 3:
    uVar2 = (ulong)(*param_2 == *param_3);
                    /* try { // try from 005f67c8 to 006f67ef has its CatchHandler @ 005f7470 */
    break;
  case 5:
  case 7:
                    /* try { // try from 005f6654 to 006f6667 has its CatchHandler @ 005f7158 */
    if (*param_2 == *param_3) {
LAB_005f67d4:
      uVar2 = 1;
    }
    else {
      lVar6 = *(long *)((long)*param_2 + 0x10);
      if ((lVar6 != 0) && ((*(byte *)(lVar6 + 10) >> 4 & 1) == 0)) {
        lVar5 = *(long *)((long)*param_3 + 0x10);
        puVar3 = (undefined8 *)
                 FUN_005f4e8c(lVar6,4,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x148));
                    /* try { // try from 005f6688 to 006f6693 has its CatchHandler @ 005f6e14 */
        if (puVar3 == (undefined8 *)0x0) {
          return 0;
        }
        if (lVar6 != lVar5) {
          if ((lVar5 == 0) || ((*(byte *)(lVar5 + 10) >> 4 & 1) != 0)) goto LAB_005f67cc;
          lVar6 = FUN_005f4e8c(lVar5,4,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x148));
          if (lVar6 == 0) {
            return 0;
          }
                    /* try { // try from 005f66c4 to 006f66cb has its CatchHandler @ 005f7104 */
          uVar2 = FUN_005eee84(puVar3,lVar6);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
        }
        puVar4 = *(undefined8 **)(param_1 + 0x10);
        lVar5 = *(long *)(param_1 + 0x40);
        *puVar4 = *puVar3;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
        lVar6 = *(long *)(param_1 + 0x10);
                    /* try { // try from 005f66ec to 006f6713 has its CatchHandler @ 005f6f08 */
        *(double *)(lVar6 + 0x10) = *param_2;
        *(int *)(lVar6 + 0x18) = *(int *)(param_2 + 1);
        lVar6 = *(long *)(param_1 + 0x10);
        *(double *)(lVar6 + 0x20) = *param_3;
        *(int *)(lVar6 + 0x28) = *(int *)(param_3 + 1);
                    /* try { // try from 005f6714 to 006f6727 has its CatchHandler @ 005f7100 */
        lVar6 = *(long *)(param_1 + 0x10);
        if (*(long *)(param_1 + 0x38) - lVar6 < 0x31) {
          FUN_005ebbb8(param_1,3);
          lVar6 = *(long *)(param_1 + 0x10);
        }
                    /* try { // try from 005f6734 to 006f6747 has its CatchHandler @ 005f7470 */
        *(long *)(param_1 + 0x10) = lVar6 + 0x30;
        FUN_005ec63c(param_1,lVar6,1);
        lVar6 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar6 + -0x10;
        puVar4 = (undefined8 *)((long)puVar4 + (*(long *)(param_1 + 0x40) - lVar5));
        *puVar4 = *(undefined8 *)(lVar6 + -0x10);
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(lVar6 + -8);
        iVar1 = (*(int **)(param_1 + 0x10))[2];
        if (iVar1 != 0) {
          if (iVar1 == 1) {
                    /* try { // try from 005f6780 to 006f67a7 has its CatchHandler @ 005f6eb4 */
            return (ulong)(**(int **)(param_1 + 0x10) != 0);
          }
          goto LAB_005f67d4;
        }
      }
LAB_005f67cc:
      uVar2 = 0;
    }
  }
  return uVar2;
}


