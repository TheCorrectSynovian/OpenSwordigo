/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d1ea8
 * Function: Caver::Proto::Texture_ConversionInfo::~Texture_ConversionInfo
 * Signature: undefined __thiscall ~Texture_ConversionInfo(Texture_ConversionInfo * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture_ConversionInfo::~Texture_ConversionInfo() */

void __thiscall
Caver::Proto::Texture_ConversionInfo::~Texture_ConversionInfo(Texture_ConversionInfo *this)

{
  *(undefined **)this = PTR_vtable_007e5950 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


