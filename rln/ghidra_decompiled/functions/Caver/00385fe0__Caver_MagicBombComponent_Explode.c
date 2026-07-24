/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00385fe0
 * Function: Caver::MagicBombComponent::Explode
 * Signature: undefined __thiscall Explode(MagicBombComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MagicBombComponent::Explode() */

void __thiscall Caver::MagicBombComponent::Explode(MagicBombComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  SceneObject *this_00;
  long *plVar4;
  MagicExplosionComponent *this_01;
  long lVar5;
  long lVar6;
  code *pcVar7;
  int *piVar8;
  int iVar9;
  string *psVar10;
  float fVar11;
  undefined1 auStack_68 [8];
  long local_60;
  SceneObject *local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this_00 = operator_new(0x128);
  SceneObject::SceneObject(this_00);
  psVar10 = *(string **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0xa0);
  FUN_00666bb8(&local_60,"magic_explosion",auStack_68);
  ObjectLibrary::TemplateForName(psVar10,SUB81(&local_60,0));
  SceneObject::InitWithTemplate(this_00,(intrusive_ptr *)local_58);
  if ((local_58[0] != (SceneObject *)0x0) &&
     (iVar9 = *(int *)(local_58[0] + 8), *(int *)(local_58[0] + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
    (**(code **)(*(long *)local_58[0] + 8))();
  }
  if ((undefined *)(local_60 + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  lVar6 = *(long *)(this + 0x28);
  if (ABS(*(float *)(lVar6 + 0x70) - *(float *)(this_00 + 0x70)) <= DAT_00683488) {
    fVar11 = *(float *)(lVar6 + 0x74);
    if (ABS(fVar11 - *(float *)(this_00 + 0x74)) <= DAT_00683488) goto LAB_00386108;
  }
  else {
    fVar11 = *(float *)(lVar6 + 0x74);
  }
  *(float *)(this_00 + 0x70) = *(float *)(lVar6 + 0x70);
  *(float *)(this_00 + 0x74) = fVar11;
  if (this_00[0xb4] == (SceneObject)0x0) {
    SceneObject::RegisterForWorldBoundsUpdate(this_00);
    this_00[0xb4] = (SceneObject)0x1;
    lVar6 = *(long *)(this + 0x28);
  }
LAB_00386108:
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(lVar6 + 0x78);
  plVar4 = *(long **)(lVar6 + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x28);
  *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  local_58[0] = this_00;
  (*pcVar7)(plVar4,local_58);
  if ((local_58[0] != (SceneObject *)0x0) &&
     (iVar9 = *(int *)(local_58[0] + 8), *(int *)(local_58[0] + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
    (**(code **)(*(long *)local_58[0] + 8))();
  }
  lVar6 = SceneObject::ComponentWithInterface
                    (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e6cd0);
  this_01 = (MagicExplosionComponent *)
            SceneObject::ComponentWithInterface(this_00,(long)PTR_Interface_007e7a68);
  if (this_01 != (MagicExplosionComponent *)0x0) {
    *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
  }
  plVar4 = *(long **)(this + 0xe8);
  *(MagicExplosionComponent **)(this + 0xe8) = this_01;
  if ((plVar4 != (long *)0x0) &&
     (iVar9 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*plVar4 + 8))();
    this_01 = *(MagicExplosionComponent **)(this + 0xe8);
  }
  SpellComponent::CasterObject();
  MagicExplosionComponent::SetCasterObject(this_01,(intrusive_ptr *)local_58);
  if ((local_58[0] != (SceneObject *)0x0) &&
     (iVar9 = *(int *)(local_58[0] + 8), *(int *)(local_58[0] + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
    (**(code **)(*(long *)local_58[0] + 8))();
  }
  if (lVar6 != 0) {
    MagicExplosionComponent::SetDamage
              (_DAT_0068782c,*(undefined8 *)(this + 0xe8),*(undefined4 *)(lVar6 + 0xb4),
               *(undefined4 *)(lVar6 + 0xb8),*(undefined4 *)(lVar6 + 0xa4));
    lVar5 = SceneObject::ComponentWithInterface(this_00,(long)PTR_Interface_007e6cd0);
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0xc0) = *(undefined4 *)(lVar6 + 0xc0);
    }
  }
  local_58[0] = _DAT_00683948;
  MagicExplosionComponent::ExplodeToDirection
            (*(MagicExplosionComponent **)(this + 0xe8),(Vector2 *)local_58,DAT_00688b40);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


