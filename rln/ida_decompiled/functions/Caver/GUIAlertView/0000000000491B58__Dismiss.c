/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000491B58
 * Mangled: _ZN5Caver12GUIAlertView7DismissEv
 * Demangled: Caver::GUIAlertView::Dismiss(void)
 *
 * Callers: 1
 *   0x0000000000200880  Caver::GUIAlertView::Dismiss(void)
 *
 * Callees: 3
 *   0x00000000001F84B0  Caver::GUIAlertView::AddAnimations(bool)
 *   0x00000000001F8750  Caver::GUIView::DismissModalView(Caver::GUIView*)
 *   0x00000000002019E0  Caver::GUIView::IsFirstResponder(void)
 *
 * Referenced strings: 18
 *   insn=0x0000000000491B68 string=0x0000000000491B6C "h&T"
 *   insn=0x0000000000491B6C string=0x0000000000491B70 ")"
 *   insn=0x0000000000491B70 string=0x0000000000491B74 ")"
 *   insn=0x0000000000491B74 string=0x0000000000491B78 "?"
 *   insn=0x0000000000491B78 string=0x0000000000491B7C "K"
 *   insn=0x0000000000491B90 string=0x0000000000491B94 "h"
 *   insn=0x0000000000491B90 string=0x0000000000491BA8 "h&T"
 *   insn=0x0000000000491B98 string=0x0000000000491B9C ""
 *   insn=0x0000000000491B9C string=0x0000000000491BA0 "i@"
 *   insn=0x0000000000491BB0 string=0x0000000000491BB4 ")"
 *   insn=0x0000000000491BB4 string=0x0000000000491BB8 ")"
 *   insn=0x0000000000491BBC string=0x0000000000491BC0 "K"
 *   insn=0x0000000000491BC8 string=0x0000000000491BCC "9"
 *   insn=0x0000000000491BCC string=0x00000000001F84B0 "0'"
 *   insn=0x0000000000491BD8 string=0x0000000000491BDC "`"
 *   insn=0x0000000000491BD8 string=0x00000000001F8750 "0'"
 *   insn=0x0000000000491BE0 string=0x0000000000491BE4 ""
 *   insn=0x0000000000491BF8 string=0x0000000000491BFC "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIAlertView::Dismiss(Caver::GUIAlertView *this)
{
  __int64 v2; // x8
  __int64 v3; // x20
  __int64 v4; // x21
  char v5; // w0
  __int64 result; // x0

  v2 = *((_QWORD *)this + 40);
  if ( (int)((unsigned __int64)(*((_QWORD *)this + 41) - v2) >> 4) >= 1 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      Caver::GUIView::IsFirstResponder(*(Caver::GUIView **)(v2 + v3));
      if ( (v5 & 1) != 0 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 40) + v3) + 208LL))(*(_QWORD *)(*((_QWORD *)this + 40) + v3));
      v2 = *((_QWORD *)this + 40);
      ++v4;
      v3 += 16;
    }
    while ( v4 < (int)((unsigned __int64)(*((_QWORD *)this + 41) - v2) >> 4) );
  }
  Caver::GUIAlertView::AddAnimations(this, 1);
  Caver::GUIView::DismissModalView();
  result = *((_QWORD *)this + 35);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, Caver::GUIAlertView *))(*(_QWORD *)result + 8LL))(result, this);
  return result;
}

