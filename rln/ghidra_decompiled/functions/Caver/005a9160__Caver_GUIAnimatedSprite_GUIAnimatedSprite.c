/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a9160
 * Function: Caver::GUIAnimatedSprite::GUIAnimatedSprite
 * Signature: undefined __thiscall GUIAnimatedSprite(GUIAnimatedSprite * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAnimatedSprite::GUIAnimatedSprite() */

void __thiscall Caver::GUIAnimatedSprite::GUIAnimatedSprite(GUIAnimatedSprite *this)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a90d8 with catch @ 005a9164
                        */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(GUIAnimatedSprite **)(this + 0x20) = this + 0x20;
  *(GUIAnimatedSprite **)(this + 0x28) = this + 0x20;
  *(undefined2 *)(this + 0x30) = 0x101;
  *(undefined8 *)(this + 0x34) = 0;
                    /* try { // try from 005a9188 to 006a91af has its CatchHandler @ 005a91b8 */
  return;
}


