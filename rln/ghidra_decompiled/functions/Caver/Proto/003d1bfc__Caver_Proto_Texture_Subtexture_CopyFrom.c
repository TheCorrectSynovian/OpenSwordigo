/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d1bfc
 * Function: Caver::Proto::Texture_Subtexture::CopyFrom
 * Signature: undefined __thiscall CopyFrom(Texture_Subtexture * this, Texture_Subtexture * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture_Subtexture::CopyFrom(Caver::Proto::Texture_Subtexture const&) */

void __thiscall
Caver::Proto::Texture_Subtexture::CopyFrom(Texture_Subtexture *this,Texture_Subtexture *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


