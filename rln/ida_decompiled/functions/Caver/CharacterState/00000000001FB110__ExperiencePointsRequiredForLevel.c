/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB110
 * Mangled: ._ZN5Caver14CharacterState32ExperiencePointsRequiredForLevelEi
 * Demangled: Caver::CharacterState::ExperiencePointsRequiredForLevel(int)
 *
 * Callers: 7
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x000000000034AA00  Caver::GameSceneController::ApplyLevelUp(int,int,int)
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *   0x0000000000351C5C  Caver::GameViewController::LoadGameState(void)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003CFAE4  Caver::ExperienceBar::UpdateExperience(void)
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *
 * Callees: 1
 *   0x00000000003AB174  Caver::CharacterState::LoadFromProtobufMessage(Caver::Proto::CharacterState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB118 string=0x00000000001FB11C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CharacterState::ExperiencePointsRequiredForLevel(Caver::CharacterState *this)
{
  JUMPOUT(0x3ABB4C);
}

