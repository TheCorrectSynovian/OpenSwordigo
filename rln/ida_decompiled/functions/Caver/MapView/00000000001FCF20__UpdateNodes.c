/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCF20
 * Mangled: ._ZN5Caver7MapView11UpdateNodesEv
 * Demangled: Caver::MapView::UpdateNodes(void)
 *
 * Callers: 2
 *   0x0000000000424008  Caver::MapView::UpdateTargetPath(void)
 *   0x0000000000424BC8  Caver::MapView::HideFarNodes(boost::shared_ptr<Caver::MapNode> const&,float,float)
 *
 * Callees: 1
 *   0x0000000000424ACC  Caver::MapView::UpdateNodes(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCF28 string=0x00000000001FCF2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapView::UpdateNodes(Caver::MapView *this)
{
  return _ZN5Caver7MapView11UpdateNodesEv(this);
}

