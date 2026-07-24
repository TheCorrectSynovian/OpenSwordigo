/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c5124
 * Function: Caver::FontText::Clear
 * Signature: undefined __thiscall Clear(FontText * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FontText::Clear() */

void __thiscall Caver::FontText::Clear(FontText *this)

{
  *(undefined8 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  Sprite::Clear((Sprite *)(this + 0x58));
  *(undefined8 *)(this + 0xe0) = 0;
                    /* try { // try from 005c5158 to 006c538f has its CatchHandler @ 005c4f90 */
  *(undefined4 *)(this + 0xe8) = 0xffffffff;
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)(this + 0xb0);
  *(undefined8 *)(this + 0xd0) = *(undefined8 *)(this + 200);
  return;
}


