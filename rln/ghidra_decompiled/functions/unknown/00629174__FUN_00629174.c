/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00629174
 * Function: FUN_00629174
 * Signature: undefined FUN_00629174(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00629174(long *param_1,long param_2,uint param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  long *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  char local_8 [8];
  
                    /* try { // try from 00629178 to 0072917b has its CatchHandler @ 0062918c */
                    /* catch() { ... } // from try @ 00629148 with catch @ 0062917c */
                    /* catch() { ... } // from try @ 00629178 with catch @ 0062918c */
                    /* try { // try from 00629190 to 00729193 has its CatchHandler @ 0062919c */
                    /* try { // try from 00629194 to 0072919f has its CatchHandler @ 006290d0 */
                    /* catch() { ... } // from try @ 00629190 with catch @ 0062919c */
  if (param_3 == 0xffffffff) {
    plVar7 = (long *)FUN_0066f6c8();
    return plVar7;
  }
                    /* catch() { ... } // from try @ 00629200 with catch @ 006291a4 */
  param_1[1] = 0;
  FUN_006230e4(local_8,param_1,1);
  if ((param_2 < 1) || (local_8[0] == '\0')) {
    return param_1;
  }
  plVar7 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
                    /* try { // try from 006291d8 to 007291ff has its CatchHandler @ 0062921c */
  if ((byte *)plVar7[2] < (byte *)plVar7[3]) {
    uVar5 = (uint)*(byte *)plVar7[2];
  }
  else {
    uVar5 = (**(code **)(*plVar7 + 0x48))(plVar7);
  }
  lVar10 = param_1[1];
  bVar3 = false;
LAB_00629200:
  do {
                    /* try { // try from 00629200 to 0072922f has its CatchHandler @ 006291a4 */
    uVar4 = uVar5;
    if (param_3 == uVar5 || uVar5 == 0xffffffff) {
LAB_00629290:
      if (bVar3) {
        param_1[1] = 0x7fffffffffffffff;
      }
      if (uVar5 == 0xffffffff) {
        lVar10 = (long)param_1 + *(long *)(*param_1 + -0x18);
        FUN_00620c14(lVar10,*(uint *)(lVar10 + 0x20) | 2);
        return param_1;
      }
      if (param_3 != uVar5) {
        return param_1;
      }
      if (param_1[1] != 0x7fffffffffffffff) {
        param_1[1] = param_1[1] + 1;
      }
                    /* try { // try from 00629364 to 0072938b has its CatchHandler @ 006295b4 */
      if ((ulong)plVar7[2] < (ulong)plVar7[3]) {
        plVar7[2] = plVar7[2] + 1;
        return param_1;
      }
      (**(code **)(*plVar7 + 0x50))(plVar7);
      return param_1;
    }
                    /* catch() { ... } // from try @ 006291d8 with catch @ 0062921c */
    while (uVar5 = uVar4, lVar10 < param_2) {
      pbVar9 = (byte *)plVar7[3];
      pbVar8 = (byte *)plVar7[2];
      __n = param_2 - lVar10;
      if ((long)pbVar9 - (long)pbVar8 < param_2 - lVar10) {
        __n = (long)pbVar9 - (long)pbVar8;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0062938c with catch @ 00629238
                       catch(type#1 @ 00000000) { ... } // from try @ 00629608 with catch @ 00629238
                        */
      if ((long)__n < 2) {
        param_1[1] = lVar10 + 1;
        if (pbVar8 < pbVar9) {
                    /* try { // try from 006292f8 to 0072931f has its CatchHandler @ 006295c0 */
          pbVar8 = pbVar8 + 1;
          plVar7[2] = (long)pbVar8;
LAB_00629300:
          if (pbVar9 <= pbVar8) goto LAB_00629314;
          uVar5 = (uint)*pbVar8;
          lVar10 = param_1[1];
        }
        else {
                    /* try { // try from 0062938c to 007295df has its CatchHandler @ 00629238 */
          uVar5 = (**(code **)(*plVar7 + 0x50))(plVar7);
          if (uVar5 != 0xffffffff) {
            pbVar8 = (byte *)plVar7[2];
            pbVar9 = (byte *)plVar7[3];
            goto LAB_00629300;
          }
LAB_00629324:
          lVar10 = param_1[1];
        }
        goto LAB_00629200;
      }
      pvVar6 = memchr(pbVar8,param_3 & 0xff,__n);
      sVar1 = (long)pvVar6 - (long)pbVar8;
      if (pvVar6 == (void *)0x0) {
        sVar1 = __n;
      }
      plVar7[2] = (long)(pbVar8 + sVar1);
      lVar10 = lVar10 + sVar1;
      param_1[1] = lVar10;
      if (pbVar9 <= pbVar8 + sVar1) {
LAB_00629314:
        uVar5 = (**(code **)(*plVar7 + 0x48))(plVar7);
        goto LAB_00629324;
      }
      bVar2 = pbVar8[sVar1];
      uVar5 = (uint)bVar2;
      uVar4 = (uint)bVar2;
      if (param_3 == bVar2 || bVar2 == 0xffffffff) goto LAB_00629290;
    }
    if (param_2 != 0x7fffffffffffffff) goto LAB_00629290;
    param_1[1] = -0x8000000000000000;
    lVar10 = -0x8000000000000000;
    bVar3 = true;
  } while( true );
}


