/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a91ec
 * Function: Caver::GUIAnimatedSprite::SetFrame
 * Signature: undefined __thiscall SetFrame(GUIAnimatedSprite * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAnimatedSprite::SetFrame(Caver::Rectangle const&) */

void __thiscall Caver::GUIAnimatedSprite::SetFrame(GUIAnimatedSprite *this,Rectangle *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  this[0x30] = (GUIAnimatedSprite)0x1;
  *(undefined8 *)(this + 0x3c) = uVar2;
  *(undefined8 *)(this + 0x34) = uVar1;
  return;
}


