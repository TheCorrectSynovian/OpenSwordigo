/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00336888
 * Function: Caver::ShadowVolumeComponent::Update
 * Signature: undefined __thiscall Update(ShadowVolumeComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ShadowVolumeComponent::Update(float) */

void __thiscall Caver::ShadowVolumeComponent::Update(ShadowVolumeComponent *this,float param_1)

{
  long lVar1;
  SceneObject *this_00;
  undefined8 local_40;
  undefined4 local_38;
  float local_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this_00 = *(SceneObject **)(this + 0x10);
  local_40 = *(undefined8 *)(*(long *)(*(long *)(this + 0x58) + 0x28) + 0x70);
  local_38 = *(undefined4 *)(*(long *)(*(long *)(this + 0x58) + 0x28) + 0x78);
  Vector2::Vector2((Vector2 *)&local_30,(Vector3 *)&local_40);
  if ((DAT_00683488 < ABS(local_30 - *(float *)(this_00 + 0x70))) ||
     (DAT_00683488 < ABS(local_2c - *(float *)(this_00 + 0x74)))) {
    *(float *)(this_00 + 0x70) = local_30;
    *(float *)(this_00 + 0x74) = local_2c;
    if (this_00[0xb4] == (SceneObject)0x0) {
      SceneObject::RegisterForWorldBoundsUpdate(this_00);
      this_00[0xb4] = (SceneObject)0x1;
    }
  }
  *(undefined4 *)(this_00 + 0x78) = local_38;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


