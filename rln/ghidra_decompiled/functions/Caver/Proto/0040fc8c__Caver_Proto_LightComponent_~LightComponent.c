/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040fc8c
 * Function: Caver::Proto::LightComponent::~LightComponent
 * Signature: undefined __thiscall ~LightComponent(LightComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LightComponent::~LightComponent() */

void __thiscall Caver::Proto::LightComponent::~LightComponent(LightComponent *this)

{
  *(undefined **)this = PTR_vtable_007e64f0 + 0x10;
  if (*(LightComponent **)PTR_default_instance__007e5cc8 != this) {
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
    if (*(long **)(this + 0x30) != (long *)0x0) {
                    /* catch() { ... } // from try @ 0040f1a4 with catch @ 0040fce0 */
                    /* catch() { ... } // from try @ 0040f15c with catch @ 0040fce4 */
      (**(code **)(**(long **)(this + 0x30) + 8))();
    }
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
                    /* try { // try from 0040fcf4 to 0050fcf7 has its CatchHandler @ 0040fcf8 */
                    /* catch() { ... } // from try @ 0040fcf4 with catch @ 0040fcf8 */
                    /* try { // try from 0040fcfc to 0050fcff has its CatchHandler @ 0040fd04 */
  operator_delete(this);
  return;
}


