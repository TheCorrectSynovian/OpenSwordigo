/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a9bdc
 * Function: Caver::GUIRoundedRect::SetColor
 * Signature: undefined __thiscall SetColor(GUIRoundedRect * this, Color param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIRoundedRect::SetColor(Caver::Color) */

void __thiscall Caver::GUIRoundedRect::SetColor(GUIRoundedRect *this,GUIRoundedRect *param_2)

{
                    /* try { // try from 005a9be0 to 006a9bef has its CatchHandler @ 005a9d64 */
                    /* try { // try from 005a9bf0 to 006a9c6f has its CatchHandler @ 005a9a78 */
  if ((((*param_2 == this[8]) && (param_2[1] == this[9])) && (param_2[2] == this[10])) &&
     (param_2[3] == this[0xb])) {
    return;
  }
  *(undefined4 *)(this + 8) = *(undefined4 *)param_2;
  CreateSprite(this);
  return;
}


