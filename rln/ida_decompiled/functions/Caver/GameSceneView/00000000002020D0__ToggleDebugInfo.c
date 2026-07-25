/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002020D0
 * Mangled: ._ZN5Caver13GameSceneView15ToggleDebugInfoEv
 * Demangled: Caver::GameSceneView::ToggleDebugInfo(void)
 *
 * Callers: 1
 *   0x00000000003505A8  Caver::GameSceneView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callees: 1
 *   0x000000000035037C  Caver::GameSceneView::ToggleDebugInfo(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002020D8 string=0x00000000002020DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameSceneView::ToggleDebugInfo(Caver::GameSceneView *this)
{
  return _ZN5Caver13GameSceneView15ToggleDebugInfoEv(this);
}

