/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005960a0
 * Function: Caver::GUIButton::SetTintColor
 * Signature: undefined __thiscall SetTintColor(GUIButton * this, Color param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIButton::SetTintColor(Caver::Color) */

void __thiscall Caver::GUIButton::SetTintColor(GUIButton *this,GUIButton *param_2)

{
                    /* try { // try from 005960cc to 006960f3 has its CatchHandler @ 00596fe0 */
  if ((((*param_2 != this[0x1bc]) || (param_2[1] != this[0x1bd])) || (param_2[2] != this[0x1be])) ||
     (param_2[3] != this[0x1bf])) {
    *(undefined4 *)(this + 0x1bc) = *(undefined4 *)param_2;
  }
  return;
}


