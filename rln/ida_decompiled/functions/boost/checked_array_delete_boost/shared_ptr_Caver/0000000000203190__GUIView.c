/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203190
 * Mangled: ._ZN5boost20checked_array_deleteINS_10shared_ptrIN5Caver7GUIViewEEEEEvPT_
 * Demangled: boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(boost::shared_ptr<Caver::GUIView> *)
 *
 * Callers: 6
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *   0x00000000003FF5E8  Caver::CharacterView::~CharacterView()
 *   0x000000000041B220  Caver::LevelUpView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000041C7D4  Caver::LevelUpView::~LevelUpView()
 *   0x000000000043BACC  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000043E2A0  Caver::SkillPickerView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callees: 1
 *   0x00000000003FFF6C  boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(boost::shared_ptr<Caver::GUIView> *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203198 string=0x000000000020319C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(void *a1)
{
  return _ZN5boost20checked_array_deleteINS_10shared_ptrIN5Caver7GUIViewEEEEEvPT_(a1);
}

