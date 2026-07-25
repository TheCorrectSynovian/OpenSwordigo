/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8D90
 * Mangled: ._ZN5Caver11GameOptions17ApplyAudioOptionsEv
 * Demangled: Caver::GameOptions::ApplyAudioOptions(void)
 *
 * Callers: 3
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000393094  Caver::MainMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x0000000000439CFC  Caver::SettingsView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x00000000003B4B98  boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>(Caver::MusicPlaylist *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8D98 string=0x00000000001F8D9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameOptions::ApplyAudioOptions(Caver::GameOptions *this)
{
  JUMPOUT(0x3B4D40);
}

