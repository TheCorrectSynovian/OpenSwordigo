/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD650
 * Mangled: ._ZN5Caver7CoinBarC2Ev
 * Demangled: Caver::CoinBar::CoinBar(void)
 *
 * Callers: 1
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *
 * Callees: 1
 *   0x00000000003C3F80  Caver::CoinBar::CoinBar(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD658 string=0x00000000001FD65C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CoinBar::CoinBar(Caver::CoinBar *this)
{
  return _ZN5Caver7CoinBarC2Ev(this);
}

