/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCE10
 * Mangled: ._ZN5Caver13PlayerProfile4SaveEb
 * Demangled: Caver::PlayerProfile::Save(bool)
 *
 * Callers: 4
 *   0x000000000035299C  Caver::GameViewController::SaveGameState(bool)
 *   0x000000000039FB4C  Caver::ProfilePanelView::DeleteTextFieldValueChanged(void *,Caver::GUIEvent *)
 *   0x00000000003A05B8  Caver::ProfilePanelView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Callees: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCE18 string=0x00000000001FCE1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PlayerProfile::Save(Caver::PlayerProfile *this)
{
  JUMPOUT(0x3C08CC);
}

