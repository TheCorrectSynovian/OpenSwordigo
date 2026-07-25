/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049722C
 * Mangled: _ZN5Caver12GUIFrameView14LayoutSubviewsEv
 * Demangled: Caver::GUIFrameView::LayoutSubviews(void)
 *
 * Callers: 1
 *   0x0000000000200E90  Caver::GUIFrameView::LayoutSubviews(void)
 *
 * Callees: 2
 *   0x00000000001F5550  Caver::GUIRoundedRect::CreateWithOuterBounds(Caver::Rectangle const&)
 *   0x00000000001F95E0  Caver::GUITexturedRect::CreateWithBounds(Caver::Rectangle const&,bool)
 *
 * Referenced strings: 7
 *   insn=0x0000000000497238 string=0x000000000049723C "`~@"
 *   insn=0x000000000049723C string=0x0000000000497240 "`"
 *   insn=0x0000000000497240 string=0x0000000000497244 "a"
 *   insn=0x0000000000497240 string=0x000000000049724C "`z@"
 *   insn=0x0000000000497248 string=0x00000000001F5550 "P'"
 *   insn=0x0000000000497254 string=0x0000000000497258 "a"
 *   insn=0x0000000000497264 string=0x00000000001F95E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GUITexturedRect *__fastcall Caver::GUIFrameView::LayoutSubviews(Caver::GUIFrameView *this)
{
  Caver::GUIRoundedRect *v2; // x0
  Caver::GUITexturedRect *result; // x0

  v2 = (Caver::GUIRoundedRect *)*((_QWORD *)this + 31);
  if ( v2 )
    Caver::GUIRoundedRect::CreateWithOuterBounds(v2, (Caver::GUIFrameView *)((char *)this + 132));
  result = (Caver::GUITexturedRect *)*((_QWORD *)this + 30);
  if ( result )
    return (Caver::GUITexturedRect *)Caver::GUITexturedRect::CreateWithBounds(
                                       result,
                                       (Caver::GUIFrameView *)((char *)this + 132),
                                       0);
  return result;
}

