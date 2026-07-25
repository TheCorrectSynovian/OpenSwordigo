/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000346EB4
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_11MapMenuPageES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapMenuPage,Caver::MapMenuPage>(boost::shared_ptr<Caver::MapMenuPage> const*,Caver::MapMenuPage *)
 *
 * Callers: 1
 *   0x00000000001FB030  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapMenuPage,Caver::MapMenuPage>(boost::shared_ptr<Caver::MapMenuPage> const*,Caver::MapMenuPage *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202240  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GuideToggleView,Caver::GuideToggleView>(boost::shared_ptr<Caver::GuideToggleView> const*,Caver::GuideToggleView *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 58
 *   insn=0x0000000000346EC4 string=0x0000000000346EC8 "`"
 *   insn=0x0000000000346EC8 string=0x0000000000346ECC ""
 *   insn=0x0000000000346EC8 string=0x0000000000346ED4 "3"
 *   insn=0x0000000000346ECC string=0x0000000000346ED0 "h"
 *   insn=0x0000000000346ED8 string=0x0000000000346EDC "h"
 *   insn=0x0000000000346EDC string=0x0000000000346EE0 ""
 *   insn=0x0000000000346EE0 string=0x0000000000346EE4 "h"
 *   insn=0x0000000000346EF4 string=0x0000000000346EF8 "h\n@"
 *   insn=0x0000000000346EF8 string=0x0000000000346EFC ""
 *   insn=0x0000000000346EFC string=0x0000000000346F00 "h\n"
 *   insn=0x0000000000346F04 string=0x0000000000346F08 "@"
 *   insn=0x0000000000346F08 string=0x0000000000346F0C ""
 *   insn=0x0000000000346F0C string=0x0000000000346F10 ""
 *   insn=0x0000000000346F14 string=0x0000000000346F18 ""
 *   insn=0x0000000000346F18 string=0x0000000000346F1C "@"
 *   insn=0x0000000000346F28 string=0x0000000000346F2C "h"
 *   insn=0x0000000000346F2C string=0x0000000000346F30 ""
 *   insn=0x0000000000346F30 string=0x0000000000346F34 "h"
 *   insn=0x0000000000346F34 string=0x0000000000346F38 "!"
 *   insn=0x0000000000346F38 string=0x0000000000346F3C "h"
 *   insn=0x0000000000346F40 string=0x0000000000346F44 "\t@"
 *   insn=0x0000000000346F48 string=0x0000000000346F4C "h\n@"
 *   insn=0x0000000000346F4C string=0x0000000000346F50 ""
 *   insn=0x0000000000346F50 string=0x0000000000346F54 "h\n"
 *   insn=0x0000000000346F58 string=0x0000000000346F68 "h"
 *   insn=0x0000000000346F78 string=0x0000000000346F7C " "
 *   insn=0x0000000000346F80 string=0x0000000000346F84 "3"
 *   insn=0x0000000000346F84 string=0x0000000000346F88 "h"
 *   insn=0x0000000000346F88 string=0x0000000000346F8C ""
 *   insn=0x0000000000346F8C string=0x0000000000346F90 "h"
 *   insn=0x0000000000346F94 string=0x0000000000346F98 "h"
 *   insn=0x0000000000346F98 string=0x0000000000346F9C "\t@"
 *   insn=0x0000000000346FA4 string=0x0000000000346FA8 "h\n@"
 *   insn=0x0000000000346FA8 string=0x0000000000346FAC ""
 *   insn=0x0000000000346FAC string=0x0000000000346FB0 "h\n"
 *   insn=0x0000000000346FB4 string=0x0000000000346FB8 "h"
 *   insn=0x0000000000346FB8 string=0x0000000000346FBC "@"
 *   insn=0x0000000000346FC8 string=0x0000000000346FCC ">"
 *   insn=0x0000000000346FEC string=0x0000000000346FF0 "|"
 *   insn=0x0000000000346FF0 string=0x0000000000346FF4 "\t"
 *   insn=0x0000000000346FF0 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000346FF4 string=0x0000000000346FF8 ")EE"
 *   insn=0x0000000000347004 string=0x0000000000347008 "(A"
 *   insn=0x000000000034700C string=0x0000000000347010 ""
 *   insn=0x0000000000347018 string=0x000000000034701C "`""
 *   insn=0x000000000034703C string=0x0000000000347040 "4"
 *   insn=0x0000000000347044 string=0x0000000000347048 ""
 *   insn=0x0000000000347054 string=0x0000000000347058 "\t@"
 *   insn=0x0000000000347064 string=0x0000000000347068 ""
 *   insn=0x0000000000347074 string=0x0000000000347078 "@"
 *   insn=0x000000000034708C string=0x0000000000347090 "T"
 *   insn=0x0000000000347090 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000347094 string=0x0000000000347098 "h"
 *   insn=0x0000000000347098 string=0x000000000034709C "!@"
 *   insn=0x00000000003470AC string=0x00000000003470B0 "8"
 *   insn=0x00000000003470B0 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003470B8 string=0x00000000003470BC "}"
 *   insn=0x00000000003470BC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapMenuPage,Caver::MapMenuPage>(
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

