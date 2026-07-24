/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00596024
 * Function: Caver::GUIButton::SetBackgroundColor
 * Signature: undefined __thiscall SetBackgroundColor(GUIButton * this, Color param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIButton::SetBackgroundColor(Caver::Color) */

void __thiscall Caver::GUIButton::SetBackgroundColor(GUIButton *this,undefined4 *param_2)

{
  long lVar1;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  long local_28;
  
                    /* try { // try from 0059602c to 0069603f has its CatchHandler @ 00596d4c */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00596040 to 0069604b has its CatchHandler @ 00596fe0 */
  *(undefined4 *)(this + 0x1b8) = *param_2;
  if (*(GUIRoundedRect **)(this + 0x138) != (GUIRoundedRect *)0x0) {
    local_30 = *(undefined1 *)param_2;
    local_2f = *(undefined1 *)((long)param_2 + 1);
    local_2e = *(undefined1 *)((long)param_2 + 2);
    local_2d = *(undefined1 *)((long)param_2 + 3);
    GUIRoundedRect::SetColor(*(GUIRoundedRect **)(this + 0x138),&local_30);
  }
                    /* try { // try from 00596084 to 006960ab has its CatchHandler @ 00596ae4 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


