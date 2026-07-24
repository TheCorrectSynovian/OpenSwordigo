/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00417944
 * Function: Caver::Proto::MonsterEntityComponent::~MonsterEntityComponent
 * Signature: undefined __thiscall ~MonsterEntityComponent(MonsterEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterEntityComponent::~MonsterEntityComponent() */

void __thiscall
Caver::Proto::MonsterEntityComponent::~MonsterEntityComponent(MonsterEntityComponent *this)

{
  *(undefined **)this = PTR_vtable_007e47e8 + 0x10;
  if (*(MonsterEntityComponent **)PTR_default_instance__007e4960 != this) {
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


