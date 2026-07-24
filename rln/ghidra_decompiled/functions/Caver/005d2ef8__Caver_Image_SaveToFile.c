/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d2ef8
 * Function: Caver::Image::SaveToFile
 * Signature: undefined __thiscall SaveToFile(Image * this, string * param_1, ImageType param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Image::SaveToFile(std::string const&, Caver::ImageType) const */

undefined8 __thiscall Caver::Image::SaveToFile(Image *this,string *param_1,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 3) {
    uVar1 = SaveToTEXFile(this,param_1,true);
    return uVar1;
  }
  if (param_3 == 1) {
    uVar1 = SaveToPNGFile((string *)this);
    return uVar1;
  }
  return 0;
}


