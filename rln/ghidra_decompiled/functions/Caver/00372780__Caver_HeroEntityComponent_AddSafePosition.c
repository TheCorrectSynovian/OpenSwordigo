/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00372780
 * Function: Caver::HeroEntityComponent::AddSafePosition
 * Signature: undefined __thiscall AddSafePosition(HeroEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEntityComponent::AddSafePosition() */

void __thiscall Caver::HeroEntityComponent::AddSafePosition(HeroEntityComponent *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  long *plVar8;
  void *pvVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined4 unaff_w20;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  long lVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_b8 [32];
  long local_98;
  long local_90;
  long local_88;
  long *plStack_80;
  long local_78;
  
  fVar7 = DAT_00683944;
  fVar6 = DAT_00683488;
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  puVar12 = *(undefined4 **)(this + 0x1b0);
  puVar10 = *(undefined4 **)(this + 400);
  if (puVar12 != puVar10) {
    plVar8 = *(long **)(this + 0x1a8);
    unaff_w23 = 0xcccccccd;
    lVar13 = (long)puVar12 - *(long *)(this + 0x1b8) >> 3;
    lVar20 = (*(long *)(this + 0x1c8) - (long)plVar8 >> 2) +
             (*(long *)(this + 0x1c8) - (long)plVar8 >> 3);
    lVar16 = *(long *)(this + 0x1a0) - (long)puVar10 >> 3;
    lVar15 = lVar13 * -0x3333333333333333;
    lVar14 = lVar20 * 4;
    lVar17 = lVar16 * -0x3333333333333333;
    lVar19 = lVar14 + lVar15 + lVar17 + -0xd;
    if (lVar19 != 0) {
      unaff_w24 = 0xc;
      lVar14 = lVar15 + lVar17 + lVar14;
      lVar19 = lVar19 * 0x28;
      lVar20 = lVar13 * 0x3333333333333333 + 0xc + lVar16 * 0x3333333333333333 + lVar20 * -4;
      do {
        lVar13 = (long)puVar10 - *(long *)(this + 0x198) >> 3;
        lVar15 = lVar13 * -0x3333333333333333;
        uVar11 = (lVar14 + lVar15) - 0xd;
        if ((long)uVar11 < 0) {
          uVar18 = (ulong)(lVar20 + lVar13 * 0x3333333333333333) / 0xc ^ 0xffffffffffffffff;
LAB_003728c0:
          lVar17 = plVar8[uVar18] + (lVar14 + lVar15 + uVar18 * -0xc) * 0x28;
          lVar16 = lVar17 + -0x208;
          lVar17 = *(long *)(lVar17 + -0x1f8);
        }
        else {
          if (0xb < (long)uVar11) {
            uVar18 = uVar11 / 0xc;
            goto LAB_003728c0;
          }
          lVar16 = (long)puVar10 + lVar19;
          lVar17 = *(long *)(lVar16 + 0x10);
        }
        if ((lVar17 != 0) &&
           ((fVar21 = *(float *)(lVar17 + 0x70) - *(float *)(lVar16 + 0x18),
            fVar22 = (float)*(undefined8 *)(lVar17 + 0x74) - (float)*(undefined8 *)(lVar16 + 0x1c),
            fVar23 = (float)((ulong)*(undefined8 *)(lVar17 + 0x74) >> 0x20) -
                     (float)((ulong)*(undefined8 *)(lVar16 + 0x1c) >> 0x20),
            fVar6 < fVar21 * fVar21 + fVar22 * fVar22 + fVar23 * fVar23 ||
            (fVar7 < ABS(*(float *)(lVar16 + 0x24) - *(float *)(lVar17 + 0x80)))))) {
          if ((long)uVar11 < 0) {
            uVar11 = (ulong)(lVar20 + lVar13 * 0x3333333333333333) / 0xc ^ 0xffffffffffffffff;
LAB_00372958:
            plVar8 = plVar8 + uVar11;
            local_98 = *plVar8 + (lVar14 + lVar15 + uVar11 * -0xc) * 0x28 + -0x208;
          }
          else {
            if (0xb < (long)uVar11) {
              uVar11 = uVar11 / 0xc;
              goto LAB_00372958;
            }
            local_98 = (long)puVar10 + lVar19;
          }
          local_90 = *plVar8;
          local_88 = local_90 + 0x1e0;
          plStack_80 = plVar8;
          std::
          deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>
          ::_M_erase(auStack_b8,
                     (deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>
                      *)(this + 0x180),&local_98);
        }
        puVar10 = *(undefined4 **)(this + 400);
        if (lVar14 == 0xe) break;
        plVar8 = *(long **)(this + 0x1a8);
        lVar14 = lVar14 + -1;
        lVar19 = lVar19 + -0x28;
        lVar20 = lVar20 + 1;
      } while( true );
    }
    unaff_w20 = 0xc;
    unaff_w22 = 0xcccccccd;
    while( true ) {
      puVar12 = *(undefined4 **)(this + 0x1b0);
      if ((((long)puVar12 - *(long *)(this + 0x1b8) >> 3) * -0x3333333333333333 +
           (*(long *)(this + 0x1c8) - *(long *)(this + 0x1a8) >> 3) * 0xc +
          (*(long *)(this + 0x1a0) - (long)puVar10 >> 3) * -0x3333333333333333) - 0xcU < 6) break;
      plVar8 = *(long **)(puVar10 + 4);
      if (puVar10 == (undefined4 *)(*(long *)(this + 0x1a0) + -0x28)) {
        if ((plVar8 != (long *)0x0) &&
           (iVar4 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar4, iVar4 == 0)) {
          (**(code **)(*plVar8 + 8))();
        }
        operator_delete(*(void **)(this + 0x198));
        lVar20 = *(long *)(this + 0x1a8);
        *(long *)(this + 0x1a8) = lVar20 + 8;
        puVar10 = *(undefined4 **)(lVar20 + 8);
        *(undefined4 **)(this + 400) = puVar10;
        *(undefined4 **)(this + 0x198) = puVar10;
        *(undefined4 **)(this + 0x1a0) = puVar10 + 0x78;
      }
      else {
        if ((plVar8 != (long *)0x0) &&
           (iVar4 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar4, iVar4 == 0)) {
          (**(code **)(*plVar8 + 8))();
          puVar10 = *(undefined4 **)(this + 400);
        }
        puVar10 = puVar10 + 10;
        *(undefined4 **)(this + 400) = puVar10;
      }
    }
  }
  lVar20 = *(long *)(this + 0x28);
  plVar8 = *(long **)(this + 0x98);
  uVar1 = *(undefined4 *)(lVar20 + 0x74);
  uVar2 = *(undefined4 *)(lVar20 + 0x78);
  uVar3 = *(undefined4 *)(lVar20 + 0x70);
  if (plVar8 != (long *)0x0) {
    unaff_w23 = *(undefined4 *)((long)plVar8 + 0x74);
    unaff_w20 = (undefined4)plVar8[0xf];
    unaff_w22 = (undefined4)plVar8[0xe];
    unaff_w24 = (undefined4)plVar8[0x10];
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  }
  if (puVar12 == (undefined4 *)(*(long *)(this + 0x1c0) + -0x28)) {
    if ((ulong)(*(long *)(this + 0x188) - (*(long *)(this + 0x1c8) - *(long *)(this + 0x180) >> 3))
        < 2) {
      std::
      deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>
      ::_M_reallocate_map((deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>
                           *)(this + 0x180),1,false);
    }
    pvVar9 = operator_new(0x1e0);
    *(void **)(*(long *)(this + 0x1c8) + 8) = pvVar9;
    puVar10 = *(undefined4 **)(this + 0x1b0);
    *puVar10 = uVar3;
    puVar10[1] = uVar1;
    puVar10[2] = uVar2;
    *(long **)(puVar10 + 4) = plVar8;
    if (plVar8 != (long *)0x0) {
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    }
    puVar10[6] = unaff_w22;
    puVar10[7] = unaff_w23;
    puVar10[8] = unaff_w20;
    puVar10[9] = unaff_w24;
    lVar20 = *(long *)(this + 0x1c8);
    *(long *)(this + 0x1c8) = lVar20 + 8;
    lVar20 = *(long *)(lVar20 + 8);
    *(long *)(this + 0x1b0) = lVar20;
    *(long *)(this + 0x1b8) = lVar20;
    *(long *)(this + 0x1c0) = lVar20 + 0x1e0;
    *(undefined4 *)(this + 0x178) = 0;
  }
  else {
    *puVar12 = uVar3;
    puVar12[1] = uVar1;
    puVar12[2] = uVar2;
    *(long **)(puVar12 + 4) = plVar8;
    if (plVar8 != (long *)0x0) {
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    }
    puVar12[6] = unaff_w22;
    puVar12[7] = unaff_w23;
    puVar12[8] = unaff_w20;
    puVar12[9] = unaff_w24;
    *(undefined4 **)(this + 0x1b0) = puVar12 + 10;
    *(undefined4 *)(this + 0x178) = 0;
  }
  if ((plVar8 != (long *)0x0) &&
     (iVar4 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


