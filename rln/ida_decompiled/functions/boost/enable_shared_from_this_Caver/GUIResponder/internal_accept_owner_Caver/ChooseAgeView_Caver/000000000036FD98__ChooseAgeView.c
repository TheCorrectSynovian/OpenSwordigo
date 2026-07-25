/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036FD98
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13ChooseAgeViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ChooseAgeView,Caver::ChooseAgeView>(boost::shared_ptr<Caver::ChooseAgeView> const*,Caver::ChooseAgeView *)
 *
 * Callers: 1
 *   0x0000000000200AC0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ChooseAgeView,Caver::ChooseAgeView>(boost::shared_ptr<Caver::ChooseAgeView> const*,Caver::ChooseAgeView *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000002001F0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ProfileSelectionViewController,Caver::ProfileSelectionViewController>(boost::shared_ptr<Caver::ProfileSelectionViewController> const*,Caver::ProfileSelectionViewController *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 54
 *   insn=0x000000000036FDA8 string=0x000000000036FDAC "`"
 *   insn=0x000000000036FDAC string=0x000000000036FDB0 ""
 *   insn=0x000000000036FDAC string=0x000000000036FDB8 "3"
 *   insn=0x000000000036FDB0 string=0x000000000036FDB4 "h"
 *   insn=0x000000000036FDBC string=0x000000000036FDC0 "h"
 *   insn=0x000000000036FDC0 string=0x000000000036FDC4 ""
 *   insn=0x000000000036FDC4 string=0x000000000036FDC8 "h"
 *   insn=0x000000000036FDD8 string=0x000000000036FDDC "h\n@"
 *   insn=0x000000000036FDDC string=0x000000000036FDE0 ""
 *   insn=0x000000000036FDE0 string=0x000000000036FDE4 "h\n"
 *   insn=0x000000000036FDE8 string=0x000000000036FDEC "@"
 *   insn=0x000000000036FDEC string=0x000000000036FDF0 ""
 *   insn=0x000000000036FDF0 string=0x000000000036FDF4 ""
 *   insn=0x000000000036FDF8 string=0x000000000036FDFC ""
 *   insn=0x000000000036FDFC string=0x000000000036FE00 "@"
 *   insn=0x000000000036FE0C string=0x000000000036FE10 "h"
 *   insn=0x000000000036FE10 string=0x000000000036FE14 ""
 *   insn=0x000000000036FE14 string=0x000000000036FE18 "h"
 *   insn=0x000000000036FE18 string=0x000000000036FE1C "!"
 *   insn=0x000000000036FE1C string=0x000000000036FE20 "h"
 *   insn=0x000000000036FE24 string=0x000000000036FE28 "\t@"
 *   insn=0x000000000036FE2C string=0x000000000036FE30 "h\n@"
 *   insn=0x000000000036FE30 string=0x000000000036FE34 ""
 *   insn=0x000000000036FE34 string=0x000000000036FE38 "h\n"
 *   insn=0x000000000036FE3C string=0x000000000036FE4C "h"
 *   insn=0x000000000036FE5C string=0x000000000036FE60 " "
 *   insn=0x000000000036FE64 string=0x000000000036FE68 "3"
 *   insn=0x000000000036FE68 string=0x000000000036FE6C "h"
 *   insn=0x000000000036FE6C string=0x000000000036FE70 ""
 *   insn=0x000000000036FE70 string=0x000000000036FE74 "h"
 *   insn=0x000000000036FE78 string=0x000000000036FE7C "h"
 *   insn=0x000000000036FE7C string=0x000000000036FE80 "\t@"
 *   insn=0x000000000036FE88 string=0x000000000036FE8C "h\n@"
 *   insn=0x000000000036FE8C string=0x000000000036FE90 ""
 *   insn=0x000000000036FE90 string=0x000000000036FE94 "h\n"
 *   insn=0x000000000036FE98 string=0x000000000036FE9C "h"
 *   insn=0x000000000036FE9C string=0x000000000036FEA0 "@"
 *   insn=0x000000000036FEB0 string=0x000000000036FEB4 "&y"
 *   insn=0x000000000036FED4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000036FED8 string=0x000000000036FEDC ")"
 *   insn=0x000000000036FEE8 string=0x000000000036FEEC "(A"
 *   insn=0x000000000036FEF0 string=0x000000000036FEF4 ""
 *   insn=0x000000000036FEFC string=0x000000000036FF00 "`""
 *   insn=0x000000000036FF20 string=0x000000000036FF24 "4"
 *   insn=0x000000000036FF28 string=0x000000000036FF2C ""
 *   insn=0x000000000036FF38 string=0x000000000036FF3C "\t@"
 *   insn=0x000000000036FF48 string=0x000000000036FF4C ""
 *   insn=0x000000000036FF58 string=0x000000000036FF5C "@"
 *   insn=0x000000000036FF68 string=0x000000000036FF6C "VF"
 *   insn=0x000000000036FF74 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000036FF78 string=0x000000000036FF7C "h"
 *   insn=0x000000000036FF7C string=0x000000000036FF80 ""
 *   insn=0x000000000036FF94 string=0x00000000001FD590 "0'"
 *   insn=0x000000000036FFA0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ChooseAgeView,Caver::ChooseAgeView>(
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

