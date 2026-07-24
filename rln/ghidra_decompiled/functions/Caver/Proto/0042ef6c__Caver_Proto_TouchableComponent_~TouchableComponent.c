/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042ef6c
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
                    /* try { // try from 0042ef6c to 0052ef73 has its CatchHandler @ 0042f13c */
                    /* try { // try from 0042ef74 to 0052f09f has its CatchHandler @ 0042ee70 */
  *(undefined **)this = PTR_vtable_007e6360 + 0x10;
  if ((*(TouchableComponent **)PTR_default_instance__007e5f98 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


