/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c2634
 * Function: Caver::Font::SmallDefaultFont
 * Signature: undefined __cdecl SmallDefaultFont(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Font::SmallDefaultFont() */

void Caver::Font::SmallDefaultFont(void)

{
  FontLibrary *this;
  
  this = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::SmallDefaultFont(this);
  return;
}


