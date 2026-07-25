/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004981C4
 * Mangled: _ZN5Caver8GUILabel9SetBoundsERKNS_9RectangleE
 * Demangled: Caver::GUILabel::SetBounds(Caver::Rectangle const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5840  Caver::GUILabel::UpdateBounds(void)
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x0000000000200DE0  Caver::GUIView::SetBounds(Caver::Rectangle const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000004981D4 string=0x00000000004981D8 "h"
 *   insn=0x00000000004981EC string=0x00000000001F8510 "0'"
 *   insn=0x00000000004981FC string=0x00000000001F5840 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUILabel::SetBounds(Caver::GUILabel *this, const Caver::Rectangle *a2)
{
  Caver::GUIView::SetBounds(this, a2);
  if ( *((_BYTE *)this + 312) )
    Caver::GUILabel::UpdateText(this);
  else
    Caver::GUILabel::UpdateBounds(this);
}

