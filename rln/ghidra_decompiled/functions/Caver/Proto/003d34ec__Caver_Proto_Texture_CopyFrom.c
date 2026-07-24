/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d34ec
 * Function: Caver::Proto::Texture::CopyFrom
 * Signature: undefined __thiscall CopyFrom(Texture * this, Texture * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture::CopyFrom(Caver::Proto::Texture const&) */

void __thiscall Caver::Proto::Texture::CopyFrom(Texture *this,Texture *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


