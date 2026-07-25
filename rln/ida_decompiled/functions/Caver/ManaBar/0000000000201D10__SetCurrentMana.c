/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201D10
 * Mangled: ._ZN5Caver7ManaBar14SetCurrentManaEi
 * Demangled: Caver::ManaBar::SetCurrentMana(int)
 *
 * Callers: 2
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *   0x00000000003D41D8  Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003E0328  Caver::ManaBar::SetCurrentMana(int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000201D14 string=0x00000000003E0328 ""
 *   insn=0x0000000000201D18 string=0x0000000000201D1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ManaBar::SetCurrentMana(Caver::ManaBar *this, int a2)
{
  return _ZN5Caver7ManaBar14SetCurrentManaEi(this, a2);
}

