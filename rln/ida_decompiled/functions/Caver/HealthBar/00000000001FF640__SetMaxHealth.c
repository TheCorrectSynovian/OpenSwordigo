/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF640
 * Mangled: ._ZN5Caver9HealthBar12SetMaxHealthEi
 * Demangled: Caver::HealthBar::SetMaxHealth(int)
 *
 * Callers: 2
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *   0x00000000003D41D8  Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003DAD24  Caver::HealthBar::SetMaxHealth(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FF644 string=0x00000000003DAD24 ""
 *   insn=0x00000000001FF648 string=0x00000000001FF64C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HealthBar::SetMaxHealth(Caver::HealthBar *this, int a2)
{
  return _ZN5Caver9HealthBar12SetMaxHealthEi(this, a2);
}

