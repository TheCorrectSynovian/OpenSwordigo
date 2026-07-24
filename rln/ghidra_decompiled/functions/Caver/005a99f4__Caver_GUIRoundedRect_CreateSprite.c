/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a99f4
 * Function: Caver::GUIRoundedRect::CreateSprite
 * Signature: undefined __thiscall CreateSprite(GUIRoundedRect * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIRoundedRect::CreateSprite() */

void __thiscall Caver::GUIRoundedRect::CreateSprite(GUIRoundedRect *this)

{
  Sprite *this_00;
  long lVar1;
  long lVar2;
  uint uVar3;
  float local_a8;
  undefined4 uStack_a4;
  float local_a0;
  undefined4 uStack_9c;
  float local_98 [4];
  float local_88 [4];
  float local_78 [4];
  float local_68 [4];
  long local_58;
  
                    /* try { // try from 005a99f4 to 006a9a77 has its CatchHandler @ 005a9710 */
                    /* catch() { ... } // from try @ 005a99cc with catch @ 005a99f8 */
                    /* catch() { ... } // from try @ 005a9878 with catch @ 005a99fc */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this_00 = (Sprite *)(this + 0x50);
  Sprite::Init(this_00,(intrusive_ptr *)this,0x12,0x10,true);
  Sprite::Clear(this_00);
  lVar2 = *(long *)this;
  uVar3 = 0;
  local_68[0] = *(float *)(this + 0xc);
  local_68[1] = *(float *)(this + 0x1c);
                    /* catch() { ... } // from try @ 005a9864 with catch @ 005a9a6c */
  local_68[2] = *(float *)(this + 0x1c) + *(float *)(this + 0x24);
                    /* try { // try from 005a9a78 to 006a9bcb has its CatchHandler @ 005a9a78
                       catch() { ... } // from try @ 005a9a78 with catch @ 005a9a78
                       catch() { ... } // from try @ 005a9bf0 with catch @ 005a9a78
                       catch() { ... } // from try @ 005a9c74 with catch @ 005a9a78
                       catch() { ... } // from try @ 005a9d5c with catch @ 005a9a78 */
  local_68[3] = *(float *)(this + 0xc) + *(float *)(this + 0x14);
  local_78[0] = *(float *)(this + 0x10);
  local_78[1] = *(float *)(this + 0x20);
  local_78[2] = *(float *)(this + 0x20) + *(float *)(this + 0x28);
  local_78[3] = *(float *)(this + 0x10) + *(float *)(this + 0x18);
  local_88[0] = *(float *)(lVar2 + 0x5c);
  local_88[1] = *(float *)(this + 0x2c);
  local_88[2] = *(float *)(this + 0x2c) + *(float *)(this + 0x34);
  local_88[3] = *(float *)(lVar2 + 0x5c) + *(float *)(lVar2 + 100);
  local_98[0] = *(float *)(lVar2 + 0x60);
  local_98[1] = *(float *)(this + 0x30);
  local_98[2] = *(float *)(this + 0x30) + *(float *)(this + 0x38);
  local_98[3] = *(float *)(lVar2 + 0x60) + *(float *)(lVar2 + 0x68);
  do {
    local_a0 = local_68[uVar3 & 3];
    uStack_9c = *(undefined4 *)((long)local_78 + (ulong)(uVar3 & 0xfffffffc));
    local_a8 = local_88[uVar3 & 3];
    uStack_a4 = *(undefined4 *)((long)local_98 + (ulong)(uVar3 & 0xfffffffc));
    Sprite::AddVertex(this_00,(Vector2 *)&local_a0,(Vector2 *)&local_a8,(Color *)(this + 8));
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x10);
  Sprite::AddFaces(this_00,0x12,(ushort *)&DAT_007e8878);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


