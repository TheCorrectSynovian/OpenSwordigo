/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039e0f0
 * Function: Caver::SkellyMonsterControllerComponent::Leap
 * Signature: undefined __thiscall Leap(SkellyMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkellyMonsterControllerComponent::Leap() */

void __thiscall
Caver::SkellyMonsterControllerComponent::Leap(SkellyMonsterControllerComponent *this)

{
  CharControllerComponent *this_00;
  
  this_00 = *(CharControllerComponent **)(this + 0xe0);
  this[0x110] = (SkellyMonsterControllerComponent)0x0;
  if (this_00 == (CharControllerComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    this_00 = *(CharControllerComponent **)(this + 0xe0);
  }
  CharControllerComponent::StartJumping(this_00);
  return;
}


