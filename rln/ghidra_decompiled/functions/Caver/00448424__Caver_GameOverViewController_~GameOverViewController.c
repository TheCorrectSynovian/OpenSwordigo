/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00448424
 * Function: Caver::GameOverViewController::~GameOverViewController
 * Signature: undefined __thiscall ~GameOverViewController(GameOverViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverViewController::~GameOverViewController() */

void __thiscall Caver::GameOverViewController::~GameOverViewController(GameOverViewController *this)

{
  ~GameOverViewController(this);
                    /* try { // try from 00448438 to 00548447 has its CatchHandler @ 0044ef8c */
  operator_delete(this);
  return;
}


