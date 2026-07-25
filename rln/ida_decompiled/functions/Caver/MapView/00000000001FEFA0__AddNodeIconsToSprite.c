/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEFA0
 * Mangled: ._ZN5Caver7MapView20AddNodeIconsToSpriteEPNS_11MapViewNodeERKNS_9RectangleEf
 * Demangled: Caver::MapView::AddNodeIconsToSprite(Caver::MapViewNode *,Caver::Rectangle const&,float)
 *
 * Callers: 1
 *   0x0000000000424D10  Caver::MapView::UpdateNodesSprite(void)
 *
 * Callees: 1
 *   0x0000000000425FB4  Caver::MapView::AddNodeIconsToSprite(Caver::MapViewNode *,Caver::Rectangle const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEFA8 string=0x00000000001FEFAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapView::AddNodeIconsToSprite(
        Caver::MapView *this,
        Caver::MapViewNode *a2,
        const Caver::Rectangle *a3,
        float a4)
{
  return _ZN5Caver7MapView20AddNodeIconsToSpriteEPNS_11MapViewNodeERKNS_9RectangleEf(this, a2, a3, a4);
}

