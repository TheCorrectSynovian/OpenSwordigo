/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00368ff0
 * Function: Caver::EntityComponent::HandleGroundCollision
 * Signature: undefined __thiscall HandleGroundCollision(EntityComponent * this, CollisionMessageData * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::EntityComponent::HandleGroundCollision(Caver::CollisionMessageData const&) */

void __thiscall
Caver::EntityComponent::HandleGroundCollision(EntityComponent *this,CollisionMessageData *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  long lVar4;
  float fVar5;
  undefined *puVar6;
  SceneObject *pSVar7;
  long *plVar8;
  ObjectLinkControllerComponent *this_00;
  undefined8 uVar9;
  int *piVar10;
  int iVar11;
  string *psVar12;
  float fVar13;
  float fVar14;
  long *local_70;
  float local_68;
  undefined4 uStack_64;
  float local_60;
  undefined1 auStack_58 [8];
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  PhysicsObjectState::HandleGroundCollision((PhysicsObjectState *)(this + 0x78),param_1);
  fVar5 = _DAT_00684434;
  fVar13 = *(float *)(this + 0x80);
  if (_DAT_00684434 <= fVar13) goto LAB_003692b4;
  if (0.0 < *(float *)(this + 0x8c)) {
    fVar13 = ABS(*(float *)(this + 0xb0));
    bVar1 = DAT_0068797c < fVar13;
    if ((DAT_00687f3c < fVar13) &&
       (DAT_00683480 < ABS(*(float *)(this + 0xd4) - *(float *)(this + 0xb0)))) {
      bVar1 = true;
    }
    if ((0.5 < *(float *)(this + 0x8c)) && (bVar1)) {
      if ((*(long *)(this + 0x118) == 0) || (*(long *)(*(long *)(this + 0x118) + 0x20) == 0)) {
        psVar12 = *(string **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0xa0);
        FUN_00666bb8(&local_68,"wsmoke",auStack_58);
        ObjectLibrary::TemplateForName(psVar12,SUB81(&local_68,0));
        puVar6 = (undefined *)(CONCAT44(uStack_64,local_68) + -0x18);
        if (puVar6 != PTR_DAT_007e5de8) {
          piVar10 = (int *)(CONCAT44(uStack_64,local_68) + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar11 = *piVar10;
            *piVar10 = iVar11 + -1;
          }
          else {
            do {
              iVar11 = *piVar10;
              cVar3 = '\x01';
              bVar1 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar1) {
                *piVar10 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar11 < 1) {
            operator_delete(puVar6);
          }
        }
        if (local_50 != (long *)0x0) {
          pSVar7 = operator_new(0x128);
          SceneObject::SceneObject(pSVar7);
          *(int *)(pSVar7 + 8) = *(int *)(pSVar7 + 8) + 1;
          plVar8 = *(long **)(this + 0x118);
          *(SceneObject **)(this + 0x118) = pSVar7;
          if ((plVar8 != (long *)0x0) &&
             (iVar11 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar11, iVar11 == 0)) {
            (**(code **)(*plVar8 + 8))();
            pSVar7 = *(SceneObject **)(this + 0x118);
          }
          SceneObject::InitWithTemplate(pSVar7,(intrusive_ptr *)&local_50);
          plVar8 = *(long **)param_1;
          pSVar7 = *(SceneObject **)(this + 0x118);
          fVar13 = *(float *)(plVar8 + 0x2d) + *(float *)(plVar8 + 0x2e) * 0.5;
          fVar14 = *(float *)((long)plVar8 + 0x16c) + 5.0;
          if ((DAT_00683488 < ABS(fVar13 - *(float *)(pSVar7 + 0x70))) ||
             (DAT_00683488 < ABS(fVar14 - *(float *)(pSVar7 + 0x74)))) {
            *(float *)(pSVar7 + 0x70) = fVar13;
            *(float *)(pSVar7 + 0x74) = fVar14;
            if (pSVar7[0xb4] == (SceneObject)0x0) {
              SceneObject::RegisterForWorldBoundsUpdate(pSVar7);
              pSVar7[0xb4] = (SceneObject)0x1;
              pSVar7 = *(SceneObject **)(this + 0x118);
              plVar8 = *(long **)param_1;
            }
          }
          *(undefined4 *)(pSVar7 + 0x78) = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
          (**(code **)(*plVar8 + 0xe0))(&local_68);
          this_00 = (ObjectLinkControllerComponent *)
                    SceneObject::ComponentWithInterface
                              (*(SceneObject **)(this + 0x118),(long)PTR_Interface_007e6970);
          *(float *)(this_00 + 0xec) = local_68 + local_60 * 0.5;
          *(undefined4 *)(this_00 + 0xf0) = uStack_64;
          *(undefined4 *)(this_00 + 0xf4) = 0;
          local_70 = *(long **)(this + 0x28);
          if (local_70 != (long *)0x0) {
            *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          }
          ObjectLinkControllerComponent::LinkToObject(this_00,(intrusive_ptr *)&local_70);
          if ((local_70 != (long *)0x0) &&
             (iVar11 = (int)local_70[1] + -1, *(int *)(local_70 + 1) = iVar11, iVar11 == 0)) {
            (**(code **)(*local_70 + 8))();
          }
          uVar9 = SceneObject::ComponentWithInterface
                            (*(SceneObject **)(this + 0x118),(long)PTR_Interface_007e5968);
          *(undefined8 *)(this + 0x120) = uVar9;
          if ((local_50 != (long *)0x0) &&
             (iVar11 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar11, iVar11 == 0)) {
            (**(code **)(*local_50 + 8))();
          }
        }
        if (*(long *)(this + 0x118) == 0) goto LAB_003692b0;
      }
      ParticleEmitterComponent::StartEmitting(*(ParticleEmitterComponent **)(this + 0x120));
      *(undefined4 *)(this + 300) = 0;
      this[0x128] = (EntityComponent)0x1;
    }
  }
LAB_003692b0:
  fVar13 = *(float *)(this + 0x80);
LAB_003692b4:
  if (((fVar13 < fVar5) && (0.0 < *(float *)(this + 0x8c))) && (this[0x90] == (EntityComponent)0x0))
  {
    uVar2 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
    *(undefined4 *)(this + 0x110) = uVar2;
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


