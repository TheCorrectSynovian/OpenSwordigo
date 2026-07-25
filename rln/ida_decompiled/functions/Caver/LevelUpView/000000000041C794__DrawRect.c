/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041C794
 * Mangled: _ZN5Caver11LevelUpView8DrawRectEPNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::LevelUpView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000041C794 string=0x00000000001F9850 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::LevelUpView::DrawRect()
{
  Caver::GUIView::DrawRect();
}

