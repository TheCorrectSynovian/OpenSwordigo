/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00551190
 * Function: Caver::SkeletonInstance::EvaluateMatrices
 * Signature: undefined __cdecl EvaluateMatrices(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkeletonInstance::EvaluateMatrices() */

void Caver::SkeletonInstance::EvaluateMatrices(void)

{
  Vector3 *pVVar1;
  Vector3 *pVVar2;
  ulong uVar3;
  Vector3 *pVVar4;
  Vector3 *pVVar5;
  long lVar6;
  undefined8 *in_x0;
  Quaternion *in_x1;
  Quaternion *extraout_x1;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  Matrix4 *pMVar10;
  Matrix4 *pMVar11;
  Vector3 *pVVar12;
  Vector3 *pVVar13;
  Vector3 *pVVar14;
  Vector3 *pVVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  Vector3 *pVVar20;
  Vector3 *pVVar21;
  Matrix4 *this;
  Vector3 *pVVar22;
  long lVar23;
  Vector3 *pVVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  Vector3 local_a8 [8];
  undefined8 auStack_a0 [7];
  long local_68;
  
                    /* catch() { ... } // from try @ 00551094 with catch @ 00551190
                       catch() { ... } // from try @ 00551150 with catch @ 00551190 */
                    /* catch() { ... } // from try @ 0055124c with catch @ 0055119c */
  lVar6 = tpidr_el0;
                    /* try { // try from 005511b4 to 006511bb has its CatchHandler @ 00551258 */
  local_68 = *(long *)(lVar6 + 0x28);
  if (0 < *(int *)*in_x0) {
    lVar25 = *(long *)((int *)*in_x0 + 2);
    uVar7 = (ulong)local_a8 | 4;
    pVVar20 = (Vector3 *)in_x0[2];
                    /* try { // try from 005511e8 to 006511f3 has its CatchHandler @ 00551200 */
    lVar23 = 0;
    uVar8 = ~(ulong)pVVar20;
    pVVar22 = pVVar20 + 0x5c;
    pVVar21 = pVVar20;
                    /* catch() { ... } // from try @ 005511e8 with catch @ 00551200 */
    do {
                    /* catch() { ... } // from try @ 00551224 with catch @ 00551254 */
                    /* catch() { ... } // from try @ 005511b4 with catch @ 00551258 */
      lVar16 = lVar23 * -0xdc;
                    /* try { // try from 00551268 to 00651273 has its CatchHandler @ 00551274 */
      pVVar14 = pVVar20 + lVar23 * 0xdc + 0x20;
      pVVar13 = pVVar20 + lVar23 * 0xdc + 0x5c;
      pVVar15 = pVVar20 + lVar23 * 0xdc + 0x60;
                    /* catch() { ... } // from try @ 00551268 with catch @ 00551274 */
      pVVar1 = pVVar20 + lVar23 * 0xdc + 0x9c;
                    /* try { // try from 00551278 to 0065127b has its CatchHandler @ 00551280 */
      pVVar2 = pVVar20 + lVar23 * 0xdc + 0xa0;
                    /* catch() { ... } // from try @ 00551278 with catch @ 00551280 */
      pVVar12 = pVVar13;
      if (pVVar13 <= pVVar14) {
        pVVar12 = pVVar14;
      }
      pVVar4 = pVVar1;
      if (pVVar1 <= pVVar15) {
        pVVar4 = pVVar15;
      }
      pVVar5 = pVVar20 + lVar23 * 0xdc + 0xdc;
      if (pVVar20 + lVar23 * 0xdc + 0xdc <= pVVar2) {
        pVVar5 = pVVar2;
      }
                    /* catch() { ... } // from try @ 00551318 with catch @ 005512a8
                       catch() { ... } // from try @ 005513bc with catch @ 005512a8 */
      pVVar24 = local_a8;
      uVar3 = ((ulong)(pVVar12 + uVar8 + lVar16 + -0x1c) >> 2) + 1;
      Matrix4::FromRotationQuaternion((Matrix4 *)(pVVar21 + 0xc),in_x1);
      this = (Matrix4 *)(pVVar21 + 0x1c);
      pMVar10 = this;
                    /* try { // try from 00551314 to 00651317 has its CatchHandler @ 00551374 */
                    /* try { // try from 00551318 to 00651393 has its CatchHandler @ 005512a8 */
      if ((uVar3 < 8) ||
         ((lVar9 = ((ulong)(pVVar12 + uVar8 + lVar16 + -0x1c) >> 2) * 4,
          pVVar20 + lVar23 * 0xdc + 0x1c < (Vector3 *)(uVar7 + lVar9) && (pVVar24 < pVVar14 + lVar9)
          ))) {
LAB_00551330:
        do {
          pMVar11 = pMVar10 + 4;
          *(undefined4 *)pMVar10 = *(undefined4 *)pVVar24;
          pMVar10 = pMVar11;
          pVVar24 = pVVar24 + 4;
        } while (pMVar11 < (Matrix4 *)(pVVar21 + 0x5c));
      }
      else {
        uVar18 = uVar3 & 0x7ffffffffffffff8;
        pVVar24 = local_a8 + uVar18 * 4;
                    /* try { // try from 00551224 to 0065124b has its CatchHandler @ 00551254 */
        lVar9 = 0;
        uVar19 = uVar18;
        do {
          uVar26 = *(undefined8 *)(local_a8 + lVar9);
          uVar28 = *(undefined8 *)((long)auStack_a0 + lVar9 + 0x10);
          uVar27 = *(undefined8 *)((long)auStack_a0 + lVar9 + 8);
          uVar19 = uVar19 - 8;
          *(undefined8 *)(pVVar21 + lVar9 + 0x24) = *(undefined8 *)((long)auStack_a0 + lVar9);
          *(undefined8 *)(pVVar21 + lVar9 + 0x1c) = uVar26;
          *(undefined8 *)(pVVar21 + lVar9 + 0x34) = uVar28;
          *(undefined8 *)(pVVar21 + lVar9 + 0x2c) = uVar27;
          lVar9 = lVar9 + 0x20;
        } while (uVar19 != 0);
        pMVar10 = (Matrix4 *)(pVVar21 + uVar18 * 4 + 0x1c);
                    /* try { // try from 0055124c to 00651267 has its CatchHandler @ 0055119c */
        if (uVar3 != uVar18) goto LAB_00551330;
      }
      uVar3 = ((ulong)(pVVar5 + uVar8 + lVar16 + -0x9c) >> 2) + 1;
      uVar19 = ((ulong)(pVVar4 + uVar8 + lVar16 + -0x5c) >> 2) + 1;
      Matrix4::PreTranslate(this,pVVar21);
      if (*(int *)(lVar25 + 8) < 0) {
        pVVar14 = pVVar21;
        if (3 < uVar19) {
          uVar17 = uVar19 & 0x7ffffffffffffffc;
          pVVar14 = pVVar21 + uVar17 * 4;
          this = (Matrix4 *)(pVVar14 + 0x1c);
          uVar18 = uVar17;
          pVVar13 = pVVar22;
          do {
            uVar18 = uVar18 - 4;
            *(undefined8 *)(pVVar13 + 8) = *(undefined8 *)(pVVar13 + -0x38);
            *(undefined8 *)pVVar13 = *(undefined8 *)(pVVar13 + -0x40);
            pVVar13 = pVVar13 + 0x10;
          } while (uVar18 != 0);
          if (uVar19 == uVar17) goto LAB_0055148c;
        }
        pVVar14 = pVVar14 + 0x5c;
        do {
                    /* catch() { ... } // from try @ 00551798 with catch @ 00551478
                       catch() { ... } // from try @ 00551bb0 with catch @ 00551478 */
          pVVar13 = pVVar14 + 4;
          *(undefined4 *)pVVar14 = *(undefined4 *)this;
          pVVar14 = pVVar13;
          this = this + 4;
        } while (pVVar13 < pVVar21 + 0x9c);
      }
      else {
        pVVar14 = local_a8;
                    /* catch() { ... } // from try @ 00551314 with catch @ 00551374 */
        C_Matrix4Mul((float *)(in_x0[2] + (long)*(int *)(lVar25 + 8) * 0xdc + 0x5c),(float *)this,
                     (float *)local_a8);
        pVVar12 = pVVar21 + 0x5c;
                    /* try { // try from 00551394 to 006513bb has its CatchHandler @ 005513c4 */
                    /* try { // try from 005513bc to 006513c7 has its CatchHandler @ 005512a8 */
                    /* catch() { ... } // from try @ 00551394 with catch @ 005513c4 */
        if ((7 < uVar19) &&
           ((lVar9 = ((ulong)(pVVar4 + uVar8 + lVar16 + -0x5c) >> 2) * 4,
            (Vector3 *)(uVar7 + lVar9) <= pVVar13 || (pVVar15 + lVar9 <= pVVar14)))) {
          uVar17 = uVar19 & 0x7ffffffffffffff8;
          pVVar14 = local_a8 + uVar17 * 4;
          pVVar12 = pVVar21 + uVar17 * 4 + 0x5c;
          lVar9 = 0;
          uVar18 = uVar17;
          do {
            uVar26 = *(undefined8 *)(local_a8 + lVar9);
            uVar28 = *(undefined8 *)((long)auStack_a0 + lVar9 + 0x10);
            uVar27 = *(undefined8 *)((long)auStack_a0 + lVar9 + 8);
            uVar18 = uVar18 - 8;
            *(undefined8 *)(pVVar21 + lVar9 + 100) = *(undefined8 *)((long)auStack_a0 + lVar9);
            *(undefined8 *)(pVVar21 + lVar9 + 0x5c) = uVar26;
            *(undefined8 *)(pVVar21 + lVar9 + 0x74) = uVar28;
            *(undefined8 *)(pVVar21 + lVar9 + 0x6c) = uVar27;
            lVar9 = lVar9 + 0x20;
          } while (uVar18 != 0);
          if (uVar19 == uVar17) goto LAB_0055148c;
        }
        do {
          pVVar13 = pVVar12 + 4;
          *(undefined4 *)pVVar12 = *(undefined4 *)pVVar14;
          pVVar12 = pVVar13;
          pVVar14 = pVVar14 + 4;
        } while (pVVar13 < pVVar21 + 0x9c);
      }
LAB_0055148c:
      pVVar14 = local_a8;
      C_Matrix4Mul((float *)(pVVar21 + 0x5c),(float *)(lVar25 + 0x4c),(float *)local_a8);
      pVVar13 = pVVar21 + 0x9c;
      if ((uVar3 < 8) ||
         ((lVar16 = ((ulong)(pVVar5 + uVar8 + lVar16 + -0x9c) >> 2) * 4,
          pVVar1 < (Vector3 *)(uVar7 + lVar16) && (pVVar14 < pVVar2 + lVar16)))) {
LAB_00551520:
        do {
          pVVar15 = pVVar13 + 4;
          *(undefined4 *)pVVar13 = *(undefined4 *)pVVar14;
          pVVar13 = pVVar15;
          pVVar14 = pVVar14 + 4;
        } while (pVVar15 < pVVar21 + 0xdc);
      }
      else {
        uVar18 = uVar3 & 0x7ffffffffffffff8;
        pVVar14 = local_a8 + uVar18 * 4;
                    /* try { // try from 005514f0 to 006514fb has its CatchHandler @ 005518e0 */
        pVVar13 = pVVar21 + uVar18 * 4 + 0x9c;
        lVar16 = 0;
        uVar19 = uVar18;
        do {
          uVar26 = *(undefined8 *)(local_a8 + lVar16);
          uVar28 = *(undefined8 *)((long)auStack_a0 + lVar16 + 0x10);
          uVar27 = *(undefined8 *)((long)auStack_a0 + lVar16 + 8);
          uVar19 = uVar19 - 8;
          *(undefined8 *)(pVVar21 + lVar16 + 0xa4) = *(undefined8 *)((long)auStack_a0 + lVar16);
          *(undefined8 *)(pVVar21 + lVar16 + 0x9c) = uVar26;
          *(undefined8 *)(pVVar21 + lVar16 + 0xb4) = uVar28;
          *(undefined8 *)(pVVar21 + lVar16 + 0xac) = uVar27;
          lVar16 = lVar16 + 0x20;
        } while (uVar19 != 0);
        if (uVar3 != uVar18) goto LAB_00551520;
      }
      lVar23 = lVar23 + 1;
      pVVar21 = pVVar21 + 0xdc;
      lVar25 = lVar25 + 0x90;
                    /* try { // try from 00551544 to 00651547 has its CatchHandler @ 00551860 */
      pVVar22 = pVVar22 + 0xdc;
      in_x1 = extraout_x1;
    } while ((int)lVar23 < *(int *)*in_x0);
  }
                    /* try { // try from 00551568 to 0065158f has its CatchHandler @ 005518d0 */
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


