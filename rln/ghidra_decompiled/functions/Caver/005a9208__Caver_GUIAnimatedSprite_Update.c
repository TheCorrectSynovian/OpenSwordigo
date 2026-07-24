/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a9208
 * Function: Caver::GUIAnimatedSprite::Update
 * Signature: undefined __thiscall Update(GUIAnimatedSprite * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAnimatedSprite::Update(float) */

void __thiscall Caver::GUIAnimatedSprite::Update(GUIAnimatedSprite *this,float param_1)

{
  Rectangle *this_00;
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  GUIAnimatedSprite *pGVar9;
  long *plVar10;
  long *plVar11;
  GUIAnimatedSprite *pGVar12;
  GUIAnimatedSprite *pGVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
                    /* try { // try from 005a920c to 006a9233 has its CatchHandler @ 005a9244 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 005a9234 to 006a9247 has its CatchHandler @ 005a91cc */
  if (this[0x30] == (GUIAnimatedSprite)0x0) {
    this[0x31] = (GUIAnimatedSprite)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 005a920c with catch @ 005a9244 */
    this[0x30] = (GUIAnimatedSprite)0x0;
                    /* try { // try from 005a9248 to 006a924f has its CatchHandler @ 005a9258 */
  }
                    /* try { // try from 005a9250 to 006a925b has its CatchHandler @ 005a91cc */
  pGVar12 = this + 0x20;
  pGVar9 = *(GUIAnimatedSprite **)pGVar12;
                    /* catch() { ... } // from try @ 005a9248 with catch @ 005a9258 */
joined_r0x005a925c:
                    /* catch() { ... } // from try @ 005a92e8 with catch @ 005a925c */
  if (pGVar9 != pGVar12) {
    do {
      lVar4 = *(long *)(pGVar9 + 0x10);
      plVar10 = *(long **)(pGVar9 + 0x18);
      if (plVar10 != (long *)0x0) {
        plVar10[1] = plVar10[1] + 1;
      }
      if (*(char *)(lVar4 + 0x54) == '\0') {
                    /* try { // try from 005a92e8 to 006a9303 has its CatchHandler @ 005a925c */
        pGVar13 = *(GUIAnimatedSprite **)pGVar9;
                    /* catch() { ... } // from try @ 005a92e0 with catch @ 005a92ec */
                    /* catch() { ... } // from try @ 005a92c4 with catch @ 005a92f0 */
        GUIAnimation::Update(param_1);
LAB_005a92f4:
        this[0x31] = (GUIAnimatedSprite)0x1;
      }
      else {
        pGVar13 = *(GUIAnimatedSprite **)pGVar9;
        if (*(char *)(lVar4 + 0xb8) != '\0') {
          FUN_0062a9c8(pGVar9);
          plVar11 = *(long **)(pGVar9 + 0x18);
                    /* try { // try from 005a929c to 006a92c3 has its CatchHandler @ 005a92dc */
          if ((plVar11 != (long *)0x0) &&
             (lVar4 = plVar11[1], plVar11[1] = lVar4 + -1, lVar4 + -1 == 0)) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            lVar4 = plVar11[2];
                    /* try { // try from 005a92c4 to 006a92cb has its CatchHandler @ 005a92f0 */
            plVar11[2] = lVar4 + -1;
            if (lVar4 + -1 == 0) {
              (**(code **)(*plVar11 + 0x18))(plVar11);
            }
          }
                    /* catch() { ... } // from try @ 005a929c with catch @ 005a92dc */
                    /* try { // try from 005a92e0 to 006a92e7 has its CatchHandler @ 005a92ec */
          operator_delete(pGVar9);
          goto LAB_005a92f4;
        }
      }
      pGVar9 = pGVar13;
                    /* catch() { ... } // from try @ 005a93b4 with catch @ 005a9304 */
      if ((plVar10 == (long *)0x0) || (lVar4 = plVar10[1], plVar10[1] = lVar4 + -1, lVar4 + -1 != 0)
         ) goto joined_r0x005a925c;
                    /* try { // try from 005a931c to 006a9323 has its CatchHandler @ 005a93c0 */
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar4 = plVar10[2];
      plVar10[2] = lVar4 + -1;
      if (lVar4 + -1 != 0) goto joined_r0x005a925c;
      (**(code **)(*plVar10 + 0x18))(plVar10);
                    /* try { // try from 005a9350 to 006a935b has its CatchHandler @ 005a9368 */
      if (pGVar12 == pGVar9) break;
    } while( true );
  }
  if (this[0x31] != (GUIAnimatedSprite)0x0) {
    pGVar9 = *(GUIAnimatedSprite **)(this + 0x20);
                    /* catch() { ... } // from try @ 005a9350 with catch @ 005a9368 */
    *(undefined8 *)(this + 0x3c) = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x34) = *(undefined8 *)(this + 8);
    *(undefined4 *)(this + 0x44) = *(undefined4 *)(this + 0x18);
    if (pGVar12 != pGVar9) {
      this_00 = (Rectangle *)(this + 0x34);
      do {
        lVar4 = *(long *)(pGVar9 + 0x10);
                    /* try { // try from 005a93b4 to 006a93cf has its CatchHandler @ 005a9304 */
                    /* catch() { ... } // from try @ 005a938c with catch @ 005a93bc */
        if (*(int *)(lVar4 + 0x30) == 1) {
                    /* catch() { ... } // from try @ 005a931c with catch @ 005a93c0 */
          iVar8 = *(int *)(lVar4 + 0xa0);
          if (iVar8 == 0) {
            if (*(char *)(lVar4 + 100) == '\0') {
              plVar10 = *(long **)(lVar4 + 0x80);
              iVar8 = *(int *)(lVar4 + 0x70);
            }
            else {
              plVar10 = *(long **)(lVar4 + 0x98);
              iVar8 = *(int *)(lVar4 + 0x88);
            }
          }
          else {
            plVar10 = *(long **)(lVar4 + 0xb0);
          }
                    /* try { // try from 005a93d0 to 006a93db has its CatchHandler @ 005a93dc */
          if ((plVar10 != (long *)0x0) && (plVar10[1] == 0)) {
                    /* catch() { ... } // from try @ 005a93d0 with catch @ 005a93dc */
                    /* try { // try from 005a93e0 to 006a93e3 has its CatchHandler @ 005a93e8 */
            (**(code **)(*plVar10 + 0x10))(plVar10);
                    /* catch() { ... } // from try @ 005a93e0 with catch @ 005a93e8 */
            lVar4 = plVar10[2];
            plVar10[2] = lVar4 + -1;
            if (lVar4 + -1 == 0) {
              (**(code **)(*plVar10 + 0x18))(plVar10);
            }
          }
          if (iVar8 != 2) goto LAB_005a94e0;
          lVar4 = *(long *)(pGVar9 + 0x10);
          if (*(int *)(lVar4 + 0xa0) == 0) {
            if (*(char *)(lVar4 + 100) == '\0') {
              puVar1 = *(undefined4 **)(lVar4 + 0x78);
              plVar10 = *(long **)(lVar4 + 0x80);
            }
            else {
              puVar1 = *(undefined4 **)(lVar4 + 0x90);
              plVar10 = *(long **)(lVar4 + 0x98);
            }
          }
          else {
            puVar1 = *(undefined4 **)(lVar4 + 0xa8);
            plVar10 = *(long **)(lVar4 + 0xb0);
          }
          if (plVar10 != (long *)0x0) {
            plVar10[1] = plVar10[1] + 1;
          }
          local_70 = *puVar1;
          uStack_6c = puVar1[1];
          if ((plVar10 != (long *)0x0) &&
             (lVar4 = plVar10[1], plVar10[1] = lVar4 + -1, lVar4 + -1 == 0)) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
                    /* try { // try from 005a947c to 006a947f has its CatchHandler @ 005a94dc */
            lVar4 = plVar10[2];
                    /* try { // try from 005a9480 to 006a94fb has its CatchHandler @ 005a9410 */
            plVar10[2] = lVar4 + -1;
            if (lVar4 + -1 == 0) {
              (**(code **)(*plVar10 + 0x18))(plVar10);
            }
          }
          fVar17 = (float)*(undefined8 *)(this + 0x34) + (float)*(undefined8 *)(this + 0x3c) * 0.5;
          fVar14 = (float)((ulong)*(undefined8 *)(this + 0x34) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(this + 0x3c) >> 0x20) * 0.5;
          local_78 = CONCAT44(fVar14,fVar17);
          local_80 = CONCAT44(-fVar14,-fVar17);
          Rectangle::Translate(this_00,(Vector2 *)&local_80);
          Rectangle::Scale(this_00,(Vector2 *)&local_70);
          Rectangle::Translate(this_00,(Vector2 *)&local_78);
                    /* catch() { ... } // from try @ 005a947c with catch @ 005a94dc */
        }
        else {
LAB_005a94e0:
          lVar4 = *(long *)(pGVar9 + 0x10);
          if (*(int *)(lVar4 + 0x30) == 2) {
            iVar8 = *(int *)(lVar4 + 0xa0);
            if (iVar8 == 0) {
              if (*(char *)(lVar4 + 100) == '\0') {
                plVar10 = *(long **)(lVar4 + 0x80);
                    /* try { // try from 005a938c to 006a93b3 has its CatchHandler @ 005a93bc */
                iVar8 = *(int *)(lVar4 + 0x70);
              }
              else {
                plVar10 = *(long **)(lVar4 + 0x98);
                iVar8 = *(int *)(lVar4 + 0x88);
              }
            }
            else {
              plVar10 = *(long **)(lVar4 + 0xb0);
                    /* try { // try from 005a94fc to 006a9523 has its CatchHandler @ 005a952c */
            }
            if ((plVar10 != (long *)0x0) && (plVar10[1] == 0)) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              lVar4 = plVar10[2];
              plVar10[2] = lVar4 + -1;
                    /* try { // try from 005a9524 to 006a952f has its CatchHandler @ 005a9410 */
              if (lVar4 + -1 == 0) {
                    /* catch() { ... } // from try @ 005a94fc with catch @ 005a952c */
                (**(code **)(*plVar10 + 0x18))(plVar10);
              }
            }
            if (iVar8 == 1) {
              lVar4 = *(long *)(pGVar9 + 0x10);
              if (*(int *)(lVar4 + 0xa0) == 0) {
                if (*(char *)(lVar4 + 100) == '\0') {
                  pfVar5 = *(float **)(lVar4 + 0x78);
                  plVar10 = *(long **)(lVar4 + 0x80);
                  goto joined_r0x005a93a8;
                }
                pfVar5 = *(float **)(lVar4 + 0x90);
                plVar10 = *(long **)(lVar4 + 0x98);
                if (plVar10 != (long *)0x0) goto LAB_005a9574;
LAB_005a95e8:
                fVar17 = *pfVar5;
              }
              else {
                pfVar5 = *(float **)(lVar4 + 0xa8);
                plVar10 = *(long **)(lVar4 + 0xb0);
joined_r0x005a93a8:
                if (plVar10 == (long *)0x0) goto LAB_005a95e8;
LAB_005a9574:
                fVar17 = *pfVar5;
                if (plVar10[1] == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                  lVar4 = plVar10[2];
                  plVar10[2] = lVar4 + -1;
                  if (lVar4 + -1 == 0) {
                    (**(code **)(*plVar10 + 0x18))(plVar10);
                  }
                }
              }
              fVar14 = (float)NEON_ucvtf((uint)(byte)this[0x44]);
              fVar15 = (float)NEON_ucvtf((uint)(byte)this[0x45]);
              fVar16 = (float)NEON_ucvtf((uint)(byte)this[0x46]);
              uVar3 = (uint)(fVar17 * fVar14);
              fVar14 = (float)NEON_ucvtf((uint)(byte)this[0x47]);
              uVar6 = (uint)(fVar17 * fVar15);
              uVar7 = (uint)(fVar17 * fVar16);
              if (0xfe < (int)uVar3) {
                uVar3 = 0xff;
              }
              iVar8 = (int)(fVar17 * fVar14);
              if (0xfe < (int)uVar6) {
                uVar6 = 0xff;
              }
              if (0xfe < (int)uVar7) {
                uVar7 = 0xff;
              }
              if (0xfe < iVar8) {
                iVar8 = 0xff;
              }
              *(uint *)(this + 0x44) =
                   uVar3 & 0xff | (uVar6 & 0xff) << 8 | (uVar7 & 0xff) << 0x10 | iVar8 << 0x18;
            }
          }
        }
        pGVar9 = *(GUIAnimatedSprite **)pGVar9;
      } while (pGVar12 != pGVar9);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


