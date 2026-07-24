/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00604930
 * Function: PVRTModelPODCopyMesh
 * Signature: undefined __cdecl PVRTModelPODCopyMesh(SPODMesh * param_1, SPODMesh * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODCopyMesh(SPODMesh const&, SPODMesh&) */

void PVRTModelPODCopyMesh(SPODMesh *param_1,SPODMesh *param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  void *pvVar14;
  void *__dest;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  size_t sVar22;
  ulong __n;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  
                    /* catch() { ... } // from try @ 006048cc with catch @ 0060493c */
                    /* catch() { ... } // from try @ 00604878 with catch @ 00604948 */
                    /* catch() { ... } // from try @ 00604884 with catch @ 00604954 */
  lVar23 = *(long *)(param_1 + 0xe8);
  *(undefined4 *)param_2 = *(undefined4 *)param_1;
  iVar2 = *(int *)(param_1 + 4);
                    /* try { // try from 00604974 to 0070499b has its CatchHandler @ 006049a4 */
  *(int *)(param_2 + 4) = iVar2;
  PVRTModelPODCopyCPODData
            ((CPODData *)(param_1 + 0x10),(CPODData *)(param_2 + 0x10),iVar2 * 3,false);
  PVRTModelPODCopyCPODData
            ((CPODData *)(param_1 + 0x38),(CPODData *)(param_2 + 0x38),*(uint *)param_2,lVar23 != 0)
  ;
                    /* try { // try from 0060499c to 007049a7 has its CatchHandler @ 00604520 */
  if (*(int *)(param_2 + 0x38) - 1U < 0xe) {
                    /* catch() { ... } // from try @ 00604974 with catch @ 006049a4 */
    lVar15 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_2 + 0x38) - 1U) * 8);
  }
  else {
    lVar15 = 0;
  }
  uVar3 = *(uint *)(param_2 + 0x3c);
  PVRTModelPODCopyCPODData
            ((CPODData *)(param_1 + 0x50),(CPODData *)(param_2 + 0x50),*(uint *)param_2,lVar23 != 0)
  ;
  if (*(int *)(param_2 + 0x50) - 1U < 0xe) {
    lVar16 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_2 + 0x50) - 1U) * 8);
  }
  else {
    lVar16 = 0;
  }
  uVar4 = *(uint *)(param_2 + 0x54);
  PVRTModelPODCopyCPODData
            ((CPODData *)(param_1 + 0x68),(CPODData *)(param_2 + 0x68),*(uint *)param_2,lVar23 != 0)
  ;
  if (*(int *)(param_2 + 0x68) - 1U < 0xe) {
    lVar17 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_2 + 0x68) - 1U) * 8);
  }
  else {
    lVar17 = 0;
  }
  uVar5 = *(uint *)(param_2 + 0x6c);
  PVRTModelPODCopyCPODData
            ((CPODData *)(param_1 + 0x80),(CPODData *)(param_2 + 0x80),*(uint *)param_2,lVar23 != 0)
  ;
  if (*(int *)(param_2 + 0x80) - 1U < 0xe) {
    lVar18 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_2 + 0x80) - 1U) * 8);
  }
  else {
    lVar18 = 0;
  }
  uVar6 = *(uint *)(param_2 + 0x84);
                    /* try { // try from 00604a8c to 00704adf has its CatchHandler @ 00604a8c
                       catch() { ... } // from try @ 00604a8c with catch @ 00604a8c
                       catch() { ... } // from try @ 00604af4 with catch @ 00604a8c
                       catch() { ... } // from try @ 00604bf8 with catch @ 00604a8c
                       catch() { ... } // from try @ 00604cf8 with catch @ 00604a8c
                       catch() { ... } // from try @ 00604de0 with catch @ 00604a8c
                       catch() { ... } // from try @ 00604ebc with catch @ 00604a8c
                       catch() { ... } // from try @ 00604f94 with catch @ 00604a8c
                       catch() { ... } // from try @ 0060506c with catch @ 00604a8c
                       catch() { ... } // from try @ 006051a8 with catch @ 00604a8c
                       catch() { ... } // from try @ 006056c4 with catch @ 00604a8c */
  PVRTModelPODCopyCPODData
            ((CPODData *)(param_1 + 0xa0),(CPODData *)(param_2 + 0xa0),*(uint *)param_2,lVar23 != 0)
  ;
  if (*(int *)(param_2 + 0xa0) - 1U < 0xe) {
    lVar19 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_2 + 0xa0) - 1U) * 8);
  }
  else {
    lVar19 = 0;
  }
  uVar7 = *(uint *)(param_2 + 0xa4);
                    /* try { // try from 00604ae0 to 00704af3 has its CatchHandler @ 006055cc */
  PVRTModelPODCopyCPODData
            ((CPODData *)(param_1 + 0xb8),(CPODData *)(param_2 + 0xb8),*(uint *)param_2,lVar23 != 0)
  ;
                    /* try { // try from 00604af4 to 00704b6f has its CatchHandler @ 00604a8c */
  if (*(int *)(param_2 + 0xb8) - 1U < 0xe) {
    lVar20 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_2 + 0xb8) - 1U) * 8);
  }
  else {
    lVar20 = 0;
  }
  uVar8 = *(uint *)(param_2 + 0xbc);
  PVRTModelPODCopyCPODData
            ((CPODData *)(param_1 + 0xd0),(CPODData *)(param_2 + 0xd0),*(uint *)param_2,lVar23 != 0)
  ;
  if (*(int *)(param_2 + 0xd0) - 1U < 0xe) {
    lVar21 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_2 + 0xd0) - 1U) * 8);
  }
  else {
    lVar21 = 0;
  }
  uVar9 = *(uint *)(param_1 + 8);
  lVar15 = lVar15 * (ulong)uVar3 + lVar16 * (ulong)uVar4 + lVar17 * (ulong)uVar5 +
           lVar18 * (ulong)uVar6 + lVar19 * (ulong)uVar7 + lVar20 * (ulong)uVar8 +
           lVar21 * (ulong)*(uint *)(param_2 + 0xd4);
  if (uVar9 != 0) {
                    /* try { // try from 00604b70 to 00704b93 has its CatchHandler @ 00605580 */
    pvVar14 = calloc((ulong)uVar9 * 0x18,0x18);
    *(void **)(param_2 + 0x98) = pvVar14;
    if (pvVar14 != (void *)0x0) {
      *(uint *)(param_2 + 8) = uVar9;
      lVar16 = 0;
      uVar24 = 0;
      do {
                    /* try { // try from 00604b9c to 00704baf has its CatchHandler @ 00605530 */
        PVRTModelPODCopyCPODData
                  ((CPODData *)(*(long *)(param_1 + 0x98) + lVar16),
                   (CPODData *)((long)pvVar14 + lVar16),*(uint *)param_2,lVar23 != 0);
        pvVar14 = *(void **)(param_2 + 0x98);
        uVar3 = *(int *)((long)pvVar14 + lVar16) - 1;
        if (uVar3 < 0xe) {
          lVar17 = *(long *)(&DAT_0069b8a0 + (long)(int)uVar3 * 8);
        }
        else {
          lVar17 = 0;
        }
                    /* try { // try from 00604bd0 to 00704bf7 has its CatchHandler @ 00605210 */
        lVar18 = lVar16 + 4;
        uVar24 = uVar24 + 1;
        lVar16 = lVar16 + 0x18;
        lVar15 = lVar15 + lVar17 * (ulong)*(uint *)((long)pvVar14 + lVar18);
      } while (uVar24 < *(uint *)(param_2 + 8));
    }
  }
  if (lVar23 != 0) {
                    /* try { // try from 00604bf8 to 00704c6f has its CatchHandler @ 00604a8c */
    sVar22 = lVar15 * (ulong)*(uint *)param_2;
    if (sVar22 == 0) {
      pvVar14 = *(void **)(param_2 + 0xe8);
    }
    else {
      pvVar14 = calloc(sVar22,1);
      *(void **)(param_2 + 0xe8) = pvVar14;
      if (pvVar14 == (void *)0x0) goto LAB_00604c28;
    }
    memcpy(pvVar14,*(void **)(param_1 + 0xe8),sVar22);
  }
LAB_00604c28:
  pvVar14 = *(void **)(param_1 + 0x28);
  if (pvVar14 != (void *)0x0) {
    sVar22 = (ulong)*(uint *)(param_2 + 4) << 2;
    if (*(uint *)(param_2 + 4) == 0) {
      __dest = *(void **)(param_2 + 0x28);
    }
    else {
      __dest = calloc(sVar22,4);
      *(void **)(param_2 + 0x28) = __dest;
      if (__dest == (void *)0x0) goto LAB_00604c6c;
      pvVar14 = *(void **)(param_1 + 0x28);
    }
    memcpy(__dest,pvVar14,sVar22);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  }
LAB_00604c6c:
                    /* try { // try from 00604c70 to 00704c93 has its CatchHandler @ 006054e4 */
  if (*(int *)(param_1 + 0x10c) != 0) {
    if (*(void **)(param_2 + 0xf0) != (void *)0x0) {
      operator_delete(*(void **)(param_2 + 0xf0));
    }
    *(undefined8 *)(param_2 + 0xf0) = 0;
    if (*(void **)(param_2 + 0xf8) != (void *)0x0) {
      operator_delete(*(void **)(param_2 + 0xf8));
    }
    *(undefined8 *)(param_2 + 0xf8) = 0;
    if (*(void **)(param_2 + 0x100) != (void *)0x0) {
                    /* try { // try from 00604c9c to 00704caf has its CatchHandler @ 00605494 */
      operator_delete(*(void **)(param_2 + 0x100));
    }
    *(undefined8 *)(param_2 + 0x100) = 0;
    *(undefined4 *)(param_2 + 0x10c) = 0;
    iVar2 = *(int *)(param_1 + 0x108);
    *(int *)(param_2 + 0x108) = iVar2;
    iVar10 = *(int *)(param_1 + 0x10c);
    uVar24 = (ulong)iVar10;
    *(int *)(param_2 + 0x10c) = iVar10;
    if (*(long *)(param_1 + 0xf0) != 0) {
      uVar3 = iVar10 * iVar2;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (long)(int)uVar3;
                    /* try { // try from 00604cd0 to 00704cf7 has its CatchHandler @ 0060520c */
      __n = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
      uVar1 = __n;
      if (SUB168(auVar11 * ZEXT816(4),8) != 0) {
        uVar1 = 0xffffffffffffffff;
      }
      pvVar14 = operator_new__(uVar1);
      *(void **)(param_2 + 0xf0) = pvVar14;
      memcpy(pvVar14,*(void **)(param_1 + 0xf0),__n);
    }
    if (*(long *)(param_1 + 0xf8) != 0) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar24;
                    /* try { // try from 00604cf8 to 00704d5b has its CatchHandler @ 00604a8c */
      uVar1 = uVar24 << 2;
      if (SUB168(auVar12 * ZEXT816(4),8) != 0) {
        uVar1 = 0xffffffffffffffff;
      }
      pvVar14 = operator_new__(uVar1);
      *(void **)(param_2 + 0xf8) = pvVar14;
      memcpy(pvVar14,*(void **)(param_1 + 0xf8),uVar24 << 2);
    }
    if (*(long *)(param_1 + 0x100) != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar24;
      uVar1 = uVar24 << 2;
      if (SUB168(auVar13 * ZEXT816(4),8) != 0) {
        uVar1 = 0xffffffffffffffff;
      }
      pvVar14 = operator_new__(uVar1);
      *(void **)(param_2 + 0x100) = pvVar14;
      memcpy(pvVar14,*(void **)(param_1 + 0x100),uVar24 << 2);
    }
  }
  uVar25 = *(undefined8 *)(param_1 + 0x144);
                    /* try { // try from 00604d5c to 00704d6f has its CatchHandler @ 00605238 */
  *(undefined8 *)(param_2 + 0x14c) = *(undefined8 *)(param_1 + 0x14c);
  *(undefined8 *)(param_2 + 0x144) = uVar25;
  uVar25 = *(undefined8 *)(param_1 + 0x134);
  *(undefined8 *)(param_2 + 0x13c) = *(undefined8 *)(param_1 + 0x13c);
  *(undefined8 *)(param_2 + 0x134) = uVar25;
  uVar25 = *(undefined8 *)(param_1 + 0x124);
  *(undefined8 *)(param_2 + 300) = *(undefined8 *)(param_1 + 300);
  *(undefined8 *)(param_2 + 0x124) = uVar25;
                    /* try { // try from 00604d84 to 00704d97 has its CatchHandler @ 00605400 */
  uVar25 = *(undefined8 *)(param_1 + 0x114);
  *(undefined8 *)(param_2 + 0x11c) = *(undefined8 *)(param_1 + 0x11c);
  *(undefined8 *)(param_2 + 0x114) = uVar25;
  *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(param_1 + 0x110);
  return;
}


