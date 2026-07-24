/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d2414
 * Function: Caver::Proto::Texture_ConversionInfo::CopyFrom
 * Signature: undefined __thiscall CopyFrom(Texture_ConversionInfo * this, Texture_ConversionInfo * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture_ConversionInfo::CopyFrom(Caver::Proto::Texture_ConversionInfo const&) */

void __thiscall
Caver::Proto::Texture_ConversionInfo::CopyFrom
          (Texture_ConversionInfo *this,Texture_ConversionInfo *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


