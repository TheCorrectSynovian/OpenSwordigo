/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D8B80
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13OverlayButtonES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OverlayButton,Caver::OverlayButton>(boost::shared_ptr<Caver::OverlayButton> const*,Caver::OverlayButton *)
 *
 * Callers: 1
 *   0x0000000000202EB0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OverlayButton,Caver::OverlayButton>(boost::shared_ptr<Caver::OverlayButton> const*,Caver::OverlayButton *)
 *
 * Callees: 3
 *   0x00000000001FA120  .strcmp
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 57
 *   insn=0x00000000003D8B90 string=0x00000000003D8B94 "`"
 *   insn=0x00000000003D8B94 string=0x00000000003D8B98 ""
 *   insn=0x00000000003D8B94 string=0x00000000003D8BA0 "3"
 *   insn=0x00000000003D8B98 string=0x00000000003D8B9C "h"
 *   insn=0x00000000003D8BA4 string=0x00000000003D8BA8 "h"
 *   insn=0x00000000003D8BA8 string=0x00000000003D8BAC ""
 *   insn=0x00000000003D8BAC string=0x00000000003D8BB0 "h"
 *   insn=0x00000000003D8BC0 string=0x00000000003D8BC4 "h\n@"
 *   insn=0x00000000003D8BC4 string=0x00000000003D8BC8 ""
 *   insn=0x00000000003D8BC8 string=0x00000000003D8BCC "h\n"
 *   insn=0x00000000003D8BD0 string=0x00000000003D8BD4 "@"
 *   insn=0x00000000003D8BD4 string=0x00000000003D8BD8 ""
 *   insn=0x00000000003D8BD8 string=0x00000000003D8BDC ""
 *   insn=0x00000000003D8BE0 string=0x00000000003D8BE4 ""
 *   insn=0x00000000003D8BE4 string=0x00000000003D8BE8 "@"
 *   insn=0x00000000003D8BF4 string=0x00000000003D8BF8 "h"
 *   insn=0x00000000003D8BF8 string=0x00000000003D8BFC ""
 *   insn=0x00000000003D8BFC string=0x00000000003D8C00 "h"
 *   insn=0x00000000003D8C00 string=0x00000000003D8C04 "!"
 *   insn=0x00000000003D8C04 string=0x00000000003D8C08 "h"
 *   insn=0x00000000003D8C0C string=0x00000000003D8C10 "\t@"
 *   insn=0x00000000003D8C14 string=0x00000000003D8C18 "h\n@"
 *   insn=0x00000000003D8C18 string=0x00000000003D8C1C ""
 *   insn=0x00000000003D8C1C string=0x00000000003D8C20 "h\n"
 *   insn=0x00000000003D8C24 string=0x00000000003D8C34 "h"
 *   insn=0x00000000003D8C44 string=0x00000000003D8C48 " "
 *   insn=0x00000000003D8C4C string=0x00000000003D8C50 "3"
 *   insn=0x00000000003D8C50 string=0x00000000003D8C54 "h"
 *   insn=0x00000000003D8C54 string=0x00000000003D8C58 ""
 *   insn=0x00000000003D8C58 string=0x00000000003D8C5C "h"
 *   insn=0x00000000003D8C60 string=0x00000000003D8C64 "h"
 *   insn=0x00000000003D8C64 string=0x00000000003D8C68 "\t@"
 *   insn=0x00000000003D8C70 string=0x00000000003D8C74 "h\n@"
 *   insn=0x00000000003D8C74 string=0x00000000003D8C78 ""
 *   insn=0x00000000003D8C78 string=0x00000000003D8C7C "h\n"
 *   insn=0x00000000003D8C80 string=0x00000000003D8C84 "h"
 *   insn=0x00000000003D8C84 string=0x00000000003D8C88 "@"
 *   insn=0x00000000003D8C94 string=0x00000000003D8C98 ""
 *   insn=0x00000000003D8CAC string=0x00000000003D8CB0 "_"
 *   insn=0x00000000003D8CB8 string=0x00000000003D8CBC "h"
 *   insn=0x00000000003D8CB8 string=0x00000000003D8CD0 "_"
 *   insn=0x00000000003D8CBC string=0x00000000003D8CC0 ""
 *   insn=0x00000000003D8CC4 string=0x00000000003D8CC8 "h"
 *   insn=0x00000000003D8CD4 string=0x00000000003D8CEC "_"
 *   insn=0x00000000003D8CD8 string=0x00000000003D8CDC "h\n"
 *   insn=0x00000000003D8CE0 string=0x00000000003D8CE4 "`"
 *   insn=0x00000000003D8CF0 string=0x00000000003D8CF4 "_"
 *   insn=0x00000000003D8CF4 string=0x00000000003D8CF8 "!"
 *   insn=0x00000000003D8CF8 string=0x00000000003D8CFC "h"
 *   insn=0x00000000003D8CFC string=0x00000000003D8D00 "a"
 *   insn=0x00000000003D8D00 string=0x00000000003D8D04 ""
 *   insn=0x00000000003D8D08 string=0x00000000003D8D0C "*"
 *   insn=0x00000000003D8D0C string=0x00000000003D8D10 "!A"
 *   insn=0x00000000003D8D10 string=0x00000000003D8D14 "_"
 *   insn=0x00000000003D8D10 string=0x00000000005926D0 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver15GameOverlayViewEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x00000000003D8D14 string=0x00000000003D8D18 " "
 *   insn=0x00000000003D8D1C string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OverlayButton,Caver::OverlayButton>(
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

