/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c25ec
 * Function: Caver::Font::SmallSystemFont
 * Signature: undefined __cdecl SmallSystemFont(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Font::SmallSystemFont() */

void Caver::Font::SmallSystemFont(void)

{
  FontLibrary *this;
  
                    /* catch() { ... } // from try @ 005c255c with catch @ 005c25ec */
                    /* catch() { ... } // from try @ 005c2594 with catch @ 005c25f8 */
  this = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::SmallSystemFont(this);
  return;
}


