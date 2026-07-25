/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000342720
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12GUIAlertViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIAlertView,Caver::GUIAlertView>(boost::shared_ptr<Caver::GUIAlertView> const*,Caver::GUIAlertView *)
 *
 * Callers: 1
 *   0x00000000001F7820  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIAlertView,Caver::GUIAlertView>(boost::shared_ptr<Caver::GUIAlertView> const*,Caver::GUIAlertView *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x0000000000342730 string=0x0000000000342734 "`"
 *   insn=0x0000000000342734 string=0x0000000000342738 ""
 *   insn=0x0000000000342734 string=0x0000000000342740 "3"
 *   insn=0x0000000000342738 string=0x000000000034273C "h"
 *   insn=0x0000000000342744 string=0x0000000000342748 "h"
 *   insn=0x0000000000342748 string=0x000000000034274C ""
 *   insn=0x000000000034274C string=0x0000000000342750 "h"
 *   insn=0x0000000000342760 string=0x0000000000342764 "h\n@"
 *   insn=0x0000000000342764 string=0x0000000000342768 ""
 *   insn=0x0000000000342768 string=0x000000000034276C "h\n"
 *   insn=0x0000000000342770 string=0x0000000000342774 "@"
 *   insn=0x0000000000342774 string=0x0000000000342778 ""
 *   insn=0x0000000000342778 string=0x000000000034277C ""
 *   insn=0x0000000000342780 string=0x0000000000342784 ""
 *   insn=0x0000000000342784 string=0x0000000000342788 "@"
 *   insn=0x0000000000342794 string=0x0000000000342798 "h"
 *   insn=0x0000000000342798 string=0x000000000034279C ""
 *   insn=0x000000000034279C string=0x00000000003427A0 "h"
 *   insn=0x00000000003427A0 string=0x00000000003427A4 "!"
 *   insn=0x00000000003427A4 string=0x00000000003427A8 "h"
 *   insn=0x00000000003427AC string=0x00000000003427B0 "\t@"
 *   insn=0x00000000003427B4 string=0x00000000003427B8 "h\n@"
 *   insn=0x00000000003427B8 string=0x00000000003427BC ""
 *   insn=0x00000000003427BC string=0x00000000003427C0 "h\n"
 *   insn=0x00000000003427C4 string=0x00000000003427D4 "h"
 *   insn=0x00000000003427E4 string=0x00000000003427E8 " "
 *   insn=0x00000000003427EC string=0x00000000003427F0 "3"
 *   insn=0x00000000003427F0 string=0x00000000003427F4 "h"
 *   insn=0x00000000003427F4 string=0x00000000003427F8 ""
 *   insn=0x00000000003427F8 string=0x00000000003427FC "h"
 *   insn=0x0000000000342800 string=0x0000000000342804 "h"
 *   insn=0x0000000000342804 string=0x0000000000342808 "\t@"
 *   insn=0x0000000000342810 string=0x0000000000342814 "h\n@"
 *   insn=0x0000000000342814 string=0x0000000000342818 ""
 *   insn=0x0000000000342818 string=0x000000000034281C "h\n"
 *   insn=0x0000000000342820 string=0x0000000000342824 "h"
 *   insn=0x0000000000342824 string=0x0000000000342828 "@"
 *   insn=0x0000000000342834 string=0x0000000000342838 "#"
 *   insn=0x0000000000342840 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIAlertView,Caver::GUIAlertView>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // x0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8

  result = (_QWORD *)a1[1];
  if ( !result || !result[1] )
  {
    v5 = *(_QWORD **)(a2 + 8);
    if ( v5 )
      ++v5[1];
    *a1 = a3;
    if ( v5 != result )
    {
      if ( v5 )
        ++v5[2];
      if ( result )
      {
        v6 = result[2] - 1LL;
        result[2] = v6;
        if ( !v6 )
          result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 24LL))(result);
      }
      a1[1] = v5;
    }
    if ( v5 )
    {
      v7 = v5[1] - 1LL;
      v5[1] = v7;
      if ( !v7 )
      {
        result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v8 = v5[2] - 1LL;
        v5[2] = v8;
        if ( !v8 )
          return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
  }
  return result;
}

