/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038ea6c
 * Function: Caver::SkillComponent::UpdateSpellObjectPosition
 * Signature: undefined __thiscall UpdateSpellObjectPosition(SkillComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillComponent::UpdateSpellObjectPosition() */

void __thiscall Caver::SkillComponent::UpdateSpellObjectPosition(SkillComponent *this)

{
  long lVar1;
  long lVar2;
  SceneObject *this_00;
  float local_40;
  float local_3c;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this_00 = *(SceneObject **)(this + 0xc0);
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
  *(undefined4 *)(*(long *)(this + 0xc0) + 0x78) = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


