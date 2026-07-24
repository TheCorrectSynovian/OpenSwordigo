/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e35e4
 * Function: Caver::Proto::GuideTarget_LevelObject::~GuideTarget_LevelObject
 * Signature: undefined __thiscall ~GuideTarget_LevelObject(GuideTarget_LevelObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GuideTarget_LevelObject::~GuideTarget_LevelObject() */

void __thiscall
Caver::Proto::GuideTarget_LevelObject::~GuideTarget_LevelObject(GuideTarget_LevelObject *this)

{
  *(undefined **)this = PTR_vtable_007e53b0 + 0x10;
  SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


