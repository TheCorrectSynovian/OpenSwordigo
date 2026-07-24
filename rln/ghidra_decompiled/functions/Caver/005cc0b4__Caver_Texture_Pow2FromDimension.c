/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cc0b4
 * Function: Caver::Texture::Pow2FromDimension
 * Signature: undefined __thiscall Pow2FromDimension(Texture * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::Pow2FromDimension(int) */

void __thiscall Caver::Texture::Pow2FromDimension(Texture *this,int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 1;
  do {
                    /* catch() { ... } // from try @ 005cbf90 with catch @ 005cc0b8 */
                    /* catch() { ... } // from try @ 005cbfd0 with catch @ 005cc0c0 */
    bVar1 = iVar2 < param_1;
    iVar2 = iVar2 << 1;
  } while (bVar1);
  return;
}


