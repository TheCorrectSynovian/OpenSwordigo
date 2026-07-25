/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000346D70
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_14TabbedMenuViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TabbedMenuView,Caver::TabbedMenuView>(boost::shared_ptr<Caver::TabbedMenuView> const*,Caver::TabbedMenuView *)
 *
 * Callers: 1
 *   0x00000000001F6EA0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TabbedMenuView,Caver::TabbedMenuView>(boost::shared_ptr<Caver::TabbedMenuView> const*,Caver::TabbedMenuView *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x0000000000346D80 string=0x0000000000346D84 "`"
 *   insn=0x0000000000346D84 string=0x0000000000346D88 ""
 *   insn=0x0000000000346D84 string=0x0000000000346D90 "3"
 *   insn=0x0000000000346D88 string=0x0000000000346D8C "h"
 *   insn=0x0000000000346D94 string=0x0000000000346D98 "h"
 *   insn=0x0000000000346D98 string=0x0000000000346D9C ""
 *   insn=0x0000000000346D9C string=0x0000000000346DA0 "h"
 *   insn=0x0000000000346DB0 string=0x0000000000346DB4 "h\n@"
 *   insn=0x0000000000346DB4 string=0x0000000000346DB8 ""
 *   insn=0x0000000000346DB8 string=0x0000000000346DBC "h\n"
 *   insn=0x0000000000346DC0 string=0x0000000000346DC4 "@"
 *   insn=0x0000000000346DC4 string=0x0000000000346DC8 ""
 *   insn=0x0000000000346DC8 string=0x0000000000346DCC ""
 *   insn=0x0000000000346DD0 string=0x0000000000346DD4 ""
 *   insn=0x0000000000346DD4 string=0x0000000000346DD8 "@"
 *   insn=0x0000000000346DE4 string=0x0000000000346DE8 "h"
 *   insn=0x0000000000346DE8 string=0x0000000000346DEC ""
 *   insn=0x0000000000346DEC string=0x0000000000346DF0 "h"
 *   insn=0x0000000000346DF0 string=0x0000000000346DF4 "!"
 *   insn=0x0000000000346DF4 string=0x0000000000346DF8 "h"
 *   insn=0x0000000000346DFC string=0x0000000000346E00 "\t@"
 *   insn=0x0000000000346E04 string=0x0000000000346E08 "h\n@"
 *   insn=0x0000000000346E08 string=0x0000000000346E0C ""
 *   insn=0x0000000000346E0C string=0x0000000000346E10 "h\n"
 *   insn=0x0000000000346E14 string=0x0000000000346E24 "h"
 *   insn=0x0000000000346E34 string=0x0000000000346E38 " "
 *   insn=0x0000000000346E3C string=0x0000000000346E40 "3"
 *   insn=0x0000000000346E40 string=0x0000000000346E44 "h"
 *   insn=0x0000000000346E44 string=0x0000000000346E48 ""
 *   insn=0x0000000000346E48 string=0x0000000000346E4C "h"
 *   insn=0x0000000000346E50 string=0x0000000000346E54 "h"
 *   insn=0x0000000000346E54 string=0x0000000000346E58 "\t@"
 *   insn=0x0000000000346E60 string=0x0000000000346E64 "h\n@"
 *   insn=0x0000000000346E64 string=0x0000000000346E68 ""
 *   insn=0x0000000000346E68 string=0x0000000000346E6C "h\n"
 *   insn=0x0000000000346E70 string=0x0000000000346E74 "h"
 *   insn=0x0000000000346E74 string=0x0000000000346E78 "@"
 *   insn=0x0000000000346E88 string=0x0000000000346E8C "0"
 *   insn=0x0000000000346E8C string=0x0000000000346E90 ""
 *   insn=0x0000000000346E90 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TabbedMenuView,Caver::TabbedMenuView>(
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

