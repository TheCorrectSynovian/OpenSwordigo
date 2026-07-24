/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039a028
 * Function: Caver::MonsterDeathControllerComponent::KillMonster
 * Signature: undefined __thiscall KillMonster(MonsterDeathControllerComponent * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject>
   const&) */

void __thiscall
Caver::MonsterDeathControllerComponent::KillMonster
          (MonsterDeathControllerComponent *this,intrusive_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  long *plVar5;
  SceneObject *pSVar6;
  ShatterComponent *this_00;
  ModelComponent *pMVar7;
  long lVar8;
  code *pcVar9;
  int *piVar10;
  int iVar11;
  string *psVar12;
  float fVar13;
  undefined1 auStack_70 [8];
  long local_68;
  SceneObject *local_60;
  undefined8 local_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar8 = *(long *)param_1;
  if (lVar8 != 0) {
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
  }
  plVar5 = *(long **)(this + 0xb8);
  *(long *)(this + 0xb8) = lVar8;
  if ((plVar5 != (long *)0x0) &&
     (iVar11 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar11, iVar11 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  SceneObject::SetAlwaysActive(*(SceneObject **)(this + 0x28),true);
  fVar4 = DAT_00683488;
  lVar8 = *(long *)param_1;
  local_58 = *(SceneObject **)(this + 0x28);
  if (ABS(*(float *)(lVar8 + 0x70) - *(float *)(local_58 + 0x70)) <= DAT_00683488) {
    fVar13 = *(float *)(lVar8 + 0x74);
    if (ABS(fVar13 - *(float *)(local_58 + 0x74)) <= DAT_00683488) goto LAB_0039a11c;
  }
  else {
    fVar13 = *(float *)(lVar8 + 0x74);
  }
  *(float *)(local_58 + 0x70) = *(float *)(lVar8 + 0x70);
  *(float *)(local_58 + 0x74) = fVar13;
  if (local_58[0xb4] == (SceneObject)0x0) {
    SceneObject::RegisterForWorldBoundsUpdate(local_58);
    local_58[0xb4] = (SceneObject)0x1;
    local_58 = *(SceneObject **)(this + 0x28);
    lVar8 = *(long *)param_1;
  }
LAB_0039a11c:
  *(undefined4 *)(local_58 + 0x78) = *(undefined4 *)(lVar8 + 0x78);
  plVar5 = *(long **)(lVar8 + 0x20);
  pcVar9 = *(code **)(*plVar5 + 0x28);
  if (local_58 != (SceneObject *)0x0) {
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
  }
  (*pcVar9)(plVar5,&local_58);
  if ((local_58 != (SceneObject *)0x0) &&
     (iVar11 = *(int *)(local_58 + 8), *(int *)(local_58 + 8) = iVar11 + -1, iVar11 + -1 == 0)) {
    (**(code **)(*(long *)local_58 + 8))();
  }
  FindOriginAndRadius(this);
  lVar8 = SceneObject::ComponentWithInterface(*(SceneObject **)param_1,(long)PTR_Interface_007e7860)
  ;
  if (lVar8 != 0) {
    pSVar6 = operator_new(0x128);
    SceneObject::SceneObject(pSVar6);
    *(int *)(pSVar6 + 8) = *(int *)(pSVar6 + 8) + 1;
    psVar12 = *(string **)(*(long *)(*(long *)param_1 + 0x20) + 0xa0);
    local_60 = pSVar6;
    FUN_00666bb8(&local_68,"effect_shatter",auStack_70);
    ObjectLibrary::TemplateForName(psVar12,SUB81(&local_68,0));
    SceneObject::InitWithTemplate(pSVar6,(intrusive_ptr *)&local_58);
    if ((local_58 != (SceneObject *)0x0) &&
       (iVar11 = *(int *)(local_58 + 8), *(int *)(local_58 + 8) = iVar11 + -1, iVar11 + -1 == 0)) {
      (**(code **)(*(long *)local_58 + 8))();
    }
    if ((undefined *)(local_68 + -0x18) != PTR_DAT_007e5de8) {
      piVar10 = (int *)(local_68 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = iVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_68 + -0x18));
      }
    }
    pSVar6 = local_60;
    Vector2::Vector2((Vector2 *)&local_58,(Vector3 *)(this + 0x9c));
    if ((fVar4 < ABS((float)local_58 - *(float *)(pSVar6 + 0x70))) ||
       (fVar4 < ABS(local_58._4_4_ - *(float *)(pSVar6 + 0x74)))) {
      *(float *)(pSVar6 + 0x70) = (float)local_58;
      *(float *)(pSVar6 + 0x74) = local_58._4_4_;
      if (pSVar6[0xb4] == (SceneObject)0x0) {
        SceneObject::RegisterForWorldBoundsUpdate(pSVar6);
        pSVar6[0xb4] = (SceneObject)0x1;
      }
    }
    *(undefined4 *)(pSVar6 + 0x78) = *(undefined4 *)(this + 0xa4);
    (**(code **)(**(long **)(*(long *)param_1 + 0x20) + 0x28))
              (*(long **)(*(long *)param_1 + 0x20),&local_60);
    this_00 = (ShatterComponent *)
              SceneObject::ComponentWithInterface(local_60,(long)PTR_Interface_007e7598);
    pMVar7 = (ModelComponent *)
             SceneObject::ComponentWithInterface
                       (*(SceneObject **)param_1,(long)PTR_Interface_007e7860);
    ShatterComponent::ShatterModel(this_00,pMVar7,true);
    if ((local_60 != (SceneObject *)0x0) &&
       (iVar11 = *(int *)(local_60 + 8), *(int *)(local_60 + 8) = iVar11 + -1, iVar11 + -1 == 0)) {
      (**(code **)(*(long *)local_60 + 8))();
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


