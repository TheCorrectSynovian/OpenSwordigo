/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052c798
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
  
                    /* try { // try from 0052c798 to 0062c79f has its CatchHandler @ 0052c7a8 */
                    /* try { // try from 0052c7a0 to 0062c7ab has its CatchHandler @ 0052c68c */
                    /* catch() { ... } // from try @ 0052c798 with catch @ 0052c7a8 */
                    /* catch() { ... } // from try @ 0052c7f4 with catch @ 0052c7ac
                       catch() { ... } // from try @ 0052c810 with catch @ 0052c7ac */
  plVar2 = *(long **)(this + 0x1a0);
  *(undefined **)this = PTR_vtable_007e4de0 + 0x10;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* try { // try from 0052c7f0 to 0062c7f3 has its CatchHandler @ 0052c804 */
                    /* try { // try from 0052c7f4 to 0062c807 has its CatchHandler @ 0052c7ac */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* catch() { ... } // from try @ 0052c7f0 with catch @ 0052c804 */
  GUITextBubble::~GUITextBubble((GUITextBubble *)(this + 0xf0));
                    /* try { // try from 0052c808 to 0062c80f has its CatchHandler @ 0052c818 */
                    /* try { // try from 0052c810 to 0062c81b has its CatchHandler @ 0052c7ac */
  GUIView::~GUIView((GUIView *)this);
  return;
}


