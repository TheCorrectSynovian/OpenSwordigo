/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040bb50
 * Function: Caver::Proto::CollisionShapeComponent::~CollisionShapeComponent
 * Signature: undefined __thiscall ~CollisionShapeComponent(CollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollisionShapeComponent::~CollisionShapeComponent() */

void __thiscall
Caver::Proto::CollisionShapeComponent::~CollisionShapeComponent(CollisionShapeComponent *this)

{
  *(undefined **)this = PTR_vtable_007e73d8 + 0x10;
  if (*(CollisionShapeComponent **)PTR_default_instance__007e7360 != this) {
    if (*(long **)(this + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x28) + 8))();
    }
    if (*(long **)(this + 0x30) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x30) + 8))();
    }
    if (*(long **)(this + 0x38) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x38) + 8))();
    }
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


