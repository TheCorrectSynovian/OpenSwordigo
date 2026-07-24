/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040fba8
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
                    /* catch() { ... } // from try @ 0040f25c with catch @ 0040fba8 */
  *(undefined **)this = PTR_vtable_007e64f0 + 0x10;
  if (*(LightComponent **)PTR_default_instance__007e5cc8 != this) {
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
    if (*(long **)(this + 0x30) != (long *)0x0) {
                    /* catch() { ... } // from try @ 0040f248 with catch @ 0040fbfc */
                    /* catch() { ... } // from try @ 0040f044 with catch @ 0040fc00 */
      (**(code **)(**(long **)(this + 0x30) + 8))();
    }
  }
                    /* catch() { ... } // from try @ 0040ef24 with catch @ 0040fc10 */
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


