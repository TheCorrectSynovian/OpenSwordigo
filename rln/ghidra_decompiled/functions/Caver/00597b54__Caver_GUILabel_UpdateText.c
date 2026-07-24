/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00597b54
 * Function: Caver::GUILabel::UpdateText
 * Signature: undefined __thiscall UpdateText(GUILabel * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUILabel::UpdateText() */

void __thiscall Caver::GUILabel::UpdateText(GUILabel *this)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  FontText *this_00;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar4 = *(long *)(this + 0xf0);
  if (lVar4 == 0) {
    Font::SystemFont();
    if (local_40 != (long *)0x0) {
                    /* try { // try from 00597b98 to 00697bc7 has its CatchHandler @ 00597b98
                       catch() { ... } // from try @ 00597b98 with catch @ 00597b98
                       catch() { ... } // from try @ 00597bcc with catch @ 00597b98
                       catch() { ... } // from try @ 00597cf0 with catch @ 00597b98
                       catch() { ... } // from try @ 00597d9c with catch @ 00597b98
                       catch() { ... } // from try @ 00597e2c with catch @ 00597b98
                       catch() { ... } // from try @ 00597ebc with catch @ 00597b98
                       catch() { ... } // from try @ 00597ff8 with catch @ 00597b98 */
      local_40[1] = local_40[1] + 1;
    }
    plVar6 = *(long **)(this + 0xf8);
    *(undefined8 *)(this + 0xf0) = local_48;
    *(long **)(this + 0xf8) = local_40;
    if ((plVar6 != (long *)0x0) && (lVar4 = plVar6[1], plVar6[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* try { // try from 00597bc8 to 00697bcb has its CatchHandler @ 00598008 */
      lVar4 = plVar6[2];
                    /* try { // try from 00597bcc to 00697caf has its CatchHandler @ 00597b98 */
      plVar6[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    if ((local_40 != (long *)0x0) &&
       (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar4 = local_40[2];
      local_40[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*local_40 + 0x18))(local_40);
      }
    }
    lVar4 = *(long *)(this + 0xf0);
    if (lVar4 != 0) goto LAB_00597c38;
  }
  else {
LAB_00597c38:
    if (*(long *)(*(long *)(this + 0x100) + -0x18) != 0) {
      plVar6 = *(long **)(this + 0x120);
      if (lVar4 != *plVar6) {
        lVar5 = *(long *)(this + 0xf8);
        if (lVar5 != 0) {
          *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
        }
        plVar7 = (long *)plVar6[1];
        *plVar6 = lVar4;
        plVar6[1] = lVar5;
        if ((plVar7 != (long *)0x0) && (lVar4 = plVar7[1], plVar7[1] = lVar4 + -1, lVar4 + -1 == 0))
        {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          lVar4 = plVar7[2];
          plVar7[2] = lVar4 + -1;
          if (lVar4 + -1 == 0) {
                    /* try { // try from 00597cb0 to 00697cef has its CatchHandler @ 00597f14 */
            (**(code **)(*plVar7 + 0x18))(plVar7);
          }
        }
      }
      FontText::SetColor(*(FontText **)(this + 0x120),(Color *)(this + 0x108));
      lVar4 = *(long *)(this + 0x110);
      if (lVar4 != 0) {
        lVar5 = *(long *)(this + 0x118);
        lVar1 = *(long *)(this + 0x120);
        if (lVar5 != 0) {
          *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
        }
        plVar6 = *(long **)(lVar1 + 0x20);
        *(long *)(lVar1 + 0x18) = lVar4;
        *(long *)(lVar1 + 0x20) = lVar5;
                    /* try { // try from 00597cf0 to 00697d87 has its CatchHandler @ 00597b98 */
        if ((plVar6 != (long *)0x0) && (lVar4 = plVar6[1], plVar6[1] = lVar4 + -1, lVar4 + -1 == 0))
        {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          lVar4 = plVar6[2];
          plVar6[2] = lVar4 + -1;
          if (lVar4 + -1 == 0) {
            (**(code **)(*plVar6 + 0x18))(plVar6);
          }
        }
      }
      if (this[0x140] != (GUILabel)0x0) {
        lVar4 = *(long *)(this + 0x120);
        uVar2 = *(undefined4 *)(this + 0x141);
        *(undefined1 *)(lVar4 + 0x28) = 1;
        *(undefined4 *)(lVar4 + 0x29) = uVar2;
        *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(this + 0x148);
      }
      this_00 = *(FontText **)(this + 0x120);
      *(undefined4 *)(this_00 + 0x38) = *(undefined4 *)(this + 0x13c);
      FontText::Clear(this_00);
      if (this[0x138] == (GUILabel)0x0) {
                    /* try { // try from 00597d88 to 00697d9b has its CatchHandler @ 00597fc8 */
        fVar8 = 0.0;
      }
      else {
        fVar8 = *(float *)(this + 0x8c);
      }
      local_48 = 0;
      FontText::AddText(*(FontText **)(this + 0x120),(string *)(this + 0x100),fVar8,
                        (Vector2 *)&local_48);
      goto LAB_00597d9c;
    }
  }
  FontText::Clear(*(FontText **)(this + 0x120));
LAB_00597d9c:
                    /* try { // try from 00597d9c to 00697e17 has its CatchHandler @ 00597b98 */
  UpdateBounds(this);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


