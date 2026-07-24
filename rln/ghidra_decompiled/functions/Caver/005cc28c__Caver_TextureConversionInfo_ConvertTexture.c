/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cc28c
 * Function: Caver::TextureConversionInfo::ConvertTexture
 * Signature: undefined __thiscall ConvertTexture(TextureConversionInfo * this, Texture * param_1, Image * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureConversionInfo::ConvertTexture(Caver::Texture*, Caver::Image*) */

undefined8 __thiscall
Caver::TextureConversionInfo::ConvertTexture
          (TextureConversionInfo *this,Texture *param_1,Image *param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 4) == *(int *)(param_2 + 4)) && (*(int *)(this + 8) == *(int *)(param_2 + 8))
     ) {
    uVar1 = 0;
  }
  else {
    Image::Resize(param_2,*(int *)(this + 4),*(int *)(this + 8));
    uVar1 = 1;
  }
  if (*(int *)(this + 0xc) != 2) {
    if (*(int *)(this + 0x10) == *(int *)(param_2 + 0xc)) {
      return uVar1;
    }
    Image::ConvertToPixelFormat(param_2,*(int *)(this + 0x10),0);
  }
  return 1;
}


