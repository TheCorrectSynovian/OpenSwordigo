/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053e508
 * Function: Caver::SkillPickerView::~SkillPickerView
 * Signature: undefined __thiscall ~SkillPickerView(SkillPickerView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillPickerView::~SkillPickerView() */

void __thiscall Caver::SkillPickerView::~SkillPickerView(SkillPickerView *this)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = PTR_vtable_007e5e38 + 0x160;
                    /* try { // try from 0053e530 to 0063e53b has its CatchHandler @ 0053e404 */
  *(undefined **)this = PTR_vtable_007e5e38 + 0x10;
  *(undefined **)(this + 0xf0) = puVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0053e500 with catch @ 0053e538
                        */
  boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(*(shared_ptr **)(this + 0x138));
                    /* catch() { ... } // from try @ 0053e550 with catch @ 0053e53c */
  boost::checked_array_delete<boost::shared_ptr<Caver::GUILabel>>(*(shared_ptr **)(this + 0x130));
  boost::checked_array_delete<boost::shared_ptr<Caver::MenuItemSlot>>
            (*(shared_ptr **)(this + 0x128));
                    /* try { // try from 0053e54c to 0063e54f has its CatchHandler @ 0053e560 */
  plVar3 = *(long **)(this + 0x118);
                    /* try { // try from 0053e550 to 0063e573 has its CatchHandler @ 0053e53c */
                    /* catch() { ... } // from try @ 0053e54c with catch @ 0053e560 */
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* try { // try from 0053e574 to 0063e58f has its CatchHandler @ 0053e574
                       catch() { ... } // from try @ 0053e574 with catch @ 0053e574
                       catch() { ... } // from try @ 0053e594 with catch @ 0053e574 */
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* try { // try from 0053e590 to 0063e593 has its CatchHandler @ 0053e5a8 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* try { // try from 0053e594 to 0063e5bb has its CatchHandler @ 0053e574 */
  plVar3 = *(long **)(this + 0x108);
                    /* catch() { ... } // from try @ 0053e590 with catch @ 0053e5a8 */
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* catch() { ... } // from try @ 0053e67c with catch @ 0053e5cc */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* try { // try from 0053e5e4 to 0063e5eb has its CatchHandler @ 0053e688 */
  GUIView::~GUIView((GUIView *)this);
  return;
}


