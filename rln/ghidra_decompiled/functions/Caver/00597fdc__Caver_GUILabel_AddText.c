/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00597fdc
 * Function: Caver::GUILabel::AddText
 * Signature: undefined __thiscall AddText(GUILabel * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUILabel::AddText(std::string const&) */

void __thiscall Caver::GUILabel::AddText(GUILabel *this,string *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00597ff8 to 0069801b has its CatchHandler @ 00597b98 */
                    /* catch() { ... } // from try @ 00597f34 with catch @ 00598004 */
  plVar3 = *(long **)(this + 0x120);
                    /* catch() { ... } // from try @ 00597bc8 with catch @ 00598008 */
  lVar4 = *(long *)(this + 0xf0);
  if (lVar4 != *plVar3) {
    lVar5 = *(long *)(this + 0xf8);
    if (lVar5 != 0) {
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
    }
    plVar6 = (long *)plVar3[1];
    *plVar3 = lVar4;
    plVar3[1] = lVar5;
    if ((plVar6 != (long *)0x0) && (lVar4 = plVar6[1], plVar6[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar4 = plVar6[2];
                    /* catch() { ... } // from try @ 005980c8 with catch @ 00598060
                       catch() { ... } // from try @ 005980e4 with catch @ 00598060 */
      plVar6[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
  }
  if (this[0x140] != (GUILabel)0x0) {
    lVar4 = *(long *)(this + 0x120);
    uVar1 = *(undefined4 *)(this + 0x141);
    *(undefined1 *)(lVar4 + 0x28) = 1;
    *(undefined4 *)(lVar4 + 0x29) = uVar1;
    *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(this + 0x148);
  }
                    /* try { // try from 005980a0 to 006980c7 has its CatchHandler @ 005980d8 */
  if (this[0x138] == (GUILabel)0x0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = *(float *)(this + 0x8c);
  }
  local_40 = 0;
                    /* try { // try from 005980c8 to 006980db has its CatchHandler @ 00598060 */
  FontText::AddText(*(FontText **)(this + 0x120),param_1,fVar7,(Vector2 *)&local_40);
  UpdateBounds(this);
                    /* catch() { ... } // from try @ 005980a0 with catch @ 005980d8 */
                    /* try { // try from 005980dc to 006980e3 has its CatchHandler @ 005980ec */
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 005980e4 to 006980ef has its CatchHandler @ 00598060 */
                    /* catch() { ... } // from try @ 005980dc with catch @ 005980ec */
                    /* catch() { ... } // from try @ 0059817c with catch @ 005980f0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


