/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038cc3c
 * Function: Caver::ProjectileControllerComponent::Update
 * Signature: undefined __cdecl Update(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileControllerComponent::Update(float) */

float Caver::ProjectileControllerComponent::Update(float param_1)

{
  long in_x0;
  DamageComponent *this;
  SceneObject *this_00;
  float fVar1;
  
  if (*(char *)(in_x0 + 0x70) != '\0') {
    this_00 = *(SceneObject **)(in_x0 + 0x28);
    fVar1 = *(float *)(this_00 + 0x68);
    param_1 = fVar1 * fVar1 + *(float *)(this_00 + 0x6c) * *(float *)(this_00 + 0x6c);
    if (((DAT_00683734 < param_1) &&
        (param_1 = (float)Vector2::Angle((Vector2 *)(this_00 + 0x68)),
        DAT_00683488 < ABS(param_1 - *(float *)(this_00 + 0x80)))) &&
       (*(float *)(this_00 + 0x80) = param_1, this_00[0xb4] == (SceneObject)0x0)) {
      param_1 = (float)SceneObject::RegisterForWorldBoundsUpdate(this_00);
      this_00[0xb4] = (SceneObject)0x1;
      this = *(DamageComponent **)(in_x0 + 0x78);
      goto joined_r0x0038ccd8;
    }
  }
  this = *(DamageComponent **)(in_x0 + 0x78);
joined_r0x0038ccd8:
  if (this != (DamageComponent *)0x0) {
    fVar1 = (float)DamageComponent::ResolvePotentialImpacts(this,false);
    return fVar1;
  }
  return param_1;
}


