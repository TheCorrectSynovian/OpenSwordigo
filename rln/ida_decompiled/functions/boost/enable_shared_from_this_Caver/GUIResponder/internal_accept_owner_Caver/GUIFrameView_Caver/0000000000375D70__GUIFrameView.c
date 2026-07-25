/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000375D70
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12GUIFrameViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIFrameView,Caver::GUIFrameView>(boost::shared_ptr<Caver::GUIFrameView> const*,Caver::GUIFrameView *)
 *
 * Callers: 1
 *   0x00000000001F8E70  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIFrameView,Caver::GUIFrameView>(boost::shared_ptr<Caver::GUIFrameView> const*,Caver::GUIFrameView *)
 *
 * Callees: 3
 *   0x00000000001FA120  .strcmp
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 55
 *   insn=0x0000000000375D80 string=0x0000000000375D84 "`"
 *   insn=0x0000000000375D84 string=0x0000000000375D88 ""
 *   insn=0x0000000000375D84 string=0x0000000000375D90 "3"
 *   insn=0x0000000000375D88 string=0x0000000000375D8C "h"
 *   insn=0x0000000000375D94 string=0x0000000000375D98 "h"
 *   insn=0x0000000000375D98 string=0x0000000000375D9C ""
 *   insn=0x0000000000375D9C string=0x0000000000375DA0 "h"
 *   insn=0x0000000000375DB0 string=0x0000000000375DB4 "h\n@"
 *   insn=0x0000000000375DB4 string=0x0000000000375DB8 ""
 *   insn=0x0000000000375DB8 string=0x0000000000375DBC "h\n"
 *   insn=0x0000000000375DC0 string=0x0000000000375DC4 "@"
 *   insn=0x0000000000375DC4 string=0x0000000000375DC8 ""
 *   insn=0x0000000000375DC8 string=0x0000000000375DCC ""
 *   insn=0x0000000000375DD0 string=0x0000000000375DD4 ""
 *   insn=0x0000000000375DD4 string=0x0000000000375DD8 "@"
 *   insn=0x0000000000375DE4 string=0x0000000000375DE8 "h"
 *   insn=0x0000000000375DE8 string=0x0000000000375DEC ""
 *   insn=0x0000000000375DEC string=0x0000000000375DF0 "h"
 *   insn=0x0000000000375DF0 string=0x0000000000375DF4 "!"
 *   insn=0x0000000000375DF4 string=0x0000000000375DF8 "h"
 *   insn=0x0000000000375DFC string=0x0000000000375E00 "\t@"
 *   insn=0x0000000000375E04 string=0x0000000000375E08 "h\n@"
 *   insn=0x0000000000375E08 string=0x0000000000375E0C ""
 *   insn=0x0000000000375E0C string=0x0000000000375E10 "h\n"
 *   insn=0x0000000000375E14 string=0x0000000000375E24 "h"
 *   insn=0x0000000000375E34 string=0x0000000000375E38 " "
 *   insn=0x0000000000375E3C string=0x0000000000375E40 "3"
 *   insn=0x0000000000375E40 string=0x0000000000375E44 "h"
 *   insn=0x0000000000375E44 string=0x0000000000375E48 ""
 *   insn=0x0000000000375E48 string=0x0000000000375E4C "h"
 *   insn=0x0000000000375E50 string=0x0000000000375E54 "h"
 *   insn=0x0000000000375E54 string=0x0000000000375E58 "\t@"
 *   insn=0x0000000000375E60 string=0x0000000000375E64 "h\n@"
 *   insn=0x0000000000375E64 string=0x0000000000375E68 ""
 *   insn=0x0000000000375E68 string=0x0000000000375E6C "h\n"
 *   insn=0x0000000000375E70 string=0x0000000000375E74 "h"
 *   insn=0x0000000000375E74 string=0x0000000000375E78 "@"
 *   insn=0x0000000000375E88 string=0x0000000000375E8C "0a"
 *   insn=0x0000000000375E9C string=0x0000000000375EA0 "_"
 *   insn=0x0000000000375EA8 string=0x0000000000375EC0 "_"
 *   insn=0x0000000000375EAC string=0x0000000000375EB0 ""
 *   insn=0x0000000000375EB4 string=0x0000000000375EB8 "h"
 *   insn=0x0000000000375EC4 string=0x0000000000375EDC "_"
 *   insn=0x0000000000375EC8 string=0x0000000000375ECC "h\n"
 *   insn=0x0000000000375ED0 string=0x0000000000375ED4 "`"
 *   insn=0x0000000000375EE0 string=0x0000000000375EE4 "_"
 *   insn=0x0000000000375EE4 string=0x0000000000375EE8 "!"
 *   insn=0x0000000000375EE8 string=0x0000000000375EEC "h"
 *   insn=0x0000000000375EF0 string=0x0000000000375EF4 ""
 *   insn=0x0000000000375EF8 string=0x0000000000375EFC "*"
 *   insn=0x0000000000375EFC string=0x0000000000375F00 "!"
 *   insn=0x0000000000375F00 string=0x0000000000375F04 "_"
 *   insn=0x0000000000375F00 string=0x00000000005902B0 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver27AchievementNotificationViewEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x0000000000375F04 string=0x0000000000375F08 " "
 *   insn=0x0000000000375F0C string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIFrameView,Caver::GUIFrameView>(
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

