/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d4bd0
 * Function: Caver::Image::LoadFromPNGFile
 * Signature: undefined __cdecl LoadFromPNGFile(string * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Image::LoadFromPNGFile(std::string const&, bool) */

undefined1  [16] Caver::Image::LoadFromPNGFile(string *param_1,bool param_2)

{
  return ZEXT116(param_2) << 0x40;
}


