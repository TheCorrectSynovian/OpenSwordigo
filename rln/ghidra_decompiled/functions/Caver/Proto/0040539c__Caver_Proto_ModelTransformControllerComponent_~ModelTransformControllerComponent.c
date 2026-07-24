/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040539c
 * Function: Caver::Proto::ModelTransformControllerComponent::~ModelTransformControllerComponent
 * Signature: undefined __thiscall ~ModelTransformControllerComponent(ModelTransformControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelTransformControllerComponent::~ModelTransformControllerComponent() */

void __thiscall
Caver::Proto::ModelTransformControllerComponent::~ModelTransformControllerComponent
          (ModelTransformControllerComponent *this)

{
  *(undefined **)this = PTR_vtable_007e5c10 + 0x10;
  if (*(ModelTransformControllerComponent **)PTR_default_instance__007e6260 != this) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* catch() { ... } // from try @ 00405380 with catch @ 004053dc */
                    /* catch() { ... } // from try @ 00405368 with catch @ 004053e0 */
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
                    /* catch() { ... } // from try @ 00405350 with catch @ 004053e4 */
                    /* catch() { ... } // from try @ 00405338 with catch @ 004053e8 */
    if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* catch() { ... } // from try @ 00405320 with catch @ 004053ec */
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


