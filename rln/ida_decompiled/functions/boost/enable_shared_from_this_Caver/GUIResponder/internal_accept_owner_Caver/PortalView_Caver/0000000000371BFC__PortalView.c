/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000371BFC
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_10PortalViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PortalView,Caver::PortalView>(boost::shared_ptr<Caver::PortalView> const*,Caver::PortalView *)
 *
 * Callers: 1
 *   0x00000000001F39B0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PortalView,Caver::PortalView>(boost::shared_ptr<Caver::PortalView> const*,Caver::PortalView *)
 *
 * Callees: 3
 *   0x00000000001FA120  .strcmp
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 54
 *   insn=0x0000000000371C0C string=0x0000000000371C10 "`"
 *   insn=0x0000000000371C10 string=0x0000000000371C14 ""
 *   insn=0x0000000000371C10 string=0x0000000000371C1C "3"
 *   insn=0x0000000000371C14 string=0x0000000000371C18 "h"
 *   insn=0x0000000000371C20 string=0x0000000000371C24 "h"
 *   insn=0x0000000000371C24 string=0x0000000000371C28 ""
 *   insn=0x0000000000371C28 string=0x0000000000371C2C "h"
 *   insn=0x0000000000371C3C string=0x0000000000371C40 "h\n@"
 *   insn=0x0000000000371C40 string=0x0000000000371C44 ""
 *   insn=0x0000000000371C44 string=0x0000000000371C48 "h\n"
 *   insn=0x0000000000371C4C string=0x0000000000371C50 "@"
 *   insn=0x0000000000371C50 string=0x0000000000371C54 ""
 *   insn=0x0000000000371C54 string=0x0000000000371C58 ""
 *   insn=0x0000000000371C5C string=0x0000000000371C60 ""
 *   insn=0x0000000000371C60 string=0x0000000000371C64 "@"
 *   insn=0x0000000000371C70 string=0x0000000000371C74 "h"
 *   insn=0x0000000000371C74 string=0x0000000000371C78 ""
 *   insn=0x0000000000371C78 string=0x0000000000371C7C "h"
 *   insn=0x0000000000371C7C string=0x0000000000371C80 "!"
 *   insn=0x0000000000371C80 string=0x0000000000371C84 "h"
 *   insn=0x0000000000371C88 string=0x0000000000371C8C "\t@"
 *   insn=0x0000000000371C90 string=0x0000000000371C94 "h\n@"
 *   insn=0x0000000000371C94 string=0x0000000000371C98 ""
 *   insn=0x0000000000371C98 string=0x0000000000371C9C "h\n"
 *   insn=0x0000000000371CA0 string=0x0000000000371CB0 "h"
 *   insn=0x0000000000371CC0 string=0x0000000000371CC4 " "
 *   insn=0x0000000000371CC8 string=0x0000000000371CCC "3"
 *   insn=0x0000000000371CCC string=0x0000000000371CD0 "h"
 *   insn=0x0000000000371CD0 string=0x0000000000371CD4 ""
 *   insn=0x0000000000371CD4 string=0x0000000000371CD8 "h"
 *   insn=0x0000000000371CDC string=0x0000000000371CE0 "h"
 *   insn=0x0000000000371CE0 string=0x0000000000371CE4 "\t@"
 *   insn=0x0000000000371CEC string=0x0000000000371CF0 "h\n@"
 *   insn=0x0000000000371CF0 string=0x0000000000371CF4 ""
 *   insn=0x0000000000371CF4 string=0x0000000000371CF8 "h\n"
 *   insn=0x0000000000371CFC string=0x0000000000371D00 "h"
 *   insn=0x0000000000371D00 string=0x0000000000371D04 "@"
 *   insn=0x0000000000371D28 string=0x0000000000371D2C "_"
 *   insn=0x0000000000371D34 string=0x0000000000371D4C "_"
 *   insn=0x0000000000371D38 string=0x0000000000371D3C ""
 *   insn=0x0000000000371D40 string=0x0000000000371D44 "h"
 *   insn=0x0000000000371D50 string=0x0000000000371D68 "_"
 *   insn=0x0000000000371D54 string=0x0000000000371D58 "h\n"
 *   insn=0x0000000000371D5C string=0x0000000000371D60 "`"
 *   insn=0x0000000000371D6C string=0x0000000000371D70 "_"
 *   insn=0x0000000000371D70 string=0x0000000000371D74 "!"
 *   insn=0x0000000000371D74 string=0x0000000000371D78 "h"
 *   insn=0x0000000000371D7C string=0x0000000000371D80 ""
 *   insn=0x0000000000371D84 string=0x0000000000371D88 "*"
 *   insn=0x0000000000371D88 string=0x0000000000371D8C "!,D"
 *   insn=0x0000000000371D8C string=0x0000000000371D90 "_"
 *   insn=0x0000000000371D8C string=0x0000000000590050 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver20PortalViewControllerEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x0000000000371D90 string=0x0000000000371D94 " "
 *   insn=0x0000000000371D98 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PortalView,Caver::PortalView>(
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

