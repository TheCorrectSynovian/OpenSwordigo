/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00404bd4
 * Function: Caver::Proto::BlendAnimationComponent::~BlendAnimationComponent
 * Signature: undefined __thiscall ~BlendAnimationComponent(BlendAnimationComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BlendAnimationComponent::~BlendAnimationComponent() */

void __thiscall
Caver::Proto::BlendAnimationComponent::~BlendAnimationComponent(BlendAnimationComponent *this)

{
                    /* catch() { ... } // from try @ 00404b84 with catch @ 00404be0 */
  *(undefined **)this = PTR_vtable_007e7198 + 0x10;
                    /* catch() { ... } // from try @ 00404b6c with catch @ 00404be4 */
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


