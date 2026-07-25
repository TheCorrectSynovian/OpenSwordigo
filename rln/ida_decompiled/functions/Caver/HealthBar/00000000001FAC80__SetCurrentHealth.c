/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAC80
 * Mangled: ._ZN5Caver9HealthBar16SetCurrentHealthEi
 * Demangled: Caver::HealthBar::SetCurrentHealth(int)
 *
 * Callers: 2
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *   0x00000000003D41D8  Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003DAD4C  Caver::HealthBar::SetCurrentHealth(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FAC84 string=0x00000000003DAD4C ""
 *   insn=0x00000000001FAC88 string=0x00000000001FAC8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HealthBar::SetCurrentHealth(Caver::HealthBar *this, int a2)
{
  return _ZN5Caver9HealthBar16SetCurrentHealthEi(this, a2);
}

