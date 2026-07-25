/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000211D70
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_22MainMenuViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::MainMenuViewController,Caver::MainMenuViewController>(boost::shared_ptr<Caver::MainMenuViewController> const*,Caver::MainMenuViewController *)
 *
 * Callers: 1
 *   0x0000000000202F70  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::MainMenuViewController,Caver::MainMenuViewController>(boost::shared_ptr<Caver::MainMenuViewController> const*,Caver::MainMenuViewController *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000200020  Caver::PlayerProfile::~PlayerProfile()
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 47
 *   insn=0x0000000000211D80 string=0x0000000000211D84 "`"
 *   insn=0x0000000000211D84 string=0x0000000000211D88 ""
 *   insn=0x0000000000211D84 string=0x0000000000211D90 "3"
 *   insn=0x0000000000211D88 string=0x0000000000211D8C "h"
 *   insn=0x0000000000211D94 string=0x0000000000211D98 "h"
 *   insn=0x0000000000211D98 string=0x0000000000211D9C ""
 *   insn=0x0000000000211D9C string=0x0000000000211DA0 "h"
 *   insn=0x0000000000211DB0 string=0x0000000000211DB4 "h\n@"
 *   insn=0x0000000000211DB4 string=0x0000000000211DB8 ""
 *   insn=0x0000000000211DB8 string=0x0000000000211DBC "h\n"
 *   insn=0x0000000000211DC0 string=0x0000000000211DC4 "@"
 *   insn=0x0000000000211DC4 string=0x0000000000211DC8 ""
 *   insn=0x0000000000211DC8 string=0x0000000000211DCC ""
 *   insn=0x0000000000211DD0 string=0x0000000000211DD4 ""
 *   insn=0x0000000000211DD4 string=0x0000000000211DD8 "@"
 *   insn=0x0000000000211DE4 string=0x0000000000211DE8 "h"
 *   insn=0x0000000000211DE8 string=0x0000000000211DEC ""
 *   insn=0x0000000000211DEC string=0x0000000000211DF0 "h"
 *   insn=0x0000000000211DF0 string=0x0000000000211DF4 "!"
 *   insn=0x0000000000211DF4 string=0x0000000000211DF8 "h"
 *   insn=0x0000000000211DFC string=0x0000000000211E00 "\t@"
 *   insn=0x0000000000211E04 string=0x0000000000211E08 "h\n@"
 *   insn=0x0000000000211E08 string=0x0000000000211E0C ""
 *   insn=0x0000000000211E0C string=0x0000000000211E10 "h\n"
 *   insn=0x0000000000211E14 string=0x0000000000211E24 "h"
 *   insn=0x0000000000211E34 string=0x0000000000211E38 " "
 *   insn=0x0000000000211E3C string=0x0000000000211E40 "3"
 *   insn=0x0000000000211E40 string=0x0000000000211E44 "h"
 *   insn=0x0000000000211E44 string=0x0000000000211E48 ""
 *   insn=0x0000000000211E48 string=0x0000000000211E4C "h"
 *   insn=0x0000000000211E50 string=0x0000000000211E54 "h"
 *   insn=0x0000000000211E54 string=0x0000000000211E58 "\t@"
 *   insn=0x0000000000211E60 string=0x0000000000211E64 "h\n@"
 *   insn=0x0000000000211E64 string=0x0000000000211E68 ""
 *   insn=0x0000000000211E68 string=0x0000000000211E6C "h\n"
 *   insn=0x0000000000211E70 string=0x0000000000211E74 "h"
 *   insn=0x0000000000211E74 string=0x0000000000211E78 "@"
 *   insn=0x0000000000211E88 string=0x0000000000211E8C "0"
 *   insn=0x0000000000211EAC string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000211EB0 string=0x0000000000211EB4 ")aB"
 *   insn=0x0000000000211EC0 string=0x0000000000211EC4 "(A"
 *   insn=0x0000000000211EC8 string=0x0000000000211ECC ""
 *   insn=0x0000000000211EE0 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000211EE8 string=0x0000000000211EEC "M"
 *   insn=0x0000000000211EF4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000211F10 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000211F14 string=0x0000000000211F18 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::MainMenuViewController,Caver::MainMenuViewController>(
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

