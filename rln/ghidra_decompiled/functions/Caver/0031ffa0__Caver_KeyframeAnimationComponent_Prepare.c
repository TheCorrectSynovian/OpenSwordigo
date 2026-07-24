/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031ffa0
 * Function: Caver::KeyframeAnimationComponent::Prepare
 * Signature: undefined __thiscall Prepare(KeyframeAnimationComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::KeyframeAnimationComponent::Prepare() */

void __thiscall Caver::KeyframeAnimationComponent::Prepare(KeyframeAnimationComponent *this)

{
  AnimKeysNode *this_00;
  
  RegisterLibrary(this);
  this_00 = *(AnimKeysNode **)(this + 0x90);
  if (*(long *)(this_00 + 0x18) == 0) {
    LoadAnimation(this);
    this_00 = *(AnimKeysNode **)(this + 0x90);
    if (*(long *)(this_00 + 0x18) == 0) {
      return;
    }
  }
  AnimKeysNode::CreateBufferIfNeccessary(this_00);
  return;
}


