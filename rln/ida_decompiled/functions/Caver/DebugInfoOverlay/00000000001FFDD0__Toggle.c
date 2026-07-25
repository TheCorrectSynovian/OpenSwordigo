/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFDD0
 * Mangled: ._ZN5Caver16DebugInfoOverlay6ToggleEv
 * Demangled: Caver::DebugInfoOverlay::Toggle(void)
 *
 * Callers: 1
 *   0x000000000035037C  Caver::GameSceneView::ToggleDebugInfo(void)
 *
 * Callees: 1
 *   0x00000000003CAB34  Caver::DebugInfoOverlay::Toggle(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFDD8 string=0x00000000001FFDDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DebugInfoOverlay::Toggle(Caver::DebugInfoOverlay *this)
{
  return _ZN5Caver16DebugInfoOverlay6ToggleEv(this);
}

