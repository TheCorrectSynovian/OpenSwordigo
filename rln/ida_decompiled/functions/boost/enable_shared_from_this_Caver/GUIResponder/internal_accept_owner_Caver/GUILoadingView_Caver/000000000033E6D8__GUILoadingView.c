/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033E6D8
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_14GUILoadingViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUILoadingView,Caver::GUILoadingView>(boost::shared_ptr<Caver::GUILoadingView> const*,Caver::GUILoadingView *)
 *
 * Callers: 1
 *   0x00000000001F60E0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUILoadingView,Caver::GUILoadingView>(boost::shared_ptr<Caver::GUILoadingView> const*,Caver::GUILoadingView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FF160  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConfigureOverlayView,Caver::ConfigureOverlayView>(boost::shared_ptr<Caver::ConfigureOverlayView> const*,Caver::ConfigureOverlayView *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 59
 *   insn=0x000000000033E6E8 string=0x000000000033E6EC "`"
 *   insn=0x000000000033E6EC string=0x000000000033E6F0 ""
 *   insn=0x000000000033E6EC string=0x000000000033E6F8 "3"
 *   insn=0x000000000033E6F0 string=0x000000000033E6F4 "h"
 *   insn=0x000000000033E6FC string=0x000000000033E700 "h"
 *   insn=0x000000000033E700 string=0x000000000033E704 ""
 *   insn=0x000000000033E704 string=0x000000000033E708 "h"
 *   insn=0x000000000033E718 string=0x000000000033E71C "h\n@"
 *   insn=0x000000000033E71C string=0x000000000033E720 ""
 *   insn=0x000000000033E720 string=0x000000000033E724 "h\n"
 *   insn=0x000000000033E728 string=0x000000000033E72C "@"
 *   insn=0x000000000033E72C string=0x000000000033E730 ""
 *   insn=0x000000000033E730 string=0x000000000033E734 ""
 *   insn=0x000000000033E738 string=0x000000000033E73C ""
 *   insn=0x000000000033E73C string=0x000000000033E740 "@"
 *   insn=0x000000000033E74C string=0x000000000033E750 "h"
 *   insn=0x000000000033E750 string=0x000000000033E754 ""
 *   insn=0x000000000033E754 string=0x000000000033E758 "h"
 *   insn=0x000000000033E758 string=0x000000000033E75C "!"
 *   insn=0x000000000033E75C string=0x000000000033E760 "h"
 *   insn=0x000000000033E764 string=0x000000000033E768 "\t@"
 *   insn=0x000000000033E76C string=0x000000000033E770 "h\n@"
 *   insn=0x000000000033E770 string=0x000000000033E774 ""
 *   insn=0x000000000033E774 string=0x000000000033E778 "h\n"
 *   insn=0x000000000033E77C string=0x000000000033E78C "h"
 *   insn=0x000000000033E79C string=0x000000000033E7A0 " "
 *   insn=0x000000000033E7A4 string=0x000000000033E7A8 "3"
 *   insn=0x000000000033E7A8 string=0x000000000033E7AC "h"
 *   insn=0x000000000033E7AC string=0x000000000033E7B0 ""
 *   insn=0x000000000033E7B0 string=0x000000000033E7B4 "h"
 *   insn=0x000000000033E7B8 string=0x000000000033E7BC "h"
 *   insn=0x000000000033E7BC string=0x000000000033E7C0 "\t@"
 *   insn=0x000000000033E7C8 string=0x000000000033E7CC "h\n@"
 *   insn=0x000000000033E7CC string=0x000000000033E7D0 ""
 *   insn=0x000000000033E7D0 string=0x000000000033E7D4 "h\n"
 *   insn=0x000000000033E7D8 string=0x000000000033E7DC "h"
 *   insn=0x000000000033E7DC string=0x000000000033E7E0 "@"
 *   insn=0x000000000033E7EC string=0x000000000033E7F0 "5"
 *   insn=0x000000000033E810 string=0x000000000033E814 "s"
 *   insn=0x000000000033E814 string=0x000000000033E818 ")"
 *   insn=0x000000000033E814 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000033E818 string=0x000000000033E81C ")"
 *   insn=0x000000000033E828 string=0x000000000033E82C "(A"
 *   insn=0x000000000033E830 string=0x000000000033E834 ""
 *   insn=0x000000000033E83C string=0x000000000033E840 "`""
 *   insn=0x000000000033E848 string=0x000000000033E84C "E"
 *   insn=0x000000000033E860 string=0x000000000033E864 "4"
 *   insn=0x000000000033E868 string=0x000000000033E86C ""
 *   insn=0x000000000033E878 string=0x000000000033E87C "\t@"
 *   insn=0x000000000033E888 string=0x000000000033E88C ""
 *   insn=0x000000000033E898 string=0x000000000033E89C "@"
 *   insn=0x000000000033E8B0 string=0x000000000033E8B4 "K"
 *   insn=0x000000000033E8B4 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000033E8B8 string=0x000000000033E8BC "h"
 *   insn=0x000000000033E8BC string=0x000000000033E8C0 "!@"
 *   insn=0x000000000033E8D0 string=0x000000000033E8D4 "/"
 *   insn=0x000000000033E8D4 string=0x00000000001FD590 "0'"
 *   insn=0x000000000033E8DC string=0x000000000033E8E0 "t"
 *   insn=0x000000000033E8E0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUILoadingView,Caver::GUILoadingView>(
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

