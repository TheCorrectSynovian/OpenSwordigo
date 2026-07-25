/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB4E0
 * Mangled: ._ZN5Caver7GUIView17RemoveAllSubviewsEv
 * Demangled: Caver::GUIView::RemoveAllSubviews(void)
 *
 * Callers: 2
 *   0x000000000034E1A0  Caver::GameSceneView::InitWithSceneController(boost::shared_ptr<Caver::GameSceneController> const&)
 *   0x00000000003CAB34  Caver::DebugInfoOverlay::Toggle(void)
 *
 * Callees: 1
 *   0x000000000049F62C  Caver::GUIView::RemoveAllSubviews(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB4E8 string=0x00000000001FB4EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIView::RemoveAllSubviews(Caver::GUIView *this)
{
  return _ZN5Caver7GUIView17RemoveAllSubviewsEv(this);
}

