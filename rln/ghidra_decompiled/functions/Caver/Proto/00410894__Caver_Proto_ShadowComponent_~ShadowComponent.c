/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00410894
 * Function: Caver::Proto::ShadowComponent::~ShadowComponent
 * Signature: undefined __thiscall ~ShadowComponent(ShadowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShadowComponent::~ShadowComponent() */

void __thiscall Caver::Proto::ShadowComponent::~ShadowComponent(ShadowComponent *this)

{
                    /* try { // try from 00410894 to 00510913 has its CatchHandler @ 004109c8 */
  *(undefined **)this = PTR_vtable_007e7e98 + 0x10;
                    /* catch() { ... } // from try @ 0040eb50 with catch @ 004108c0 */
  if ((*(ShadowComponent **)PTR_default_instance__007e5258 != this) &&
     (*(long **)(this + 0x18) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


