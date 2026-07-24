/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f6020
 * Function: FUN_005f6020
 * Signature: undefined FUN_005f6020(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f6020(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  iVar3 = (int)param_2[1];
  uVar8 = 0xffffffff;
  do {
    if (iVar3 == 5) {
      lVar6 = *param_2;
                    /* try { // try from 005f6068 to 006f6073 has its CatchHandler @ 005f75fc */
      puVar1 = (undefined8 *)FUN_005f4118(lVar6,param_3);
      if ((((*(int *)(puVar1 + 1) != 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) ||
          ((*(byte *)(lVar6 + 10) & 1) != 0)) ||
         (plVar2 = (long *)FUN_005f4e8c(lVar6,0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x128)),
         plVar2 == (long *)0x0)) {
        *param_4 = *puVar1;
        *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar1 + 1);
        return;
      }
      plVar7 = plVar2 + 1;
LAB_005f60dc:
      iVar3 = (int)*plVar7;
    }
    else {
      plVar2 = (long *)FUN_005f4ed4(param_1,param_2,0);
      plVar7 = plVar2 + 1;
                    /* try { // try from 005f60bc to 006f60eb has its CatchHandler @ 005f6fc0 */
      iVar3 = (int)*plVar7;
      if (iVar3 == 0) {
        FUN_005eb03c(param_1,param_2,"index");
        goto LAB_005f60dc;
      }
    }
    if (iVar3 == 6) {
      plVar4 = *(long **)(param_1 + 0x10);
      lVar5 = *(long *)(param_1 + 0x40);
      *plVar4 = *plVar2;
      *(int *)(plVar4 + 1) = (int)*plVar7;
      lVar6 = *(long *)(param_1 + 0x10);
      *(long *)(lVar6 + 0x10) = *param_2;
      *(int *)(lVar6 + 0x18) = (int)param_2[1];
      lVar6 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(lVar6 + 0x20) = *param_3;
                    /* try { // try from 005f6170 to 006f619f has its CatchHandler @ 005f760c */
      *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(param_3 + 1);
      lVar6 = *(long *)(param_1 + 0x10);
      if (*(long *)(param_1 + 0x38) - lVar6 < 0x31) {
        FUN_005ebbb8(param_1,3);
        lVar6 = *(long *)(param_1 + 0x10);
      }
      *(long *)(param_1 + 0x10) = lVar6 + 0x30;
      FUN_005ec63c(param_1,lVar6,1);
      lVar6 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar6 + -0x10;
      param_4 = (undefined8 *)((long)param_4 + (*(long *)(param_1 + 0x40) - lVar5));
                    /* try { // try from 005f61c4 to 006f61c7 has its CatchHandler @ 005f7294 */
      *param_4 = *(undefined8 *)(lVar6 + -0x10);
      *(undefined4 *)(param_4 + 1) = *(undefined4 *)(lVar6 + -8);
      return;
    }
    uVar8 = uVar8 + 1;
    param_2 = plVar2;
    if (0x62 < uVar8) {
                    /* try { // try from 005f610c to 006f6133 has its CatchHandler @ 005f75fc */
      FUN_005eb320(param_1,"loop in gettable");
      return;
    }
  } while( true );
}


