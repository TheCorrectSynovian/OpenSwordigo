/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d79bc
 * Function: Caver::Proto::SoundEffect::~SoundEffect
 * Signature: undefined __thiscall ~SoundEffect(SoundEffect * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundEffect::~SoundEffect() */

void __thiscall Caver::Proto::SoundEffect::~SoundEffect(SoundEffect *this)

{
  *(undefined **)this = PTR_vtable_007e5368 + 0x10;
  SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


