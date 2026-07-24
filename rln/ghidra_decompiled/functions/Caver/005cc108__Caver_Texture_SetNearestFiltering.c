/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cc108
 * Function: Caver::Texture::SetNearestFiltering
 * Signature: undefined __thiscall SetNearestFiltering(Texture * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::SetNearestFiltering() */

void __thiscall Caver::Texture::SetNearestFiltering(Texture *this)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  glGetIntegerv(0x8069,&local_2c);
  glGenTextures(1,this + 0x38);
  glBindTexture(0xde1,*(undefined4 *)(this + 0x38));
  glTexParameteri(0xde1,0x2801,0x2600);
  glTexParameteri(0xde1,0x2800,0x2600);
                    /* catch() { ... } // from try @ 005cbf5c with catch @ 005cc174 */
  glBindTexture(0xde1,local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


