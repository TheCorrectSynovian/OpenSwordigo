/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d6248
 * Function: Caver::Proto::GUIMargins::~GUIMargins
 * Signature: undefined __thiscall ~GUIMargins(GUIMargins * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GUIMargins::~GUIMargins() */

void __thiscall Caver::Proto::GUIMargins::~GUIMargins(GUIMargins *this)

{
  *(undefined **)this = PTR_vtable_007e4930 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


