/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5C90
 * Mangled: ._ZN5Caver7ManaBar10SetMaxManaEi
 * Demangled: Caver::ManaBar::SetMaxMana(int)
 *
 * Callers: 2
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *   0x00000000003D41D8  Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003E0254  Caver::ManaBar::SetMaxMana(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F5C94 string=0x00000000003E0254 ""
 *   insn=0x00000000001F5C98 string=0x00000000001F5C9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ManaBar::SetMaxMana(Caver::ManaBar *this, int a2)
{
  return _ZN5Caver7ManaBar10SetMaxManaEi(this, a2);
}

