/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c8b58
 * Function: Caver::Texture::~Texture
 * Signature: undefined __thiscall ~Texture(Texture * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::~Texture() */

void __thiscall Caver::Texture::~Texture(Texture *this)

{
  ~Texture(this);
  operator_delete(this);
  return;
}


