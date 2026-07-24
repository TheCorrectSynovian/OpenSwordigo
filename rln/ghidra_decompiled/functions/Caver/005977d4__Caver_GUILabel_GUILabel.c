/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005977d4
 * Function: Caver::GUILabel::GUILabel
 * Signature: undefined __thiscall GUILabel(GUILabel * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUILabel::GUILabel() */

void __thiscall Caver::GUILabel::GUILabel(GUILabel *this)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  FontText *pFVar5;
  long lVar6;
  FontText *local_58;
  long *local_50;
  long local_48;
  
                    /* try { // try from 005977dc to 00697803 has its CatchHandler @ 005978dc */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar3 = PTR_vtable_007e4b08;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  puVar4 = PTR_DAT_007e5de8;
  *(undefined **)this = puVar3 + 0x10;
                    /* try { // try from 00597824 to 0069784b has its CatchHandler @ 005978d4 */
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0x400000000;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  this[0x138] = (GUILabel)0x0;
  *(undefined4 *)(this + 0x13c) = 0;
  this[0x140] = (GUILabel)0x0;
  *(undefined4 *)(this + 0x108) = 0xff000000;
  *(undefined **)(this + 0x100) = puVar4 + 0x18;
  this[0xe5] = (GUILabel)0x0;
  pFVar5 = operator_new(0xf0);
  pFVar5[0x2c] = (FontText)0xff;
  *(undefined4 *)(pFVar5 + 0xe8) = 0xffffffff;
  *(undefined4 *)(pFVar5 + 0x10) = 0xff000000;
                    /* try { // try from 00597878 to 0069789f has its CatchHandler @ 00597a7c */
  *(undefined4 *)(pFVar5 + 0x28) = 0;
  *(undefined4 *)(pFVar5 + 0x88) = 0;
  *(undefined8 *)(pFVar5 + 0xa0) = 0;
  pFVar5[0xa8] = (FontText)0x0;
  *(undefined4 *)(pFVar5 + 0x50) = 0;
  *(undefined8 *)(pFVar5 + 0xe0) = 0;
  *(undefined8 *)(pFVar5 + 8) = 0;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)(pFVar5 + 0x20) = 0;
  *(undefined8 *)(pFVar5 + 0x18) = 0;
  *(undefined8 *)(pFVar5 + 0x80) = 0;
  *(undefined8 *)(pFVar5 + 0x78) = 0;
                    /* try { // try from 005978a0 to 0069791f has its CatchHandler @ 00597704 */
  *(undefined8 *)(pFVar5 + 0x70) = 0;
  *(undefined8 *)(pFVar5 + 0x68) = 0;
  *(undefined8 *)(pFVar5 + 0x60) = 0;
  *(undefined8 *)(pFVar5 + 0x58) = 0;
  *(undefined8 *)(pFVar5 + 0x98) = 0;
  *(undefined8 *)(pFVar5 + 0x90) = 0;
  *(undefined8 *)(pFVar5 + 0x38) = 0;
  *(undefined8 *)(pFVar5 + 0x30) = 0;
  *(undefined8 *)(pFVar5 + 0x48) = 0;
  *(undefined8 *)(pFVar5 + 0x40) = 0;
  *(undefined8 *)(pFVar5 + 200) = 0;
  *(undefined8 *)(pFVar5 + 0xc0) = 0;
  *(undefined8 *)(pFVar5 + 0xd8) = 0;
  *(undefined8 *)(pFVar5 + 0xd0) = 0;
  *(undefined8 *)(pFVar5 + 0xb8) = 0;
  *(undefined8 *)(pFVar5 + 0xb0) = 0;
  local_58 = pFVar5;
  boost::detail::shared_count::shared_count<Caver::FontText>((shared_count *)&local_50,pFVar5);
  boost::detail::sp_enable_shared_from_this(&local_58,pFVar5,pFVar5);
  pFVar5 = *(FontText **)(this + 0x120);
  plVar1 = *(long **)(this + 0x128);
                    /* catch() { ... } // from try @ 00597824 with catch @ 005978d4 */
                    /* catch() { ... } // from try @ 005977dc with catch @ 005978dc */
  *(FontText **)(this + 0x120) = local_58;
  *(long **)(this + 0x128) = local_50;
  local_58 = pFVar5;
  local_50 = plVar1;
                    /* catch() { ... } // from try @ 00597794 with catch @ 005978ec */
  if ((plVar1 != (long *)0x0) && (lVar6 = plVar1[1], plVar1[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0059774c with catch @ 005978fc */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar6 = plVar1[2];
    plVar1[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
                    /* try { // try from 00597920 to 006979d7 has its CatchHandler @ 00597aa0 */
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


