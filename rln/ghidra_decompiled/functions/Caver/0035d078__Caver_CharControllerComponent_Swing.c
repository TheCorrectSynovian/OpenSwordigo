/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035d078
 * Function: Caver::CharControllerComponent::Swing
 * Signature: undefined __thiscall Swing(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharControllerComponent::Swing() */

void __thiscall Caver::CharControllerComponent::Swing(CharControllerComponent *this)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  intrusive_ptr *piVar8;
  string *psVar9;
  char *pcVar10;
  Component *pCVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  CharAnimControllerComponent *this_00;
  SwingableWeaponControllerComponent *pSVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined *local_a8;
  long local_a0;
  long *local_98;
  long *local_90;
  long *local_80 [2];
  char acStack_6c [4];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar12 = *(long *)(this + 400);
  if (lVar12 == 0) {
    lVar12 = *(long *)(this + 0x98);
    if (lVar12 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      lVar12 = *(long *)(this + 0x98);
      if (lVar12 != 0) goto LAB_0035d0cc;
    }
    else {
LAB_0035d0cc:
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    }
    plVar7 = *(long **)(this + 400);
    *(long *)(this + 400) = lVar12;
    if ((plVar7 != (long *)0x0) &&
       (iVar6 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar6, iVar6 == 0)) {
      (**(code **)(*plVar7 + 8))();
      lVar12 = *(long *)(this + 400);
    }
    if (lVar12 == 0) goto LAB_0035d794;
  }
  fVar16 = DAT_0068493c;
  fVar19 = DAT_00683944;
  lVar14 = *(long *)(lVar12 + 0x170);
  if ((lVar14 != 0) &&
     (DAT_00683944 <
      (*(float *)(lVar14 + 0x28) * DAT_0068493c - *(float *)(lVar14 + 0xc)) *
      *(float *)(lVar14 + 0x30) * *(float *)(lVar14 + 0x34))) {
    if (lVar12 == 0) {
      lVar12 = *(long *)(this + 0x98);
      if (lVar12 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
        lVar12 = *(long *)(this + 0x98);
        if (lVar12 != 0) goto LAB_0035d5e8;
      }
      else {
LAB_0035d5e8:
        *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      }
      plVar7 = *(long **)(this + 400);
      *(long *)(this + 400) = lVar12;
      if ((plVar7 == (long *)0x0) ||
         (iVar6 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar6, iVar6 != 0)) goto LAB_0035d138;
      (**(code **)(*plVar7 + 8))();
      lVar12 = *(long *)(*(long *)(this + 400) + 0x170);
      if (lVar12 != 0) goto LAB_0035d140;
LAB_0035d628:
      fVar16 = 0.0;
    }
    else {
LAB_0035d138:
      lVar12 = *(long *)(lVar12 + 0x170);
      if (lVar12 == 0) goto LAB_0035d628;
LAB_0035d140:
      fVar16 = (*(float *)(lVar12 + 0x28) * fVar16 - *(float *)(lVar12 + 0xc)) *
               *(float *)(lVar12 + 0x30) * *(float *)(lVar12 + 0x34);
      if (0.25 <= fVar16) goto LAB_0035d794;
    }
    this[0x224] = (CharControllerComponent)0x1;
    *(float *)(this + 0x228) = fVar16 + fVar19;
    goto LAB_0035d794;
  }
  if (*(int *)(this + 0x218) == 0) goto LAB_0035d794;
  if (this[0x244] != (CharControllerComponent)0x0) {
    this[0x244] = (CharControllerComponent)0x0;
  }
  if (DAT_00684314 < *(float *)(this + 0x220)) {
    *(undefined4 *)(this + 0x21c) = 0;
  }
  lVar12 = *(long *)(this + 0x80);
  if (lVar12 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar12 = *(long *)(this + 0x80);
  }
  fVar19 = _DAT_00684434;
  if (_DAT_00684434 <= *(float *)(lVar12 + 0x80)) {
    if (lVar12 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar12 = *(long *)(this + 0x80);
    }
LAB_0035d1e8:
    if (*(float *)(lVar12 + 0xd8) < *(float *)(this + 0x26c) * _DAT_006846d0) {
      *(undefined4 *)(this + 0x21c) = 2;
    }
  }
  else if (*(float *)(lVar12 + 0x8c) <= 0.0) goto LAB_0035d1e8;
  iVar6 = *(int *)(this + 0x21c);
  if (iVar6 == 2) {
    piVar8 = (intrusive_ptr *)AudioSystem::sharedSystem();
    psVar9 = (string *)SoundLibrary::sharedLibrary();
    iVar6 = fastrandom();
    puVar5 = PTR_DAT_007e5de8;
    local_a8 = PTR_DAT_007e5de8 + 0x18;
    pcVar10 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                        (iVar6 % 2 + 1,acStack_6c);
    FUN_00669e1c(&local_a8,0,*(undefined8 *)puVar5,pcVar10,(long)acStack_6c - (long)pcVar10);
    FUN_0035a030(&local_a0,"hiro_attack",&local_a8);
    SoundLibrary::EffectForName(psVar9);
    AudioSystem::PlaySoundEffect(piVar8,1.0);
    if ((local_90 != (long *)0x0) &&
       (iVar6 = (int)local_90[1] + -1, *(int *)(local_90 + 1) = iVar6, iVar6 == 0)) {
      (**(code **)(*local_90 + 8))();
    }
    if ((local_98 != (long *)0x0) &&
       (iVar6 = (int)local_98[1] + -1, *(int *)(local_98 + 1) = iVar6, iVar6 == 0)) {
      (**(code **)(*local_98 + 8))();
    }
    if ((undefined *)(local_a0 + -0x18) != puVar5) {
      piVar13 = (int *)(local_a0 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar13;
        *piVar13 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_a0 + -0x18));
      }
    }
    if (local_a8 + -0x18 != puVar5) {
      piVar13 = (int *)(local_a8 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar13;
        *piVar13 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete(local_a8 + -0x18);
      }
    }
    iVar6 = *(int *)(this + 0x21c);
  }
  pCVar11 = (Component *)
            (**(code **)(*(long *)(this + (long)iVar6 * 0x18 + 0x1d0) + 0x18))
                      (this + (long)iVar6 * 0x18 + 0x1d0,this);
  *(undefined4 *)(this + 0x220) = 0;
  iVar6 = 0;
  if (*(int *)(this + 0x21c) + 1 < *(int *)(this + 0x218)) {
    iVar6 = *(int *)(this + 0x21c) + 1;
  }
  *(int *)(this + 0x21c) = iVar6;
  if ((*(long *)(pCVar11 + 0x80) == 0) &&
     (ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar11 + 0x70),pCVar11),
     *(long *)(pCVar11 + 0x80) == 0)) goto LAB_0035d794;
  this_00 = *(CharAnimControllerComponent **)(this + 400);
  if (this_00 == (CharAnimControllerComponent *)0x0) {
    this_00 = *(CharAnimControllerComponent **)(this + 0x98);
    if (this_00 == (CharAnimControllerComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      this_00 = *(CharAnimControllerComponent **)(this + 0x98);
      if (this_00 != (CharAnimControllerComponent *)0x0) goto LAB_0035d458;
    }
    else {
LAB_0035d458:
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    }
    plVar7 = *(long **)(this + 400);
    *(CharAnimControllerComponent **)(this + 400) = this_00;
    if ((plVar7 == (long *)0x0) ||
       (iVar6 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar6, iVar6 != 0)) goto LAB_0035d380;
    (**(code **)(*plVar7 + 8))();
    this_00 = *(CharAnimControllerComponent **)(this + 400);
    plVar7 = *(long **)(pCVar11 + 0x80);
  }
  else {
LAB_0035d380:
    plVar7 = *(long **)(pCVar11 + 0x80);
  }
  if (plVar7 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar11 + 0x70),pCVar11);
    plVar7 = *(long **)(pCVar11 + 0x80);
  }
  local_80[0] = (long *)(**(code **)(*plVar7 + 0x108))();
  if (local_80[0] != (long *)0x0) {
    *(int *)(local_80[0] + 1) = (int)local_80[0][1] + 1;
  }
  CharAnimControllerComponent::SwingWithAnimation(this_00,(intrusive_ptr *)local_80);
  if ((local_80[0] == (long *)0x0) ||
     (iVar6 = (int)local_80[0][1] + -1, *(int *)(local_80[0] + 1) = iVar6, iVar6 != 0)) {
    plVar7 = *(long **)(pCVar11 + 0x80);
  }
  else {
    (**(code **)(*local_80[0] + 8))();
    plVar7 = *(long **)(pCVar11 + 0x80);
  }
  if (plVar7 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar11 + 0x70),pCVar11);
    plVar7 = *(long **)(pCVar11 + 0x80);
  }
  plVar7 = (long *)(**(code **)(*plVar7 + 0x108))();
  if (plVar7 != (long *)0x0) {
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  }
  fVar16 = *(float *)(plVar7 + 5) / (*(float *)(plVar7 + 6) * *(float *)((long)plVar7 + 0x34));
  if (plVar7[3] == 0) {
    fVar18 = 0.0;
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(plVar7[3] + 8);
    fVar18 = (float)iVar6;
  }
  pSVar15 = *(SwingableWeaponControllerComponent **)(this + 0x1a8);
  fVar18 = fVar16 * (*(float *)(pCVar11 + 0x88) / fVar18);
  fVar16 = fVar16 * (*(float *)(pCVar11 + 0x8c) / (float)iVar6);
  if (pSVar15 == (SwingableWeaponControllerComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x198),(Component *)this);
    pSVar15 = *(SwingableWeaponControllerComponent **)(this + 0x1a8);
    if (pSVar15 != (SwingableWeaponControllerComponent *)0x0) goto LAB_0035d4d4;
  }
  else {
LAB_0035d4d4:
    if (pCVar11[0x91] != (Component)0x0) {
      lVar12 = *(long *)(this + 0x80);
      if (lVar12 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        lVar12 = *(long *)(this + 0x80);
      }
      SwingableWeaponControllerComponent::StartSwing
                (pSVar15,*(int *)(lVar12 + 0x70),fVar18,fVar16 - fVar18);
    }
  }
  pSVar15 = *(SwingableWeaponControllerComponent **)(this + 0x1c0);
  if (pSVar15 == (SwingableWeaponControllerComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x1b0),(Component *)this);
    pSVar15 = *(SwingableWeaponControllerComponent **)(this + 0x1c0);
    if (pSVar15 != (SwingableWeaponControllerComponent *)0x0) goto LAB_0035d524;
  }
  else {
LAB_0035d524:
    if (pCVar11[0x90] != (Component)0x0) {
      lVar12 = *(long *)(this + 0x80);
      if (lVar12 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        lVar12 = *(long *)(this + 0x80);
      }
      SwingableWeaponControllerComponent::StartSwing
                (pSVar15,*(int *)(lVar12 + 0x70),fVar18,fVar16 - fVar18);
    }
  }
  *(undefined4 *)(this + 0x22c) = 0;
  lVar12 = *(long *)(this + 0x80);
  fVar16 = *(float *)(*(long *)(this + 0x28) + 0x68);
  uVar1 = *(undefined4 *)(*(long *)(this + 0x28) + 0x6c);
  if (lVar12 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar12 = *(long *)(this + 0x80);
  }
  if (fVar19 <= *(float *)(lVar12 + 0x80)) {
    if (lVar12 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar12 = *(long *)(this + 0x80);
    }
    iVar6 = *(int *)(lVar12 + 0x70);
joined_r0x0035d5c4:
    fVar19 = 10.0;
    if (-1 < iVar6) goto LAB_0035d6c8;
LAB_0035d664:
    fVar18 = -fVar19;
    if (fVar16 <= fVar18) goto LAB_0035d6c8;
    if (lVar12 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar12 = *(long *)(this + 0x80);
    }
    fVar17 = fVar16 - fVar19 * *(float *)(lVar12 + 0xa8);
    if ((fVar18 < fVar17) && (fVar18 = fVar17, lVar12 == 0)) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      fVar18 = fVar16 - fVar19 * *(float *)(*(long *)(this + 0x80) + 0xa8);
    }
  }
  else {
    if (*(float *)(lVar12 + 0x8c) <= 0.0) {
      iVar6 = *(int *)(lVar12 + 0x70);
      goto joined_r0x0035d5c4;
    }
    iVar6 = *(int *)(lVar12 + 0x70);
    fVar19 = DAT_00687990;
    if (iVar6 < 0) goto LAB_0035d664;
LAB_0035d6c8:
    if (lVar12 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar12 = *(long *)(this + 0x80);
      iVar6 = *(int *)(lVar12 + 0x70);
    }
    fVar18 = fVar16;
    if ((0 < iVar6) && (fVar16 < fVar19)) {
      if (lVar12 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        lVar12 = *(long *)(this + 0x80);
      }
      fVar17 = fVar19 * *(float *)(lVar12 + 0xa8) + fVar16;
      fVar18 = fVar19;
      if ((fVar17 < fVar19) && (fVar18 = fVar17, lVar12 == 0)) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        fVar18 = fVar19 * *(float *)(*(long *)(this + 0x80) + 0xa8) + fVar16;
      }
    }
  }
  lVar12 = *(long *)(this + 0x28);
  *(float *)(lVar12 + 0x68) = fVar18;
  *(undefined4 *)(lVar12 + 0x6c) = uVar1;
  iVar6 = (int)plVar7[1] + -1;
  *(int *)(plVar7 + 1) = iVar6;
  if (iVar6 == 0) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
LAB_0035d794:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


