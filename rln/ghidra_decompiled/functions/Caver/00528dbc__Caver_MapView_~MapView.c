/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00528dbc
 * Function: Caver::MapView::~MapView
 * Signature: undefined __thiscall ~MapView(MapView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::~MapView() */

void __thiscall Caver::MapView::~MapView(MapView *this)

{
  ~MapView(this);
                    /* catch() { ... } // from try @ 00528da4 with catch @ 00528ddc */
  operator_delete(this);
  return;
}


