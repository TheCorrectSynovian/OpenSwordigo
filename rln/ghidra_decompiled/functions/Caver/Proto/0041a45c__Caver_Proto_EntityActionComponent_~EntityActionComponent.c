/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041a45c
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
                    /* try { // try from 0041a48c to 0051a553 has its CatchHandler @ 0041a7f8 */
  if ((*(EntityActionComponent **)PTR_default_instance__007e4b60 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


