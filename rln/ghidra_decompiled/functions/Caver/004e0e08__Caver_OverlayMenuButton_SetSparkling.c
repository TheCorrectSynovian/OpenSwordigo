/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e0e08
 * Function: Caver::OverlayMenuButton::SetSparkling
 * Signature: undefined __thiscall SetSparkling(OverlayMenuButton * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::OverlayMenuButton::SetSparkling(bool) */

void __thiscall Caver::OverlayMenuButton::SetSparkling(OverlayMenuButton *this,bool param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  ParticleSystem *pPVar8;
  string *psVar9;
  FountainParticleEmitter *this_00;
  FloatColor *this_01;
  void *pvVar10;
  long lVar11;
  undefined4 *puVar12;
  void *pvVar13;
  int *piVar14;
  int iVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  undefined4 uVar20;
  undefined1 auStack_78 [8];
  long local_70;
  long *local_68;
  ParticleSystem *local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(long *)(this + 0x200) == 0) {
    pPVar8 = operator_new(0xc0);
    ParticleSystem::ParticleSystem(pPVar8);
    local_60 = pPVar8;
    boost::detail::shared_count::shared_count<Caver::ParticleSystem>
              ((shared_count *)&uStack_58,pPVar8);
    boost::detail::sp_enable_shared_from_this(&local_60,pPVar8,pPVar8);
    pPVar8 = *(ParticleSystem **)(this + 0x200);
    *(ParticleSystem **)(this + 0x200) = local_60;
    plVar17 = *(long **)(this + 0x208);
    *(long **)(this + 0x208) = uStack_58;
    local_60 = pPVar8;
    uStack_58 = plVar17;
    if ((plVar17 != (long *)0x0) &&
       (lVar11 = plVar17[1], plVar17[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      lVar11 = plVar17[2];
      plVar17[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar17 + 0x18))(plVar17);
      }
    }
    ParticleSystem::InitWithMaxParticles(*(ParticleSystem **)(this + 0x200),0x28);
    pPVar8 = *(ParticleSystem **)(this + 0x200);
    psVar9 = (string *)TextureLibrary::sharedLibrary();
    FUN_00666bb8(&local_70,"particle_fure_1",auStack_78);
                    /* catch() { ... } // from try @ 004e0f60 with catch @ 004e0f10 */
    TextureLibrary::TextureForName(psVar9,SUB81(&local_70,0));
    uStack_58 = (long *)_UNK_00692938;
    local_60 = _DAT_00692930;
    ParticleSystem::AddParticleType(pPVar8,(intrusive_ptr *)&local_68,(Rectangle *)&local_60);
                    /* try { // try from 004e0f30 to 005e0f33 has its CatchHandler @ 004e0f54 */
                    /* try { // try from 004e0f34 to 005e0f3b has its CatchHandler @ 004e0f4c */
    if ((local_68 != (long *)0x0) &&
       (iVar15 = (int)local_68[1] + -1, *(int *)(local_68 + 1) = iVar15, iVar15 == 0)) {
                    /* catch() { ... } // from try @ 004e0f34 with catch @ 004e0f4c */
      (**(code **)(*local_68 + 8))();
    }
                    /* catch() { ... } // from try @ 004e0f30 with catch @ 004e0f54 */
                    /* try { // try from 004e0f58 to 005e0f5f has its CatchHandler @ 004e0f70 */
                    /* try { // try from 004e0f60 to 005e0f73 has its CatchHandler @ 004e0f10 */
    if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
      piVar14 = (int *)(local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar15 = *piVar14;
        *piVar14 = iVar15 + -1;
      }
      else {
        do {
          iVar15 = *piVar14;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar2) {
            *piVar14 = iVar15 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar15 < 1) {
        operator_delete((undefined *)(local_70 + -0x18));
      }
    }
                    /* catch() { ... } // from try @ 004e0f58 with catch @ 004e0f70 */
    this_00 = operator_new(0xe0);
    FountainParticleEmitter::FountainParticleEmitter(this_00);
    this_01 = (FloatColor *)
              boost::shared_ptr<Caver::FountainParticleEmitter>::
              shared_ptr<Caver::FountainParticleEmitter>
                        ((shared_ptr<Caver::FountainParticleEmitter> *)&local_60,this_00);
    pPVar8 = *(ParticleSystem **)(this + 0x210);
    *(ParticleSystem **)(this + 0x210) = local_60;
    plVar17 = *(long **)(this + 0x218);
    *(long **)(this + 0x218) = uStack_58;
    local_60 = pPVar8;
    uStack_58 = plVar17;
    if ((plVar17 != (long *)0x0) &&
       (lVar11 = plVar17[1], plVar17[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      this_01 = (FloatColor *)(**(code **)(*plVar17 + 0x10))(plVar17);
      lVar11 = plVar17[2];
      plVar17[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        this_01 = (FloatColor *)(**(code **)(*plVar17 + 0x18))(plVar17);
      }
    }
    lVar11 = *(long *)(this + 0x210);
    plVar17 = *(long **)(this + 0x208);
    uVar16 = *(undefined8 *)(this + 0x200);
    if (plVar17 != (long *)0x0) {
      plVar17[1] = plVar17[1] + 2;
    }
    plVar18 = *(long **)(lVar11 + 0x10);
    *(undefined8 *)(lVar11 + 8) = uVar16;
    *(long **)(lVar11 + 0x10) = plVar17;
    if ((plVar18 != (long *)0x0) &&
       (lVar11 = plVar18[1], plVar18[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      this_01 = (FloatColor *)(**(code **)(*plVar18 + 0x10))(plVar18);
      lVar11 = plVar18[2];
      plVar18[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        this_01 = (FloatColor *)(**(code **)(*plVar18 + 0x18))(plVar18);
      }
    }
    if ((plVar17 != (long *)0x0) &&
       (lVar11 = plVar17[1], plVar17[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      this_01 = (FloatColor *)(**(code **)(*plVar17 + 0x10))(plVar17);
      lVar11 = plVar17[2];
      plVar17[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        this_01 = (FloatColor *)(**(code **)(*plVar17 + 0x18))(plVar17);
      }
    }
    lVar11 = *(long *)(this + 0x210);
    *(ulong *)(lVar11 + 0x44) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x84) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(this + 0x8c) >> 0x20) * 0.5,
                  (float)*(undefined8 *)(this + 0x84) + (float)*(undefined8 *)(this + 0x8c) * 0.5);
    fVar6 = DAT_00692070;
    fVar5 = DAT_00684430;
    fVar4 = DAT_00683f68;
    *(undefined4 *)(lVar11 + 0x4c) = 0;
    FloatColor::FromHSLA(this_01,fVar6,fVar4,fVar5,0.0);
    FloatColor::GetHSLComponents((FloatColor *)&local_60,(float *)(lVar11 + 0xa8));
    *(undefined4 *)(lVar11 + 0xb4) = uStack_58._4_4_;
    plVar17 = *(long **)(this + 0x210);
    puVar12 = (undefined4 *)plVar17[0x19];
    plVar17[0x17] = 0x3e99999a3e99999a;
    *(undefined4 *)(plVar17 + 0x18) = 0x3e99999a;
    if (puVar12 == (undefined4 *)0x0) {
      uVar7 = (**(code **)(*plVar17 + 0x18))(plVar17);
      pvVar10 = operator_new__((ulong)uVar7 << 2);
      pvVar13 = (void *)plVar17[0x19];
      plVar17[0x19] = (long)pvVar10;
      if (pvVar13 != (void *)0x0) {
        operator_delete__(pvVar13);
      }
      if (uVar7 == 0) {
        puVar12 = (undefined4 *)plVar17[0x19];
      }
      else {
        uVar19 = 0;
        do {
          uVar20 = (**(code **)(*plVar17 + 0x20))(plVar17,uVar19 & 0xffffffff);
          puVar12 = (undefined4 *)plVar17[0x19];
          puVar12[uVar19] = uVar20;
          uVar19 = uVar19 + 1;
        } while (uVar7 != uVar19);
      }
    }
    *puVar12 = 0x42b40000;
    plVar17 = *(long **)(this + 0x210);
    lVar11 = plVar17[0x19];
    if (lVar11 == 0) {
      uVar7 = (**(code **)(*plVar17 + 0x18))(plVar17);
      pvVar10 = operator_new__((ulong)uVar7 << 2);
      pvVar13 = (void *)plVar17[0x19];
      plVar17[0x19] = (long)pvVar10;
      if (pvVar13 != (void *)0x0) {
        operator_delete__(pvVar13);
      }
      if (uVar7 == 0) {
        lVar11 = plVar17[0x19];
      }
      else {
        uVar19 = 0;
        do {
          uVar20 = (**(code **)(*plVar17 + 0x20))(plVar17,uVar19 & 0xffffffff);
          lVar11 = plVar17[0x19];
          *(undefined4 *)(lVar11 + uVar19 * 4) = uVar20;
          uVar19 = uVar19 + 1;
        } while (uVar7 != uVar19);
      }
    }
    *(undefined4 *)(lVar11 + 4) = 0;
    plVar17 = *(long **)(this + 0x210);
    lVar11 = plVar17[0x19];
    if (lVar11 == 0) {
      uVar7 = (**(code **)(*plVar17 + 0x18))(plVar17);
      pvVar10 = operator_new__((ulong)uVar7 << 2);
      pvVar13 = (void *)plVar17[0x19];
      plVar17[0x19] = (long)pvVar10;
      if (pvVar13 != (void *)0x0) {
        operator_delete__(pvVar13);
      }
      if (uVar7 == 0) {
        lVar11 = plVar17[0x19];
      }
      else {
        uVar19 = 0;
        do {
          uVar20 = (**(code **)(*plVar17 + 0x20))(plVar17,uVar19 & 0xffffffff);
          lVar11 = plVar17[0x19];
          *(undefined4 *)(lVar11 + uVar19 * 4) = uVar20;
          uVar19 = uVar19 + 1;
        } while (uVar7 != uVar19);
      }
    }
    *(undefined4 *)(lVar11 + 0xc) = 0x41a00000;
    plVar17 = *(long **)(this + 0x210);
    lVar11 = plVar17[0x19];
    if (lVar11 == 0) {
      uVar7 = (**(code **)(*plVar17 + 0x18))(plVar17);
      pvVar10 = operator_new__((ulong)uVar7 << 2);
      pvVar13 = (void *)plVar17[0x19];
      plVar17[0x19] = (long)pvVar10;
      if (pvVar13 != (void *)0x0) {
        operator_delete__(pvVar13);
      }
      if (uVar7 == 0) {
        lVar11 = plVar17[0x19];
      }
      else {
        uVar19 = 0;
        do {
          uVar20 = (**(code **)(*plVar17 + 0x20))(plVar17,uVar19 & 0xffffffff);
          lVar11 = plVar17[0x19];
          *(undefined4 *)(lVar11 + uVar19 * 4) = uVar20;
          uVar19 = uVar19 + 1;
        } while (uVar7 != uVar19);
      }
    }
    *(undefined4 *)(lVar11 + 0x20) = 0x3f000000;
    plVar17 = *(long **)(this + 0x210);
    lVar11 = plVar17[0x19];
    if (lVar11 == 0) {
      uVar7 = (**(code **)(*plVar17 + 0x18))(plVar17);
      pvVar10 = operator_new__((ulong)uVar7 << 2);
      pvVar13 = (void *)plVar17[0x19];
      plVar17[0x19] = (long)pvVar10;
      if (pvVar13 != (void *)0x0) {
        operator_delete__(pvVar13);
      }
      if (uVar7 == 0) {
        lVar11 = plVar17[0x19];
      }
      else {
        uVar19 = 0;
        do {
          uVar20 = (**(code **)(*plVar17 + 0x20))(plVar17,uVar19 & 0xffffffff);
          lVar11 = plVar17[0x19];
          *(undefined4 *)(lVar11 + uVar19 * 4) = uVar20;
          uVar19 = uVar19 + 1;
        } while (uVar7 != uVar19);
      }
    }
    *(undefined4 *)(lVar11 + 0x30) = 0x3f800000;
    plVar17 = *(long **)(this + 0x210);
    lVar11 = plVar17[0x19];
    if (lVar11 == 0) {
      uVar7 = (**(code **)(*plVar17 + 0x18))(plVar17);
      pvVar10 = operator_new__((ulong)uVar7 << 2);
      pvVar13 = (void *)plVar17[0x19];
      plVar17[0x19] = (long)pvVar10;
      if (pvVar13 != (void *)0x0) {
        operator_delete__(pvVar13);
      }
      if (uVar7 == 0) {
        lVar11 = plVar17[0x19];
      }
      else {
        uVar19 = 0;
        do {
          uVar20 = (**(code **)(*plVar17 + 0x20))(plVar17,uVar19 & 0xffffffff);
          lVar11 = plVar17[0x19];
          *(undefined4 *)(lVar11 + uVar19 * 4) = uVar20;
          uVar19 = uVar19 + 1;
        } while (uVar7 != uVar19);
      }
    }
    *(undefined4 *)(lVar11 + 0x14) = 0x41a00000;
    plVar17 = *(long **)(this + 0x210);
    lVar11 = plVar17[0x19];
    if (lVar11 == 0) {
      uVar7 = (**(code **)(*plVar17 + 0x18))(plVar17);
      pvVar10 = operator_new__((ulong)uVar7 << 2);
      pvVar13 = (void *)plVar17[0x19];
      plVar17[0x19] = (long)pvVar10;
      if (pvVar13 != (void *)0x0) {
        operator_delete__(pvVar13);
      }
      if (uVar7 == 0) {
        lVar11 = plVar17[0x19];
      }
      else {
        uVar19 = 0;
        do {
          uVar20 = (**(code **)(*plVar17 + 0x20))(plVar17,uVar19 & 0xffffffff);
          lVar11 = plVar17[0x19];
          *(undefined4 *)(lVar11 + uVar19 * 4) = uVar20;
          uVar19 = uVar19 + 1;
        } while (uVar7 != uVar19);
      }
    }
    *(undefined4 *)(lVar11 + 0x2c) = 0x3ccccccd;
  }
  this[0x1f8] = (OverlayMenuButton)param_1;
  if (param_1) {
    GUIView::AddPopupAnimation((GUIView *)this);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


