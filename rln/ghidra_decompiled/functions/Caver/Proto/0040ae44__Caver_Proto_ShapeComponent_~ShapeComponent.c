/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040ae44
 * Function: Caver::Proto::ShapeComponent::~ShapeComponent
 * Signature: undefined __thiscall ~ShapeComponent(ShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShapeComponent::~ShapeComponent() */

void __thiscall Caver::Proto::ShapeComponent::~ShapeComponent(ShapeComponent *this)

{
  *(undefined **)this = PTR_vtable_007e6c08 + 0x10;
  if (*(ShapeComponent **)PTR_default_instance__007e7b10 != this) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
    if (*(long **)(this + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x20) + 8))();
    }
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


