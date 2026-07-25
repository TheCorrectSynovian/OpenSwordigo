/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A0780
 * Mangled: _ZN5Caver16ProfilePanelView21TextFieldShouldReturnEPNS_12GUITextFieldE
 * Demangled: Caver::ProfilePanelView::TextFieldShouldReturn(Caver::GUITextField *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200880  Caver::GUIAlertView::Dismiss(void)
 *
 * Referenced strings: 8
 *   insn=0x00000000003A078C string=0x00000000003A0790 "h"
 *   insn=0x00000000003A0794 string=0x00000000003A0798 ""
 *   insn=0x00000000003A0798 string=0x00000000003A079C "h"
 *   insn=0x00000000003A079C string=0x00000000003A07A0 "`"
 *   insn=0x00000000003A07A4 string=0x00000000003A07A8 ""
 *   insn=0x00000000003A07A4 string=0x00000000003A07B8 "`"
 *   insn=0x00000000003A07AC string=0x00000000003A07B0 ""
 *   insn=0x00000000003A07B8 string=0x00000000003A07BC "1"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProfilePanelView::TextFieldShouldReturn(
        Caver::ProfilePanelView *this,
        Caver::GUITextField *a2)
{
  __int64 v3; // x8
  __int64 v4; // x0

  v3 = *((_QWORD *)this + 38);
  if ( !v3 || (*(_BYTE *)(v3 + 288) & 2) != 0 )
    return 0;
  v4 = *((_QWORD *)this + 44);
  if ( v4 )
    (*(void (__fastcall **)(__int64, Caver::ProfilePanelView *))(*(_QWORD *)v4 + 8LL))(v4, this);
  Caver::GUIAlertView::Dismiss(*((Caver::GUIAlertView **)this + 36));
  return 1;
}

