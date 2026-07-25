/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D9710
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13ExperienceBarES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ExperienceBar,Caver::ExperienceBar>(boost::shared_ptr<Caver::ExperienceBar> const*,Caver::ExperienceBar *)
 *
 * Callers: 1
 *   0x00000000001FACB0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ExperienceBar,Caver::ExperienceBar>(boost::shared_ptr<Caver::ExperienceBar> const*,Caver::ExperienceBar *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB8E0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CoinBar,Caver::CoinBar>(boost::shared_ptr<Caver::CoinBar> const*,Caver::CoinBar *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 59
 *   insn=0x00000000003D9720 string=0x00000000003D9724 "`"
 *   insn=0x00000000003D9724 string=0x00000000003D9728 ""
 *   insn=0x00000000003D9724 string=0x00000000003D9730 "3"
 *   insn=0x00000000003D9728 string=0x00000000003D972C "h"
 *   insn=0x00000000003D9734 string=0x00000000003D9738 "h"
 *   insn=0x00000000003D9738 string=0x00000000003D973C ""
 *   insn=0x00000000003D973C string=0x00000000003D9740 "h"
 *   insn=0x00000000003D9750 string=0x00000000003D9754 "h\n@"
 *   insn=0x00000000003D9754 string=0x00000000003D9758 ""
 *   insn=0x00000000003D9758 string=0x00000000003D975C "h\n"
 *   insn=0x00000000003D9760 string=0x00000000003D9764 "@"
 *   insn=0x00000000003D9764 string=0x00000000003D9768 ""
 *   insn=0x00000000003D9768 string=0x00000000003D976C ""
 *   insn=0x00000000003D9770 string=0x00000000003D9774 ""
 *   insn=0x00000000003D9774 string=0x00000000003D9778 "@"
 *   insn=0x00000000003D9784 string=0x00000000003D9788 "h"
 *   insn=0x00000000003D9788 string=0x00000000003D978C ""
 *   insn=0x00000000003D978C string=0x00000000003D9790 "h"
 *   insn=0x00000000003D9790 string=0x00000000003D9794 "!"
 *   insn=0x00000000003D9794 string=0x00000000003D9798 "h"
 *   insn=0x00000000003D979C string=0x00000000003D97A0 "\t@"
 *   insn=0x00000000003D97A4 string=0x00000000003D97A8 "h\n@"
 *   insn=0x00000000003D97A8 string=0x00000000003D97AC ""
 *   insn=0x00000000003D97AC string=0x00000000003D97B0 "h\n"
 *   insn=0x00000000003D97B4 string=0x00000000003D97C4 "h"
 *   insn=0x00000000003D97D4 string=0x00000000003D97D8 " "
 *   insn=0x00000000003D97DC string=0x00000000003D97E0 "3"
 *   insn=0x00000000003D97E0 string=0x00000000003D97E4 "h"
 *   insn=0x00000000003D97E4 string=0x00000000003D97E8 ""
 *   insn=0x00000000003D97E8 string=0x00000000003D97EC "h"
 *   insn=0x00000000003D97F0 string=0x00000000003D97F4 "h"
 *   insn=0x00000000003D97F4 string=0x00000000003D97F8 "\t@"
 *   insn=0x00000000003D9800 string=0x00000000003D9804 "h\n@"
 *   insn=0x00000000003D9804 string=0x00000000003D9808 ""
 *   insn=0x00000000003D9808 string=0x00000000003D980C "h\n"
 *   insn=0x00000000003D9810 string=0x00000000003D9814 "h"
 *   insn=0x00000000003D9814 string=0x00000000003D9818 "@"
 *   insn=0x00000000003D9824 string=0x00000000003D9828 "'"
 *   insn=0x00000000003D9848 string=0x00000000003D984C "eo"
 *   insn=0x00000000003D984C string=0x00000000003D9850 "i"
 *   insn=0x00000000003D984C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003D9850 string=0x00000000003D9854 ")"
 *   insn=0x00000000003D9860 string=0x00000000003D9864 "(A"
 *   insn=0x00000000003D9868 string=0x00000000003D986C ""
 *   insn=0x00000000003D9874 string=0x00000000003D9878 "`""
 *   insn=0x00000000003D9884 string=0x00000000001FB8E0 "0'"
 *   insn=0x00000000003D9898 string=0x00000000003D989C "4"
 *   insn=0x00000000003D98A0 string=0x00000000003D98A4 ""
 *   insn=0x00000000003D98B0 string=0x00000000003D98B4 "\t@"
 *   insn=0x00000000003D98C0 string=0x00000000003D98C4 ""
 *   insn=0x00000000003D98D0 string=0x00000000003D98D4 "@"
 *   insn=0x00000000003D98E8 string=0x00000000003D98EC "=k"
 *   insn=0x00000000003D98EC string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003D98F0 string=0x00000000003D98F4 "h"
 *   insn=0x00000000003D98F4 string=0x00000000003D98F8 "!@"
 *   insn=0x00000000003D9908 string=0x00000000003D990C "!"
 *   insn=0x00000000003D990C string=0x00000000001FD590 "0'"
 *   insn=0x00000000003D9914 string=0x00000000003D9918 "fv"
 *   insn=0x00000000003D9918 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ExperienceBar,Caver::ExperienceBar>(
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

