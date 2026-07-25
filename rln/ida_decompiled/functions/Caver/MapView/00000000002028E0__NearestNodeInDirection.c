/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002028E0
 * Mangled: ._ZN5Caver7MapView22NearestNodeInDirectionEPNS_11MapViewNodeERKNS_7Vector2E
 * Demangled: Caver::MapView::NearestNodeInDirection(Caver::MapViewNode *,Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x000000000042FA20  Caver::PortalView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callees: 1
 *   0x0000000000427A3C  Caver::MapView::NearestNodeInDirection(Caver::MapViewNode *,Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002028E8 string=0x00000000002028EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MapView::NearestNodeInDirection(
        Caver::MapView *this,
        Caver::MapViewNode *a2,
        const Caver::Vector2 *a3)
{
  return _ZN5Caver7MapView22NearestNodeInDirectionEPNS_11MapViewNodeERKNS_7Vector2E(this, a2, a3);
}

