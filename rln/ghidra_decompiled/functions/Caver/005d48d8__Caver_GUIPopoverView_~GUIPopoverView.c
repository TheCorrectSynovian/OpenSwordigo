/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d48d8
 * Function: Caver::GUIPopoverView::~GUIPopoverView
 * Signature: undefined __thiscall ~GUIPopoverView(GUIPopoverView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIPopoverView::~GUIPopoverView() */

void __thiscall Caver::GUIPopoverView::~GUIPopoverView(GUIPopoverView *this)

{
  ~GUIPopoverView(this);
                    /* try { // try from 005d48ec to 006d48f7 has its CatchHandler @ 005d49e0 */
                    /* try { // try from 005d48f8 to 006d4a03 has its CatchHandler @ 005d47f4 */
  operator_delete(this);
  return;
}


