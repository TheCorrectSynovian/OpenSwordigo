/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042f008
 * Function: Caver::Proto::TouchableComponent::~TouchableComponent
 * Signature: undefined __thiscall ~TouchableComponent(TouchableComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TouchableComponent::~TouchableComponent() */

void __thiscall Caver::Proto::TouchableComponent::~TouchableComponent(TouchableComponent *this)

{
  *(undefined **)this = PTR_vtable_007e6360 + 0x10;
  if ((*(TouchableComponent **)PTR_default_instance__007e5f98 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
                    /* catch() { ... } // from try @ 0042ef40 with catch @ 0042f04c */
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
                    /* catch() { ... } // from try @ 0042eed8 with catch @ 0042f05c */
  operator_delete(this);
  return;
}


