/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203AF0
 * Mangled: ._ZN5Caver12MainMenuView19UpdateAudioControlsEv
 * Demangled: Caver::MainMenuView::UpdateAudioControls(void)
 *
 * Callers: 2
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x0000000000393094  Caver::MainMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x0000000000393094  Caver::MainMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203AF8 string=0x0000000000203AFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MainMenuView::UpdateAudioControls(Caver::MainMenuView *this)
{
  JUMPOUT(0x393430);
}

