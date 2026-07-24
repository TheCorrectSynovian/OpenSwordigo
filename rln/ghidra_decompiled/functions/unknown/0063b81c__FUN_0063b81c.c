/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063b81c
 * Function: FUN_0063b81c
 * Signature: undefined FUN_0063b81c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0063b81c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  
  puVar2 = PTR_DAT_007e5de8;
  puVar9 = *(undefined8 **)(*param_2 + 0x20);
  *param_1 = (long)(PTR_DAT_007e5de8 + 0x18);
  pcVar10 = (char *)*puVar9;
  if (pcVar10 == (char *)0x0) {
                    /* try { // try from 0063bacc to 0073bb77 has its CatchHandler @ 0063bacc
                       catch() { ... } // from try @ 0063bacc with catch @ 0063bacc
                       catch() { ... } // from try @ 0063bb7c with catch @ 0063bacc
                       catch() { ... } // from try @ 0063bc6c with catch @ 0063bacc
                       catch() { ... } // from try @ 0063bdd4 with catch @ 0063bacc
                       catch() { ... } // from try @ 0063c7d0 with catch @ 0063bacc
                       catch() { ... } // from try @ 0063ca04 with catch @ 0063bacc
                       catch() { ... } // from try @ 0063cf0c with catch @ 0063bacc */
    FUN_00669074(param_1,0,*(undefined8 *)puVar2,1,0x2a);
  }
  else {
    if (puVar9[1] != 0) {
      uVar8 = 0;
      do {
        puVar1 = puVar9 + uVar8;
        uVar8 = uVar8 + 1;
        iVar3 = strcmp((char *)*puVar1,(char *)puVar9[uVar8]);
        if (4 < uVar8) {
          if (iVar3 == 0) goto LAB_0063b894;
          break;
        }
      } while (iVar3 == 0);
      FUN_00667088(param_1,0x80);
      puVar9 = *(undefined8 **)PTR_PTR_007e5e98;
      pcVar10 = (char *)*puVar9;
      sVar4 = strlen(pcVar10);
      FUN_006677d4(param_1,pcVar10,sVar4);
      lVar5 = *param_1;
      lVar6 = *(long *)(lVar5 + -0x18);
      uVar8 = lVar6 + 1;
      if ((*(ulong *)(lVar5 + -0x10) < uVar8) || (0 < *(int *)(lVar5 + -8))) {
        FUN_00667088(param_1,uVar8);
        lVar5 = *param_1;
        lVar6 = *(long *)(lVar5 + -0x18);
      }
      *(undefined1 *)(lVar5 + lVar6) = 0x3d;
      lVar5 = *param_1;
      if ((undefined *)(lVar5 + -0x18) != PTR_DAT_007e5de8) {
        *(undefined4 *)(lVar5 + -8) = 0;
        *(ulong *)(lVar5 + -0x18) = uVar8;
        *(undefined1 *)(lVar5 + uVar8) = 0;
      }
      pcVar10 = (char *)**(undefined8 **)(*param_2 + 0x20);
                    /* try { // try from 0063b960 to 0073b98b has its CatchHandler @ 0063afbc */
      sVar4 = strlen(pcVar10);
      FUN_006677d4(param_1,pcVar10,sVar4);
      lVar5 = 8;
                    /* catch() { ... } // from try @ 0063b4b8 with catch @ 0063b980
                       catch() { ... } // from try @ 0063b770 with catch @ 0063b980 */
      do {
        lVar6 = *param_1;
                    /* catch() { ... } // from try @ 0063b9a0 with catch @ 0063b98c */
        lVar7 = *(long *)(lVar6 + -0x18);
        uVar8 = lVar7 + 1;
                    /* try { // try from 0063b99c to 0073b99f has its CatchHandler @ 0063b9b0 */
                    /* try { // try from 0063b9a0 to 0073b9c3 has its CatchHandler @ 0063b98c */
        if ((*(ulong *)(lVar6 + -0x10) < uVar8) || (0 < *(int *)(lVar6 + -8))) {
                    /* catch() { ... } // from try @ 0063b99c with catch @ 0063b9b0 */
          FUN_00667088(param_1,uVar8);
          lVar6 = *param_1;
          lVar7 = *(long *)(lVar6 + -0x18);
        }
        *(undefined1 *)(lVar6 + lVar7) = 0x3b;
        lVar6 = *param_1;
        if ((undefined *)(lVar6 + -0x18) != PTR_DAT_007e5de8) {
          *(undefined4 *)(lVar6 + -8) = 0;
          *(ulong *)(lVar6 + -0x18) = uVar8;
          *(undefined1 *)(lVar6 + uVar8) = 0;
        }
        pcVar10 = *(char **)((long)puVar9 + lVar5);
        sVar4 = strlen(pcVar10);
        FUN_006677d4(param_1,pcVar10,sVar4);
        lVar6 = *param_1;
        lVar7 = *(long *)(lVar6 + -0x18);
        uVar8 = lVar7 + 1;
        if ((*(ulong *)(lVar6 + -0x10) < uVar8) || (0 < *(int *)(lVar6 + -8))) {
          FUN_00667088(param_1,uVar8);
          lVar6 = *param_1;
          lVar7 = *(long *)(lVar6 + -0x18);
        }
        *(undefined1 *)(lVar6 + lVar7) = 0x3d;
        lVar6 = *param_1;
        if ((undefined *)(lVar6 + -0x18) != PTR_DAT_007e5de8) {
          *(undefined4 *)(lVar6 + -8) = 0;
          *(ulong *)(lVar6 + -0x18) = uVar8;
          *(undefined1 *)(lVar6 + uVar8) = 0;
        }
        pcVar10 = *(char **)(*(long *)(*param_2 + 0x20) + lVar5);
        sVar4 = strlen(pcVar10);
        FUN_006677d4(param_1,pcVar10,sVar4);
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x30);
      return param_1;
    }
LAB_0063b894:
    sVar4 = strlen(pcVar10);
    FUN_0066918c(param_1,pcVar10,sVar4);
  }
  return param_1;
}


