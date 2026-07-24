/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039e128
 * Function: Caver::SkellyMonsterControllerComponent::Update
 * Signature: undefined __thiscall Update(SkellyMonsterControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SkellyMonsterControllerComponent::Update(float) */

void __thiscall
Caver::SkellyMonsterControllerComponent::Update
          (SkellyMonsterControllerComponent *this,float param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  Vector2 *pVVar7;
  ulong uVar8;
  CharControllerComponent *pCVar9;
  EntityComponent *this_00;
  long *plVar10;
  SkellyMonsterControllerComponent SVar11;
  int iVar12;
  long lVar13;
  Component *pCVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((*(long *)(this + 0x80) == 0) &&
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this),
     *(long *)(this + 0x80) == 0)) {
    return;
  }
  if ((*(long *)(this + 0xe0) == 0) &&
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this),
     *(long *)(this + 0xe0) == 0)) {
    return;
  }
  lVar6 = MonsterControllerComponent::FindNearestEnemy((MonsterControllerComponent *)this);
  SVar11 = this[0x110];
  if ((lVar6 != 0) && (SVar11 != (SkellyMonsterControllerComponent)0x0)) {
    pVVar7 = *(Vector2 **)(this + 0xf8);
    if (pVVar7 == (Vector2 *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
      pVVar7 = *(Vector2 **)(this + 0xf8);
      if (pVVar7 != (Vector2 *)0x0) goto LAB_0039e1b4;
    }
    else {
LAB_0039e1b4:
      uVar8 = ShapeComponent::ContainsWorldPoint(pVVar7);
      if ((uVar8 & 1) != 0) {
        pCVar9 = *(CharControllerComponent **)(this + 0xe0);
        this[0x110] = (SkellyMonsterControllerComponent)0x0;
        if (pCVar9 == (CharControllerComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
          pCVar9 = *(CharControllerComponent **)(this + 0xe0);
        }
        CharControllerComponent::StartJumping(pCVar9);
      }
    }
    SVar11 = this[0x110];
  }
  if (SVar11 != (SkellyMonsterControllerComponent)0x0) {
    return;
  }
  if (lVar6 == 0) goto LAB_0039e564;
  fVar16 = *(float *)(lVar6 + 0x74);
  lVar13 = *(long *)(this + 0x80);
  fVar17 = *(float *)(*(long *)(this + 0x28) + 0x74);
  fVar18 = *(float *)(lVar6 + 0x70) - *(float *)(*(long *)(this + 0x28) + 0x70);
  iVar5 = -1;
  if (0.0 < fVar18) {
    iVar5 = 1;
  }
  if (lVar13 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar13 = *(long *)(this + 0x80);
  }
  if (*(int *)(lVar13 + 0x70) != iVar5) {
    pCVar14 = *(Component **)(this + 0xe0);
    if (pCVar14 == (Component *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
      pCVar14 = *(Component **)(this + 0xe0);
    }
    lVar6 = *(long *)(pCVar14 + 400);
    if (lVar6 == 0) {
      lVar6 = *(long *)(pCVar14 + 0x98);
      if (lVar6 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar14 + 0x88),pCVar14);
        lVar6 = *(long *)(pCVar14 + 0x98);
        if (lVar6 != 0) goto LAB_0039e4d4;
      }
      else {
LAB_0039e4d4:
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      }
      plVar10 = *(long **)(pCVar14 + 400);
      *(long *)(pCVar14 + 400) = lVar6;
      if ((plVar10 == (long *)0x0) ||
         (iVar12 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar12, iVar12 != 0))
      goto LAB_0039e24c;
      (**(code **)(*plVar10 + 8))();
      lVar6 = *(long *)(*(long *)(pCVar14 + 400) + 0x170);
    }
    else {
LAB_0039e24c:
      lVar6 = *(long *)(lVar6 + 0x170);
    }
    if ((lVar6 == 0) ||
       ((*(float *)(lVar6 + 0x28) * DAT_0068493c - *(float *)(lVar6 + 0xc)) *
        *(float *)(lVar6 + 0x30) * *(float *)(lVar6 + 0x34) <= DAT_00683944)) {
      this_00 = *(EntityComponent **)(this + 0x80);
      if (this_00 == (EntityComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        this_00 = *(EntityComponent **)(this + 0x80);
      }
      EntityComponent::SetFacingDirection(this_00,iVar5);
    }
  }
  pCVar14 = *(Component **)(this + 0xe0);
  if (pCVar14 == (Component *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    pCVar14 = *(Component **)(this + 0xe0);
  }
  iVar12 = *(int *)(pCVar14 + 0x230);
  fVar18 = ABS(fVar18);
  if (DAT_00688634 <= fVar18) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (iVar12 != 0) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar18) && !NAN(DAT_00687990)) {
        bVar2 = fVar18 < DAT_00687990;
        bVar3 = fVar18 == DAT_00687990;
        bVar4 = false;
      }
    }
    iVar1 = iVar5;
    if (bVar3 || bVar2 != bVar4) {
      iVar1 = iVar12;
    }
  }
  else {
    iVar1 = -iVar5;
  }
  if (pCVar14 == (Component *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    pCVar14 = *(Component **)(this + 0xe0);
    iVar12 = *(int *)(pCVar14 + 0x230);
  }
  if (iVar1 != iVar12) {
    if (pCVar14 == (Component *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
      pCVar14 = *(Component **)(this + 0xe0);
    }
    CharControllerComponent::StartMovingToDirection((CharControllerComponent *)pCVar14,iVar1);
    pCVar14 = *(Component **)(this + 0xe0);
  }
  if (pCVar14 == (Component *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    pCVar14 = *(Component **)(this + 0xe0);
  }
  fVar15 = 1.0;
  if (iVar1 != iVar5) {
    fVar15 = DAT_00684314;
  }
  *(float *)(pCVar14 + 0x268) = fVar15 * *(float *)(this + 0x120);
  if (pCVar14 == (Component *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    pCVar14 = *(Component **)(this + 0xe0);
    lVar6 = *(long *)(pCVar14 + 400);
    if (lVar6 == 0) goto LAB_0039e348;
LAB_0039e3fc:
    lVar6 = *(long *)(lVar6 + 0x170);
  }
  else {
    lVar6 = *(long *)(pCVar14 + 400);
    if (lVar6 != 0) goto LAB_0039e3fc;
LAB_0039e348:
    lVar6 = *(long *)(pCVar14 + 0x98);
    if (lVar6 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar14 + 0x88),pCVar14);
      lVar6 = *(long *)(pCVar14 + 0x98);
      if (lVar6 != 0) goto LAB_0039e364;
    }
    else {
LAB_0039e364:
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    }
    plVar10 = *(long **)(pCVar14 + 400);
    *(long *)(pCVar14 + 400) = lVar6;
    if ((plVar10 == (long *)0x0) ||
       (iVar5 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar5, iVar5 != 0)) goto LAB_0039e3fc;
    (**(code **)(*plVar10 + 8))();
    lVar6 = *(long *)(*(long *)(pCVar14 + 400) + 0x170);
  }
  if (((lVar6 == 0) ||
      ((*(float *)(lVar6 + 0x28) * DAT_0068493c - *(float *)(lVar6 + 0xc)) *
       *(float *)(lVar6 + 0x30) * *(float *)(lVar6 + 0x34) <= DAT_00683944)) &&
     (fVar15 = *(float *)(this + 0x118), *(float *)(this + 0x118) = fVar15 - param_1,
     fVar15 - param_1 <= 0.0)) {
    if (((fVar18 < DAT_0068797c) && (fVar16 = fVar16 - fVar17, DAT_00689378 < fVar16)) &&
       (fVar16 < _DAT_0068937c)) {
      pCVar9 = *(CharControllerComponent **)(this + 0xe0);
      if (pCVar9 == (CharControllerComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
        pCVar9 = *(CharControllerComponent **)(this + 0xe0);
      }
      CharControllerComponent::Swing(pCVar9);
    }
    iVar5 = *(int *)(this + 0x11c);
    iVar12 = iVar5 + -1;
    *(int *)(this + 0x11c) = iVar12;
    fVar16 = _DAT_00684434;
    if (iVar12 == 0 || iVar5 < 1) {
      iVar5 = fastrandom();
      *(int *)(this + 0x11c) = iVar5 % 2 + 1;
      iVar5 = fastrandom();
      fVar16 = ((float)iVar5 / (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68) * 0.5 + 1.5;
    }
    *(float *)(this + 0x118) = fVar16;
  }
LAB_0039e564:
  fVar16 = *(float *)(this + 0x114);
  if (_DAT_0068782c < fVar16) {
    iVar5 = fastrandom();
    fVar16 = ((float)iVar5 / (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68) * 5.0 + 1.0;
    *(float *)(this + 0x114) = fVar16;
  }
  *(float *)(this + 0x114) = fVar16 - param_1;
  if (fVar16 - param_1 <= 0.0) {
    pCVar9 = *(CharControllerComponent **)(this + 0xe0);
    if (pCVar9 == (CharControllerComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
      pCVar9 = *(CharControllerComponent **)(this + 0xe0);
    }
    CharControllerComponent::StartJumping(pCVar9);
    iVar5 = fastrandom();
    *(float *)(this + 0x114) =
         ((float)iVar5 / (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68) * 5.0 + 1.0;
  }
  return;
}


