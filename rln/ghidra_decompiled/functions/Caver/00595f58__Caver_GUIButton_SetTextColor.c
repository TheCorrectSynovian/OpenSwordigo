/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00595f58
 * Function: Caver::GUIButton::SetTextColor
 * Signature: undefined __thiscall SetTextColor(GUIButton * this, Color param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIButton::SetTextColor(Caver::Color) */

void __thiscall Caver::GUIButton::SetTextColor(GUIButton *this,GUILabel *param_2)

{
  long lVar1;
  GUILabel *this_00;
  long *plVar2;
  
  this_00 = *(GUILabel **)(this + 0x140);
  if (this_00 != (GUILabel *)0x0) {
                    /* catch() { ... } // from try @ 00595f24 with catch @ 00595f84 */
                    /* try { // try from 00595fa4 to 00695fcb has its CatchHandler @ 00595fd4 */
    if ((((*param_2 != this_00[0x108]) || (param_2[1] != this_00[0x109])) ||
        (param_2[2] != this_00[0x10a])) || (param_2[3] != this_00[0x10b])) {
      plVar2 = *(long **)(this_00 + 0x118);
      *(undefined4 *)(this_00 + 0x108) = *(undefined4 *)param_2;
                    /* try { // try from 00595fcc to 00695fd7 has its CatchHandler @ 00595eb8 */
      *(undefined8 *)(this_00 + 0x110) = 0;
      *(undefined8 *)(this_00 + 0x118) = 0;
                    /* catch() { ... } // from try @ 00595fa4 with catch @ 00595fd4 */
                    /* try { // try from 00595fd8 to 0069602b has its CatchHandler @ 00595fd8
                       catch() { ... } // from try @ 00595fd8 with catch @ 00595fd8
                       catch() { ... } // from try @ 005968a8 with catch @ 00595fd8
                       catch() { ... } // from try @ 00596eec with catch @ 00595fd8 */
      if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar1 = plVar2[2];
        plVar2[2] = lVar1 + -1;
        if (lVar1 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      GUILabel::UpdateText(this_00);
      return;
    }
  }
  return;
}


