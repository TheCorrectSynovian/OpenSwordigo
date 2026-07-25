/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200200
 * Mangled: ._ZNK5Caver9Rectangle12IntersectionERKS0_
 * Demangled: Caver::Rectangle::Intersection(Caver::Rectangle const&)
 *
 * Callers: 3
 *   0x000000000034EC74  Caver::GUIView::safeBounds(void)
 *   0x00000000003D6A38  Caver::GameOverlayView::LayoutSubviews(void)
 *   0x000000000049E954  Caver::GUIView::PurgeRemovedSubviews(void)
 *
 * Callees: 1
 *   0x00000000004B2480  Caver::Rectangle::Intersection(Caver::Rectangle const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000200204 string=0x00000000004B2480 " "
 *   insn=0x0000000000200208 string=0x000000000020020C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::Intersection(Caver::Rectangle *this, const Caver::Rectangle *a2)
{
  return _ZNK5Caver9Rectangle12IntersectionERKS0_(this, a2);
}

