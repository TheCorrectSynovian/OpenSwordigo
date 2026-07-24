/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00451c24
 * Function: Caver::GameViewController::~GameViewController
 * Signature: undefined __thiscall ~GameViewController(GameViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::~GameViewController() */

void __thiscall Caver::GameViewController::~GameViewController(GameViewController *this)

{
  ~GameViewController(this);
  operator_delete(this);
  return;
}


