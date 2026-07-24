/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fb4c8
 * Function: Caver::Proto::Component::~Component
 * Signature: undefined __thiscall ~Component(Component * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Component::~Component() */

void __thiscall Caver::Proto::Component::~Component(Component *this)

{
  ~Component(this);
  operator_delete(this);
  return;
}


