/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A06D4
 * Mangled: _ZN5Caver16ProfilePanelView21AlertViewWasDismissedEPNS_12GUIAlertViewE
 * Demangled: Caver::ProfilePanelView::AlertViewWasDismissed(Caver::GUIAlertView *)
 *
 * Callers: 1
 *   0x00000000001F4130  Caver::ProfilePanelView::AlertViewWasDismissed(Caver::GUIAlertView *)
 *
 * Callees: 0
 *
 * Referenced strings: 14
 *   insn=0x00000000003A06DC string=0x00000000003A06E0 ""
 *   insn=0x00000000003A06E4 string=0x00000000003A06E8 "@"
 *   insn=0x00000000003A06E8 string=0x00000000003A06EC ""
 *   insn=0x00000000003A0708 string=0x00000000003A071C "h"
 *   insn=0x00000000003A071C string=0x00000000003A0720 ""
 *   insn=0x00000000003A0720 string=0x00000000003A0724 "h"
 *   insn=0x00000000003A0724 string=0x00000000003A0728 "!"
 *   insn=0x00000000003A0728 string=0x00000000003A072C "h"
 *   insn=0x00000000003A0730 string=0x00000000003A0734 "\t@"
 *   insn=0x00000000003A0738 string=0x00000000003A073C "h\n@"
 *   insn=0x00000000003A073C string=0x00000000003A0740 ""
 *   insn=0x00000000003A0740 string=0x00000000003A0744 "h\n"
 *   insn=0x00000000003A0748 string=0x00000000003A0758 "h"
 *   insn=0x00000000003A0768 string=0x00000000003A076C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProfilePanelView::AlertViewWasDismissed(__int64 result, __int64 a2)
{
  _QWORD *v2; // x19
  __int64 v3; // x8
  __int64 v4; // x8

  if ( *(_QWORD *)(result + 336) == a2 )
  {
    v2 = *(_QWORD **)(result + 344);
    *(_QWORD *)(result + 336) = 0;
    *(_QWORD *)(result + 344) = 0;
    if ( !v2 )
      return result;
  }
  else
  {
    if ( *(_QWORD *)(result + 288) != a2 )
      return result;
    v2 = *(_QWORD **)(result + 296);
    *(_BYTE *)(result + 312) = 0;
    *(_QWORD *)(result + 296) = 0;
    *(_QWORD *)(result + 304) = 0;
    *(_QWORD *)(result + 288) = 0;
    if ( !v2 )
      return result;
  }
  v3 = v2[1] - 1LL;
  v2[1] = v3;
  if ( !v3 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
    v4 = v2[2] - 1LL;
    v2[2] = v4;
    if ( !v4 )
      return (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
  }
  return result;
}

