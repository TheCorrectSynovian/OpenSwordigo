/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003acd5c
 * Function: Caver::ParticleObjectComponent::Update
 * Signature: undefined __thiscall Update(ParticleObjectComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleObjectComponent::Update(float) */

void __thiscall Caver::ParticleObjectComponent::Update(ParticleObjectComponent *this,float param_1)

{
  float fVar1;
  SceneObject *this_00;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_006837a4;
  fVar2 = *(float *)(this + 0x114);
  this_00 = *(SceneObject **)(this + 0x28);
  *(float *)(this + 0x114) = fVar2 + param_1;
  fVar1 = DAT_00683488;
  if (*(float *)(this + 0x118) + fVar3 < fVar2 + param_1) {
    this_00[0xe8] = (SceneObject)0x1;
    return;
  }
  *(float *)(this_00 + 0x78) = *(float *)(this_00 + 0x78) + *(float *)(this + 0x110) * param_1;
  fVar3 = *(float *)(this_00 + 0x80) + *(float *)(this + 0x11c) * param_1;
  if ((fVar1 < ABS(fVar3 - *(float *)(this_00 + 0x80))) &&
     (*(float *)(this_00 + 0x80) = fVar3, this_00[0xb4] == (SceneObject)0x0)) {
    SceneObject::RegisterForWorldBoundsUpdate(this_00);
    this_00[0xb4] = (SceneObject)0x1;
  }
  PhysicsObjectState::Update((PhysicsObjectState *)(this + 0x88),param_1);
  return;
}


