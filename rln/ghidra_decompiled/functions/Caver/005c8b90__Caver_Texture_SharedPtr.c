/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c8b90
 * Function: Caver::Texture::SharedPtr
 * Signature: undefined __cdecl SharedPtr(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::SharedPtr() */

void Caver::Texture::SharedPtr(void)

{
  long in_x0;
  long *in_x8;
  
  *in_x8 = in_x0;
  if (in_x0 != 0) {
    *(int *)(in_x0 + 8) = *(int *)(in_x0 + 8) + 1;
  }
  return;
}


