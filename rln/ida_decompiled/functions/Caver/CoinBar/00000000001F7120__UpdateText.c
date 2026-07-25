/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7120
 * Mangled: ._ZN5Caver7CoinBar10UpdateTextEv
 * Demangled: Caver::CoinBar::UpdateText(void)
 *
 * Callers: 1
 *   0x00000000003C4C84  Caver::CoinBar::Update(float)
 *
 * Callees: 1
 *   0x00000000003C4F90  Caver::CoinBar::UpdateText(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7128 string=0x00000000001F712C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CoinBar::UpdateText(Caver::CoinBar *this)
{
  return _ZN5Caver7CoinBar10UpdateTextEv(this);
}

