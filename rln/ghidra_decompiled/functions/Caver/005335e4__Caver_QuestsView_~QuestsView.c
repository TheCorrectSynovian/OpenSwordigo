/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005335e4
 * Function: Caver::QuestsView::~QuestsView
 * Signature: undefined __thiscall ~QuestsView(QuestsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::QuestsView::~QuestsView() */

void __thiscall Caver::QuestsView::~QuestsView(QuestsView *this)

{
  ~QuestsView(this);
                    /* catch() { ... } // from try @ 0053366c with catch @ 00533600 */
  operator_delete(this);
  return;
}


