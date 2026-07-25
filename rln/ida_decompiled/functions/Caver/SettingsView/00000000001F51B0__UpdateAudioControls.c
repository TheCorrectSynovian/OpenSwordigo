/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F51B0
 * Mangled: ._ZN5Caver12SettingsView19UpdateAudioControlsEv
 * Demangled: Caver::SettingsView::UpdateAudioControls(void)
 *
 * Callers: 1
 *   0x0000000000439CFC  Caver::SettingsView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x000000000043A43C  Caver::SettingsView::UpdateAudioControls(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F51B8 string=0x00000000001F51BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SettingsView::UpdateAudioControls(Caver::SettingsView *this)
{
  return _ZN5Caver12SettingsView19UpdateAudioControlsEv(this);
}

