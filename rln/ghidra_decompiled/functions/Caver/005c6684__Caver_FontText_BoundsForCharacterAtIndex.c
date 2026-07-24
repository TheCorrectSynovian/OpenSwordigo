/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c6684
 * Function: Caver::FontText::BoundsForCharacterAtIndex
 * Signature: undefined __cdecl BoundsForCharacterAtIndex(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FontText::BoundsForCharacterAtIndex(int) */

void Caver::FontText::BoundsForCharacterAtIndex(int param_1)

{
  long *plVar1;
  int in_w1;
  undefined8 *in_x8;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  plVar1 = (long *)(ulong)(uint)param_1;
  if (-1 < in_w1) {
    uVar3 = (ulong)in_w1;
    uVar4 = (plVar1[0x17] - plVar1[0x16] >> 2) * -0x71c71c71c71c71c7;
    if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
      lVar2 = plVar1[0x16] + uVar3 * 0x24;
      uVar5 = *(undefined8 *)(lVar2 + 4);
                    /* try { // try from 005c66c4 to 006c66d7 has its CatchHandler @ 005c7184 */
      in_x8[1] = *(undefined8 *)(lVar2 + 0xc);
      *in_x8 = uVar5;
      return;
    }
  }
                    /* try { // try from 005c66d8 to 006c66e7 has its CatchHandler @ 005c71d8 */
  Rectangle::TranslatedRectangle((Vector2 *)(*plVar1 + 0x4c));
  return;
}


