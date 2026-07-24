/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00402db8
 * Function: Caver::Proto::SpriteComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(SpriteComponent * this, SpriteComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpriteComponent::CopyFrom(Caver::Proto::SpriteComponent const&) */

void __thiscall
Caver::Proto::SpriteComponent::CopyFrom(SpriteComponent *this,SpriteComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


