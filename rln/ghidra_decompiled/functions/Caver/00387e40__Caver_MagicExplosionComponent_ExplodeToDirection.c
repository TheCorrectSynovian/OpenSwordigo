/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00387e40
 * Function: Caver::MagicExplosionComponent::ExplodeToDirection
 * Signature: undefined __thiscall ExplodeToDirection(MagicExplosionComponent * this, Vector2 * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicExplosionComponent::ExplodeToDirection(Caver::Vector2 const&, float) */

void __thiscall
Caver::MagicExplosionComponent::ExplodeToDirection
          (MagicExplosionComponent *this,Vector2 *param_1,float param_2)

{
  undefined8 uVar1;
  
  *(float *)(this + 0xe8) = *(float *)(this + 0xe0) * 1.5;
  uVar1 = *(undefined8 *)param_1;
  *(float *)(this + 0xd8) = *(float *)(this + 0xe0) / *(float *)(this + 0xe4);
  *(float *)(this + 0xdc) = param_2;
  *(undefined2 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xd0) = uVar1;
  *(undefined4 *)(this + 0xec) = 0;
  this[0xf2] = (MagicExplosionComponent)0x1;
  return;
}


