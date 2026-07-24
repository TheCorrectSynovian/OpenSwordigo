/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067e974
 * Function: FUN_0067e974
 * Signature: undefined FUN_0067e974(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0067e974(undefined1 *param_1,uint param_2,undefined8 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  if (param_3 != (undefined8 *)0x0) {
    iVar2 = *(int *)(param_1 + 0x130);
    while (iVar2 == 0) {
      if (*(int *)(param_3 + 2) == 0) {
        piVar5 = (int *)param_3[1];
        iVar2 = *piVar5;
        if ((param_4 != 0) || (4 < iVar2 - 0x1cU)) {
          *(undefined4 *)(param_3 + 2) = 1;
          uVar8 = *(undefined8 *)(param_1 + 0x120);
          *(undefined8 *)(param_1 + 0x120) = param_3[3];
          if (iVar2 == 0x29) {
                    /* catch() { ... } // from try @ 0067e858 with catch @ 0067ea40 */
            FUN_0067ef50(param_1,param_2,piVar5 + 4,*param_3);
                    /* catch() { ... } // from try @ 0067e8e8 with catch @ 0067ea44 */
            *(undefined8 *)(param_1 + 0x120) = uVar8;
            return;
          }
          if (iVar2 == 0x2a) {
            FUN_0067ec88(param_1,param_2,piVar5 + 2,*param_3);
            *(undefined8 *)(param_1 + 0x120) = uVar8;
                    /* catch() { ... } // from try @ 0067e8a8 with catch @ 0067ea84 */
            return;
          }
          if (iVar2 == 2) {
            uVar6 = *(undefined8 *)(param_1 + 0x128);
            *(undefined8 *)(param_1 + 0x128) = 0;
            FUN_0067a6e8(param_1,param_2,*(undefined8 *)(piVar5 + 2));
            *(undefined8 *)(param_1 + 0x128) = uVar6;
            lVar3 = *(long *)(param_1 + 0x100);
            if ((param_2 >> 2 & 1) != 0) {
              if (lVar3 == 0xff) {
                param_1[0xff] = 0;
                (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                lVar4 = 1;
                lVar3 = 0;
                *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
              }
              else {
                    /* catch() { ... } // from try @ 0067e8d4 with catch @ 0067eaf4 */
                lVar4 = lVar3 + 1;
              }
                    /* catch() { ... } // from try @ 0067e894 with catch @ 0067eaf8 */
              *(long *)(param_1 + 0x100) = lVar4;
              param_1[lVar3] = 0x2e;
                    /* try { // try from 0067eb04 to 0077eb3f has its CatchHandler @ 0067eb04
                       catch() { ... } // from try @ 0067eb04 with catch @ 0067eb04
                       catch() { ... } // from try @ 0067eb58 with catch @ 0067eb04
                       catch() { ... } // from try @ 0067eb90 with catch @ 0067eb04 */
              param_1[0x108] = 0x2e;
              goto LAB_0067eb08;
            }
            if (lVar3 == 0xff) {
                    /* try { // try from 0067eb90 to 0077ed0f has its CatchHandler @ 0067eb04 */
              param_1[0xff] = 0;
              (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
              lVar4 = 1;
              *param_1 = 0x3a;
              *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
LAB_0067eadc:
              lVar3 = lVar4 + 1;
            }
            else {
              lVar4 = lVar3 + 1;
              *(long *)(param_1 + 0x100) = lVar4;
              param_1[lVar3] = 0x3a;
              param_1[0x108] = 0x3a;
              if (lVar4 != 0xff) goto LAB_0067eadc;
              param_1[0xff] = 0;
              (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                    /* try { // try from 0067eb78 to 0077eb8b has its CatchHandler @ 0067ec90 */
              lVar3 = 1;
              lVar4 = 0;
              *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
                    /* try { // try from 0067eb8c to 0077eb8f has its CatchHandler @ 0067ec58 */
            }
            *(long *)(param_1 + 0x100) = lVar3;
            param_1[lVar4] = 0x3a;
            param_1[0x108] = 0x3a;
LAB_0067eb08:
            piVar5 = *(int **)(param_3[1] + 0x10);
            iVar2 = *piVar5;
            if (iVar2 != 0x46) goto LAB_0067eb28;
            pcVar7 = "{default arg#";
            lVar3 = *(long *)(param_1 + 0x100);
            do {
              cVar1 = *pcVar7;
              if (lVar3 == 0xff) {
                param_1[0xff] = 0;
                (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                lVar4 = 1;
                lVar3 = 0;
                    /* catch() { ... } // from try @ 0067eb8c with catch @ 0067ec58 */
                *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
              }
              else {
                lVar4 = lVar3 + 1;
              }
              *(long *)(param_1 + 0x100) = lVar4;
              pcVar7 = pcVar7 + 1;
              param_1[lVar3] = cVar1;
              param_1[0x108] = cVar1;
              lVar3 = lVar4;
            } while (pcVar7 != "");
            FUN_00672a48(param_1,(long)(piVar5[4] + 1));
            FUN_00672840(param_1,&DAT_006a06d8);
            do {
              piVar5 = *(int **)(piVar5 + 2);
              iVar2 = *piVar5;
LAB_0067eb28:
            } while (iVar2 - 0x1cU < 5);
                    /* try { // try from 0067eb40 to 0077eb53 has its CatchHandler @ 0067ed04 */
            FUN_0067a6e8(param_1,param_2,piVar5);
            *(undefined8 *)(param_1 + 0x120) = uVar8;
                    /* try { // try from 0067eb54 to 0077eb57 has its CatchHandler @ 0067ec94 */
                    /* try { // try from 0067eb58 to 0077eb77 has its CatchHandler @ 0067eb04 */
            return;
          }
                    /* catch() { ... } // from try @ 0067e86c with catch @ 0067ea00 */
          FUN_0067e0f4(param_1,param_2);
          *(undefined8 *)(param_1 + 0x120) = uVar8;
        }
      }
      param_3 = (undefined8 *)*param_3;
      if (param_3 == (undefined8 *)0x0) {
        return;
      }
      iVar2 = *(int *)(param_1 + 0x130);
    }
  }
  return;
}


