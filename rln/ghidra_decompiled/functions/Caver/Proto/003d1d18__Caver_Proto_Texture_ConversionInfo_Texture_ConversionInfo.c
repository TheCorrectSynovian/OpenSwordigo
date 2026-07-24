/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d1d18
 * Function: Caver::Proto::Texture_ConversionInfo::Texture_ConversionInfo
 * Signature: undefined __thiscall Texture_ConversionInfo(Texture_ConversionInfo * this, Texture_ConversionInfo * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture_ConversionInfo::Texture_ConversionInfo(Caver::Proto::Texture_ConversionInfo
   const&) */

void __thiscall
Caver::Proto::Texture_ConversionInfo::Texture_ConversionInfo
          (Texture_ConversionInfo *this,Texture_ConversionInfo *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e5950;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  MergeFrom(this,param_1);
  return;
}


