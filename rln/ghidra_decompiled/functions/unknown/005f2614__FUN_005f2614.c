/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f2614
 * Function: FUN_005f2614
 * Signature: undefined FUN_005f2614(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005f2614(long *param_1,long param_2,uint *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  
  if (param_1 == (long *)0x0) {
    param_3[4] = 0xffffffff;
    param_3[5] = 0xffffffff;
                    /* try { // try from 005f2688 to 006f268f has its CatchHandler @ 005f2874 */
    *param_3 = 8;
    param_3[2] = 0xff;
    return 8;
                    /* try { // try from 005f2690 to 006f26bf has its CatchHandler @ 005f2524 */
  }
  if ((ulong)*(byte *)((long)param_1 + 0x4a) != 0) {
    uVar8 = (ulong)*(byte *)((long)param_1 + 0x4a);
    do {
      if (*(long *)(*(long *)(*param_1 + 0x30) +
                   (ulong)*(ushort *)((long)param_1 + uVar8 * 2 + 0xc2) * 0x10) == param_2) {
        uVar6 = (uint)(uVar8 - 1);
        if (-1 < (int)uVar6) {
          param_3[4] = 0xffffffff;
          param_3[5] = 0xffffffff;
          *param_3 = 6;
          param_3[2] = uVar6;
          if (param_4 != 0) {
            return 6;
          }
          plVar9 = (long *)param_1[5];
          if (plVar9 != (long *)0x0) {
            do {
                    /* try { // try from 005f26c0 to 006f26cb has its CatchHandler @ 005f28b0 */
              if ((int)(uint)*(byte *)((long)plVar9 + 0xc) <= (int)uVar6) {
                *(undefined1 *)((long)plVar9 + 0xd) = 1;
                return 6;
                    /* catch() { ... } // from try @ 005f2898 with catch @ 005f28a4 */
                    /* catch() { ... } // from try @ 005f2768 with catch @ 005f28a8 */
              }
              plVar9 = (long *)*plVar9;
            } while (plVar9 != (long *)0x0);
            return 6;
          }
          return 6;
        }
        break;
      }
      bVar1 = 1 < (long)uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar1);
  }
  uVar4 = FUN_005f2614(param_1[2],param_2,param_3,0);
                    /* try { // try from 005f26ec to 006f26f7 has its CatchHandler @ 005f2830 */
  if ((int)uVar4 == 8) {
    return uVar4;
  }
  lVar12 = *param_1;
  iVar2 = *(int *)(lVar12 + 0x48);
  bVar3 = *(byte *)(lVar12 + 0x70);
  if ((ulong)bVar3 == 0) {
LAB_005f2778:
    iVar7 = iVar2;
    if ((int)(uint)bVar3 < iVar2) {
LAB_005f2780:
      lVar5 = *(long *)(lVar12 + 0x38);
      goto joined_r0x005f278c;
    }
  }
  else {
    uVar8 = 0;
    pbVar11 = (byte *)((long)param_1 + 0x4c);
    do {
                    /* try { // try from 005f271c to 006f271f has its CatchHandler @ 005f2864 */
      if ((*param_3 == (uint)pbVar11[-1]) && (param_3[2] == (uint)*pbVar11)) goto LAB_005f2870;
      uVar8 = uVar8 + 1;
      pbVar11 = pbVar11 + 2;
    } while (uVar8 < bVar3);
                    /* try { // try from 005f2740 to 006f274b has its CatchHandler @ 005f2828 */
    if (bVar3 < 0x3c) goto LAB_005f2778;
    if (*(int *)(lVar12 + 0x60) == 0) {
      uVar4 = FUN_005ef3d4(param_1[4],0x69a06d,0x3c,"upvalues");
    }
    else {
                    /* try { // try from 005f2768 to 006f278f has its CatchHandler @ 005f28a8 */
      uVar4 = FUN_005ef3d4(param_1[4],&DAT_0069a08f,*(int *)(lVar12 + 0x60),0x3c,"upvalues");
    }
    FUN_006007a0(param_1[3],uVar4,0);
    iVar7 = *(int *)(lVar12 + 0x48);
    if ((int)(uint)*(byte *)(lVar12 + 0x70) < *(int *)(lVar12 + 0x48)) goto LAB_005f2780;
  }
  lVar5 = FUN_005eec70(param_1[4],*(long *)(lVar12 + 0x38),(int *)(lVar12 + 0x48),8,0x7ffffffd,
                       &DAT_0068fbeb);
  iVar7 = *(int *)(lVar12 + 0x48);
  *(long *)(lVar12 + 0x38) = lVar5;
joined_r0x005f278c:
  if (iVar2 < iVar7) {
    lVar10 = (long)iVar2;
    do {
                    /* try { // try from 005f280c to 006f2813 has its CatchHandler @ 005f2814 */
      *(undefined8 *)(lVar5 + lVar10 * 8) = 0;
      lVar5 = *(long *)(lVar12 + 0x38);
                    /* catch() { ... } // from try @ 005f280c with catch @ 005f2814
                       try { // try from 005f2814 to 006f2853 has its CatchHandler @ 005f2524 */
      lVar10 = lVar10 + 1;
    } while (iVar7 != lVar10);
  }
  uVar8 = (ulong)*(byte *)(lVar12 + 0x70);
  *(long *)(lVar5 + uVar8 * 8) = param_2;
                    /* catch() { ... } // from try @ 005f2740 with catch @ 005f2828 */
                    /* catch() { ... } // from try @ 005f26ec with catch @ 005f2830 */
  if (((*(byte *)(param_2 + 9) & 3) != 0) && ((*(byte *)(lVar12 + 9) >> 2 & 1) != 0)) {
    FUN_005ee334(param_1[4],lVar12,param_2);
    uVar8 = (ulong)*(byte *)(lVar12 + 0x70);
  }
                    /* try { // try from 005f2854 to 006f285b has its CatchHandler @ 005f2860 */
                    /* catch() { ... } // from try @ 005f2854 with catch @ 005f2860 */
  *(char *)((long)param_1 + uVar8 * 2 + 0x4b) = (char)*param_3;
                    /* catch() { ... } // from try @ 005f271c with catch @ 005f2864 */
  *(char *)((long)param_1 + uVar8 * 2 + 0x4c) = (char)param_3[2];
  *(char *)(lVar12 + 0x70) = (char)uVar8 + '\x01';
LAB_005f2870:
                    /* catch() { ... } // from try @ 005f2688 with catch @ 005f2874 */
  param_3[2] = (uint)uVar8;
  *param_3 = 7;
  return 7;
}


