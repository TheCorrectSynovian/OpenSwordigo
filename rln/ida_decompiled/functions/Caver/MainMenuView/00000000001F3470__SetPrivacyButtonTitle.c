/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3470
 * Mangled: ._ZN5Caver12MainMenuView21SetPrivacyButtonTitleERKSs
 * Demangled: Caver::MainMenuView::SetPrivacyButtonTitle(std::string const&)
 *
 * Callers: 1
 *   0x000000000036C584  Caver::MainMenuViewController::Update(float)
 *
 * Callees: 1
 *   0x0000000000393F74  Caver::MainMenuView::AnimateButtonsIn(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3478 string=0x00000000001F347C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::MainMenuView::SetPrivacyButtonTitle()
{
  JUMPOUT(0x394128);
}

