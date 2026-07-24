/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b1a84
 * Function: Caver::BushControllerComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(BushControllerComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::BushControllerComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::BushControllerComponent::HandleMessage
          (BushControllerComponent *this,int param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  SceneObject *pSVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  ShatterComponent *this_00;
  SoundEffectComponent *pSVar9;
  GameEvent *pGVar10;
  ItemDropComponent *this_01;
  ModelComponent *pMVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  string *psVar15;
  Component *pCVar16;
  float fVar17;
  float fVar18;
  long *local_78;
  undefined4 local_70;
  undefined1 auStack_68 [8];
  SceneObject *local_60;
  undefined1 auStack_58 [8];
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((param_1 != 7) || (this[0xb8] != (BushControllerComponent)0x0)) goto LAB_003b1abc;
  lVar14 = *(long *)((long)param_2 + 8);
  if (*(char *)(lVar14 + 0x17d) == '\0') {
    if (*(char *)(lVar14 + 0x17b) != '\0') {
      plVar7 = *(long **)(this + 0x80);
      if (plVar7 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        plVar7 = *(long **)(this + 0x80);
      }
      lVar8 = (**(code **)(*plVar7 + 0x108))();
      if (((*(char *)(lVar8 + 0x2c) == '\0') &&
          (*(float *)(lVar8 + 0x28) + DAT_00689310 < *(float *)(lVar8 + 0xc))) &&
         (fVar17 = *(float *)(*(long *)(lVar14 + 0x28) + 0x68),
         fVar18 = *(float *)(*(long *)(lVar14 + 0x28) + 0x6c),
         _DAT_00689b20 < fVar17 * fVar17 + fVar18 * fVar18)) {
        plVar7 = *(long **)(this + 0x80);
        if (plVar7 == (long *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          plVar7 = *(long **)(this + 0x80);
        }
        lVar14 = (**(code **)(*plVar7 + 0x108))();
        *(undefined4 *)(lVar14 + 0xc) = 0;
        pSVar9 = *(SoundEffectComponent **)(this + 0x98);
        if (pSVar9 == (SoundEffectComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
          pSVar9 = *(SoundEffectComponent **)(this + 0x98);
          if (pSVar9 == (SoundEffectComponent *)0x0) goto LAB_003b1abc;
        }
        SoundEffectComponent::Play(pSVar9);
      }
    }
    goto LAB_003b1abc;
  }
  lVar14 = SceneObject::ComponentWithInterface
                     (*(SceneObject **)(lVar14 + 0x28),(long)PTR_Interface_007e6cd0);
  if ((lVar14 == 0) || (*(int *)(lVar14 + 0xb4) == 0)) goto LAB_003b1abc;
  pSVar5 = operator_new(0x128);
  SceneObject::SceneObject(pSVar5);
  *(int *)(pSVar5 + 8) = *(int *)(pSVar5 + 8) + 1;
  psVar15 = *(string **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0xa0);
  local_60 = pSVar5;
  FUN_00666bb8(&local_50,"effect_shatter",auStack_68);
  ObjectLibrary::TemplateForName(psVar15,SUB81(&local_50,0));
  SceneObject::InitWithTemplate(pSVar5,(intrusive_ptr *)&local_78);
  if ((local_78 != (long *)0x0) &&
     (iVar13 = (int)local_78[1] + -1, *(int *)(local_78 + 1) = iVar13, iVar13 == 0)) {
    (**(code **)(*local_78 + 8))();
  }
  puVar4 = PTR_DAT_007e5de8;
  puVar6 = (undefined *)(CONCAT44(fStack_4c,local_50) + -0x18);
  if (puVar6 != PTR_DAT_007e5de8) {
    piVar12 = (int *)(CONCAT44(fStack_4c,local_50) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar2) {
          *piVar12 = iVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete(puVar6);
    }
  }
  pSVar5 = local_60;
  local_78 = *(long **)(*(long *)(this + 0x28) + 0x70);
  local_70 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
  Vector2::Vector2((Vector2 *)&local_50,(Vector3 *)&local_78);
  if ((DAT_00683488 < ABS(local_50 - *(float *)(pSVar5 + 0x70))) ||
     (DAT_00683488 < ABS(fStack_4c - *(float *)(pSVar5 + 0x74)))) {
    *(float *)(pSVar5 + 0x70) = local_50;
    *(float *)(pSVar5 + 0x74) = fStack_4c;
    if (pSVar5[0xb4] == (SceneObject)0x0) {
      SceneObject::RegisterForWorldBoundsUpdate(pSVar5);
      pSVar5[0xb4] = (SceneObject)0x1;
    }
  }
  *(undefined4 *)(pSVar5 + 0x78) = local_70;
  (**(code **)(**(long **)(*(long *)(this + 0x28) + 0x20) + 0x28))
            (*(long **)(*(long *)(this + 0x28) + 0x20),&local_60);
  this_00 = (ShatterComponent *)
            SceneObject::ComponentWithInterface(local_60,(long)PTR_Interface_007e7598);
  pCVar16 = *(Component **)(this + 0x80);
  if (pCVar16 == (Component *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    pCVar16 = *(Component **)(this + 0x80);
  }
  pMVar11 = *(ModelComponent **)(pCVar16 + 0x80);
  if (pMVar11 == (ModelComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar16 + 0x70),pCVar16);
    pMVar11 = *(ModelComponent **)(pCVar16 + 0x80);
  }
  ShatterComponent::ShatterModel(this_00,pMVar11,true);
  pCVar16 = *(Component **)(this + 0x80);
  if (pCVar16 == (Component *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    pCVar16 = *(Component **)(this + 0x80);
  }
  lVar14 = *(long *)(pCVar16 + 0x80);
  if (lVar14 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar16 + 0x70),pCVar16);
    lVar14 = *(long *)(pCVar16 + 0x80);
  }
  *(undefined1 *)(lVar14 + 0x134) = 1;
  pSVar9 = *(SoundEffectComponent **)(this + 0xb0);
  if (pSVar9 == (SoundEffectComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xa0),(Component *)this);
    pSVar9 = *(SoundEffectComponent **)(this + 0xb0);
    if (pSVar9 != (SoundEffectComponent *)0x0) goto LAB_003b1dc0;
  }
  else {
LAB_003b1dc0:
    SoundEffectComponent::Play(pSVar9);
  }
  this[0xb8] = (BushControllerComponent)0x1;
  FUN_00666bb8(&local_78,"bushes",auStack_58);
  pGVar10 = (GameEvent *)GameEvent::NewCounterEvent((string *)&local_78,1);
  GameEvent::SendEvent(pGVar10);
  if (local_78 + -3 != (long *)puVar4) {
    plVar7 = local_78 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = (int)*plVar7;
      *(int *)plVar7 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = (int)*plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete(local_78 + -3);
    }
  }
  this_01 = (ItemDropComponent *)
            SceneObject::ComponentWithInterface
                      (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e60a0);
  if (this_01 == (ItemDropComponent *)0x0) {
    this_01 = operator_new(0xb0);
    ItemDropComponent::ItemDropComponent(this_01);
    this_01[0x71] = (ItemDropComponent)0x1;
    SceneObject::AddComponent(*(SceneObject **)(this + 0x28),(Component *)this_01);
  }
  ItemDropComponent::Trigger(this_01);
  if ((local_60 != (SceneObject *)0x0) &&
     (iVar13 = *(int *)(local_60 + 8), *(int *)(local_60 + 8) = iVar13 + -1, iVar13 + -1 == 0)) {
    (**(code **)(*(long *)local_60 + 8))();
  }
LAB_003b1abc:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


