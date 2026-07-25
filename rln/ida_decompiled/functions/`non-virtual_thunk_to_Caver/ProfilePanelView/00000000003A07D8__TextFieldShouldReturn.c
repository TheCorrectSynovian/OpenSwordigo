/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A07D8
 * Mangled: _ZThn280_N5Caver16ProfilePanelView21TextFieldShouldReturnEPNS_12GUITextFieldE
 * Demangled: `non-virtual thunk to'Caver::ProfilePanelView::TextFieldShouldReturn(Caver::GUITextField *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200880  Caver::GUIAlertView::Dismiss(void)
 *
 * Referenced strings: 8
 *   insn=0x00000000003A07D8 string=0x00000000003A07DC "h"
 *   insn=0x00000000003A07DC string=0x00000000003A07E0 ""
 *   insn=0x00000000003A07E0 string=0x00000000003A07E4 "h"
 *   insn=0x00000000003A07F4 string=0x00000000003A07F8 "`"
 *   insn=0x00000000003A07FC string=0x00000000003A0800 ""
 *   insn=0x00000000003A07FC string=0x00000000003A0810 "`"
 *   insn=0x00000000003A0804 string=0x00000000003A0808 ""
 *   insn=0x00000000003A0810 string=0x00000000003A0814 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ProfilePanelView::TextFieldShouldReturn(
        Caver::ProfilePanelView *this,
        Caver::GUITextField *a2)
{
  __int64 v2; // x8
  Caver::GUIAlertView **v3; // x19
  __int64 v4; // x0

  v2 = *((_QWORD *)this + 3);
  if ( !v2 )
    return 0;
  if ( (*(_BYTE *)(v2 + 288) & 2) != 0 )
    return 0;
  v3 = (Caver::GUIAlertView **)((char *)this - 280);
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
    (*(void (__fastcall **)(__int64, Caver::GUIAlertView **))(*(_QWORD *)v4 + 8LL))(v4, v3);
  Caver::GUIAlertView::Dismiss(v3[36]);
  return 1;
}

