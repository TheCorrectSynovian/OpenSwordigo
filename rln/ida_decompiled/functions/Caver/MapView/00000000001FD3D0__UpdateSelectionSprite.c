/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD3D0
 * Mangled: ._ZN5Caver7MapView21UpdateSelectionSpriteEv
 * Demangled: Caver::MapView::UpdateSelectionSprite(void)
 *
 * Callers: 4
 *   0x0000000000427978  Caver::MapView::SelectNode(boost::shared_ptr<Caver::MapNode> const&)
 *   0x0000000000427990  Caver::MapView::SelectNodeAtIndex(ulong)
 *   0x00000000004279A0  Caver::MapView::ClearSelection(void)
 *   0x0000000000427B9C  Caver::MapView::TouchEnded(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x0000000000425FB4  Caver::MapView::AddNodeIconsToSprite(Caver::MapViewNode *,Caver::Rectangle const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD3D8 string=0x00000000001FD3DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MapView::UpdateSelectionSprite(Caver::MapView *this)
{
  JUMPOUT(0x426380);
}

