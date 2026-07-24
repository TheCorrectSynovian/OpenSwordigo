/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cc1c0
 * Function: Caver::TextureConversionInfo::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(TextureConversionInfo * this, Texture_ConversionInfo * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureConversionInfo::LoadFromProtobufMessage(Caver::Proto::Texture_ConversionInfo
   const&) */

void __thiscall
Caver::TextureConversionInfo::LoadFromProtobufMessage
          (TextureConversionInfo *this,Texture_ConversionInfo *param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)(this + 4) = *(undefined8 *)(param_1 + 0xc);
  if (((byte)param_1[0x1c] >> 2 & 1) != 0) {
    uVar1 = ImageTypeFromProtobufValue(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(this + 0xc) = uVar1;
  }
  uVar1 = PixelFormatFromProtobufValue(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x10) = uVar1;
  *(float *)(this + 0x14) = (float)*(int *)(this + 4) / (float)*(int *)(this + 8);
  return;
}


