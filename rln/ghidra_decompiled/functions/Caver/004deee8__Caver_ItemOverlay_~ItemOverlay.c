/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004deee8
 * Function: Caver::ItemOverlay::~ItemOverlay
 * Signature: undefined __thiscall ~ItemOverlay(ItemOverlay * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemOverlay::~ItemOverlay() */

void __thiscall Caver::ItemOverlay::~ItemOverlay(ItemOverlay *this)

{
  ~ItemOverlay(this);
  operator_delete(this);
  return;
}


