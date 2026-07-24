/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c6210
 * Function: Caver::FontText::Translate
 * Signature: undefined __thiscall Translate(FontText * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FontText::Translate(Caver::Vector2 const&) */

void __thiscall Caver::FontText::Translate(FontText *this,Vector2 *param_1)

{
  long lVar1;
  long lVar2;
  
  Sprite::Translate((Sprite *)(this + 0x58),param_1);
  Rectangle::Translate((Rectangle *)(this + 0x40),param_1);
  lVar2 = *(long *)(this + 0xb8);
  for (lVar1 = *(long *)(this + 0xb0); lVar1 != lVar2; lVar1 = lVar1 + 0x24) {
    *(ulong *)(lVar1 + 0x14) =
         CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                  (float)((ulong)*(undefined8 *)(lVar1 + 0x14) >> 0x20),
                  (float)*(undefined8 *)param_1 + (float)*(undefined8 *)(lVar1 + 0x14));
    Rectangle::Translate((Rectangle *)(lVar1 + 4),param_1);
  }
  return;
}


