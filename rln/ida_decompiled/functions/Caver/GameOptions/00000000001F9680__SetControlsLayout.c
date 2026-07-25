/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9680
 * Mangled: ._ZN5Caver11GameOptions17SetControlsLayoutERKN5boost10shared_ptrINS_13GUIViewLayoutEEE
 * Demangled: Caver::GameOptions::SetControlsLayout(boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Callers: 2
 *   0x000000000033E14C  Caver::ConfigureOverlayViewController::ConfigureOverlayViewLayoutDidChange(Caver::ConfigureOverlayView *)
 *   0x000000000035299C  Caver::GameViewController::SaveGameState(bool)
 *
 * Callees: 1
 *   0x000000000033E14C  Caver::ConfigureOverlayViewController::ConfigureOverlayViewLayoutDidChange(Caver::ConfigureOverlayView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9688 string=0x00000000001F968C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameOptions::SetControlsLayout()
{
  JUMPOUT(0x33E338);
}

