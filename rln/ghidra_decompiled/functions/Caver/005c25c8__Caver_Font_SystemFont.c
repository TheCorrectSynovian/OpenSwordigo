/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c25c8
 * Function: Caver::Font::SystemFont
 * Signature: undefined __cdecl SystemFont(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Font::SystemFont() */

void Caver::Font::SystemFont(void)

{
  FontLibrary *this;
  
  this = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::SystemFont(this);
  return;
}


