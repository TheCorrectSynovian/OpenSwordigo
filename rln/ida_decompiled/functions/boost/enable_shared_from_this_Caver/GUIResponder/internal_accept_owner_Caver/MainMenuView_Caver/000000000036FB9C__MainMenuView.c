/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036FB9C
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12MainMenuViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MainMenuView,Caver::MainMenuView>(boost::shared_ptr<Caver::MainMenuView> const*,Caver::MainMenuView *)
 *
 * Callers: 1
 *   0x00000000001F5740  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MainMenuView,Caver::MainMenuView>(boost::shared_ptr<Caver::MainMenuView> const*,Caver::MainMenuView *)
 *
 * Callees: 3
 *   0x00000000001FA120  .strcmp
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 54
 *   insn=0x000000000036FBAC string=0x000000000036FBB0 "`"
 *   insn=0x000000000036FBB0 string=0x000000000036FBB4 ""
 *   insn=0x000000000036FBB0 string=0x000000000036FBBC "3"
 *   insn=0x000000000036FBB4 string=0x000000000036FBB8 "h"
 *   insn=0x000000000036FBC0 string=0x000000000036FBC4 "h"
 *   insn=0x000000000036FBC4 string=0x000000000036FBC8 ""
 *   insn=0x000000000036FBC8 string=0x000000000036FBCC "h"
 *   insn=0x000000000036FBDC string=0x000000000036FBE0 "h\n@"
 *   insn=0x000000000036FBE0 string=0x000000000036FBE4 ""
 *   insn=0x000000000036FBE4 string=0x000000000036FBE8 "h\n"
 *   insn=0x000000000036FBEC string=0x000000000036FBF0 "@"
 *   insn=0x000000000036FBF0 string=0x000000000036FBF4 ""
 *   insn=0x000000000036FBF4 string=0x000000000036FBF8 ""
 *   insn=0x000000000036FBFC string=0x000000000036FC00 ""
 *   insn=0x000000000036FC00 string=0x000000000036FC04 "@"
 *   insn=0x000000000036FC10 string=0x000000000036FC14 "h"
 *   insn=0x000000000036FC14 string=0x000000000036FC18 ""
 *   insn=0x000000000036FC18 string=0x000000000036FC1C "h"
 *   insn=0x000000000036FC1C string=0x000000000036FC20 "!"
 *   insn=0x000000000036FC20 string=0x000000000036FC24 "h"
 *   insn=0x000000000036FC28 string=0x000000000036FC2C "\t@"
 *   insn=0x000000000036FC30 string=0x000000000036FC34 "h\n@"
 *   insn=0x000000000036FC34 string=0x000000000036FC38 ""
 *   insn=0x000000000036FC38 string=0x000000000036FC3C "h\n"
 *   insn=0x000000000036FC40 string=0x000000000036FC50 "h"
 *   insn=0x000000000036FC60 string=0x000000000036FC64 " "
 *   insn=0x000000000036FC68 string=0x000000000036FC6C "3"
 *   insn=0x000000000036FC6C string=0x000000000036FC70 "h"
 *   insn=0x000000000036FC70 string=0x000000000036FC74 ""
 *   insn=0x000000000036FC74 string=0x000000000036FC78 "h"
 *   insn=0x000000000036FC7C string=0x000000000036FC80 "h"
 *   insn=0x000000000036FC80 string=0x000000000036FC84 "\t@"
 *   insn=0x000000000036FC8C string=0x000000000036FC90 "h\n@"
 *   insn=0x000000000036FC90 string=0x000000000036FC94 ""
 *   insn=0x000000000036FC94 string=0x000000000036FC98 "h\n"
 *   insn=0x000000000036FC9C string=0x000000000036FCA0 "h"
 *   insn=0x000000000036FCA0 string=0x000000000036FCA4 "@"
 *   insn=0x000000000036FCC8 string=0x000000000036FCCC "_"
 *   insn=0x000000000036FCD4 string=0x000000000036FCEC "_"
 *   insn=0x000000000036FCD8 string=0x000000000036FCDC ""
 *   insn=0x000000000036FCE0 string=0x000000000036FCE4 "h"
 *   insn=0x000000000036FCF0 string=0x000000000036FD08 "_"
 *   insn=0x000000000036FCF4 string=0x000000000036FCF8 "h\n"
 *   insn=0x000000000036FCFC string=0x000000000036FD00 "`"
 *   insn=0x000000000036FD0C string=0x000000000036FD10 "_"
 *   insn=0x000000000036FD10 string=0x000000000036FD14 "!"
 *   insn=0x000000000036FD14 string=0x000000000036FD18 "h"
 *   insn=0x000000000036FD1C string=0x000000000036FD20 ""
 *   insn=0x000000000036FD24 string=0x000000000036FD28 "*"
 *   insn=0x000000000036FD28 string=0x000000000036FD2C "!"
 *   insn=0x000000000036FD2C string=0x000000000036FD30 "_"
 *   insn=0x000000000036FD2C string=0x000000000058FDE0 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver22MainMenuViewControllerEbRKSsEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSD_ILi2EEEEEEE"
 *   insn=0x000000000036FD30 string=0x000000000036FD34 " "
 *   insn=0x000000000036FD38 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MainMenuView,Caver::MainMenuView>(
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

