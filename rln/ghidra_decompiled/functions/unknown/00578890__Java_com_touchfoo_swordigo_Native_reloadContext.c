/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00578890
 * Function: Java_com_touchfoo_swordigo_Native_reloadContext
 * Signature: undefined Java_com_touchfoo_swordigo_Native_reloadContext(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_reloadContext(void)

{
  TextureLibrary *this;
  
  this = (TextureLibrary *)Caver::TextureLibrary::sharedLibrary();
  Caver::TextureLibrary::ReloadTextures(this,false);
  return;
}


