/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00405480
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
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


