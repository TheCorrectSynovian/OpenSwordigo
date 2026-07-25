/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000388E7C
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_7GUIViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIView,Caver::GUIView>(boost::shared_ptr<Caver::GUIView> const*,Caver::GUIView *)
 *
 * Callers: 1
 *   0x00000000001F4E50  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIView,Caver::GUIView>(boost::shared_ptr<Caver::GUIView> const*,Caver::GUIView *)
 *
 * Callees: 2
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 49
 *   insn=0x0000000000388E8C string=0x0000000000388E90 "`"
 *   insn=0x0000000000388E90 string=0x0000000000388E94 ""
 *   insn=0x0000000000388E90 string=0x0000000000388E9C "3"
 *   insn=0x0000000000388E94 string=0x0000000000388E98 "h"
 *   insn=0x0000000000388EA0 string=0x0000000000388EA4 "h"
 *   insn=0x0000000000388EA4 string=0x0000000000388EA8 ""
 *   insn=0x0000000000388EA8 string=0x0000000000388EAC "h"
 *   insn=0x0000000000388EBC string=0x0000000000388EC0 "h\n@"
 *   insn=0x0000000000388EC0 string=0x0000000000388EC4 ""
 *   insn=0x0000000000388EC4 string=0x0000000000388EC8 "h\n"
 *   insn=0x0000000000388ECC string=0x0000000000388ED0 "@"
 *   insn=0x0000000000388ED0 string=0x0000000000388ED4 ""
 *   insn=0x0000000000388ED4 string=0x0000000000388ED8 ""
 *   insn=0x0000000000388EDC string=0x0000000000388EE0 ""
 *   insn=0x0000000000388EE0 string=0x0000000000388EE4 "@"
 *   insn=0x0000000000388EF0 string=0x0000000000388EF4 "h"
 *   insn=0x0000000000388EF4 string=0x0000000000388EF8 ""
 *   insn=0x0000000000388EF8 string=0x0000000000388EFC "h"
 *   insn=0x0000000000388EFC string=0x0000000000388F00 "!"
 *   insn=0x0000000000388F00 string=0x0000000000388F04 "h"
 *   insn=0x0000000000388F08 string=0x0000000000388F0C "\t@"
 *   insn=0x0000000000388F10 string=0x0000000000388F14 "h\n@"
 *   insn=0x0000000000388F14 string=0x0000000000388F18 ""
 *   insn=0x0000000000388F18 string=0x0000000000388F1C "h\n"
 *   insn=0x0000000000388F20 string=0x0000000000388F30 "h"
 *   insn=0x0000000000388F40 string=0x0000000000388F44 " "
 *   insn=0x0000000000388F48 string=0x0000000000388F4C "3"
 *   insn=0x0000000000388F4C string=0x0000000000388F50 "h"
 *   insn=0x0000000000388F50 string=0x0000000000388F54 ""
 *   insn=0x0000000000388F54 string=0x0000000000388F58 "h"
 *   insn=0x0000000000388F5C string=0x0000000000388F60 "h"
 *   insn=0x0000000000388F60 string=0x0000000000388F64 "\t@"
 *   insn=0x0000000000388F6C string=0x0000000000388F70 "h\n@"
 *   insn=0x0000000000388F70 string=0x0000000000388F74 ""
 *   insn=0x0000000000388F74 string=0x0000000000388F78 "h\n"
 *   insn=0x0000000000388F7C string=0x0000000000388F80 "h"
 *   insn=0x0000000000388F80 string=0x0000000000388F84 "@"
 *   insn=0x0000000000388F90 string=0x0000000000388F94 "L"
 *   insn=0x0000000000388FAC string=0x0000000000388FB0 "h"
 *   insn=0x0000000000388FB0 string=0x0000000000388FB4 ""
 *   insn=0x0000000000388FB4 string=0x0000000000388FB8 "h"
 *   insn=0x0000000000388FB8 string=0x0000000000388FBC "!"
 *   insn=0x0000000000388FBC string=0x0000000000388FC0 "h"
 *   insn=0x0000000000388FC4 string=0x0000000000388FC8 "\t@"
 *   insn=0x0000000000388FCC string=0x0000000000388FD0 "h\n@"
 *   insn=0x0000000000388FD0 string=0x0000000000388FD4 ""
 *   insn=0x0000000000388FD4 string=0x0000000000388FD8 "h\n"
 *   insn=0x0000000000388FDC string=0x0000000000388FEC "h"
 *   insn=0x0000000000388FFC string=0x0000000000389000 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIView,Caver::GUIView>(
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

