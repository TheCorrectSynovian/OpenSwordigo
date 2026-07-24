/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c259c
 * Function: Caver::Font::FontWithName
 * Signature: undefined __thiscall FontWithName(Font * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Font::FontWithName(std::string const&) */

void __thiscall Caver::Font::FontWithName(Font *this,string *param_1)

{
  string *psVar1;
  
  psVar1 = (string *)FontLibrary::sharedLibrary();
                    /* try { // try from 005c25c4 to 006c2637 has its CatchHandler @ 005c2484 */
  FontLibrary::FontWithName(psVar1);
  return;
}


