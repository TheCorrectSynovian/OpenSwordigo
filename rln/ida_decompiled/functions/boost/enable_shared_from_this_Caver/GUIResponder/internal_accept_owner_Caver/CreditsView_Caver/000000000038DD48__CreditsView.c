/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000038DD48
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_11CreditsViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CreditsView,Caver::CreditsView>(boost::shared_ptr<Caver::CreditsView> const*,Caver::CreditsView *)
 *
 * Callers: 1
 *   0x0000000000202110  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CreditsView,Caver::CreditsView>(boost::shared_ptr<Caver::CreditsView> const*,Caver::CreditsView *)
 *
 * Callees: 3
 *   0x00000000001FA120  .strcmp
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 55
 *   insn=0x000000000038DD58 string=0x000000000038DD5C "`"
 *   insn=0x000000000038DD5C string=0x000000000038DD60 ""
 *   insn=0x000000000038DD5C string=0x000000000038DD68 "3"
 *   insn=0x000000000038DD60 string=0x000000000038DD64 "h"
 *   insn=0x000000000038DD6C string=0x000000000038DD70 "h"
 *   insn=0x000000000038DD70 string=0x000000000038DD74 ""
 *   insn=0x000000000038DD74 string=0x000000000038DD78 "h"
 *   insn=0x000000000038DD88 string=0x000000000038DD8C "h\n@"
 *   insn=0x000000000038DD8C string=0x000000000038DD90 ""
 *   insn=0x000000000038DD90 string=0x000000000038DD94 "h\n"
 *   insn=0x000000000038DD98 string=0x000000000038DD9C "@"
 *   insn=0x000000000038DD9C string=0x000000000038DDA0 ""
 *   insn=0x000000000038DDA0 string=0x000000000038DDA4 ""
 *   insn=0x000000000038DDA8 string=0x000000000038DDAC ""
 *   insn=0x000000000038DDAC string=0x000000000038DDB0 "@"
 *   insn=0x000000000038DDBC string=0x000000000038DDC0 "h"
 *   insn=0x000000000038DDC0 string=0x000000000038DDC4 ""
 *   insn=0x000000000038DDC4 string=0x000000000038DDC8 "h"
 *   insn=0x000000000038DDC8 string=0x000000000038DDCC "!"
 *   insn=0x000000000038DDCC string=0x000000000038DDD0 "h"
 *   insn=0x000000000038DDD4 string=0x000000000038DDD8 "\t@"
 *   insn=0x000000000038DDDC string=0x000000000038DDE0 "h\n@"
 *   insn=0x000000000038DDE0 string=0x000000000038DDE4 ""
 *   insn=0x000000000038DDE4 string=0x000000000038DDE8 "h\n"
 *   insn=0x000000000038DDEC string=0x000000000038DDFC "h"
 *   insn=0x000000000038DE0C string=0x000000000038DE10 " "
 *   insn=0x000000000038DE14 string=0x000000000038DE18 "3"
 *   insn=0x000000000038DE18 string=0x000000000038DE1C "h"
 *   insn=0x000000000038DE1C string=0x000000000038DE20 ""
 *   insn=0x000000000038DE20 string=0x000000000038DE24 "h"
 *   insn=0x000000000038DE28 string=0x000000000038DE2C "h"
 *   insn=0x000000000038DE2C string=0x000000000038DE30 "\t@"
 *   insn=0x000000000038DE38 string=0x000000000038DE3C "h\n@"
 *   insn=0x000000000038DE3C string=0x000000000038DE40 ""
 *   insn=0x000000000038DE40 string=0x000000000038DE44 "h\n"
 *   insn=0x000000000038DE48 string=0x000000000038DE4C "h"
 *   insn=0x000000000038DE4C string=0x000000000038DE50 "@"
 *   insn=0x000000000038DE60 string=0x000000000038DE64 ":"
 *   insn=0x000000000038DE74 string=0x000000000038DE78 "_"
 *   insn=0x000000000038DE80 string=0x000000000038DE98 "_"
 *   insn=0x000000000038DE84 string=0x000000000038DE88 "qF"
 *   insn=0x000000000038DE8C string=0x000000000038DE90 "h"
 *   insn=0x000000000038DE9C string=0x000000000038DEB4 "_"
 *   insn=0x000000000038DEA0 string=0x000000000038DEA4 "h\n"
 *   insn=0x000000000038DEA8 string=0x000000000038DEAC "`"
 *   insn=0x000000000038DEB8 string=0x000000000038DEBC "_"
 *   insn=0x000000000038DEBC string=0x000000000038DEC0 "!"
 *   insn=0x000000000038DEC0 string=0x000000000038DEC4 "h"
 *   insn=0x000000000038DEC8 string=0x000000000038DECC ""
 *   insn=0x000000000038DED0 string=0x000000000038DED4 "*"
 *   insn=0x000000000038DED4 string=0x000000000038DED8 "!"
 *   insn=0x000000000038DED8 string=0x000000000038DEDC "_"
 *   insn=0x000000000038DED8 string=0x0000000000590EF0 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver21CreditsViewControllerEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x000000000038DEDC string=0x000000000038DEE0 " "
 *   insn=0x000000000038DEE4 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CreditsView,Caver::CreditsView>(
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

