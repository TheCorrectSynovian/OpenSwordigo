/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003556fc
 * Function: Caver::BreakableObjectComponent::Break
 * Signature: undefined __thiscall Break(BreakableObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BreakableObjectComponent::Break() */

void __thiscall Caver::BreakableObjectComponent::Break(BreakableObjectComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  SceneObject *pSVar5;
  undefined *puVar6;
  ShatterComponent *this_00;
  ModelComponent *pMVar7;
  SoundEffectComponent *this_01;
  ItemDropComponent *this_02;
  long lVar8;
  int *piVar9;
  int iVar10;
  string *psVar11;
  ProgramState *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [8];
  SceneObject *local_50 [2];
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (this[0x70] == (BreakableObjectComponent)0x0) {
    this[0x70] = (BreakableObjectComponent)0x1;
    pSVar5 = operator_new(0x128);
    SceneObject::SceneObject(pSVar5);
    *(int *)(pSVar5 + 8) = *(int *)(pSVar5 + 8) + 1;
    psVar11 = *(string **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0xa0);
    local_50[0] = pSVar5;
    FUN_00666bb8(&local_40,"effect_shatter",auStack_58);
    ObjectLibrary::TemplateForName(psVar11,SUB81(&local_40,0));
    SceneObject::InitWithTemplate(pSVar5,(intrusive_ptr *)&local_68);
    if ((local_68 != (ProgramState *)0x0) &&
       (iVar10 = *(int *)(local_68 + 8), *(int *)(local_68 + 8) = iVar10 + -1, iVar10 + -1 == 0)) {
      (**(code **)(*(long *)local_68 + 8))();
    }
    puVar6 = (undefined *)(CONCAT44(fStack_3c,local_40) + -0x18);
    if (puVar6 != PTR_DAT_007e5de8) {
      piVar9 = (int *)(CONCAT44(fStack_3c,local_40) + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar9;
        *piVar9 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = iVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete(puVar6);
      }
    }
    pSVar5 = local_50[0];
    local_68 = *(ProgramState **)(*(long *)(this + 0x28) + 0x70);
    local_60 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
    Vector2::Vector2((Vector2 *)&local_40,(Vector3 *)&local_68);
    if ((DAT_00683488 < ABS(local_40 - *(float *)(pSVar5 + 0x70))) ||
       (DAT_00683488 < ABS(fStack_3c - *(float *)(pSVar5 + 0x74)))) {
      *(float *)(pSVar5 + 0x70) = local_40;
      *(float *)(pSVar5 + 0x74) = fStack_3c;
      if (pSVar5[0xb4] == (SceneObject)0x0) {
        SceneObject::RegisterForWorldBoundsUpdate(pSVar5);
        pSVar5[0xb4] = (SceneObject)0x1;
      }
    }
    *(undefined4 *)(pSVar5 + 0x78) = local_60;
    (**(code **)(**(long **)(*(long *)(this + 0x28) + 0x20) + 0x28))
              (*(long **)(*(long *)(this + 0x28) + 0x20),local_50);
    this_00 = (ShatterComponent *)
              SceneObject::ComponentWithInterface(local_50[0],(long)PTR_Interface_007e7598);
    pMVar7 = (ModelComponent *)
             SceneObject::ComponentWithInterface
                       (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e7860);
    ShatterComponent::ShatterModel(this_00,pMVar7,true);
    this_01 = (SoundEffectComponent *)
              SceneObject::ComponentWithInterface
                        (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e7968);
    if (this_01 != (SoundEffectComponent *)0x0) {
      SoundEffectComponent::Play(this_01);
    }
    if (*(long *)(this + 0x98) != 0) {
      Component::NewProgramStateForProgram((Program *)this);
      if (local_68 != (ProgramState *)0x0) {
        SceneObjectLib::PushSceneObject(local_68,*(SceneObject **)(this + 0x28));
        ProgramState::Execute(local_68,1);
      }
      plVar4 = (long *)CONCAT44(uStack_5c,local_60);
      if ((plVar4 != (long *)0x0) && (lVar8 = plVar4[1], plVar4[1] = lVar8 + -1, lVar8 + -1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar8 = plVar4[2];
        plVar4[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
    }
    this_02 = (ItemDropComponent *)
              SceneObject::ComponentWithInterface
                        (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e60a0);
    if (this_02 == (ItemDropComponent *)0x0) {
      this_02 = operator_new(0xb0);
      ItemDropComponent::ItemDropComponent(this_02);
      this_02[0x71] = (ItemDropComponent)0x1;
      SceneObject::AddComponent(*(SceneObject **)(this + 0x28),(Component *)this_02);
    }
    ItemDropComponent::Trigger(this_02);
    *(undefined1 *)(*(long *)(this + 0x28) + 0xe8) = 1;
    if ((local_50[0] != (SceneObject *)0x0) &&
       (iVar10 = *(int *)(local_50[0] + 8), *(int *)(local_50[0] + 8) = iVar10 + -1,
       iVar10 + -1 == 0)) {
      (**(code **)(*(long *)local_50[0] + 8))();
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


