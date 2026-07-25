/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE6A0
 * Mangled: ._ZN5Caver16DebugInfoOverlayC2Ev
 * Demangled: Caver::DebugInfoOverlay::DebugInfoOverlay(void)
 *
 * Callers: 1
 *   0x000000000035037C  Caver::GameSceneView::ToggleDebugInfo(void)
 *
 * Callees: 1
 *   0x00000000003CAA00  boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE6A8 string=0x00000000001FE6AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::DebugInfoOverlay::DebugInfoOverlay(Caver::DebugInfoOverlay *this)
{
  JUMPOUT(0x3CAAD8);
}

