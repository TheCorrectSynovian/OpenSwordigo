/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e0cfc
 * Function: Caver::Proto::Skill::~Skill
 * Signature: undefined __thiscall ~Skill(Skill * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Skill::~Skill() */

void __thiscall Caver::Proto::Skill::~Skill(Skill *this)

{
  *(undefined **)this = PTR_vtable_007e5620 + 0x10;
  SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


