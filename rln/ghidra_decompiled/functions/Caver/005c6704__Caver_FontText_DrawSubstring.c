/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c6704
 * Function: Caver::FontText::DrawSubstring
 * Signature: undefined __thiscall DrawSubstring(FontText * this, RenderingContext * param_1, ulong param_2, ulong param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FontText::DrawSubstring(Caver::RenderingContext*, unsigned long, unsigned long) const */

void __thiscall
Caver::FontText::DrawSubstring(FontText *this,RenderingContext *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
                    /* try { // try from 005c6714 to 006c673b has its CatchHandler @ 005c71d8 */
                    /* try { // try from 005c673c to 006c6797 has its CatchHandler @ 005c6574 */
  if ((param_3 != 0) &&
     (uVar3 = (*(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 2) * -0x71c71c71c71c71c7,
     param_2 <= uVar3 && uVar3 - param_2 != 0)) {
    RenderingContext::SetBlendingEnabled(param_1,true);
    RenderingContext::SetBlendFunc(param_1,0x302,0x303);
    RenderingContext::UseProgram(param_1,3);
    lVar1 = *(long *)(this + 0xb0);
                    /* try { // try from 005c6798 to 006c67bf has its CatchHandler @ 005c70e4 */
    if (param_3 + param_2 < (ulong)((*(long *)(this + 0xb8) - lVar1 >> 2) * -0x71c71c71c71c71c7)) {
      uVar2 = (uint)*(ushort *)(lVar1 + param_2 * 0x24 + 0x1c);
                    /* try { // try from 005c67c0 to 006c68e7 has its CatchHandler @ 005c6574 */
      Sprite::DrawTriangles
                ((Sprite *)(this + 0x58),param_1,uVar2,
                 *(ushort *)(lVar1 + (param_3 + param_2) * 0x24 + 0x1c) - uVar2);
      return;
    }
    Sprite::Draw((Sprite *)(this + 0x58),param_1);
    return;
  }
  return;
}


