/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004107f8
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
  *(undefined **)this = PTR_vtable_007e7e98 + 0x10;
                    /* catch() { ... } // from try @ 0040e6f8 with catch @ 0041082c */
  if ((*(ShadowComponent **)PTR_default_instance__007e5258 != this) &&
     (*(long **)(this + 0x18) != (long *)0x0)) {
                    /* catch() { ... } // from try @ 0040e5a4 with catch @ 00410834 */
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
                    /* catch() { ... } // from try @ 0040ea44 with catch @ 00410848
                       catch() { ... } // from try @ 0040f0d4 with catch @ 00410848 */
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


