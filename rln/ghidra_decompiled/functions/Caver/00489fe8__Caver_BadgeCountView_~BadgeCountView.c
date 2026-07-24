/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00489fe8
 * Function: Caver::BadgeCountView::~BadgeCountView
 * Signature: undefined __thiscall ~BadgeCountView(BadgeCountView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BadgeCountView::~BadgeCountView() */

void __thiscall Caver::BadgeCountView::~BadgeCountView(BadgeCountView *this)

{
  ~BadgeCountView(this);
                    /* try { // try from 00489ffc to 00589fff has its CatchHandler @ 0048a0b8 */
                    /* try { // try from 0048a000 to 0058a0d7 has its CatchHandler @ 00489f98 */
  operator_delete(this);
  return;
}


