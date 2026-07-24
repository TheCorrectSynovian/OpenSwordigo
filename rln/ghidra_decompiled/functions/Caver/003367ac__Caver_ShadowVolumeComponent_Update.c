/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003367ac
 * Function: Caver::ShadowVolumeComponent::Update
 * Signature: undefined __cdecl Update(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShadowVolumeComponent::Update(float) */

void Caver::ShadowVolumeComponent::Update(float param_1)

{
  long lVar1;
  long in_x0;
  long lVar2;
  SceneObject *this;
  undefined8 local_40;
  undefined4 local_38;
  float local_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = *(SceneObject **)(in_x0 + 0x28);
  lVar2 = *(long *)(*(long *)(in_x0 + 0x70) + 0x28);
  local_40 = *(undefined8 *)(lVar2 + 0x70);
  local_38 = *(undefined4 *)(lVar2 + 0x78);
  Vector2::Vector2((Vector2 *)&local_30,(Vector3 *)&local_40);
  if ((DAT_00683488 < ABS(local_30 - *(float *)(this + 0x70))) ||
     (DAT_00683488 < ABS(local_2c - *(float *)(this + 0x74)))) {
    *(float *)(this + 0x70) = local_30;
    *(float *)(this + 0x74) = local_2c;
    if (this[0xb4] == (SceneObject)0x0) {
      SceneObject::RegisterForWorldBoundsUpdate(this);
      this[0xb4] = (SceneObject)0x1;
    }
  }
  *(undefined4 *)(this + 0x78) = local_38;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


