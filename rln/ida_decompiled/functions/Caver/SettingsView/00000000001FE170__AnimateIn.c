/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE170
 * Mangled: ._ZN5Caver12SettingsView9AnimateInEv
 * Demangled: Caver::SettingsView::AnimateIn(void)
 *
 * Callers: 1
 *   0x000000000043A43C  Caver::SettingsView::UpdateAudioControls(void)
 *
 * Callees: 1
 *   0x000000000043A43C  Caver::SettingsView::UpdateAudioControls(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE178 string=0x00000000001FE17C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SettingsView::AnimateIn(Caver::SettingsView *this)
{
  JUMPOUT(0x43AA84);
}

