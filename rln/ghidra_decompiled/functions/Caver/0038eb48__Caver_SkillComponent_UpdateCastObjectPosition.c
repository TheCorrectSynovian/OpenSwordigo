/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038eb48
 * Function: Caver::SkillComponent::UpdateCastObjectPosition
 * Signature: undefined __thiscall UpdateCastObjectPosition(SkillComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillComponent::UpdateCastObjectPosition() */

void __thiscall Caver::SkillComponent::UpdateCastObjectPosition(SkillComponent *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  SceneObject *this_00;
  float local_40;
  float local_3c;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this_00 = *(SceneObject **)(this + 0xb0);
  SceneObject::WorldPointFromLocalPoint(*(Vector2 **)(this + 0x28));
  if ((DAT_00683488 < ABS(local_40 - *(float *)(this_00 + 0x70))) ||
     (DAT_00683488 < ABS(local_3c - *(float *)(this_00 + 0x74)))) {
    *(float *)(this_00 + 0x70) = local_40;
    *(float *)(this_00 + 0x74) = local_3c;
    if (this_00[0xb4] == (SceneObject)0x0) {
      SceneObject::RegisterForWorldBoundsUpdate(this_00);
      this_00[0xb4] = (SceneObject)0x1;
    }
  }
  lVar3 = *(long *)(this + 0x28);
  lVar4 = *(long *)(this + 0xb0);
  *(undefined4 *)(lVar4 + 0x78) = *(undefined4 *)(lVar3 + 0x78);
  *(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)(lVar3 + 0x68);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


