/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042F9E8
 * Mangled: _ZN5Caver10PortalView20SetGotoButtonVisibleEb
 * Demangled: Caver::PortalView::SetGotoButtonVisible(bool)
 *
 * Callers: 1
 *   0x00000000001FEBF0  Caver::PortalView::SetGotoButtonVisible(bool)
 *
 * Callees: 1
 *   0x00000000001F8600  Caver::GUIView::AddPopupAnimation(void)
 *
 * Referenced strings: 4
 *   insn=0x000000000042F9EC string=0x000000000042F9F0 "\t"
 *   insn=0x000000000042F9F0 string=0x000000000042F9F4 "\t"
 *   insn=0x000000000042F9F4 string=0x000000000042F9F8 "H"
 *   insn=0x000000000042F9FC string=0x00000000001F8600 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GUIView *__fastcall Caver::PortalView::SetGotoButtonVisible(Caver::PortalView *this, char a2)
{
  Caver::GUIView *result; // x0

  result = (Caver::GUIView *)*((_QWORD *)this + 38);
  *((_BYTE *)result + 228) = (a2 & 1) == 0;
  if ( (a2 & 1) != 0 )
    return (Caver::GUIView *)Caver::GUIView::AddPopupAnimation(result);
  return result;
}

