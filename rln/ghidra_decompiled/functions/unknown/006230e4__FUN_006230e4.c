/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006230e4
 * Function: FUN_006230e4
 * Signature: undefined FUN_006230e4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006230e4(undefined1 *param_1,long *param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  lVar7 = *(long *)(*param_2 + -0x18);
  *param_1 = 0;
  lVar7 = (long)param_2 + lVar7;
  uVar2 = *(uint *)(lVar7 + 0x20);
  if (uVar2 == 0) {
    if (*(long *)(lVar7 + 0xd8) == 0) {
      if (param_3 != '\0') goto LAB_0062313c;
LAB_00623178:
      if ((*(uint *)(lVar7 + 0x18) >> 0xc & 1) != 0) {
                    /* try { // try from 00623180 to 00723183 has its CatchHandler @ 00623f80 */
        plVar8 = *(long **)(lVar7 + 0xe8);
                    /* try { // try from 00623184 to 007231d3 has its CatchHandler @ 00622fb4 */
        if ((byte *)plVar8[2] < (byte *)plVar8[3]) {
          lVar9 = *(long *)(lVar7 + 0xf0);
          uVar3 = (ulong)*(byte *)plVar8[2];
          if (lVar9 == 0) {
LAB_0062327c:
                    /* WARNING: Subroutine does not return */
            FUN_006652c8();
          }
        }
        else {
          uVar3 = (**(code **)(*plVar8 + 0x48))(plVar8);
          lVar7 = (long)param_2 + *(long *)(*param_2 + -0x18);
          lVar9 = *(long *)(lVar7 + 0xf0);
          if (lVar9 == 0) goto LAB_0062327c;
          if ((int)uVar3 == -1) {
LAB_00623218:
            uVar2 = *(uint *)(lVar7 + 0x20);
            uVar5 = 2;
            goto LAB_00623158;
          }
        }
        if ((*(byte *)(*(long *)(lVar9 + 0x30) + (uVar3 & 0xff)) >> 3 & 1) != 0) {
          do {
            pbVar4 = (byte *)plVar8[3];
            if (pbVar4 <= (byte *)plVar8[2]) {
                    /* try { // try from 006231fc to 00723223 has its CatchHandler @ 00623d10 */
              iVar1 = (**(code **)(*plVar8 + 0x50))(plVar8);
              if (iVar1 != -1) {
                pbVar6 = (byte *)plVar8[2];
                    /* try { // try from 00623274 to 0072327f has its CatchHandler @ 00623d14 */
                pbVar4 = (byte *)plVar8[3];
                goto LAB_006231c8;
              }
LAB_0062320c:
              lVar7 = (long)param_2 + *(long *)(*param_2 + -0x18);
              goto LAB_00623218;
            }
            pbVar6 = (byte *)plVar8[2] + 1;
            plVar8[2] = (long)pbVar6;
LAB_006231c8:
            if (pbVar6 < pbVar4) {
              uVar2 = (uint)*pbVar6;
            }
            else {
              uVar2 = (**(code **)(*plVar8 + 0x48))(plVar8);
                    /* try { // try from 00623264 to 0072326f has its CatchHandler @ 00623e20 */
              if (uVar2 == 0xffffffff) goto LAB_0062320c;
            }
                    /* try { // try from 006231d4 to 007231db has its CatchHandler @ 00623e80 */
          } while ((*(byte *)(*(long *)(lVar9 + 0x30) + (ulong)(byte)uVar2) >> 3 & 1) != 0);
          lVar7 = (long)param_2 + *(long *)(*param_2 + -0x18);
        }
      }
    }
    else {
      FUN_0063f778();
      lVar7 = (long)param_2 + *(long *)(*param_2 + -0x18);
      if (param_3 == '\0') goto LAB_00623178;
    }
    uVar2 = *(uint *)(lVar7 + 0x20);
    if (uVar2 == 0) {
LAB_0062313c:
      *param_1 = 1;
      return;
    }
  }
  uVar5 = 0;
LAB_00623158:
  FUN_00620c14(lVar7,uVar5 | 4 | uVar2);
  return;
}


