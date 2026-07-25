/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6800
 * Mangled: ._ZN5Caver13ExperienceBar17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEE
 * Demangled: Caver::ExperienceBar::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callers: 2
 *   0x00000000003D41D8  Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *
 * Callees: 1
 *   0x00000000003CFA50  Caver::ExperienceBar::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6808 string=0x00000000001F680C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ExperienceBar::InitWithGameState(Caver::ExperienceBar *this)
{
  return _ZN5Caver13ExperienceBar17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEE(this);
}

