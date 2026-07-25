/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCAA0
 * Mangled: ._ZNK5Caver7MapNode5TitleEv
 * Demangled: Caver::MapNode::Title(void)
 *
 * Callers: 6
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x0000000000370748  Caver::PortalViewController::LoadView(void)
 *   0x0000000000370DDC  Caver::PortalViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x000000000041E2F8  Caver::MapMenuPage::UpdateTitle(void)
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *
 * Callees: 1
 *   0x00000000003BF1CC  Caver::MapNode::Title(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCAA8 string=0x00000000001FCAAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapNode::Title(Caver::MapNode *this)
{
  return _ZNK5Caver7MapNode5TitleEv(this);
}

