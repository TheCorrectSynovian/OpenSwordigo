/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00434994
 * Function: Caver::Proto::MagicSpellCastComponent::~MagicSpellCastComponent
 * Signature: undefined __thiscall ~MagicSpellCastComponent(MagicSpellCastComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicSpellCastComponent::~MagicSpellCastComponent() */

void __thiscall
Caver::Proto::MagicSpellCastComponent::~MagicSpellCastComponent(MagicSpellCastComponent *this)

{
  *(undefined **)this = PTR_vtable_007e66b0 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


