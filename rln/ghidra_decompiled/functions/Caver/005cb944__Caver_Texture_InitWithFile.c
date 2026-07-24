/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cb944
 * Function: Caver::Texture::InitWithFile
 * Signature: undefined __thiscall InitWithFile(Texture * this, string * param_1, ImageType param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::InitWithFile(std::string const&, Caver::ImageType, float) */

bool __thiscall
Caver::Texture::InitWithFile(undefined4 param_1_00,Texture *this,string *param_1,undefined4 param_4)

{
  bool bVar1;
  ulong uVar2;
  
                    /* try { // try from 005cb944 to 006cb957 has its CatchHandler @ 005cbc88 */
                    /* try { // try from 005cb958 to 006cb963 has its CatchHandler @ 005cbc80 */
                    /* try { // try from 005cb964 to 006cb977 has its CatchHandler @ 005cbc28 */
  uVar2 = FileExistsAtPath(param_1);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    FUN_0066a6a8(this + 0x20,param_1);
    *(undefined4 *)(this + 0x28) = param_4;
                    /* try { // try from 005cb988 to 006cb9bb has its CatchHandler @ 005cbd3c */
    *(undefined4 *)(this + 0x6c) = param_1_00;
  }
  return bVar1;
}


