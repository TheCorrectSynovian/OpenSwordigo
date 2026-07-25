/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202190
 * Mangled: ._ZN5boost10shared_ptrIN5Caver16DebugInfoOverlayEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::DebugInfoOverlay>::shared_ptr<Caver::DebugInfoOverlay>(Caver::DebugInfoOverlay *)
 *
 * Callers: 1
 *   0x000000000035037C  Caver::GameSceneView::ToggleDebugInfo(void)
 *
 * Callees: 1
 *   0x000000000035119C  boost::shared_ptr<Caver::DebugInfoOverlay>::shared_ptr<Caver::DebugInfoOverlay>(Caver::DebugInfoOverlay *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202198 string=0x000000000020219C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::DebugInfoOverlay>::shared_ptr<Caver::DebugInfoOverlay>()
{
  return _ZN5boost10shared_ptrIN5Caver16DebugInfoOverlayEEC2IS2_EEPT_();
}

