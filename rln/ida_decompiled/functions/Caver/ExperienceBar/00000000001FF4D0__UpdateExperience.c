/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF4D0
 * Mangled: ._ZN5Caver13ExperienceBar16UpdateExperienceEv
 * Demangled: Caver::ExperienceBar::UpdateExperience(void)
 *
 * Callers: 5
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *   0x0000000000357900  Caver::GameViewController::LevelUpViewControllerDidFinish(Caver::LevelUpViewController *)
 *   0x0000000000357988  `non-virtual thunk to'Caver::GameViewController::LevelUpViewControllerDidFinish(Caver::LevelUpViewController *)
 *   0x00000000003CFA50  Caver::ExperienceBar::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003CFAE4  Caver::ExperienceBar::UpdateExperience(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF4D8 string=0x00000000001FF4DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ExperienceBar::UpdateExperience(Caver::ExperienceBar *this)
{
  return _ZN5Caver13ExperienceBar16UpdateExperienceEv(this);
}

