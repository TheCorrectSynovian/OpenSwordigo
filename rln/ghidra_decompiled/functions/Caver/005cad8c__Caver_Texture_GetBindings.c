/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cad8c
 * Function: Caver::Texture::GetBindings
 * Signature: undefined __thiscall GetBindings(Texture * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::Texture::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall Caver::Texture::GetBindings(Texture *this,vector *param_1)

{
                    /* try { // try from 005cad90 to 006cad93 has its CatchHandler @ 005cb194 */
  GetBindings(this + -0x10,param_1);
  return;
}


