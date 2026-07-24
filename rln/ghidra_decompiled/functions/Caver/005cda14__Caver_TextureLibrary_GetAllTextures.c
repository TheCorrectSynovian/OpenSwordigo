/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cda14
 * Function: Caver::TextureLibrary::GetAllTextures
 * Signature: undefined __thiscall GetAllTextures(TextureLibrary * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureLibrary::GetAllTextures(std::vector<boost::intrusive_ptr<Caver::Texture>,
   std::allocator<boost::intrusive_ptr<Caver::Texture> > >*) */

void __thiscall Caver::TextureLibrary::GetAllTextures(TextureLibrary *this,vector *param_1)

{
  long *plVar1;
  long lVar2;
  TextureLibrary *pTVar3;
  
                    /* catch() { ... } // from try @ 005cda0c with catch @ 005cda18 */
                    /* catch() { ... } // from try @ 005cd904 with catch @ 005cda1c */
                    /* catch() { ... } // from try @ 005cd8e0 with catch @ 005cda2c */
  for (pTVar3 = *(TextureLibrary **)(this + 0x20); pTVar3 != this + 0x10;
      pTVar3 = (TextureLibrary *)FUN_0064c640(pTVar3)) {
    plVar1 = *(long **)(param_1 + 8);
    if (plVar1 == *(long **)(param_1 + 0x10)) {
      std::
      vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>
      ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>
                       *)param_1);
    }
    else {
      lVar2 = *(long *)(pTVar3 + 0x28);
      *plVar1 = lVar2;
                    /* try { // try from 005cda50 to 006cda57 has its CatchHandler @ 005cdadc */
      if (lVar2 != 0) {
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      }
      *(long **)(param_1 + 8) = plVar1 + 1;
    }
  }
  return;
}


