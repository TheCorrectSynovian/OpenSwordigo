/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F45B0
 * Mangled: ._ZN5Caver15SkillPickerView17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEE
 * Demangled: Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callers: 1
 *   0x00000000003724C4  Caver::SkillPickerViewController::LoadView(void)
 *
 * Callees: 1
 *   0x000000000043BACC  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F45B8 string=0x00000000001F45BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SkillPickerView::InitWithGameState()
{
  return _ZN5Caver15SkillPickerView17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEE();
}

