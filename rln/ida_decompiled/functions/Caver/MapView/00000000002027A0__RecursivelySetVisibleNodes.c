/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002027A0
 * Mangled: ._ZN5Caver7MapView26RecursivelySetVisibleNodesEPNS_7MapNodeERKNS_7Vector2ES5_
 * Demangled: Caver::MapView::RecursivelySetVisibleNodes(Caver::MapNode *,Caver::Vector2 const&,Caver::Vector2 const&)
 *
 * Callers: 2
 *   0x0000000000424008  Caver::MapView::UpdateTargetPath(void)
 *   0x0000000000424BC8  Caver::MapView::HideFarNodes(boost::shared_ptr<Caver::MapNode> const&,float,float)
 *
 * Callees: 1
 *   0x0000000000424930  Caver::MapView::RecursivelySetVisibleNodes(Caver::MapNode *,Caver::Vector2 const&,Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002027A8 string=0x00000000002027AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapView::RecursivelySetVisibleNodes(
        Caver::MapView *this,
        Caver::MapNode *a2,
        const Caver::Vector2 *a3,
        const Caver::Vector2 *a4)
{
  return _ZN5Caver7MapView26RecursivelySetVisibleNodesEPNS_7MapNodeERKNS_7Vector2ES5_(this, a2, a3, a4);
}

