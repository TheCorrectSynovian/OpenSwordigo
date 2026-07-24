/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d5828
 * Function: Caver::Proto::Program::~Program
 * Signature: undefined __thiscall ~Program(Program * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Program::~Program() */

void __thiscall Caver::Proto::Program::~Program(Program *this)

{
  *(undefined **)this = PTR_vtable_007e61c0 + 0x10;
  SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


