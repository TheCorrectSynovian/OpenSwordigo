/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ffe78
 * Function: Caver::CharacterView::~CharacterView
 * Signature: undefined __thiscall ~CharacterView(CharacterView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterView::~CharacterView() */

void __thiscall Caver::CharacterView::~CharacterView(CharacterView *this)

{
  ~CharacterView(this);
  operator_delete(this);
  return;
}


