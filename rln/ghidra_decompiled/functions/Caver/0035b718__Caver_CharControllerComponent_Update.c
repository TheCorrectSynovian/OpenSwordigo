/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035b718
 * Function: Caver::CharControllerComponent::Update
 * Signature: undefined __thiscall Update(CharControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharControllerComponent::Update(float) */

void __thiscall Caver::CharControllerComponent::Update(CharControllerComponent *this,float param_1)

{
  CharControllerComponent *pCVar1;
  int iVar2;
  CharControllerComponent CVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  SwingableWeaponControllerComponent *pSVar9;
  long *plVar10;
  CharAnimControllerComponent *pCVar11;
  EntityComponent *this_00;
  ulong uVar12;
  long *plVar13;
  SoundEffectComponent *this_01;
  int iVar14;
  long lVar15;
  long lVar16;
  undefined1 uVar17;
  float *pfVar18;
  Component *pCVar19;
  code *pcVar20;
  undefined1 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  undefined4 in_register_00005004;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  long *local_a8;
  float local_a0;
  float fStack_9c;
  long local_98;
  
  uVar26 = CONCAT44(in_register_00005004,param_1);
  lVar5 = tpidr_el0;
  local_98 = *(long *)(lVar5 + 0x28);
  if ((*(long *)(this + 0x80) == 0) &&
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this),
     *(long *)(this + 0x80) == 0)) goto LAB_0035cdb0;
  if ((this[0x1c8] != (CharControllerComponent)0x0) && (this[0x2ec] == (CharControllerComponent)0x0)
     ) {
    lVar15 = *(long *)(this + 400);
    if (lVar15 == 0) {
      lVar15 = *(long *)(this + 0x98);
      if (lVar15 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
        lVar15 = *(long *)(this + 0x98);
        if (lVar15 != 0) goto LAB_0035b814;
      }
      else {
LAB_0035b814:
        *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
      }
      plVar10 = *(long **)(this + 400);
      *(long *)(this + 400) = lVar15;
      if ((plVar10 == (long *)0x0) ||
         (iVar25 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar25, iVar25 != 0))
      goto LAB_0035b790;
      (**(code **)(*plVar10 + 8))();
      lVar15 = *(long *)(*(long *)(this + 400) + 0x168);
    }
    else {
LAB_0035b790:
      lVar15 = *(long *)(lVar15 + 0x168);
    }
    if (((lVar15 == 0) && (*(int *)(this + 0x2d0) == 0)) &&
       (this[700] == (CharControllerComponent)0x0)) {
      pSVar9 = *(SwingableWeaponControllerComponent **)(this + 0x1c0);
      this[0x1c8] = (CharControllerComponent)0x0;
      if (pSVar9 == (SwingableWeaponControllerComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x1b0),(Component *)this);
        pSVar9 = *(SwingableWeaponControllerComponent **)(this + 0x1c0);
        if (pSVar9 != (SwingableWeaponControllerComponent *)0x0) goto LAB_0035b7c8;
      }
      else {
LAB_0035b7c8:
        SwingableWeaponControllerComponent::SetWeaponHidden(pSVar9,false);
      }
      pSVar9 = *(SwingableWeaponControllerComponent **)(this + 0x1a8);
      if (pSVar9 == (SwingableWeaponControllerComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x198),(Component *)this);
        pSVar9 = *(SwingableWeaponControllerComponent **)(this + 0x1a8);
        if (pSVar9 == (SwingableWeaponControllerComponent *)0x0) goto LAB_0035b854;
      }
      SwingableWeaponControllerComponent::SetWeaponHidden(pSVar9,false);
    }
  }
LAB_0035b854:
  lVar15 = *(long *)(this + 400);
  pCVar1 = this + 400;
  if (lVar15 == 0) {
    lVar15 = *(long *)(this + 0x98);
    if (lVar15 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      lVar15 = *(long *)(this + 0x98);
      if (lVar15 != 0) goto LAB_0035b87c;
    }
    else {
LAB_0035b87c:
      *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    }
    plVar10 = *(long **)pCVar1;
    *(long *)pCVar1 = lVar15;
    if ((plVar10 != (long *)0x0) &&
       (iVar25 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar25, iVar25 == 0)) {
      (**(code **)(*plVar10 + 8))();
      lVar15 = *(long *)pCVar1;
    }
    if (lVar15 != 0) goto LAB_0035b8a8;
LAB_0035b908:
    bVar6 = false;
    *(float *)(this + 0x220) = *(float *)(this + 0x220) + param_1;
    lVar15 = *(long *)(this + 0x80);
  }
  else {
LAB_0035b8a8:
    lVar15 = *(long *)(lVar15 + 0x170);
    if ((lVar15 == 0) ||
       ((*(float *)(lVar15 + 0x28) * DAT_0068493c - *(float *)(lVar15 + 0xc)) *
        *(float *)(lVar15 + 0x30) * *(float *)(lVar15 + 0x34) <= DAT_00683944)) goto LAB_0035b908;
    bVar6 = true;
    lVar15 = *(long *)(this + 0x80);
  }
  if (lVar15 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar15 = *(long *)(this + 0x80);
  }
  fVar27 = _DAT_00684434;
  if ((_DAT_00684434 <= *(float *)(lVar15 + 0x80)) || (*(float *)(lVar15 + 0x8c) <= 0.0)) {
LAB_0035b970:
    if ((*(int *)(this + 0x22c) != *(int *)(this + 0x230)) &&
       ((4 < *(uint *)(this + 0x2d0) ||
        ((1 << (ulong)(*(uint *)(this + 0x2d0) & 0x1f) & 0x1aU) == 0)))) {
      *(int *)(this + 0x22c) = *(int *)(this + 0x230);
    }
  }
  else {
    lVar15 = *(long *)pCVar1;
    if (lVar15 == 0) {
      lVar15 = *(long *)(this + 0x98);
      if (lVar15 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
        lVar15 = *(long *)(this + 0x98);
        if (lVar15 != 0) goto LAB_0035c6d0;
      }
      else {
LAB_0035c6d0:
        *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
      }
      plVar10 = *(long **)pCVar1;
      *(long *)pCVar1 = lVar15;
      if ((plVar10 == (long *)0x0) ||
         (iVar25 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar25, iVar25 != 0))
      goto LAB_0035b958;
      (**(code **)(*plVar10 + 8))();
      lVar15 = *(long *)(*(long *)pCVar1 + 0x168);
    }
    else {
LAB_0035b958:
      lVar15 = *(long *)(lVar15 + 0x168);
    }
    if ((lVar15 == 0) && (this[0x2ec] == (CharControllerComponent)0x0)) goto LAB_0035b970;
    *(undefined4 *)(this + 0x22c) = 0;
  }
  *(undefined4 *)(this + 0x268) = *(undefined4 *)(this + 0x278);
  *(undefined4 *)(this + 0x274) = *(undefined4 *)(this + 0x27c);
  fVar22 = DAT_0068796c;
  fVar28 = DAT_00684318;
  if (this[0x234] == (CharControllerComponent)0x0) {
    fVar22 = *(float *)(this + 0x240);
    *(float *)(this + 0x240) = fVar22 + param_1;
    if ((fVar28 < fVar22 + param_1) && (this[0x244] != (CharControllerComponent)0x0)) {
      this[0x244] = (CharControllerComponent)0x0;
    }
    pCVar11 = *(CharAnimControllerComponent **)pCVar1;
    if (pCVar11 == (CharAnimControllerComponent *)0x0) {
      pCVar11 = *(CharAnimControllerComponent **)(this + 0x98);
      if (pCVar11 == (CharAnimControllerComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
        pCVar11 = *(CharAnimControllerComponent **)(this + 0x98);
        if (pCVar11 != (CharAnimControllerComponent *)0x0) goto LAB_0035be54;
      }
      else {
LAB_0035be54:
        *(int *)(pCVar11 + 8) = *(int *)(pCVar11 + 8) + 1;
      }
      plVar10 = *(long **)pCVar1;
      *(CharAnimControllerComponent **)pCVar1 = pCVar11;
      if ((plVar10 != (long *)0x0) &&
         (iVar25 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar25, iVar25 == 0)) {
        (**(code **)(*plVar10 + 8))(plVar10);
        pCVar11 = *(CharAnimControllerComponent **)pCVar1;
      }
    }
    uVar12 = CharAnimControllerComponent::IsMoving(pCVar11);
    fVar22 = DAT_0068796c;
    if (((uVar12 & 1) == 0) || (*(float *)(this + 0x240) <= DAT_00687974)) goto LAB_0035bb44;
    pCVar11 = *(CharAnimControllerComponent **)pCVar1;
    if (pCVar11 == (CharAnimControllerComponent *)0x0) {
      pCVar11 = *(CharAnimControllerComponent **)(this + 0x98);
      if (pCVar11 == (CharAnimControllerComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
        pCVar11 = *(CharAnimControllerComponent **)(this + 0x98);
        if (pCVar11 != (CharAnimControllerComponent *)0x0) goto LAB_0035bb00;
      }
      else {
LAB_0035bb00:
        *(int *)(pCVar11 + 8) = *(int *)(pCVar11 + 8) + 1;
      }
      plVar10 = *(long **)pCVar1;
      *(CharAnimControllerComponent **)pCVar1 = pCVar11;
      if ((plVar10 != (long *)0x0) &&
         (iVar25 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar25, iVar25 == 0)) {
        (**(code **)(*plVar10 + 8))(plVar10);
        pCVar11 = *(CharAnimControllerComponent **)pCVar1;
      }
      if (pCVar11 == (CharAnimControllerComponent *)0x0) goto LAB_0035bb44;
    }
    CharAnimControllerComponent::StopMoving(pCVar11);
LAB_0035bb44:
    pCVar11 = *(CharAnimControllerComponent **)pCVar1;
    if (pCVar11 != (CharAnimControllerComponent *)0x0) goto LAB_0035bb4c;
LAB_0035ba28:
    pCVar11 = *(CharAnimControllerComponent **)(this + 0x98);
    if (pCVar11 == (CharAnimControllerComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      pCVar11 = *(CharAnimControllerComponent **)(this + 0x98);
      if (pCVar11 != (CharAnimControllerComponent *)0x0) goto LAB_0035ba44;
    }
    else {
LAB_0035ba44:
      *(int *)(pCVar11 + 8) = *(int *)(pCVar11 + 8) + 1;
    }
    plVar10 = *(long **)pCVar1;
    *(CharAnimControllerComponent **)pCVar1 = pCVar11;
    if ((plVar10 != (long *)0x0) &&
       (iVar25 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar25, iVar25 == 0)) {
      (**(code **)(*plVar10 + 8))(plVar10);
      pCVar11 = *(CharAnimControllerComponent **)pCVar1;
    }
    if (pCVar11 != (CharAnimControllerComponent *)0x0) goto LAB_0035bb4c;
  }
  else {
    *(float *)(this + 0x23c) = *(float *)(this + 0x23c) + param_1;
    if (this[0x244] == (CharControllerComponent)0x0) goto LAB_0035bb44;
    lVar15 = *(long *)(this + 0x80);
    *(undefined4 *)(this + 0x268) = *(undefined4 *)(this + 0x280);
    *(undefined4 *)(this + 0x274) = *(undefined4 *)(this + 0x284);
    if (lVar15 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar15 = *(long *)(this + 0x80);
    }
    if ((fVar27 <= *(float *)(lVar15 + 0x80)) || (*(float *)(lVar15 + 0x8c) <= 0.0))
    goto LAB_0035bb44;
    pCVar11 = *(CharAnimControllerComponent **)pCVar1;
    fVar22 = DAT_00687970;
    if (pCVar11 == (CharAnimControllerComponent *)0x0) goto LAB_0035ba28;
LAB_0035bb4c:
    lVar15 = *(long *)(pCVar11 + 0x170);
    if (lVar15 != 0) {
      if ((*(float *)(lVar15 + 0x28) * DAT_0068493c - *(float *)(lVar15 + 0xc)) *
          *(float *)(lVar15 + 0x30) * *(float *)(lVar15 + 0x34) <= DAT_00683944) {
LAB_0035bbbc:
        fVar28 = fVar22;
      }
      else {
        lVar15 = *(long *)(this + 0x80);
        if (lVar15 == 0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          lVar15 = *(long *)(this + 0x80);
        }
        fVar28 = 0.0;
        if ((*(float *)(lVar15 + 0x80) < fVar27) && (0.0 < *(float *)(lVar15 + 0x8c)))
        goto LAB_0035bbbc;
      }
      fVar22 = fVar28;
      pCVar11 = *(CharAnimControllerComponent **)pCVar1;
    }
    if (pCVar11 == (CharAnimControllerComponent *)0x0) {
      pCVar11 = *(CharAnimControllerComponent **)(this + 0x98);
      if (pCVar11 == (CharAnimControllerComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
        pCVar11 = *(CharAnimControllerComponent **)(this + 0x98);
        if (pCVar11 != (CharAnimControllerComponent *)0x0) goto LAB_0035bdc8;
      }
      else {
LAB_0035bdc8:
        *(int *)(pCVar11 + 8) = *(int *)(pCVar11 + 8) + 1;
      }
      plVar10 = *(long **)pCVar1;
      *(CharAnimControllerComponent **)pCVar1 = pCVar11;
      if ((plVar10 != (long *)0x0) &&
         (iVar25 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar25, iVar25 == 0)) {
        (**(code **)(*plVar10 + 8))(plVar10);
        pCVar11 = *(CharAnimControllerComponent **)pCVar1;
      }
    }
    CharAnimControllerComponent::SetCurrentRunSpeed(pCVar11,*(float *)(this + 0x268));
  }
  fVar28 = DAT_0068797c;
  fVar8 = DAT_00683944;
  if (*(float *)(this + 0x2f8) <= DAT_00683944) {
    lVar15 = *(long *)(this + 0x80);
    if (lVar15 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar15 = *(long *)(this + 0x80);
    }
    fVar23 = DAT_00687978;
    fVar28 = fVar22;
    if (*(char *)(lVar15 + 0x115) != '\0') {
      *(undefined4 *)(this + 0x22c) = 0;
      fVar28 = fVar23;
    }
LAB_0035bcdc:
    CVar3 = this[0x2ec];
  }
  else {
    fVar22 = *(float *)(this + 0x2f8) - param_1;
    *(undefined4 *)(this + 0x22c) = 0;
    *(float *)(this + 0x2f8) = fVar22;
    if (fVar8 < fVar22) goto LAB_0035bcdc;
    plVar10 = *(long **)(this + 0x128);
    if (plVar10 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x118),(Component *)this);
      plVar10 = *(long **)(this + 0x128);
    }
    lVar15 = (**(code **)(*plVar10 + 0x108))();
    if (lVar15 == 0) goto LAB_0035bcdc;
    pCVar11 = *(CharAnimControllerComponent **)pCVar1;
    if (pCVar11 == (CharAnimControllerComponent *)0x0) {
      pCVar11 = *(CharAnimControllerComponent **)(this + 0x98);
      if (pCVar11 == (CharAnimControllerComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
        pCVar11 = *(CharAnimControllerComponent **)(this + 0x98);
        if (pCVar11 != (CharAnimControllerComponent *)0x0) goto LAB_0035c7f4;
      }
      else {
LAB_0035c7f4:
        *(int *)(pCVar11 + 8) = *(int *)(pCVar11 + 8) + 1;
      }
      plVar10 = *(long **)pCVar1;
      *(CharAnimControllerComponent **)pCVar1 = pCVar11;
      if ((plVar10 == (long *)0x0) ||
         (iVar25 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar25, iVar25 != 0))
      goto LAB_0035bc34;
      (**(code **)(*plVar10 + 8))();
      pCVar11 = *(CharAnimControllerComponent **)pCVar1;
      plVar10 = *(long **)(this + 0x128);
    }
    else {
LAB_0035bc34:
      plVar10 = *(long **)(this + 0x128);
    }
    if (plVar10 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x118),(Component *)this);
      plVar10 = *(long **)(this + 0x128);
    }
    local_a8 = (long *)(**(code **)(*plVar10 + 0x108))();
    if (local_a8 != (long *)0x0) {
      *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
    }
    CharAnimControllerComponent::BlendFromAnimationNode
              (pCVar11,(intrusive_ptr *)&local_a8,_DAT_00683c38);
    if ((local_a8 == (long *)0x0) ||
       (iVar25 = (int)local_a8[1] + -1, *(int *)(local_a8 + 1) = iVar25, iVar25 != 0))
    goto LAB_0035bcdc;
    (**(code **)(*local_a8 + 8))();
    CVar3 = this[0x2ec];
  }
  if ((CVar3 != (CharControllerComponent)0x0) &&
     (uVar12 = SkillComponent::HasFinishedCasting(*(SkillComponent **)(this + 0x2f0)),
     (uVar12 & 1) != 0)) {
    lVar15 = *(long *)(this + 0x98);
    if (lVar15 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      lVar15 = *(long *)(this + 0x98);
    }
    *(undefined1 *)(lVar15 + 0x160) = 1;
    plVar10 = *(long **)(this + 0x2f0);
    this[0x2ec] = (CharControllerComponent)0x0;
    *(undefined8 *)(this + 0x2f0) = 0;
    if ((plVar10 != (long *)0x0) &&
       (iVar25 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar25, iVar25 == 0)) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  uVar29 = _DAT_0068782c;
  iVar25 = *(int *)(this + 0x22c);
  fVar22 = DAT_00687980;
  if (this[700] == (CharControllerComponent)0x0) {
    fVar22 = *(float *)(this + 0x268);
  }
  if (iVar25 == 0) {
LAB_0035bfbc:
    *(undefined4 *)(this + 0x300) = uVar29;
  }
  else {
    this_00 = *(EntityComponent **)(this + 0x80);
    if (this_00 == (EntityComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      this_00 = *(EntityComponent **)(this + 0x80);
    }
    if (fVar27 <= *(float *)(this_00 + 0x80)) {
      if (this_00 != (EntityComponent *)0x0) goto LAB_0035be0c;
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      this_00 = *(EntityComponent **)(this + 0x80);
      if (*(float *)(this_00 + 0x80) < fVar27) goto LAB_0035be14;
LAB_0035beb0:
      bVar7 = false;
    }
    else if ((*(float *)(this_00 + 0x8c) <= 0.0) || (this_00[0x90] != (EntityComponent)0x0)) {
LAB_0035be0c:
      if (fVar27 <= *(float *)(this_00 + 0x80)) goto LAB_0035beb0;
LAB_0035be14:
      bVar7 = false;
      if ((0.0 < *(float *)(this_00 + 0x8c)) && (this_00[0x90] != (EntityComponent)0x0)) {
        fVar28 = 0.0;
      }
    }
    else {
      bVar7 = true;
      fVar28 = DAT_00687984;
    }
    iVar14 = *(int *)(this + 0x248);
    if (this[0x245] == (CharControllerComponent)0x0) {
      if (iVar14 == 0) goto LAB_0035bf30;
LAB_0035bf14:
      if (this_00 == (EntityComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        this_00 = *(EntityComponent **)(this + 0x80);
        iVar14 = *(int *)(this + 0x248);
      }
LAB_0035bf2c:
      EntityComponent::SetFacingDirection(this_00,iVar14);
    }
    else {
      if (iVar14 != 0) goto LAB_0035bf14;
      if ((!bVar6) && (this[0x2ec] == (CharControllerComponent)0x0)) {
        if (this_00 == (EntityComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          this_00 = *(EntityComponent **)(this + 0x80);
        }
        iVar14 = *(int *)(this + 0x22c);
        if (*(int *)(this_00 + 0x70) == iVar14) goto LAB_0035bf30;
        if (this_00 == (EntityComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          this_00 = *(EntityComponent **)(this + 0x80);
          iVar14 = *(int *)(this + 0x22c);
        }
        goto LAB_0035bf2c;
      }
    }
LAB_0035bf30:
    lVar15 = *(long *)(this + 0x80);
    if (lVar15 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar15 = *(long *)(this + 0x80);
    }
    iVar14 = *(int *)(lVar15 + 0x70);
    pCVar19 = *(Component **)(this + 400);
    iVar2 = *(int *)(this + 0x22c);
    if (pCVar19 == (Component *)0x0) {
      pCVar19 = *(Component **)(this + 0x98);
      if (pCVar19 == (Component *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
        pCVar19 = *(Component **)(this + 0x98);
        if (pCVar19 != (Component *)0x0) goto LAB_0035c06c;
      }
      else {
LAB_0035c06c:
        *(int *)(pCVar19 + 8) = *(int *)(pCVar19 + 8) + 1;
      }
      plVar10 = *(long **)pCVar1;
      *(Component **)pCVar1 = pCVar19;
      if ((plVar10 == (long *)0x0) ||
         (iVar4 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar4, iVar4 != 0))
      goto LAB_0035bf58;
      (**(code **)(*plVar10 + 8))();
      pCVar19 = *(Component **)pCVar1;
      plVar10 = *(long **)(pCVar19 + 0xe0);
    }
    else {
LAB_0035bf58:
      plVar10 = *(long **)(pCVar19 + 0xe0);
    }
    if (plVar10 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar19 + 0xd0),pCVar19);
      plVar10 = *(long **)(pCVar19 + 0xe0);
    }
    lVar15 = (**(code **)(*plVar10 + 0x108))();
    if (iVar14 != iVar2) {
      *(undefined1 *)(lVar15 + 0x39) = 1;
      if (bVar7) goto LAB_0035bf9c;
      goto LAB_0035bfbc;
    }
    *(undefined1 *)(lVar15 + 0x39) = 0;
    if (!bVar7) goto LAB_0035bfbc;
LAB_0035bf9c:
    fVar23 = DAT_00683f68;
    fVar24 = *(float *)(this + 0x300);
    uVar29 = 0;
    *(float *)(this + 0x300) = fVar24 + param_1;
    if (fVar23 < fVar24 + param_1) goto LAB_0035bfbc;
  }
  lVar15 = *(long *)(this + 0x80);
  if (lVar15 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar15 = *(long *)(this + 0x80);
  }
  pfVar18 = (float *)(lVar15 + 0x80);
  fVar23 = *pfVar18;
  if (fVar27 <= fVar23) {
    if (lVar15 != 0) goto joined_r0x0035c014;
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar15 = *(long *)(this + 0x80);
    pfVar18 = (float *)(lVar15 + 0x80);
    if (*pfVar18 < fVar27) goto LAB_0035c018;
LAB_0035c0d4:
    *(undefined4 *)(this + 0x264) = 0;
  }
  else {
    if ((0.0 < *(float *)(lVar15 + 0x8c)) && (*(char *)(lVar15 + 0x90) == '\0')) {
      *(undefined4 *)(this + 0x260) = 0;
    }
joined_r0x0035c014:
    if (fVar27 <= fVar23) goto LAB_0035c0d4;
LAB_0035c018:
    if ((*(float *)(lVar15 + 0x8c) <= 0.0) || (*(char *)(lVar15 + 0x90) == '\0')) goto LAB_0035c0d4;
    fVar23 = *(float *)(this + 0x264) + param_1;
    *(float *)(this + 0x264) = fVar23;
    if (1.0 < fVar23) {
      *(undefined4 *)(this + 0x260) = 0;
    }
  }
  fVar23 = DAT_00687988;
  if (*(int *)(this + 0x250) == 2) {
    *(undefined8 *)(this + 0x250) = 3;
    if (lVar15 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      pfVar18 = (float *)(*(long *)(this + 0x80) + 0x80);
    }
    *pfVar18 = 3.4028235e+38;
    iVar14 = *(int *)(this + 0x250);
    if (iVar14 == 0) goto LAB_0035c138;
LAB_0035c228:
    fVar23 = 0.0;
    if (iVar14 != 3) goto LAB_0035c280;
    if ((((this[0x24c] == (CharControllerComponent)0x0) && (*(int *)(this + 0x260) == 0)) &&
        (*(float *)(this + 0x274) * DAT_00684318 < *(float *)(this + 0x254))) ||
       (*(float *)(this + 0x274) < *(float *)(this + 0x254))) {
      uVar21 = 0;
      *(undefined4 *)(this + 0x250) = 0;
      *(undefined4 *)(this + 600) = 0;
    }
    else {
      uVar21 = 1;
      *(float *)(this + 0x254) = *(float *)(this + 0x254) + param_1;
      fVar23 = *(float *)(this + 0x270) + *(float *)(this + 0x26c);
    }
  }
  else {
    if (*(int *)(this + 0x250) == 1) {
      if (DAT_00687988 < *(float *)(this + 0x254)) {
        *(undefined4 *)(this + 0x250) = 0;
        goto LAB_0035c138;
      }
      if (lVar15 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        lVar15 = *(long *)(this + 0x80);
      }
      fVar24 = *(float *)(lVar15 + 0x84);
      if (fVar23 <= fVar24) {
        if (lVar15 == 0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          fVar24 = *(float *)(*(long *)(this + 0x80) + 0x84);
        }
        if ((fVar24 < 0.5) && (lVar15 = *(long *)(this + 0x288), lVar15 != 0)) {
          lVar16 = *(long *)(this + 0x28);
          if (*(Scene **)(lVar16 + 0x20) != (Scene *)0x0) {
            fVar23 = (float)((ulong)*(undefined8 *)(lVar15 + 0x170) >> 0x20) * 0.5;
            local_a0 = (float)*(undefined8 *)(lVar15 + 0x168) +
                       (float)*(undefined8 *)(lVar15 + 0x170) * 0.5;
            fStack_9c = (float)((ulong)*(undefined8 *)(lVar15 + 0x168) >> 0x20) + fVar23;
            local_a8 = (long *)CONCAT44(fStack_9c,local_a0);
            local_a0 = local_a0 + 0.0;
            fStack_9c = fStack_9c - (fVar23 + 30.0);
            uVar12 = Scene::LineSegmentIntersectsGround
                               (*(Scene **)(lVar16 + 0x20),(LineSegment *)&local_a8,
                                *(float *)(lVar16 + 0x78) + *(float *)(lVar16 + 0xb8),
                                *(float *)(lVar16 + 0x78) + *(float *)(lVar16 + 0xbc),(Vector2 *)0x0
                               );
            if ((uVar12 & 1) != 0) {
              lVar15 = *(long *)(this + 0x80);
              *(undefined4 *)(this + 0x264) = 0;
              goto joined_r0x0035c7a8;
            }
          }
        }
        if ((*(int *)(this + 0x260) != 0) || (*(int *)(this + 0x2d0) != 0)) {
          *(float *)(this + 0x254) = *(float *)(this + 0x254) + param_1;
          iVar14 = *(int *)(this + 0x250);
          goto joined_r0x0035c7d0;
        }
        pCVar11 = *(CharAnimControllerComponent **)(this + 400);
        fVar23 = *(float *)(this + 0x274) * DAT_00683f68;
        *(undefined4 *)(this + 0x270) = 0x42480000;
        *(undefined4 *)(this + 0x250) = 3;
        *(undefined8 *)(this + 0x260) = 1;
        *(float *)(this + 0x254) = fVar23;
        this[0x25c] = (CharControllerComponent)0x0;
        if (pCVar11 == (CharAnimControllerComponent *)0x0) {
          pCVar11 = *(CharAnimControllerComponent **)(this + 0x98);
          if (pCVar11 == (CharAnimControllerComponent *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
            pCVar11 = *(CharAnimControllerComponent **)(this + 0x98);
            if (pCVar11 != (CharAnimControllerComponent *)0x0) goto LAB_0035ce44;
          }
          else {
LAB_0035ce44:
            *(int *)(pCVar11 + 8) = *(int *)(pCVar11 + 8) + 1;
          }
          plVar10 = *(long **)pCVar1;
          *(CharAnimControllerComponent **)pCVar1 = pCVar11;
          if ((plVar10 != (long *)0x0) &&
             (iVar14 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar14, iVar14 == 0)) {
            (**(code **)(*plVar10 + 8))(plVar10);
            pCVar11 = *(CharAnimControllerComponent **)pCVar1;
          }
          if (pCVar11 != (CharAnimControllerComponent *)0x0) goto LAB_0035ce84;
        }
        else {
LAB_0035ce84:
          CharAnimControllerComponent::StartJumping(pCVar11,(bool)(bVar6 ^ 1));
        }
        this_01 = *(SoundEffectComponent **)(this + 0x170);
        if (this_01 == (SoundEffectComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x160),(Component *)this);
          this_01 = *(SoundEffectComponent **)(this + 0x170);
          goto joined_r0x0035cea4;
        }
      }
      else {
        *(undefined4 *)(this + 0x264) = 0;
joined_r0x0035c7a8:
        if (lVar15 == 0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          lVar15 = *(long *)(this + 0x80);
        }
        pCVar11 = *(CharAnimControllerComponent **)(this + 400);
        *(float *)(this + 0x270) = *(float *)(lVar15 + 0xa4) * 0.5;
        *(undefined4 *)(this + 0x250) = 2;
        if (pCVar11 == (CharAnimControllerComponent *)0x0) {
          pCVar11 = *(CharAnimControllerComponent **)(this + 0x98);
          if (pCVar11 == (CharAnimControllerComponent *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
            pCVar11 = *(CharAnimControllerComponent **)(this + 0x98);
            if (pCVar11 != (CharAnimControllerComponent *)0x0) goto LAB_0035c610;
          }
          else {
LAB_0035c610:
            *(int *)(pCVar11 + 8) = *(int *)(pCVar11 + 8) + 1;
          }
          plVar10 = *(long **)pCVar1;
          *(CharAnimControllerComponent **)pCVar1 = pCVar11;
          if ((plVar10 != (long *)0x0) &&
             (iVar14 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar14, iVar14 == 0)) {
            (**(code **)(*plVar10 + 8))(plVar10);
            pCVar11 = *(CharAnimControllerComponent **)pCVar1;
          }
          if (pCVar11 != (CharAnimControllerComponent *)0x0) goto LAB_0035c650;
        }
        else {
LAB_0035c650:
          CharAnimControllerComponent::StartJumping(pCVar11,false);
        }
        this_01 = *(SoundEffectComponent **)(this + 0x158);
        if (this_01 == (SoundEffectComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x148),(Component *)this);
          this_01 = *(SoundEffectComponent **)(this + 0x158);
joined_r0x0035cea4:
          if (this_01 == (SoundEffectComponent *)0x0) goto LAB_0035c220;
        }
      }
      SoundEffectComponent::Play(this_01);
      iVar14 = *(int *)(this + 0x250);
    }
    else {
      *(float *)(this + 600) = *(float *)(this + 600) + param_1;
LAB_0035c220:
      iVar14 = *(int *)(this + 0x250);
    }
joined_r0x0035c7d0:
    if (iVar14 != 0) goto LAB_0035c228;
LAB_0035c138:
    if (this[0x25c] == (CharControllerComponent)0x0) {
      lVar15 = *(long *)(this + 0x80);
      if (lVar15 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        lVar15 = *(long *)(this + 0x80);
      }
      if (DAT_00687988 < *(float *)(lVar15 + 0x80)) {
        if (lVar15 == 0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          lVar15 = *(long *)(this + 0x80);
        }
        if (*(float *)(lVar15 + 0xd8) < 0.0) {
          pCVar11 = *(CharAnimControllerComponent **)pCVar1;
          if (pCVar11 == (CharAnimControllerComponent *)0x0) {
            pCVar11 = *(CharAnimControllerComponent **)(this + 0x98);
            if (pCVar11 == (CharAnimControllerComponent *)0x0) {
              ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
              pCVar11 = *(CharAnimControllerComponent **)(this + 0x98);
              if (pCVar11 != (CharAnimControllerComponent *)0x0) goto LAB_0035c1b4;
            }
            else {
LAB_0035c1b4:
              *(int *)(pCVar11 + 8) = *(int *)(pCVar11 + 8) + 1;
            }
            plVar10 = *(long **)pCVar1;
            *(CharAnimControllerComponent **)pCVar1 = pCVar11;
            if ((plVar10 != (long *)0x0) &&
               (iVar14 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar14, iVar14 == 0)) {
              (**(code **)(*plVar10 + 8))(plVar10);
              pCVar11 = *(CharAnimControllerComponent **)pCVar1;
            }
            if (pCVar11 == (CharAnimControllerComponent *)0x0) goto LAB_0035c280;
          }
          uVar12 = CharAnimControllerComponent::CanStartFalling(pCVar11);
          if ((uVar12 & 1) != 0) {
            pCVar11 = *(CharAnimControllerComponent **)(this + 400);
            this[0x25c] = (CharControllerComponent)0x1;
            if (pCVar11 == (CharAnimControllerComponent *)0x0) {
              pCVar11 = *(CharAnimControllerComponent **)(this + 0x98);
              if (pCVar11 == (CharAnimControllerComponent *)0x0) {
                ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this)
                ;
                pCVar11 = *(CharAnimControllerComponent **)(this + 0x98);
                if (pCVar11 != (CharAnimControllerComponent *)0x0) goto LAB_0035cedc;
              }
              else {
LAB_0035cedc:
                *(int *)(pCVar11 + 8) = *(int *)(pCVar11 + 8) + 1;
              }
              plVar10 = *(long **)pCVar1;
              *(CharAnimControllerComponent **)pCVar1 = pCVar11;
              if ((plVar10 != (long *)0x0) &&
                 (iVar14 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar14, iVar14 == 0)) {
                (**(code **)(*plVar10 + 8))(plVar10);
                pCVar11 = *(CharAnimControllerComponent **)pCVar1;
              }
            }
            CharAnimControllerComponent::StartFalling(pCVar11);
          }
        }
      }
    }
LAB_0035c280:
    fVar23 = 0.0;
    uVar21 = 0;
  }
  if (((this[0x224] != (CharControllerComponent)0x0) &&
      (fVar24 = *(float *)(this + 0x228), *(float *)(this + 0x228) = fVar24 - param_1,
      fVar24 - param_1 < fVar8)) &&
     (this[0x224] = (CharControllerComponent)0x0, *(float *)(this + 0x2f8) <= fVar8)) {
    lVar15 = *(long *)(this + 0x80);
    if (lVar15 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar15 = *(long *)(this + 0x80);
    }
    if ((*(char *)(lVar15 + 0x115) == '\0') && (this[0x1c8] == (CharControllerComponent)0x0)) {
      Swing(this);
    }
  }
  fVar22 = fVar22 * (float)iVar25;
  if (*(SceneObject **)(this + 0x2a8) != (SceneObject *)0x0) {
    *(float *)(this + 0x2b4) = *(float *)(this + 0x2b4) + param_1;
    lVar15 = SceneObject::ComponentWithInterface
                       (*(SceneObject **)(this + 0x2a8),(long)PTR_Interface_007e4ee0);
    if (lVar15 != 0) {
      lVar16 = *(long *)(this + 0x80);
      if (lVar16 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        lVar16 = *(long *)(this + 0x80);
      }
      if ((((fVar27 <= *(float *)(lVar16 + 0x80)) || (*(float *)(lVar16 + 0x8c) <= 0.0)) ||
          (*(char *)(lVar16 + 0x90) != '\0')) || (*(int *)(this + 0x22c) != *(int *)(this + 0x2b0)))
      {
        uVar17 = 0;
        bVar6 = true;
LAB_0035c4c4:
        *(undefined1 *)(lVar15 + 0xf4) = uVar17;
      }
      else {
        if (this[700] == (CharControllerComponent)0x0) {
          plVar10 = *(long **)(this + 0x110);
          this[700] = (CharControllerComponent)0x1;
          if (plVar10 == (long *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x100),(Component *)this);
            plVar10 = *(long **)(this + 0x110);
            if (plVar10 != (long *)0x0) goto LAB_0035c384;
          }
          else {
LAB_0035c384:
            lVar16 = (**(code **)(*plVar10 + 0x108))();
            *(undefined4 *)(lVar16 + 0xc) = 0;
            plVar10 = *(long **)(this + 0x98);
            if (plVar10 == (long *)0x0) {
              ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
              plVar10 = *(long **)(this + 0x98);
            }
            plVar13 = *(long **)(this + 0x110);
            pcVar20 = *(code **)(*plVar10 + 0x108);
            if (plVar13 == (long *)0x0) {
              ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x100),(Component *)this);
              plVar13 = *(long **)(this + 0x110);
            }
            local_a8 = (long *)(**(code **)(*plVar13 + 0x108))();
            if (local_a8 != (long *)0x0) {
              *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
            }
            (*pcVar20)(fVar27,plVar10,&local_a8);
            if ((local_a8 != (long *)0x0) &&
               (iVar25 = (int)local_a8[1] + -1, *(int *)(local_a8 + 1) = iVar25, iVar25 == 0)) {
              (**(code **)(*local_a8 + 8))();
            }
          }
          pSVar9 = *(SwingableWeaponControllerComponent **)(this + 0x1c0);
          this[0x1c8] = (CharControllerComponent)0x1;
          if (pSVar9 == (SwingableWeaponControllerComponent *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x1b0),(Component *)this);
            pSVar9 = *(SwingableWeaponControllerComponent **)(this + 0x1c0);
            if (pSVar9 != (SwingableWeaponControllerComponent *)0x0) goto LAB_0035c444;
          }
          else {
LAB_0035c444:
            SwingableWeaponControllerComponent::SetWeaponHidden(pSVar9,true);
          }
          pSVar9 = *(SwingableWeaponControllerComponent **)(this + 0x1a8);
          if (pSVar9 == (SwingableWeaponControllerComponent *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x198),(Component *)this);
            pSVar9 = *(SwingableWeaponControllerComponent **)(this + 0x1a8);
            if (pSVar9 == (SwingableWeaponControllerComponent *)0x0) goto LAB_0035c470;
          }
          SwingableWeaponControllerComponent::SetWeaponHidden(pSVar9,true);
        }
LAB_0035c470:
        fVar24 = *(float *)(this + 0x2b8);
        *(float *)(this + 0x2b8) = fVar24 + param_1;
        if (fVar27 < fVar24 + param_1) {
          lVar16 = *(long *)(this + 0x80);
          if (lVar16 == 0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
            lVar16 = *(long *)(this + 0x80);
          }
          fVar27 = DAT_00684314;
          bVar6 = false;
          *(float *)(lVar16 + 0xd4) = fVar22;
          uVar17 = 1;
          *(float *)(lVar15 + 0xf8) = fVar22 * fVar27;
          goto LAB_0035c4c4;
        }
        bVar6 = false;
      }
      if (*(float *)(this + 0x2b4) <= 0.25) {
        if (!bVar6) goto LAB_0035c564;
        CVar3 = this[700];
      }
      else {
        *(undefined1 *)(lVar15 + 0xf4) = 0;
        plVar10 = *(long **)(this + 0x2a8);
        *(undefined8 *)(this + 0x2a8) = 0;
        if ((plVar10 != (long *)0x0) &&
           (iVar25 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar25, iVar25 == 0)) {
          (**(code **)(*plVar10 + 8))();
        }
        *(undefined4 *)(this + 0x2b8) = 0;
        CVar3 = this[700];
      }
      if ((CVar3 != (CharControllerComponent)0x0) &&
         ((this[700] = (CharControllerComponent)0x0, *(long *)(this + 0x110) != 0 ||
          (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x100),(Component *)this),
          *(long *)(this + 0x110) != 0)))) {
        if (*(long *)(this + 0x98) == 0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
        }
        CharAnimControllerComponent::BlendToMoveAnimation(_DAT_00683c38);
      }
    }
  }
LAB_0035c564:
  lVar15 = *(long *)(this + 0x80);
  if (lVar15 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar15 = *(long *)(this + 0x80);
    *(float *)(lVar15 + 0xb0) = fVar22;
    if (lVar15 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar15 = *(long *)(this + 0x80);
      *(float *)(lVar15 + 0xb4) = fVar28;
      if (lVar15 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        lVar15 = *(long *)(this + 0x80);
        *(float *)(lVar15 + 0xb8) = fVar23;
        if (lVar15 == 0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          lVar15 = *(long *)(this + 0x80);
        }
      }
      else {
        *(float *)(lVar15 + 0xb8) = fVar23;
      }
    }
    else {
      *(float *)(lVar15 + 0xb4) = fVar28;
      *(float *)(lVar15 + 0xb8) = fVar23;
    }
  }
  else {
    *(float *)(lVar15 + 0xb0) = fVar22;
    *(float *)(lVar15 + 0xb4) = fVar28;
    *(float *)(lVar15 + 0xb8) = fVar23;
  }
  *(undefined1 *)(lVar15 + 0xbc) = uVar21;
  lVar15 = *(long *)pCVar1;
  if (lVar15 == 0) {
    lVar15 = *(long *)(this + 0x98);
    if (lVar15 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      lVar15 = *(long *)(this + 0x98);
      if (lVar15 != 0) goto LAB_0035c88c;
    }
    else {
LAB_0035c88c:
      *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    }
    plVar10 = *(long **)pCVar1;
    *(long *)pCVar1 = lVar15;
    if ((plVar10 != (long *)0x0) &&
       (iVar25 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar25, iVar25 == 0)) {
      (**(code **)(*plVar10 + 8))();
      lVar15 = *(long *)pCVar1;
    }
    if (lVar15 != 0) goto LAB_0035c8c8;
  }
  else {
LAB_0035c8c8:
    lVar15 = *(long *)(lVar15 + 0x170);
    if ((lVar15 == 0) ||
       ((*(float *)(lVar15 + 0x28) * DAT_0068493c - *(float *)(lVar15 + 0xc)) *
        *(float *)(lVar15 + 0x30) * *(float *)(lVar15 + 0x34) <= fVar8)) {
      plVar10 = *(long **)(this + 0x80);
      if (plVar10 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        plVar10 = *(long **)(this + 0x80);
      }
      (**(code **)(*plVar10 + 200))(uVar26);
      plVar10 = *(long **)pCVar1;
      if (plVar10 == (long *)0x0) {
        plVar10 = *(long **)(this + 0x98);
        if (plVar10 == (long *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
          plVar10 = *(long **)(this + 0x98);
          if (plVar10 != (long *)0x0) goto LAB_0035cb78;
        }
        else {
LAB_0035cb78:
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        }
        plVar13 = *(long **)pCVar1;
        *(long **)pCVar1 = plVar10;
        if ((plVar13 != (long *)0x0) &&
           (iVar25 = (int)plVar13[1] + -1, *(int *)(plVar13 + 1) = iVar25, iVar25 == 0)) {
          (**(code **)(*plVar13 + 8))(plVar13);
          plVar10 = *(long **)pCVar1;
        }
      }
      (**(code **)(*plVar10 + 200))(uVar26);
      plVar10 = *(long **)(this + 0x1a8);
      if (plVar10 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x198),(Component *)this);
        plVar10 = *(long **)(this + 0x1a8);
        if (plVar10 != (long *)0x0) goto LAB_0035ca78;
      }
      else {
LAB_0035ca78:
        (**(code **)(*plVar10 + 200))(uVar26);
      }
      plVar10 = *(long **)(this + 0x1c0);
      if (plVar10 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x1b0),(Component *)this);
        plVar10 = *(long **)(this + 0x1c0);
        if (plVar10 == (long *)0x0) goto LAB_0035cab4;
      }
      (**(code **)(*plVar10 + 200))(uVar26);
    }
    else {
      fVar27 = param_1 / 5.0;
      iVar25 = 5;
      do {
        plVar10 = *(long **)(this + 0x80);
        if (plVar10 == (long *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          plVar10 = *(long **)(this + 0x80);
        }
        (**(code **)(*plVar10 + 200))(fVar27);
        plVar10 = *(long **)pCVar1;
        if (plVar10 == (long *)0x0) {
          plVar10 = *(long **)(this + 0x98);
          if (plVar10 == (long *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
            plVar10 = *(long **)(this + 0x98);
            if (plVar10 != (long *)0x0) goto LAB_0035c938;
          }
          else {
LAB_0035c938:
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          }
          plVar13 = *(long **)pCVar1;
          *(long **)pCVar1 = plVar10;
          if ((plVar13 != (long *)0x0) &&
             (iVar14 = (int)plVar13[1] + -1, *(int *)(plVar13 + 1) = iVar14, iVar14 == 0)) {
            (**(code **)(*plVar13 + 8))(plVar13);
            plVar10 = *(long **)pCVar1;
          }
        }
        (**(code **)(*plVar10 + 200))(fVar27);
        plVar10 = *(long **)(this + 0x1a8);
        if (plVar10 == (long *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x198),(Component *)this);
          plVar10 = *(long **)(this + 0x1a8);
          if (plVar10 != (long *)0x0) goto LAB_0035c9d4;
        }
        else {
LAB_0035c9d4:
          (**(code **)(*plVar10 + 200))(fVar27);
        }
        plVar10 = *(long **)(this + 0x1c0);
        if (plVar10 == (long *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x1b0),(Component *)this);
          plVar10 = *(long **)(this + 0x1c0);
          if (plVar10 != (long *)0x0) goto LAB_0035ca00;
        }
        else {
LAB_0035ca00:
          (**(code **)(*plVar10 + 200))(fVar27);
        }
        iVar25 = iVar25 + -1;
      } while (iVar25 != 0);
    }
  }
LAB_0035cab4:
  if (*(long *)(this + 0x298) == 0) {
LAB_0035cd7c:
    CVar3 = this[0x2bd];
  }
  else {
    if (this[0x2bd] == (CharControllerComponent)0x0) {
LAB_0035cd2c:
      if (*(float *)(this + 0x2a0) <= DAT_0068798c) {
        *(float *)(this + 0x2a0) = *(float *)(this + 0x2a0) + param_1;
      }
      else {
        plVar10 = *(long **)(this + 0x298);
        *(undefined8 *)(this + 0x298) = 0;
        if ((plVar10 != (long *)0x0) &&
           (iVar25 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar25, iVar25 == 0)) {
          (**(code **)(*plVar10 + 8))();
          CVar3 = this[0x2bd];
          goto joined_r0x0035cd6c;
        }
      }
      goto LAB_0035cd7c;
    }
    if (*(long *)(*(long *)(this + 0x298) + 0x20) == 0) {
      DropQuickly(this);
    }
    iVar25 = *(int *)(this + 0x2d0);
    if (iVar25 == 4) {
      if (0.0 < *(float *)(this + 0x2d4)) {
        fVar27 = *(float *)(this + 0x2d4) - param_1 / *(float *)(this + 0x2d8);
        *(float *)(this + 0x2d4) = fVar27;
        if (*(int *)(this + 0x250) != 0) {
          this[0x24c] = (CharControllerComponent)0x0;
        }
        if (fVar27 <= DAT_00684430) {
          lVar15 = *(long *)(this + 0x80);
          lVar16 = *(long *)(this + 0x298);
          if (lVar15 == 0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
            lVar15 = *(long *)(this + 0x80);
          }
          fVar27 = DAT_0068797c;
          iVar25 = *(int *)(lVar15 + 0x70);
          *(undefined4 *)(lVar16 + 0x6c) = 0x438c0000;
          *(float *)(lVar16 + 0x68) = (float)iVar25 * fVar27;
          if (this[0x2bd] != (CharControllerComponent)0x0) {
            SceneObject::HandleMessage(*(SceneObject **)(this + 0x298),0x11,(void *)0x0);
            SceneObject::RemoveChildObject
                      (*(SceneObject **)(this + 0x28),*(SceneObject **)(this + 0x298),false);
            plVar10 = *(long **)(this + 0x298);
            *(undefined8 *)(this + 0x298) = 0;
            if ((plVar10 != (long *)0x0) &&
               (iVar25 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar25, iVar25 == 0)) {
              (**(code **)(*plVar10 + 8))();
            }
            this[0x2bd] = (CharControllerComponent)0x0;
            *(undefined4 *)(this + 0x2d0) = 0;
          }
          *(undefined4 *)(this + 0x2d0) = 4;
        }
      }
LAB_0035cd10:
      CVar3 = this[0x2bd];
    }
    else {
      if (iVar25 == 3) {
        if ((0.0 < *(float *)(this + 0x2d4)) &&
           (fVar27 = *(float *)(this + 0x2d4) - param_1 / *(float *)(this + 0x2d8),
           *(float *)(this + 0x2d4) = fVar27, fVar27 <= 0.0)) {
          *(undefined4 *)(this + 0x2d4) = 0;
          if (this[0x2bd] != (CharControllerComponent)0x0) {
            SceneObject::HandleMessage(*(SceneObject **)(this + 0x298),0x11,(void *)0x0);
            SceneObject::RemoveChildObject
                      (*(SceneObject **)(this + 0x28),*(SceneObject **)(this + 0x298),false);
            plVar10 = *(long **)(this + 0x298);
            *(undefined8 *)(this + 0x298) = 0;
            if ((plVar10 != (long *)0x0) &&
               (iVar25 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar25, iVar25 == 0)) {
              (**(code **)(*plVar10 + 8))();
            }
            this[0x2bd] = (CharControllerComponent)0x0;
            *(undefined4 *)(this + 0x2d0) = 0;
          }
          goto LAB_0035cd2c;
        }
        goto LAB_0035cd10;
      }
      if (((iVar25 != 1) || (1.0 <= *(float *)(this + 0x2d4))) ||
         (fVar27 = *(float *)(this + 0x2d4) + param_1 / *(float *)(this + 0x2d8),
         *(float *)(this + 0x2d4) = fVar27, fVar27 < 1.0)) goto LAB_0035cd10;
      lVar15 = *(long *)(this + 0x80);
      *(undefined8 *)(this + 0x2d0) = 0x3f80000000000002;
      if (lVar15 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        lVar15 = *(long *)(this + 0x80);
      }
      *(undefined1 *)(lVar15 + 0x114) = 0;
      SceneObject::HandleMessage(*(SceneObject **)(this + 0x28),0x12,*(void **)(this + 0x298));
      CVar3 = this[0x2bd];
    }
    if (CVar3 == (CharControllerComponent)0x0) goto LAB_0035cd2c;
    UpdatePickupObjectPosition(this);
    CVar3 = this[0x2bd];
  }
joined_r0x0035cd6c:
  if (((CVar3 == (CharControllerComponent)0x0) && (*(int *)(this + 0x2d0) == 4)) &&
     (fVar27 = *(float *)(this + 0x2d4) - param_1 / *(float *)(this + 0x2d8),
     *(float *)(this + 0x2d4) = fVar27, fVar27 <= 0.0)) {
    *(undefined4 *)(this + 0x2d0) = 0;
  }
LAB_0035cdb0:
  if (*(long *)(lVar5 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


