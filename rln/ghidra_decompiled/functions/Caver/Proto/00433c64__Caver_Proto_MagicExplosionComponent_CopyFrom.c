/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00433c64
 * Function: Caver::Proto::MagicExplosionComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(MagicExplosionComponent * this, MagicExplosionComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicExplosionComponent::CopyFrom(Caver::Proto::MagicExplosionComponent const&) */

void __thiscall
Caver::Proto::MagicExplosionComponent::CopyFrom
          (MagicExplosionComponent *this,MagicExplosionComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


