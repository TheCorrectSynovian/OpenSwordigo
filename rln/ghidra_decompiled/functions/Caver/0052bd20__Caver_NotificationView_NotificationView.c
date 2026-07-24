/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052bd20
 * Function: Caver::NotificationView::NotificationView
 * Signature: undefined __thiscall NotificationView(NotificationView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::NotificationView::NotificationView() */

void __thiscall Caver::NotificationView::NotificationView(NotificationView *this)

{
  undefined8 uVar1;
  
  GUIView::GUIView((GUIView *)this);
                    /* catch() { ... } // from try @ 0052bc88 with catch @ 0052bd3c */
                    /* catch() { ... } // from try @ 0052bc34 with catch @ 0052bd40 */
  *(undefined **)this = PTR_vtable_007e4de0 + 0x10;
  GUITextBubble::GUITextBubble((GUITextBubble *)(this + 0xf0));
  uVar1 = DAT_006840e0;
                    /* catch() { ... } // from try @ 0052bce8 with catch @ 0052bd54 */
                    /* try { // try from 0052bd58 to 0062bd5f has its CatchHandler @ 0052bd68 */
  this[0x188] = (NotificationView)0x0;
  *(undefined8 *)(this + 0x18c) = uVar1;
                    /* try { // try from 0052bd60 to 0062bd6b has its CatchHandler @ 0052bbbc */
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
                    /* catch() { ... } // from try @ 0052bd58 with catch @ 0052bd68 */
                    /* catch() { ... } // from try @ 0052bdc8 with catch @ 0052bd6c
                       catch() { ... } // from try @ 0052bde4 with catch @ 0052bd6c */
  return;
}


