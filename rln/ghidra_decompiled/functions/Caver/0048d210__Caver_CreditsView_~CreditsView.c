/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048d210
 * Function: Caver::CreditsView::~CreditsView
 * Signature: undefined __thiscall ~CreditsView(CreditsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CreditsView::~CreditsView() */

void __thiscall Caver::CreditsView::~CreditsView(CreditsView *this)

{
                    /* try { // try from 0048d21c to 0058d22f has its CatchHandler @ 0048d548 */
  ~CreditsView(this);
                    /* try { // try from 0048d230 to 0058d23f has its CatchHandler @ 0048d588 */
  operator_delete(this);
  return;
}


