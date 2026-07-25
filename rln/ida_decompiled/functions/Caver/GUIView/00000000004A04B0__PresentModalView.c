/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A04B0
 * Mangled: _ZN5Caver7GUIView16PresentModalViewERKN5boost10shared_ptrIS0_EEb
 * Demangled: Caver::GUIView::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *
 * Callers: 1
 *   0x00000000001FCA30  Caver::GUIView::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *
 * Callees: 1
 *   0x00000000002013C0  Caver::GUIWindow::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *
 * Referenced strings: 3
 *   insn=0x00000000004A04B8 string=0x00000000004A04BC ""
 *   insn=0x00000000004A04C4 string=0x00000000004A04C8 "y@"
 *   insn=0x00000000004A04D4 string=0x00000000004A04D8 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::PresentModalView(__int64 a1)
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 240LL))(a1);
  if ( result )
    return Caver::GUIWindow::PresentModalView();
  return result;
}

