/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003958B0
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_14BadgeCountViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::BadgeCountView,Caver::BadgeCountView>(boost::shared_ptr<Caver::BadgeCountView> const*,Caver::BadgeCountView *)
 *
 * Callers: 1
 *   0x00000000001FAFD0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::BadgeCountView,Caver::BadgeCountView>(boost::shared_ptr<Caver::BadgeCountView> const*,Caver::BadgeCountView *)
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000002015F0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OnlineMenuView,Caver::OnlineMenuView>(boost::shared_ptr<Caver::OnlineMenuView> const*,Caver::OnlineMenuView *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 157
 *   insn=0x00000000003958C0 string=0x00000000003958C4 "`"
 *   insn=0x00000000003958C4 string=0x00000000003958C8 ""
 *   insn=0x00000000003958C4 string=0x00000000003958D0 "3"
 *   insn=0x00000000003958C8 string=0x00000000003958CC "h"
 *   insn=0x00000000003958D4 string=0x00000000003958D8 "h"
 *   insn=0x00000000003958D8 string=0x00000000003958DC ""
 *   insn=0x00000000003958DC string=0x00000000003958E0 "h"
 *   insn=0x00000000003958F0 string=0x00000000003958F4 "h\n@"
 *   insn=0x00000000003958F4 string=0x00000000003958F8 ""
 *   insn=0x00000000003958F8 string=0x00000000003958FC "h\n"
 *   insn=0x0000000000395900 string=0x0000000000395904 "@"
 *   insn=0x0000000000395904 string=0x0000000000395908 ""
 *   insn=0x0000000000395908 string=0x000000000039590C ""
 *   insn=0x0000000000395910 string=0x0000000000395914 ""
 *   insn=0x0000000000395914 string=0x0000000000395918 "@"
 *   insn=0x0000000000395924 string=0x0000000000395928 "h"
 *   insn=0x0000000000395928 string=0x000000000039592C ""
 *   insn=0x000000000039592C string=0x0000000000395930 "h"
 *   insn=0x0000000000395930 string=0x0000000000395934 "!"
 *   insn=0x0000000000395934 string=0x0000000000395938 "h"
 *   insn=0x000000000039593C string=0x0000000000395940 "\t@"
 *   insn=0x0000000000395944 string=0x0000000000395948 "h\n@"
 *   insn=0x0000000000395948 string=0x000000000039594C ""
 *   insn=0x000000000039594C string=0x0000000000395950 "h\n"
 *   insn=0x0000000000395954 string=0x0000000000395964 "h"
 *   insn=0x0000000000395974 string=0x0000000000395978 " "
 *   insn=0x000000000039597C string=0x0000000000395980 "3"
 *   insn=0x0000000000395980 string=0x0000000000395984 "h"
 *   insn=0x0000000000395984 string=0x0000000000395988 ""
 *   insn=0x0000000000395988 string=0x000000000039598C "h"
 *   insn=0x0000000000395990 string=0x0000000000395994 "h"
 *   insn=0x0000000000395994 string=0x0000000000395998 "\t@"
 *   insn=0x00000000003959A0 string=0x00000000003959A4 "h\n@"
 *   insn=0x00000000003959A4 string=0x00000000003959A8 ""
 *   insn=0x00000000003959A8 string=0x00000000003959AC "h\n"
 *   insn=0x00000000003959B0 string=0x00000000003959B4 "h"
 *   insn=0x00000000003959B4 string=0x00000000003959B8 "@"
 *   insn=0x00000000003959C8 string=0x00000000003959CC "`"
 *   insn=0x00000000003959F4 string=0x00000000003959F8 "?"
 *   insn=0x0000000000395A00 string=0x0000000000395A04 "_"
 *   insn=0x0000000000395A04 string=0x0000000000395A08 "*"
 *   insn=0x0000000000395A08 string=0x0000000000395A0C "+)"
 *   insn=0x0000000000395A10 string=0x0000000000395A14 "K"
 *   insn=0x0000000000395A10 string=0x0000000000395A20 ")A"
 *   insn=0x0000000000395A14 string=0x0000000000395A18 "k"
 *   insn=0x0000000000395A18 string=0x0000000000395A1C "K"
 *   insn=0x0000000000395A2C string=0x0000000000395A3C "\t"
 *   insn=0x0000000000395A30 string=0x0000000000395A34 ")"
 *   insn=0x0000000000395A3C string=0x0000000000395A40 "?"
 *   insn=0x0000000000395A40 string=0x0000000000395A44 "+"
 *   insn=0x0000000000395A44 string=0x0000000000395A48 ")"
 *   insn=0x0000000000395A48 string=0x0000000000395A4C "7"
 *   insn=0x0000000000395A50 string=0x0000000000395A54 "\t"
 *   insn=0x0000000000395A54 string=0x0000000000395A58 "\n@"
 *   insn=0x0000000000395A5C string=0x0000000000395A60 "K"
 *   insn=0x0000000000395A60 string=0x0000000000395A64 "k"
 *   insn=0x0000000000395A64 string=0x0000000000395A68 "K"
 *   insn=0x0000000000395A6C string=0x0000000000395A70 "\t)"
 *   insn=0x0000000000395A70 string=0x0000000000395A74 "5"
 *   insn=0x0000000000395A78 string=0x0000000000395A7C ""
 *   insn=0x0000000000395A88 string=0x0000000000395A8C "\t@"
 *   insn=0x0000000000395A98 string=0x0000000000395A9C ""
 *   insn=0x0000000000395AA8 string=0x0000000000395AAC "@"
 *   insn=0x0000000000395AC8 string=0x0000000000395AD8 "u"
 *   insn=0x0000000000395ACC string=0x0000000000395AD0 ""
 *   insn=0x0000000000395AD8 string=0x0000000000395ADC "vR"
 *   insn=0x0000000000395ADC string=0x0000000000395AE0 "5"
 *   insn=0x0000000000395AE0 string=0x0000000000395B24 "t"
 *   insn=0x0000000000395AE4 string=0x0000000000395AE8 ""
 *   insn=0x0000000000395AF4 string=0x0000000000395AF8 "\t@"
 *   insn=0x0000000000395B04 string=0x0000000000395B08 ""
 *   insn=0x0000000000395B14 string=0x0000000000395B18 "@"
 *   insn=0x0000000000395B28 string=0x0000000000395B2C ""
 *   insn=0x0000000000395B3C string=0x0000000000395B40 "\t@"
 *   insn=0x0000000000395B48 string=0x0000000000395B4C ""
 *   insn=0x0000000000395B74 string=0x0000000000395B78 " "
 *   insn=0x0000000000395B7C string=0x0000000000395B80 "("
 *   insn=0x0000000000395B80 string=0x0000000000395B84 ""
 *   insn=0x0000000000395B84 string=0x0000000000395B88 "\t"
 *   insn=0x0000000000395B88 string=0x0000000000395B8C "("
 *   insn=0x0000000000395B8C string=0x0000000000395B90 "\n"
 *   insn=0x0000000000395B94 string=0x0000000000395B98 "_"
 *   insn=0x0000000000395B9C string=0x0000000000395BA0 ")"
 *   insn=0x0000000000395BA0 string=0x0000000000395BA4 "?"
 *   insn=0x0000000000395BA8 string=0x0000000000395BAC "7"
 *   insn=0x0000000000395BB8 string=0x0000000000395D48 "S="
 *   insn=0x0000000000395BC0 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000395BD0 string=0x0000000000395BD4 "i"
 *   insn=0x0000000000395BD4 string=0x0000000000395BD8 ")"
 *   insn=0x0000000000395BDC string=0x0000000000395BE0 "("
 *   insn=0x0000000000395BE4 string=0x0000000000395BE8 "("
 *   insn=0x0000000000395BEC string=0x0000000000395BF0 "\t"
 *   insn=0x0000000000395BF0 string=0x0000000000395BF4 ")"
 *   insn=0x0000000000395BF4 string=0x0000000000395BF8 "\t"
 *   insn=0x0000000000395C0C string=0x0000000000395C10 "hB"
 *   insn=0x0000000000395C14 string=0x0000000000395C18 "K"
 *   insn=0x0000000000395C20 string=0x0000000000395C24 "K"
 *   insn=0x0000000000395C2C string=0x0000000000395C30 "l"
 *   insn=0x0000000000395C2C string=0x0000000000395C3C "JA"
 *   insn=0x0000000000395C34 string=0x0000000000395C38 "l"
 *   insn=0x0000000000395C3C string=0x0000000000395C40 "_"
 *   insn=0x0000000000395C40 string=0x0000000000395C44 ")A"
 *   insn=0x0000000000395C44 string=0x0000000000395C48 "a"
 *   insn=0x0000000000395C48 string=0x0000000000395C4C ""
 *   insn=0x0000000000395C4C string=0x0000000000395C50 ""
 *   insn=0x0000000000395C54 string=0x0000000000395C58 "A"
 *   insn=0x0000000000395C60 string=0x0000000000395C64 "?"
 *   insn=0x0000000000395C68 string=0x0000000000395C6C "(C"
 *   insn=0x0000000000395C74 string=0x0000000000395C78 "K"
 *   insn=0x0000000000395C78 string=0x0000000000395C7C "+"
 *   insn=0x0000000000395C7C string=0x0000000000395C80 "K"
 *   insn=0x0000000000395C80 string=0x0000000000395C84 "+"
 *   insn=0x0000000000395C88 string=0x0000000000395C8C "l"
 *   insn=0x0000000000395C88 string=0x0000000000395C98 "JA"
 *   insn=0x0000000000395C90 string=0x0000000000395C94 "l"
 *   insn=0x0000000000395C98 string=0x0000000000395C9C "_"
 *   insn=0x0000000000395C9C string=0x0000000000395CA0 ")A"
 *   insn=0x0000000000395CA4 string=0x0000000000395CA8 ""
 *   insn=0x0000000000395CA8 string=0x0000000000395CAC ""
 *   insn=0x0000000000395CAC string=0x0000000000395CB0 ""
 *   insn=0x0000000000395CBC string=0x0000000000395D18 "v"
 *   insn=0x0000000000395CC0 string=0x0000000000395CC4 "3"
 *   insn=0x0000000000395CC4 string=0x0000000000395CC8 "h"
 *   insn=0x0000000000395CC8 string=0x0000000000395CCC ""
 *   insn=0x0000000000395CCC string=0x0000000000395CD0 "h"
 *   insn=0x0000000000395CD4 string=0x0000000000395CD8 "h"
 *   insn=0x0000000000395CDC string=0x0000000000395CE0 "\t@"
 *   insn=0x0000000000395CE4 string=0x0000000000395CE8 "h\n@"
 *   insn=0x0000000000395CE8 string=0x0000000000395CEC ""
 *   insn=0x0000000000395CEC string=0x0000000000395CF0 "h\n"
 *   insn=0x0000000000395CF4 string=0x0000000000395CF8 "h"
 *   insn=0x0000000000395CFC string=0x0000000000395D00 "@"
 *   insn=0x0000000000395D08 string=0x0000000000395D0C "?"
 *   insn=0x0000000000395D1C string=0x0000000000395D20 "d"
 *   insn=0x0000000000395D20 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000395D58 string=0x0000000000395D5C "4"
 *   insn=0x0000000000395D60 string=0x0000000000395D64 ""
 *   insn=0x0000000000395D70 string=0x0000000000395D74 "\t@"
 *   insn=0x0000000000395D80 string=0x0000000000395D84 ""
 *   insn=0x0000000000395D90 string=0x0000000000395D94 "@"
 *   insn=0x0000000000395DA4 string=0x0000000000395DA8 "i"
 *   insn=0x0000000000395DCC string=0x0000000000395DD0 ")"
 *   insn=0x0000000000395DDC string=0x0000000000395DE0 "(A"
 *   insn=0x0000000000395DE4 string=0x0000000000395DE8 ""
 *   insn=0x0000000000395DF0 string=0x0000000000395DF4 "`""
 *   insn=0x0000000000395E14 string=0x0000000000395E18 "4"
 *   insn=0x0000000000395E1C string=0x0000000000395E20 ""
 *   insn=0x0000000000395E2C string=0x0000000000395E30 "\t@"
 *   insn=0x0000000000395E3C string=0x0000000000395E40 ""
 *   insn=0x0000000000395E4C string=0x0000000000395E50 "@"
 *   insn=0x0000000000395E60 string=0x0000000000395E64 ":"
 *   insn=0x0000000000395E68 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000395E6C string=0x0000000000395E70 "h"
 *   insn=0x0000000000395E6C string=0x0000000000395E80 "<"
 *   insn=0x0000000000395E70 string=0x0000000000395E74 "!@"
 *   insn=0x0000000000395E88 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000395E90 string=0x0000000000395E94 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::BadgeCountView,Caver::BadgeCountView>(
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

