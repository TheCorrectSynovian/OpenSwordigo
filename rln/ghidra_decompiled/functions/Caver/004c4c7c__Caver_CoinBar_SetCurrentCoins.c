/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c4c7c
 * Function: Caver::CoinBar::SetCurrentCoins
 * Signature: undefined __thiscall SetCurrentCoins(CoinBar * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CoinBar::SetCurrentCoins(int) */

void __thiscall Caver::CoinBar::SetCurrentCoins(CoinBar *this,int param_1)

{
  *(int *)(this + 0xec) = param_1;
  return;
}


