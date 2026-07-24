/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cc21c
 * Function: Caver::TextureConversionInfo::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(TextureConversionInfo * this, Texture_ConversionInfo * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureConversionInfo::SaveToProtobufMessage(Caver::Proto::Texture_ConversionInfo*) const
    */

void __thiscall
Caver::TextureConversionInfo::SaveToProtobufMessage
          (TextureConversionInfo *this,Texture_ConversionInfo *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(this + 4);
  *(uint *)(param_1 + 0x1c) = uVar1 | 1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = *(undefined4 *)(this + 8);
  *(uint *)(param_1 + 0x1c) = uVar1 | 3;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = ProtobufValueFromImageType(*(undefined4 *)(this + 0xc));
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
  uVar2 = ProtobufValueFromPixelFormat(*(undefined4 *)(this + 0x10));
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 8;
  return;
}


