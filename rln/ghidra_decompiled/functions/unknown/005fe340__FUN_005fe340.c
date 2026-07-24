/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fe340
 * Function: FUN_005fe340
 * Signature: undefined FUN_005fe340(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fe340(long *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  int iVar7;
  
                    /* try { // try from 005fe340 to 006fe343 has its CatchHandler @ 005fede8 */
                    /* try { // try from 005fe344 to 006fe393 has its CatchHandler @ 005fde3c */
  if (*param_2 == 0xe) {
    lVar4 = *param_1;
                    /* try { // try from 005fe394 to 006fe3ab has its CatchHandler @ 005fef04 */
    lVar6 = *(long *)(lVar4 + 0x18);
    *(uint *)(lVar6 + (long)param_2[2] * 4) =
         param_3 * 0x800000 + 0x800000U | *(uint *)(lVar6 + (long)param_2[2] * 4) & 0x7fffff;
    uVar3 = *(uint *)(lVar6 + (long)param_2[2] * 4);
    *(uint *)(lVar6 + (long)param_2[2] * 4) =
         uVar3 & 0xffffc000 | uVar3 & 0x3f | (*(uint *)((long)param_1 + 0x3c) & 0xff) << 6;
    iVar2 = *(int *)((long)param_1 + 0x3c);
    pbVar5 = (byte *)(lVar4 + 0x73);
    iVar1 = iVar2 + 1;
    iVar7 = iVar1;
    if ((int)(uint)*pbVar5 <= iVar2) {
      if (0xf8 < iVar2) {
                    /* try { // try from 005fe3ec to 006fe413 has its CatchHandler @ 005fec4c */
        FUN_00600968(param_1[3],"function or expression too complex");
        pbVar5 = (byte *)(*param_1 + 0x73);
        iVar7 = *(int *)((long)param_1 + 0x3c) + 1;
      }
      *pbVar5 = (byte)iVar1;
    }
    *(int *)((long)param_1 + 0x3c) = iVar7;
  }
  else if (*param_2 == 0xd) {
    uVar3 = *(uint *)(*(long *)(*param_1 + 0x18) + (long)param_2[2] * 4);
    *(uint *)(*(long *)(*param_1 + 0x18) + (long)param_2[2] * 4) =
         uVar3 & 0xff800000 | uVar3 & 0x3fff | (param_3 * 0x4000 + 0x4000U >> 0xe & 0x1ff) << 0xe;
  }
  return;
}


