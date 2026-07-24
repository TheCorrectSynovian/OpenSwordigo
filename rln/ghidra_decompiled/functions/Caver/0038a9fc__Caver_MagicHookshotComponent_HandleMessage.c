/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038a9fc
 * Function: Caver::MagicHookshotComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(MagicHookshotComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicHookshotComponent::HandleMessage(int, void*) */

uint __thiscall
Caver::MagicHookshotComponent::HandleMessage(MagicHookshotComponent *this,int param_1,void *param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  intrusive_ptr *piVar5;
  string *psVar6;
  SoundEffectComponent *pSVar7;
  CharControllerComponent *this_00;
  EntityInfoComponent *this_01;
  ulong uVar8;
  long *plVar9;
  Vector2 *pVVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  CollisionShapeComponent *this_02;
  long lVar14;
  DamageComponent *this_03;
  long *local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  long local_70;
  SceneObject *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 == 2) {
    this[0xb8] = (MagicHookshotComponent)0x1;
    goto LAB_0038aba4;
  }
  if (param_1 == 0xd) {
    if (*(char *)((long)param_2 + 0x24) == '\0') {
      pSVar7 = *(SoundEffectComponent **)(this + 0x100);
      if (pSVar7 == (SoundEffectComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xf0),(Component *)this);
        pSVar7 = *(SoundEffectComponent **)(this + 0x100);
        if (pSVar7 == (SoundEffectComponent *)0x0) goto LAB_0038ab9c;
      }
      SoundEffectComponent::Play(pSVar7);
    }
    else {
      *(undefined8 *)(*(long *)(this + 0x28) + 0x68) = 0;
      CreateBlast(this);
      Destroy(this);
      piVar5 = (intrusive_ptr *)AudioSystem::sharedSystem();
      psVar6 = (string *)SoundLibrary::sharedLibrary();
      FUN_00666bb8(&local_70,"shield_block",&local_80);
      SoundLibrary::EffectForName(psVar6);
      AudioSystem::PlaySoundEffect(piVar5,1.0);
      if ((local_98 != (long *)0x0) &&
         (iVar13 = (int)local_98[1] + -1, *(int *)(local_98 + 1) = iVar13, iVar13 == 0)) {
        (**(code **)(*local_98 + 8))();
      }
      if ((local_90 != (long *)0x0) &&
         (iVar13 = (int)local_90[1] + -1, *(int *)(local_90 + 1) = iVar13, iVar13 == 0)) {
        (**(code **)(*local_90 + 8))();
      }
      if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
        piVar11 = (int *)(local_70 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar13 = *piVar11;
          *piVar11 = iVar13 + -1;
        }
        else {
          do {
            iVar13 = *piVar11;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = iVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar13 < 1) {
          operator_delete((undefined *)(local_70 + -0x18));
        }
      }
    }
LAB_0038ab9c:
    CreateBlast(this);
    goto LAB_0038aba4;
  }
  if (((param_1 != 7) || (*(char *)((long)param_2 + 0x34) == '\0')) ||
     (lVar14 = *(long *)param_2, *(char *)(lVar14 + 0x17d) == '\0')) goto LAB_0038aba4;
  this_02 = *(CollisionShapeComponent **)((long)param_2 + 8);
  SpellComponent::CasterObject();
  if (local_60 == (long *)0x0) goto LAB_0038aba4;
  if (this[0x144] == (MagicHookshotComponent)0x0) {
    if (this[0x145] == (MagicHookshotComponent)0x0) {
      bVar3 = true;
    }
    else {
      bVar3 = *(long *)(this + 0x148) == *(long *)(this + 0x28);
    }
  }
  else {
    bVar3 = false;
  }
  iVar13 = (int)local_60[1] + -1;
  *(int *)(local_60 + 1) = iVar13;
  if (iVar13 == 0) {
    (**(code **)(*local_60 + 8))();
  }
  if (!bVar3) goto LAB_0038aba4;
  if (*(int *)(this_02 + 0x180) == 7) {
    this[0x144] = (MagicHookshotComponent)0x1;
    *(undefined8 *)(*(long *)(this + 0x28) + 0x68) = 0;
    CreateBlast(this);
    pSVar7 = *(SoundEffectComponent **)(this + 0x100);
    if (pSVar7 == (SoundEffectComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xf0),(Component *)this);
      pSVar7 = *(SoundEffectComponent **)(this + 0x100);
      if (pSVar7 != (SoundEffectComponent *)0x0) goto LAB_0038ac6c;
    }
    else {
LAB_0038ac6c:
      SoundEffectComponent::Play(pSVar7);
    }
    SpellComponent::CasterObject();
    this_00 = (CharControllerComponent *)
              SceneObject::ComponentWithInterface(local_68,(long)PTR_Interface_007e7390);
    if ((local_68 != (SceneObject *)0x0) &&
       (iVar13 = *(int *)(local_68 + 8), *(int *)(local_68 + 8) = iVar13 + -1, iVar13 + -1 == 0)) {
      (**(code **)(*(long *)local_68 + 8))();
    }
    if (this_00 == (CharControllerComponent *)0x0) goto LAB_0038adb4;
    CharControllerComponent::ResetAirJumpCount(this_00);
    cVar1 = *(char *)(lVar14 + 0x17d);
  }
  else {
    if ((this_02[0x17c] == (CollisionShapeComponent)0x0) ||
       (lVar12 = SceneObject::ComponentWithInterface
                           (*(SceneObject **)(this_02 + 0x28),(long)PTR_Interface_007e4d78),
       lVar12 == 0)) {
      if (this_02[0x17a] != (CollisionShapeComponent)0x0) {
        *(undefined8 *)(*(long *)(this + 0x28) + 0x68) = 0;
        CreateBlast(this);
        Destroy(this);
        pSVar7 = *(SoundEffectComponent **)(this + 0x118);
        if (pSVar7 == (SoundEffectComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x108),(Component *)this);
          pSVar7 = *(SoundEffectComponent **)(this + 0x118);
          if (pSVar7 == (SoundEffectComponent *)0x0) goto LAB_0038adb4;
        }
        SoundEffectComponent::Play(pSVar7);
      }
    }
    else {
      this_01 = (EntityInfoComponent *)
                SceneObject::ComponentWithInterface
                          (*(SceneObject **)(this_02 + 0x28),(long)PTR_Interface_007e4ff0);
      if ((this_01 == (EntityInfoComponent *)0x0) ||
         (uVar8 = EntityInfoComponent::grabbable(this_01), (uVar8 & 1) != 0)) {
        this[0x145] = (MagicHookshotComponent)0x1;
        lVar12 = *(long *)(this_02 + 0x28);
        if (lVar12 != 0) {
          *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
        }
        plVar9 = *(long **)(this + 0x148);
        *(long *)(this + 0x148) = lVar12;
        if ((plVar9 != (long *)0x0) &&
           (iVar13 = (int)plVar9[1] + -1, *(int *)(plVar9 + 1) = iVar13, iVar13 == 0)) {
          (**(code **)(*plVar9 + 8))();
          lVar12 = *(long *)(this + 0x148);
        }
        *(ulong *)(this + 0x150) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x70) >> 0x20) -
                      (float)((ulong)*(undefined8 *)(*(long *)(this + 0x28) + 0x70) >> 0x20),
                      (float)*(undefined8 *)(lVar12 + 0x70) -
                      (float)*(undefined8 *)(*(long *)(this + 0x28) + 0x70));
        CreateBlast(this);
        cVar1 = *(char *)(lVar14 + 0x17d);
        goto joined_r0x0038adb8;
      }
    }
LAB_0038adb4:
    cVar1 = *(char *)(lVar14 + 0x17d);
  }
joined_r0x0038adb8:
  if ((cVar1 != '\0') &&
     ((this_02[0x17c] != (CollisionShapeComponent)0x0 || (*(int *)(this_02 + 0x180) == 6)))) {
    lVar14 = SceneObject::ComponentWithInterface
                       (*(SceneObject **)(this_02 + 0x28),(long)PTR_Interface_007e7450);
    lVar12 = *(long *)(this + 0x138);
    if ((lVar12 != 0) &&
       ((*(char *)(lVar12 + 0xbc) != '\0' &&
        ((lVar14 == 0 || (*(int *)(lVar12 + 0xb4) != *(int *)(lVar14 + 0x88))))))) {
      pVVar10 = (Vector2 *)CollisionShapeComponent::collisionShape(this_02);
      CollisionShape::NearestPointInShape(pVVar10);
      local_78 = *(long **)(this_02 + 0x28);
      this_03 = *(DamageComponent **)(this + 0x138);
      if (local_78 != (long *)0x0) {
        *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      }
      local_80 = *(undefined8 *)(*(long *)(this + 0x28) + 0x68);
      Vector2::Normalize((Vector2 *)&local_80);
      local_90 = (long *)0x0;
      uStack_88 = 0;
      DamageComponent::AddPotentialImpact
                (this_03,(intrusive_ptr *)&local_78,(Vector2 *)&local_70,(Vector2 *)&local_80,
                 *(int *)(this_02 + 0x180) == 6,(Vector4 *)&local_90);
      if ((local_78 != (long *)0x0) &&
         (iVar13 = (int)local_78[1] + -1, *(int *)(local_78 + 1) = iVar13, iVar13 == 0)) {
        (**(code **)(*local_78 + 8))();
      }
    }
  }
LAB_0038aba4:
  uVar4 = SpellComponent::HandleMessage((int)this,(void *)(ulong)(uint)param_1);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


