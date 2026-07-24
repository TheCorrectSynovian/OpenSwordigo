/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d2d24
 * Function: Caver::Image::LoadFromFile
 * Signature: undefined __thiscall LoadFromFile(Image * this, string * param_1, ImageType param_2, bool param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Image::LoadFromFile(std::string const&, Caver::ImageType, bool) */

undefined8 __thiscall
Caver::Image::LoadFromFile(Image *this,string *param_1,int param_3,uint param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 extraout_x0;
  
  if (param_3 != 3) {
    if ((param_3 == 1) &&
       (uVar1 = LoadFromPNGFile((string *)this,SUB81(param_1,0)), (uVar1 & 1) != 0)) {
      uVar2 = 1;
      *(undefined4 *)(this + 0xc) = 1;
      if ((param_4 & 1) != 0) {
        *this = (Image)0x1;
                    /* catch() { ... } // from try @ 005d072c with catch @ 005d2d68 */
      }
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  LoadFromTEXFile(this,param_1,true);
  return extraout_x0;
}


