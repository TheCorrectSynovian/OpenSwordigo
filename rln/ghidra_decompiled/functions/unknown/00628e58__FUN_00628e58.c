/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00628e58
 * Function: FUN_00628e58
 * Signature: undefined FUN_00628e58(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00628e58(long *param_1,undefined1 *param_2,long param_3,uint param_4)

{
  size_t __n;
  byte bVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  long lVar7;
  size_t __n_00;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 *__dest;
  void *__s;
  char local_8 [8];
  
  param_1[1] = 0;
  FUN_006230e4(local_8,param_1,1);
  if (local_8[0] == '\0') {
LAB_00628fe0:
    uVar6 = 0;
LAB_00628fe4:
    if (0 < param_3) {
      *param_2 = 0;
    }
    if (param_1[1] == 0) {
      uVar6 = uVar6 | 4;
    }
    else if (uVar6 == 0) {
                    /* try { // try from 00629048 to 0072907f has its CatchHandler @ 00629048
                       catch() { ... } // from try @ 00629048 with catch @ 00629048
                       catch() { ... } // from try @ 00629090 with catch @ 00629048
                       catch() { ... } // from try @ 006290c4 with catch @ 00629048 */
      return param_1;
    }
    lVar7 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00620c14(lVar7,uVar6 | *(uint *)(lVar7 + 0x20));
    return param_1;
  }
  plVar11 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
  if ((byte *)plVar11[2] < (byte *)plVar11[3]) {
    uVar2 = (uint)*(byte *)plVar11[2];
  }
  else {
    uVar2 = (**(code **)(*plVar11 + 0x48))(plVar11);
  }
LAB_00628ec0:
  lVar7 = param_1[1];
  do {
    lVar8 = lVar7 + 1;
    __dest = param_2;
    uVar6 = uVar2;
    if (uVar2 == (param_4 & 0xff) || uVar2 == 0xffffffff) {
LAB_00628f80:
      if (uVar2 == 0xffffffff) {
        uVar6 = 2;
        goto LAB_00628fe4;
      }
      uVar6 = 4;
      if ((param_4 & 0xff) != uVar2) goto LAB_00628fe4;
      uVar4 = plVar11[2];
      uVar10 = plVar11[3];
      param_1[1] = lVar8;
      if (uVar4 < uVar10) {
        uVar6 = 0;
        plVar11[2] = uVar4 + 1;
        goto LAB_00628fe4;
      }
      (**(code **)(*plVar11 + 0x50))(plVar11);
      goto LAB_00628fe0;
    }
    while( true ) {
      uVar2 = uVar6;
      param_2 = __dest;
      if (param_3 <= lVar8) goto LAB_00628f80;
      __s = (void *)plVar11[2];
      __n_00 = (param_3 - lVar7) - 1;
      if (plVar11[3] - (long)__s < (long)__n_00) {
        __n_00 = plVar11[3] - (long)__s;
      }
      if ((long)__n_00 < 2) break;
      pvVar3 = memchr(__s,param_4 & 0xff,__n_00);
      __n = (long)pvVar3 - (long)__s;
      if (pvVar3 == (void *)0x0) {
        __n = __n_00;
      }
      param_2 = __dest + __n;
      memcpy(__dest,__s,__n);
      lVar8 = plVar11[2];
      lVar7 = param_1[1];
      uVar10 = plVar11[3];
      uVar4 = lVar8 + __n;
      plVar11[2] = uVar4;
      lVar7 = __n + lVar7;
      param_1[1] = lVar7;
      if (uVar10 <= uVar4) {
                    /* catch() { ... } // from try @ 00629080 with catch @ 006290a8 */
        uVar2 = (**(code **)(*plVar11 + 0x48))(plVar11);
        goto LAB_00628ec0;
      }
      bVar1 = *(byte *)(lVar8 + __n);
      uVar2 = (uint)bVar1;
      lVar8 = lVar7 + 1;
      __dest = param_2;
      uVar6 = (uint)bVar1;
      if ((uint)bVar1 == (param_4 & 0xff) || bVar1 == 0xffffffff) goto LAB_00628f80;
    }
    *__dest = (char)uVar2;
    param_2 = __dest + 1;
    pbVar5 = (byte *)plVar11[2];
    pbVar9 = (byte *)plVar11[3];
    param_1[1] = param_1[1] + 1;
    if (pbVar5 < pbVar9) {
                    /* try { // try from 00629080 to 0072908f has its CatchHandler @ 006290a8 */
      pbVar5 = pbVar5 + 1;
      plVar11[2] = (long)pbVar5;
    }
    else {
                    /* try { // try from 006290b8 to 007290bb has its CatchHandler @ 006290bc */
                    /* catch() { ... } // from try @ 006290b8 with catch @ 006290bc */
      uVar2 = (**(code **)(*plVar11 + 0x50))(plVar11);
                    /* try { // try from 006290c0 to 007290c3 has its CatchHandler @ 006290cc */
                    /* try { // try from 006290c4 to 007290cf has its CatchHandler @ 00629048 */
      if (uVar2 == 0xffffffff) goto LAB_00628ec0;
      pbVar5 = (byte *)plVar11[2];
                    /* catch() { ... } // from try @ 006290c0 with catch @ 006290cc */
      pbVar9 = (byte *)plVar11[3];
                    /* catch() { ... } // from try @ 006290f0 with catch @ 006290d0
                       catch() { ... } // from try @ 00629194 with catch @ 006290d0 */
    }
    if (pbVar9 <= pbVar5) break;
                    /* try { // try from 00629090 to 007290b7 has its CatchHandler @ 00629048 */
    uVar2 = (uint)*pbVar5;
    lVar7 = param_1[1];
  } while( true );
                    /* try { // try from 006290e8 to 007290ef has its CatchHandler @ 00629120 */
                    /* try { // try from 006290f0 to 00729147 has its CatchHandler @ 006290d0 */
  uVar2 = (**(code **)(*plVar11 + 0x48))(plVar11);
  goto LAB_00628ec0;
}


