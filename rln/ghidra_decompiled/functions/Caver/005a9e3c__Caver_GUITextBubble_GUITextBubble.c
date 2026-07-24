/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a9e3c
 * Function: Caver::GUITextBubble::GUITextBubble
 * Signature: undefined __thiscall GUITextBubble(GUITextBubble * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GUITextBubble::GUITextBubble() */

void __thiscall Caver::GUITextBubble::GUITextBubble(GUITextBubble *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar2 = _UNK_00697258;
  uVar1 = _DAT_00697250;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)this = uVar1;
  puVar3 = PTR_DAT_007e5de8;
  uVar2 = _UNK_00697268;
  uVar1 = _DAT_00697260;
  this[0x20] = (GUITextBubble)0x1;
  *(undefined8 *)(this + 0x78) = uVar2;
  *(undefined8 *)(this + 0x70) = uVar1;
  uVar1 = _DAT_00697270;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined2 *)(this + 0x90) = 0;
  *(undefined **)(this + 0x28) = puVar3 + 0x18;
  *(undefined8 *)(this + 0x88) = uVar1;
  *(undefined4 *)(this + 0x94) = 0x7f7fffff;
  return;
}


