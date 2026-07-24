/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003847c0
 * Function: Caver::MagicBoltComponent::Explode
 * Signature: undefined __thiscall Explode(MagicBoltComponent * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicBoltComponent::Explode(bool) */

void __thiscall Caver::MagicBoltComponent::Explode(MagicBoltComponent *this,bool param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  SoundEffectComponent *this_00;
  SceneObject *this_01;
  long *plVar4;
  MagicExplosionComponent *this_02;
  long lVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  string *psVar9;
  float fVar10;
  undefined1 auStack_68 [8];
  long local_60;
  SceneObject *local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this_00 = *(SoundEffectComponent **)(this + 0x100);
  if (this_00 == (SoundEffectComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xf0),(Component *)this);
    this_00 = *(SoundEffectComponent **)(this + 0x100);
    if (this_00 != (SoundEffectComponent *)0x0) goto LAB_00384808;
  }
  else {
LAB_00384808:
    SoundEffectComponent::Play(this_00);
  }
  this_01 = operator_new(0x128);
  SceneObject::SceneObject(this_01);
  psVar9 = *(string **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0xa0);
  FUN_00666bb8(&local_60,"magic_bolt_explosion",auStack_68);
  ObjectLibrary::TemplateForName(psVar9,SUB81(&local_60,0));
  SceneObject::InitWithTemplate(this_01,(intrusive_ptr *)local_58);
  if ((local_58[0] != (SceneObject *)0x0) &&
     (iVar8 = *(int *)(local_58[0] + 8), *(int *)(local_58[0] + 8) = iVar8 + -1, iVar8 + -1 == 0)) {
    (**(code **)(*(long *)local_58[0] + 8))();
  }
  if ((undefined *)(local_60 + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  lVar5 = *(long *)(this + 0x28);
  if (ABS(*(float *)(lVar5 + 0x70) - *(float *)(this_01 + 0x70)) <= DAT_00683488) {
    fVar10 = *(float *)(lVar5 + 0x74);
    if (ABS(fVar10 - *(float *)(this_01 + 0x74)) <= DAT_00683488) goto LAB_0038490c;
  }
  else {
    fVar10 = *(float *)(lVar5 + 0x74);
  }
  *(float *)(this_01 + 0x70) = *(float *)(lVar5 + 0x70);
  *(float *)(this_01 + 0x74) = fVar10;
  if (this_01[0xb4] == (SceneObject)0x0) {
    SceneObject::RegisterForWorldBoundsUpdate(this_01);
    this_01[0xb4] = (SceneObject)0x1;
    lVar5 = *(long *)(this + 0x28);
  }
LAB_0038490c:
  *(undefined4 *)(this_01 + 0x78) = *(undefined4 *)(lVar5 + 0x78);
  plVar4 = *(long **)(lVar5 + 0x20);
  pcVar6 = *(code **)(*plVar4 + 0x28);
  *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
  local_58[0] = this_01;
  (*pcVar6)(plVar4,local_58);
  if ((local_58[0] != (SceneObject *)0x0) &&
     (iVar8 = *(int *)(local_58[0] + 8), *(int *)(local_58[0] + 8) = iVar8 + -1, iVar8 + -1 == 0)) {
    (**(code **)(*(long *)local_58[0] + 8))();
  }
  this_02 = (MagicExplosionComponent *)
            SceneObject::ComponentWithInterface(this_01,(long)PTR_Interface_007e7a68);
  SpellComponent::CasterObject();
  MagicExplosionComponent::SetCasterObject(this_02,(intrusive_ptr *)local_58);
  if ((local_58[0] != (SceneObject *)0x0) &&
     (iVar8 = *(int *)(local_58[0] + 8), *(int *)(local_58[0] + 8) = iVar8 + -1, iVar8 + -1 == 0)) {
    (**(code **)(*(long *)local_58[0] + 8))();
  }
  local_58[0] = (SceneObject *)0x0;
  MagicExplosionComponent::ExplodeToDirection(this_02,(Vector2 *)local_58,DAT_00688b40);
  if (param_1) {
    *(undefined1 *)(*(long *)(this + 0x28) + 0xe8) = 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


