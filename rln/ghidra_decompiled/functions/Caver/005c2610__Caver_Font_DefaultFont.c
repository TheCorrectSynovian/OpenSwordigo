/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c2610
 * Function: Caver::Font::DefaultFont
 * Signature: undefined __cdecl DefaultFont(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Font::DefaultFont() */

void Caver::Font::DefaultFont(void)

{
  FontLibrary *this;
  
                    /* catch() { ... } // from try @ 005c24e0 with catch @ 005c261c */
  this = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(this);
  return;
}


