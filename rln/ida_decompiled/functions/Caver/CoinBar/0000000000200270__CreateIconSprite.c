/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200270
 * Mangled: ._ZN5Caver7CoinBar16CreateIconSpriteEv
 * Demangled: Caver::CoinBar::CreateIconSprite(void)
 *
 * Callers: 1
 *   0x00000000003C3F80  Caver::CoinBar::CoinBar(void)
 *
 * Callees: 1
 *   0x00000000003C4A54  Caver::CoinBar::CreateIconSprite(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200278 string=0x000000000020027C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CoinBar::CreateIconSprite(Caver::CoinBar *this)
{
  return _ZN5Caver7CoinBar16CreateIconSpriteEv(this);
}

