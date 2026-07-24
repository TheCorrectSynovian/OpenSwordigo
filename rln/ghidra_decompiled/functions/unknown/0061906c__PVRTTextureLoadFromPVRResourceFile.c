/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061906c
 * Function: PVRTTextureLoadFromPVRResourceFile
 * Signature: undefined __cdecl PVRTTextureLoadFromPVRResourceFile(CPVRTResourceFile * param_1, uint * param_2, void * param_3, bool param_4, uint param_5, int * param_6, int * param_7)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTTextureLoadFromPVRResourceFile(CPVRTResourceFile&, unsigned int*, void const*, bool, unsigned
   int, int*, int*) */

ulong PVRTTextureLoadFromPVRResourceFile
                (CPVRTResourceFile *param_1,uint *param_2,void *param_3,bool param_4,uint param_5,
                int *param_6,int *param_7)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ushort *puVar12;
  undefined2 *puVar13;
  ushort *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70 [2];
  long local_68;
  
                    /* catch() { ... } // from try @ 00618814 with catch @ 0061906c
                       catch() { ... } // from try @ 00618828 with catch @ 0061906c
                       catch() { ... } // from try @ 00618934 with catch @ 0061906c */
  lVar2 = tpidr_el0;
                    /* try { // try from 00619090 to 007190f3 has its CatchHandler @ 006190fc */
  local_68 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 006184fc with catch @ 00619098
                       catch() { ... } // from try @ 006185a0 with catch @ 00619098 */
                    /* catch() { ... } // from try @ 00618628 with catch @ 006190a8
                       catch() { ... } // from try @ 00618690 with catch @ 006190a8 */
  uVar5 = CPVRTResourceFile::IsOpen(param_1);
  puVar3 = PTR_bLittleEndian_007e7e30;
  if ((uVar5 & 1) == 0) {
    uVar5 = 1;
    goto LAB_0061940c;
  }
  if (*PTR_bIsInit_007e58f8 == '\0') {
                    /* try { // try from 0061942c to 00719453 has its CatchHandler @ 00619fe0 */
    *PTR_bIsInit_007e58f8 = 1;
    *puVar3 = 1;
  }
  else if (*PTR_bLittleEndian_007e7e30 == '\0') {
    puVar6 = (ulong *)CPVRTResourceFile::DataPtr(param_1);
    lVar8 = 0;
    lVar10 = 3;
    uStack_98 = puVar6[1];
    local_a0 = *puVar6;
                    /* try { // try from 006190f4 to 007190ff has its CatchHandler @ 00617f1c */
    uStack_88 = puVar6[3];
    local_90 = puVar6[2];
                    /* catch() { ... } // from try @ 00618b58 with catch @ 006190fc
                       catch() { ... } // from try @ 00618e50 with catch @ 006190fc
                       catch() { ... } // from try @ 00618f10 with catch @ 006190fc
                       catch() { ... } // from try @ 00619090 with catch @ 006190fc */
                    /* try { // try from 00619100 to 0071913f has its CatchHandler @ 00619100
                       catch() { ... } // from try @ 00619100 with catch @ 00619100
                       catch() { ... } // from try @ 00619144 with catch @ 00619100
                       catch() { ... } // from try @ 00619334 with catch @ 00619100
                       catch() { ... } // from try @ 00619384 with catch @ 00619100
                       catch() { ... } // from try @ 006195a0 with catch @ 00619100
                       catch() { ... } // from try @ 00619624 with catch @ 00619100
                       catch() { ... } // from try @ 0061984c with catch @ 00619100
                       catch() { ... } // from try @ 0061989c with catch @ 00619100
                       catch() { ... } // from try @ 00619ac4 with catch @ 00619100
                       catch() { ... } // from try @ 00619b48 with catch @ 00619100
                       catch() { ... } // from try @ 00619d3c with catch @ 00619100
                       catch() { ... } // from try @ 0061a0cc with catch @ 00619100
                       catch() { ... } // from try @ 0061a2a8 with catch @ 00619100 */
    uStack_78 = puVar6[5];
    local_80 = puVar6[4];
    local_70[0] = (int)puVar6[6];
    do {
      uVar1 = *(undefined1 *)((long)&local_a0 + lVar8);
      *(undefined1 *)((long)&local_a0 + lVar8) = *(undefined1 *)((long)&local_a0 + lVar10);
      lVar8 = lVar8 + 1;
      *(undefined1 *)((long)&local_a0 + lVar10) = uVar1;
      lVar10 = lVar10 + -1;
    } while (lVar8 < lVar10);
    lVar8 = 4;
    lVar10 = 7;
    do {
                    /* try { // try from 00619140 to 00719143 has its CatchHandler @ 0061a0e0 */
      uVar1 = *(undefined1 *)((long)&local_a0 + lVar8);
                    /* try { // try from 00619144 to 00719173 has its CatchHandler @ 00619100 */
      lVar16 = lVar10 + -5;
      lVar17 = lVar8 + -3;
      *(undefined1 *)((long)&local_a0 + lVar8) = *(undefined1 *)((long)&local_a0 + lVar10);
      *(undefined1 *)((long)&local_a0 + lVar10) = uVar1;
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar17 < lVar16);
    lVar8 = 8;
    lVar10 = 0xb;
    do {
                    /* try { // try from 00619174 to 00719183 has its CatchHandler @ 0061a10c */
      uVar1 = *(undefined1 *)((long)&local_a0 + lVar8);
      lVar16 = lVar10 + -9;
      lVar17 = lVar8 + -7;
      *(undefined1 *)((long)&local_a0 + lVar8) = *(undefined1 *)((long)&local_a0 + lVar10);
      *(undefined1 *)((long)&local_a0 + lVar10) = uVar1;
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar17 < lVar16);
    lVar8 = 0xc;
    lVar10 = 0xf;
    do {
      uVar1 = *(undefined1 *)((long)&local_a0 + lVar8);
      lVar16 = lVar10 + -0xd;
      lVar17 = lVar8 + -0xb;
      *(undefined1 *)((long)&local_a0 + lVar8) = *(undefined1 *)((long)&local_a0 + lVar10);
      *(undefined1 *)((long)&local_a0 + lVar10) = uVar1;
      lVar8 = lVar8 + 1;
                    /* try { // try from 006191c4 to 007191eb has its CatchHandler @ 0061a080 */
      lVar10 = lVar10 + -1;
    } while (lVar17 < lVar16);
    lVar8 = 0x10;
    lVar10 = 0x13;
    do {
      uVar1 = *(undefined1 *)((long)&local_a0 + lVar8);
      lVar16 = lVar10 + -0x11;
      lVar17 = lVar8 + -0xf;
      *(undefined1 *)((long)&local_a0 + lVar8) = *(undefined1 *)((long)&local_a0 + lVar10);
      *(undefined1 *)((long)&local_a0 + lVar10) = uVar1;
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar17 < lVar16);
    lVar8 = 0x14;
    lVar10 = 0x17;
    do {
                    /* try { // try from 0061920c to 00719233 has its CatchHandler @ 0061a10c */
      uVar1 = *(undefined1 *)((long)&local_a0 + lVar8);
      lVar16 = lVar10 + -0x15;
      lVar17 = lVar8 + -0x13;
      *(undefined1 *)((long)&local_a0 + lVar8) = *(undefined1 *)((long)&local_a0 + lVar10);
      *(undefined1 *)((long)&local_a0 + lVar10) = uVar1;
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar17 < lVar16);
    lVar8 = 0x18;
                    /* try { // try from 00619238 to 00719243 has its CatchHandler @ 0061a108 */
    lVar10 = 0x1b;
    do {
      uVar1 = *(undefined1 *)((long)&local_a0 + lVar8);
      lVar16 = lVar10 + -0x19;
      lVar17 = lVar8 + -0x17;
      *(undefined1 *)((long)&local_a0 + lVar8) = *(undefined1 *)((long)&local_a0 + lVar10);
      *(undefined1 *)((long)&local_a0 + lVar10) = uVar1;
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar17 < lVar16);
    lVar8 = 0x1c;
    lVar10 = 0x1f;
    do {
      uVar1 = *(undefined1 *)((long)&local_a0 + lVar8);
      lVar16 = lVar10 + -0x1d;
      lVar17 = lVar8 + -0x1b;
                    /* try { // try from 00619284 to 007192ab has its CatchHandler @ 0061a030 */
      *(undefined1 *)((long)&local_a0 + lVar8) = *(undefined1 *)((long)&local_a0 + lVar10);
      *(undefined1 *)((long)&local_a0 + lVar10) = uVar1;
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar17 < lVar16);
    lVar8 = 0x20;
    lVar10 = 0x23;
    do {
      uVar1 = *(undefined1 *)((long)&local_a0 + lVar8);
      lVar16 = lVar10 + -0x21;
      lVar17 = lVar8 + -0x1f;
      *(undefined1 *)((long)&local_a0 + lVar8) = *(undefined1 *)((long)&local_a0 + lVar10);
      *(undefined1 *)((long)&local_a0 + lVar10) = uVar1;
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + -1;
                    /* try { // try from 006192cc to 007192f3 has its CatchHandler @ 0061a108 */
    } while (lVar17 < lVar16);
    lVar8 = 0x24;
    lVar10 = 0x27;
    do {
      uVar1 = *(undefined1 *)((long)&local_a0 + lVar8);
      lVar16 = lVar10 + -0x25;
      lVar17 = lVar8 + -0x23;
      *(undefined1 *)((long)&local_a0 + lVar8) = *(undefined1 *)((long)&local_a0 + lVar10);
      *(undefined1 *)((long)&local_a0 + lVar10) = uVar1;
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar17 < lVar16);
    lVar8 = 0x28;
    lVar10 = 0x2b;
    do {
      uVar1 = *(undefined1 *)((long)&local_a0 + lVar8);
      lVar16 = lVar10 + -0x29;
      lVar17 = lVar8 + -0x27;
                    /* try { // try from 00619320 to 00719333 has its CatchHandler @ 0061a16c */
      *(undefined1 *)((long)&local_a0 + lVar8) = *(undefined1 *)((long)&local_a0 + lVar10);
      *(undefined1 *)((long)&local_a0 + lVar10) = uVar1;
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + -1;
                    /* try { // try from 00619334 to 0071937f has its CatchHandler @ 00619100 */
    } while (lVar17 < lVar16);
    lVar8 = 0x2c;
    lVar10 = 0x2f;
    do {
      uVar1 = *(undefined1 *)((long)&local_a0 + lVar8);
      lVar16 = lVar10 + -0x2d;
      lVar17 = lVar8 + -0x2b;
      *(undefined1 *)((long)&local_a0 + lVar8) = *(undefined1 *)((long)&local_a0 + lVar10);
      *(undefined1 *)((long)&local_a0 + lVar10) = uVar1;
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar17 < lVar16);
    lVar8 = 0x30;
    lVar10 = 0x33;
    do {
      uVar1 = *(undefined1 *)((long)&local_a0 + lVar8);
                    /* try { // try from 00619380 to 00719383 has its CatchHandler @ 0061a0dc */
      lVar16 = lVar10 + -0x31;
                    /* try { // try from 00619384 to 007193d3 has its CatchHandler @ 00619100 */
      lVar17 = lVar8 + -0x2f;
      *(undefined1 *)((long)&local_a0 + lVar8) = *(undefined1 *)((long)&local_a0 + lVar10);
      *(undefined1 *)((long)&local_a0 + lVar10) = uVar1;
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar17 < lVar16);
    if (((byte)local_90 < 0x14) && ((1 << (ulong)((byte)local_90 & 0x1f) & 0xb0000U) != 0)) {
      lVar8 = CPVRTResourceFile::DataPtr(param_1);
      uVar4 = local_90._4_4_;
      uVar5 = local_a0 & 0xffffffff;
                    /* try { // try from 006193d4 to 007193eb has its CatchHandler @ 0061a25c */
      pvVar7 = malloc((ulong)local_90._4_4_);
      if (uVar4 >> 1 == 0) {
                    /* try { // try from 006194a8 to 007194af has its CatchHandler @ 0061a104 */
        uVar5 = PVRTTextureLoadFromPointer
                          (&local_a0,param_2,param_3,param_4,param_5,pvVar7,param_6,param_7);
        uVar5 = uVar5 & 0xffffffff;
        if (pvVar7 == (void *)0x0) goto LAB_0061940c;
      }
      else {
        uVar9 = (ulong)(uVar4 >> 1);
        if (uVar4 < 8) {
          uVar11 = 0;
LAB_006195ac:
          lVar10 = uVar9 - uVar11;
          puVar12 = (ushort *)((long)pvVar7 + uVar11 * 2);
          puVar14 = (ushort *)(lVar8 + uVar11 * 2 + uVar5);
          do {
            lVar10 = lVar10 + -1;
            *puVar12 = *puVar14 >> 8 | *puVar14 << 8;
            puVar12 = puVar12 + 1;
            puVar14 = puVar14 + 1;
          } while (lVar10 != 0);
        }
        else {
          if ((pvVar7 < (void *)(lVar8 + (uVar4 & 0xfffffffe) + uVar5)) &&
             (lVar8 + uVar5 < (long)pvVar7 + (ulong)(uVar4 & 0xfffffffe))) {
            uVar11 = 0;
            goto LAB_006195ac;
          }
          uVar11 = uVar9 & 0x7ffffffc;
                    /* try { // try from 00619538 to 0071955f has its CatchHandler @ 0061a104 */
          puVar12 = (ushort *)(lVar8 + uVar5 + 4);
          puVar13 = (undefined2 *)((long)pvVar7 + 4);
          uVar15 = uVar11;
          do {
            uVar18 = NEON_rev32((ulong)CONCAT24(puVar12[-1],(uint)puVar12[-2]),1);
            uVar19 = NEON_rev32((ulong)CONCAT24(puVar12[1],(uint)*puVar12),1);
            puVar13[-2] = (short)((ulong)uVar18 >> 0x10);
            *puVar13 = (short)((ulong)uVar19 >> 0x10);
                    /* try { // try from 0061958c to 0071959f has its CatchHandler @ 0061a168 */
            puVar13[-1] = (short)((ulong)uVar18 >> 0x30);
            puVar12 = puVar12 + 4;
            uVar15 = uVar15 - 4;
            puVar13[1] = (short)((ulong)uVar19 >> 0x30);
            puVar13 = puVar13 + 4;
                    /* try { // try from 006195a0 to 0071961f has its CatchHandler @ 00619100 */
          } while (uVar15 != 0);
          if (uVar11 != uVar9) goto LAB_006195ac;
        }
        uVar5 = PVRTTextureLoadFromPointer
                          (&local_a0,param_2,param_3,param_4,param_5,pvVar7,param_6,param_7);
        uVar5 = uVar5 & 0xffffffff;
      }
      free(pvVar7);
    }
    else {
      lVar8 = CPVRTResourceFile::DataPtr(param_1);
      uVar5 = PVRTTextureLoadFromPointer
                        (&local_a0,param_2,param_3,param_4,param_5,
                         (void *)(lVar8 + (local_a0 & 0xffffffff)),param_6,param_7);
                    /* try { // try from 006194f0 to 00719517 has its CatchHandler @ 00619f90 */
      uVar5 = uVar5 & 0xffffffff;
    }
LAB_0061940c:
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return uVar5;
    }
    goto LAB_00619608;
  }
  pvVar7 = (void *)CPVRTResourceFile::DataPtr(param_1);
  uVar5 = PVRTTextureLoadFromPointer
                    (pvVar7,param_2,param_3,param_4,param_5,(void *)0x0,param_6,param_7);
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00619474 to 0071949b has its CatchHandler @ 0061a25c */
    return uVar5;
  }
LAB_00619608:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


