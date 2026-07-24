/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005aa1ec
 * Function: Caver::GUITextBubble::SetText
 * Signature: undefined __thiscall SetText(GUITextBubble * this, string * param_1, Color * param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextBubble::SetText(std::string const&, Caver::Color const&, float) */

void __thiscall
Caver::GUITextBubble::SetText(GUITextBubble *this,string *param_1,Color *param_2,float param_3)

{
  long lVar1;
  undefined8 uVar2;
  FontText *pFVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  FontText *local_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005aa21c to 006aa22f has its CatchHandler @ 005aa3ac */
  FUN_0066a6a8(this + 0x28);
  pFVar3 = *(FontText **)(this + 0x60);
                    /* try { // try from 005aa230 to 006aa2c7 has its CatchHandler @ 005aa148 */
  if (pFVar3 == (FontText *)0x0) {
    pFVar3 = operator_new(0xf0);
    *(undefined4 *)(pFVar3 + 0x10) = 0xff000000;
    pFVar3[0x2c] = (FontText)0xff;
    *(undefined4 *)(pFVar3 + 0xe8) = 0xffffffff;
    *(undefined4 *)(pFVar3 + 0x28) = 0;
    *(undefined4 *)(pFVar3 + 0x88) = 0;
    pFVar3[0xa8] = (FontText)0x0;
    *(undefined8 *)(pFVar3 + 0xa0) = 0;
    *(undefined4 *)(pFVar3 + 0x50) = 0;
    *(undefined8 *)(pFVar3 + 0xe0) = 0;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)pFVar3 = 0;
    *(undefined8 *)(pFVar3 + 0x20) = 0;
    *(undefined8 *)(pFVar3 + 0x18) = 0;
    *(undefined8 *)(pFVar3 + 0x80) = 0;
    *(undefined8 *)(pFVar3 + 0x78) = 0;
    *(undefined8 *)(pFVar3 + 0x70) = 0;
    *(undefined8 *)(pFVar3 + 0x68) = 0;
    *(undefined8 *)(pFVar3 + 0x60) = 0;
    *(undefined8 *)(pFVar3 + 0x58) = 0;
    *(undefined8 *)(pFVar3 + 0x98) = 0;
    *(undefined8 *)(pFVar3 + 0x90) = 0;
    *(undefined8 *)(pFVar3 + 0x38) = 0;
    *(undefined8 *)(pFVar3 + 0x30) = 0;
    *(undefined8 *)(pFVar3 + 0x48) = 0;
    *(undefined8 *)(pFVar3 + 0x40) = 0;
    *(undefined8 *)(pFVar3 + 200) = 0;
    *(undefined8 *)(pFVar3 + 0xc0) = 0;
    *(undefined8 *)(pFVar3 + 0xd8) = 0;
    *(undefined8 *)(pFVar3 + 0xd0) = 0;
    *(undefined8 *)(pFVar3 + 0xb8) = 0;
    *(undefined8 *)(pFVar3 + 0xb0) = 0;
    local_68 = pFVar3;
    boost::detail::shared_count::shared_count<Caver::FontText>((shared_count *)&local_60,pFVar3);
    boost::detail::sp_enable_shared_from_this(&local_68,pFVar3,pFVar3);
    pFVar3 = *(FontText **)(this + 0x60);
    plVar5 = *(long **)(this + 0x68);
                    /* try { // try from 005aa2c8 to 006aa2db has its CatchHandler @ 005aa3a8 */
    *(FontText **)(this + 0x60) = local_68;
    *(long **)(this + 0x68) = local_60;
    local_68 = pFVar3;
    local_60 = plVar5;
                    /* try { // try from 005aa2dc to 006aa3b3 has its CatchHandler @ 005aa148 */
    if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar4 = plVar5[2];
      plVar5[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    puVar6 = *(undefined8 **)(this + 0x60);
    Font::DefaultFont();
    if (local_60 != (long *)0x0) {
      local_60[1] = local_60[1] + 1;
    }
    plVar5 = (long *)puVar6[1];
    *puVar6 = local_68;
    puVar6[1] = local_60;
    if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar4 = plVar5[2];
      plVar5[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    plVar5 = local_60;
    if ((local_60 != (long *)0x0) &&
       (lVar4 = local_60[1], local_60[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005aa2c8 with catch @ 005aa3a8 */
      (**(code **)(*local_60 + 0x10))(local_60);
                    /* catch() { ... } // from try @ 005aa21c with catch @ 005aa3ac */
      lVar4 = plVar5[2];
                    /* catch() { ... } // from try @ 005aa170 with catch @ 005aa3b0 */
                    /* catch() { ... } // from try @ 005aa3f0 with catch @ 005aa3b4
                       catch() { ... } // from try @ 005aa508 with catch @ 005aa3b4
                       catch() { ... } // from try @ 005aa620 with catch @ 005aa3b4
                       catch() { ... } // from try @ 005aa6d0 with catch @ 005aa3b4
                       catch() { ... } // from try @ 005aa884 with catch @ 005aa3b4 */
      plVar5[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    pFVar3 = *(FontText **)(this + 0x60);
  }
  FontText::Clear(pFVar3);
                    /* try { // try from 005aa3dc to 006aa3ef has its CatchHandler @ 005aa88c */
  FontText::SetColor(*(FontText **)(this + 0x60),param_2);
  uVar2 = DAT_00688c08;
  lVar4 = *(long *)(this + 0x60);
                    /* try { // try from 005aa3f0 to 006aa49b has its CatchHandler @ 005aa3b4 */
  *(undefined1 *)(lVar4 + 0x28) = 1;
  *(undefined4 *)(lVar4 + 0x29) = 0xff000000;
  *(undefined8 *)(lVar4 + 0x30) = uVar2;
  local_68 = (FontText *)0x0;
  FontText::AddText(*(FontText **)(this + 0x60),param_1,param_3,(Vector2 *)&local_68);
  FontText::AlignHorizontally(*(FontText **)(this + 0x60),4);
  this[0x20] = (GUITextBubble)0x1;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


