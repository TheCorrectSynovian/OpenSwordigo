/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00411938
 * Function: Caver::Proto::AnimationControllerComponent::~AnimationControllerComponent
 * Signature: undefined __thiscall ~AnimationControllerComponent(AnimationControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AnimationControllerComponent::~AnimationControllerComponent() */

void __thiscall
Caver::Proto::AnimationControllerComponent::~AnimationControllerComponent
          (AnimationControllerComponent *this)

{
                    /* try { // try from 00411944 to 0051195f has its CatchHandler @ 00411894 */
                    /* catch() { ... } // from try @ 0041191c with catch @ 0041194c */
                    /* catch() { ... } // from try @ 004118ac with catch @ 00411950 */
  *(undefined **)this = PTR_vtable_007e78a0 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
                    /* try { // try from 00411960 to 0051196b has its CatchHandler @ 0041196c */
  operator_delete(this);
  return;
}


