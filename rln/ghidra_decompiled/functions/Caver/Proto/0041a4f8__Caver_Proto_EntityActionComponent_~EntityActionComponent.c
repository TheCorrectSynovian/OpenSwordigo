/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041a4f8
 * Function: Caver::Proto::EntityActionComponent::~EntityActionComponent
 * Signature: undefined __thiscall ~EntityActionComponent(EntityActionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityActionComponent::~EntityActionComponent() */

void __thiscall
Caver::Proto::EntityActionComponent::~EntityActionComponent(EntityActionComponent *this)

{
  *(undefined **)this = PTR_vtable_007e4a10 + 0x10;
  if ((*(EntityActionComponent **)PTR_default_instance__007e4b60 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
                    /* try { // try from 0041a554 to 0051a577 has its CatchHandler @ 0041a3fc */
  operator_delete(this);
  return;
}


