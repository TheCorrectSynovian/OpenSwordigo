/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038cce8
 * Function: Caver::ProjectileControllerComponent::Update
 * Signature: undefined __thiscall Update(ProjectileControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ProjectileControllerComponent::Update(float) */

float __thiscall
Caver::ProjectileControllerComponent::Update(ProjectileControllerComponent *this,float param_1)

{
  DamageComponent *this_00;
  SceneObject *this_01;
  float fVar1;
  
  if (this[0x58] != (ProjectileControllerComponent)0x0) {
    this_01 = *(SceneObject **)(this + 0x10);
    fVar1 = *(float *)(this_01 + 0x68);
    param_1 = fVar1 * fVar1 + *(float *)(this_01 + 0x6c) * *(float *)(this_01 + 0x6c);
    if (((DAT_00683734 < param_1) &&
        (param_1 = (float)Vector2::Angle((Vector2 *)(this_01 + 0x68)),
        DAT_00683488 < ABS(param_1 - *(float *)(this_01 + 0x80)))) &&
       (*(float *)(this_01 + 0x80) = param_1, this_01[0xb4] == (SceneObject)0x0)) {
      param_1 = (float)SceneObject::RegisterForWorldBoundsUpdate(this_01);
      this_01[0xb4] = (SceneObject)0x1;
      this_00 = *(DamageComponent **)(this + 0x60);
      goto joined_r0x0038cd84;
    }
  }
  this_00 = *(DamageComponent **)(this + 0x60);
joined_r0x0038cd84:
  if (this_00 != (DamageComponent *)0x0) {
    fVar1 = (float)DamageComponent::ResolvePotentialImpacts(this_00,false);
    return fVar1;
  }
  return param_1;
}


