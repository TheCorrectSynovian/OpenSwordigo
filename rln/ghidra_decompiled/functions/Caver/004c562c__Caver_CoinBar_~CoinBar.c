/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c562c
 * Function: Caver::CoinBar::~CoinBar
 * Signature: undefined __thiscall ~CoinBar(CoinBar * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CoinBar::~CoinBar() */

void __thiscall Caver::CoinBar::~CoinBar(CoinBar *this)

{
  ~CoinBar(this);
  operator_delete(this);
  return;
}


