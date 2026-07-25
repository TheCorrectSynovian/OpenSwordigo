/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7090
 * Mangled: ._ZN5Caver7CoinBar15SetCurrentCoinsEi
 * Demangled: Caver::CoinBar::SetCurrentCoins(int)
 *
 * Callers: 1
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *
 * Callees: 1
 *   0x00000000003C4A54  Caver::CoinBar::CreateIconSprite(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7098 string=0x00000000001F709C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CoinBar::SetCurrentCoins(Caver::CoinBar *this)
{
  JUMPOUT(0x3C4C7C);
}

