/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CD53C
 * Mangled: _ZN5Caver20DraggableOverlayItem14LayoutSubviewsEv
 * Demangled: Caver::DraggableOverlayItem::LayoutSubviews(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000003CD53C string=0x00000000001F94B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DraggableOverlayItem::LayoutSubviews(Caver::DraggableOverlayItem *this)
{
  return Caver::GUIView::LayoutSubviews(this);
}

