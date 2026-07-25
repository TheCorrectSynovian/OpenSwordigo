/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D74B4
 * Mangled: _ZN5Caver15GameOverlayView22LayoutBoundsForSubviewERKSs
 * Demangled: Caver::GameOverlayView::LayoutBoundsForSubview(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F4E60  Caver::GameOverlayView::LayoutBoundsForSubview(std::string const&)
 *
 * Callees: 3
 *   0x00000000001F5CB0  Caver::GUIView::safeBounds(void)
 *   0x0000000000200380  Caver::GUIView::controlBounds(void)
 *   0x00000000005689E0  sub_5689E0
 *
 * Referenced strings: 16
 *   insn=0x00000000003D74C8 string=0x000000000059257C "left"
 *   insn=0x00000000003D74CC string=0x00000000003D74D0 "!"
 *   insn=0x00000000003D74D8 string=0x00000000003D74DC "AE"
 *   insn=0x00000000003D74E4 string=0x000000000059258D "right"
 *   insn=0x00000000003D74EC string=0x00000000003D74F0 "<E"
 *   insn=0x00000000003D74F0 string=0x00000000003D74F4 "`"
 *   insn=0x00000000003D74F8 string=0x000000000059259F "jump"
 *   insn=0x00000000003D7500 string=0x00000000003D7504 "7E"
 *   insn=0x00000000003D750C string=0x00000000005925B0 "swing"
 *   insn=0x00000000003D7514 string=0x00000000003D7518 "2E"
 *   insn=0x00000000003D7518 string=0x00000000003D751C " "
 *   insn=0x00000000003D7520 string=0x00000000005925FF "skill"
 *   insn=0x00000000003D7528 string=0x00000000003D752C "-E"
 *   insn=0x00000000003D7534 string=0x0000000000592611 "consumables"
 *   insn=0x00000000003D753C string=0x00000000003D7540 "(E"
 *   insn=0x00000000003D755C string=0x00000000001F5CB0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameOverlayView::LayoutBoundsForSubview(Caver::GUIView *a1, int a2)
{
  if ( (unsigned int)sub_5689E0(a2, "left")
    && (unsigned int)sub_5689E0(a2, "right")
    && (unsigned int)sub_5689E0(a2, "jump")
    && (unsigned int)sub_5689E0(a2, "swing")
    && (unsigned int)sub_5689E0(a2, "skill")
    && (unsigned int)sub_5689E0(a2, "consumables") )
  {
    Caver::GUIView::safeBounds(a1);
  }
  else
  {
    Caver::GUIView::controlBounds(a1);
  }
}

