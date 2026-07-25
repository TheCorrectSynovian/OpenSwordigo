/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDB70
 * Mangled: ._ZN5Caver7MapView12HideFarNodesERKN5boost10shared_ptrINS_7MapNodeEEEff
 * Demangled: Caver::MapView::HideFarNodes(boost::shared_ptr<Caver::MapNode> const&,float,float)
 *
 * Callers: 1
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *
 * Callees: 1
 *   0x0000000000424BC8  Caver::MapView::HideFarNodes(boost::shared_ptr<Caver::MapNode> const&,float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDB78 string=0x00000000001FDB7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapView::HideFarNodes(Caver::MapView *this)
{
  return _ZN5Caver7MapView12HideFarNodesERKN5boost10shared_ptrINS_7MapNodeEEEff(this);
}

