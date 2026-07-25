/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9FF0
 * Mangled: ._ZN5Caver13GameSceneView31SetSkillToggleButtonHighlightedEb
 * Demangled: Caver::GameSceneView::SetSkillToggleButtonHighlighted(bool)
 *
 * Callers: 2
 *   0x000000000035A7C8  boost::shared_ptr<Caver::PortalViewController>::shared_ptr<Caver::PortalViewController>(Caver::PortalViewController *)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x000000000034FAF4  Caver::GameSceneView::SetSkillToggleButtonHighlighted(bool)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9FF4 string=0x000000000034FAF4 ""
 *   insn=0x00000000001F9FF8 string=0x00000000001F9FFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameSceneView::SetSkillToggleButtonHighlighted(Caver::GameSceneView *this, bool a2)
{
  return _ZN5Caver13GameSceneView31SetSkillToggleButtonHighlightedEb(this, a2);
}

