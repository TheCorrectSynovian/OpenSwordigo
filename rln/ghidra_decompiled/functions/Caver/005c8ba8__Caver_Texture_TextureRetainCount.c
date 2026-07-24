/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c8ba8
 * Function: Caver::Texture::TextureRetainCount
 * Signature: undefined __thiscall TextureRetainCount(Texture * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::TextureRetainCount() const */

int __thiscall Caver::Texture::TextureRetainCount(Texture *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  
  puVar1 = *(undefined8 **)(this + 0x80);
  puVar2 = *(undefined8 **)(this + 0x78);
  iVar4 = *(int *)(this + 8);
                    /* try { // try from 005c8bc4 to 006c8beb has its CatchHandler @ 005c8cbc */
  while (iVar3 = iVar4, puVar2 != puVar1) {
    puVar5 = puVar2 + 1;
    iVar4 = TextureRetainCount((Texture *)*puVar2);
    puVar2 = puVar5;
    if (iVar4 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  return iVar3;
}


