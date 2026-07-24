/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052c840
 * Function: Caver::NotificationView::~NotificationView
 * Signature: undefined __thiscall ~NotificationView(NotificationView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::NotificationView::~NotificationView() */

void __thiscall Caver::NotificationView::~NotificationView(NotificationView *this)

{
  long lVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 0052c8b4 with catch @ 0052c848 */
  plVar2 = *(long **)(this + 0x1a0);
  *(undefined **)this = PTR_vtable_007e4de0 + 0x10;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
                    /* try { // try from 0052c88c to 0062c88f has its CatchHandler @ 0052c8a8 */
                    /* try { // try from 0052c890 to 0062c897 has its CatchHandler @ 0052c8bc */
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* catch() { ... } // from try @ 0052c88c with catch @ 0052c8a8 */
                    /* try { // try from 0052c8ac to 0062c8b3 has its CatchHandler @ 0052c8b8 */
  GUITextBubble::~GUITextBubble((GUITextBubble *)(this + 0xf0));
                    /* try { // try from 0052c8b4 to 0062c8cf has its CatchHandler @ 0052c848 */
  GUIView::~GUIView((GUIView *)this);
                    /* catch() { ... } // from try @ 0052c8ac with catch @ 0052c8b8 */
                    /* catch() { ... } // from try @ 0052c890 with catch @ 0052c8bc */
  operator_delete(this);
  return;
}


