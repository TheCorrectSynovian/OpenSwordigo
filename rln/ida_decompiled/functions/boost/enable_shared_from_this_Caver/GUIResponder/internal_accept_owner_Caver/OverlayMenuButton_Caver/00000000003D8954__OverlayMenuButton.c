/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D8954
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_17OverlayMenuButtonES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OverlayMenuButton,Caver::OverlayMenuButton>(boost::shared_ptr<Caver::OverlayMenuButton> const*,Caver::OverlayMenuButton *)
 *
 * Callers: 1
 *   0x00000000001FC0E0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OverlayMenuButton,Caver::OverlayMenuButton>(boost::shared_ptr<Caver::OverlayMenuButton> const*,Caver::OverlayMenuButton *)
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000202EB0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OverlayButton,Caver::OverlayButton>(boost::shared_ptr<Caver::OverlayButton> const*,Caver::OverlayButton *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 57
 *   insn=0x00000000003D8964 string=0x00000000003D8968 "`"
 *   insn=0x00000000003D8968 string=0x00000000003D896C ""
 *   insn=0x00000000003D8968 string=0x00000000003D8974 "3"
 *   insn=0x00000000003D896C string=0x00000000003D8970 "h"
 *   insn=0x00000000003D8978 string=0x00000000003D897C "h"
 *   insn=0x00000000003D897C string=0x00000000003D8980 ""
 *   insn=0x00000000003D8980 string=0x00000000003D8984 "h"
 *   insn=0x00000000003D8994 string=0x00000000003D8998 "h\n@"
 *   insn=0x00000000003D8998 string=0x00000000003D899C ""
 *   insn=0x00000000003D899C string=0x00000000003D89A0 "h\n"
 *   insn=0x00000000003D89A4 string=0x00000000003D89A8 "@"
 *   insn=0x00000000003D89A8 string=0x00000000003D89AC ""
 *   insn=0x00000000003D89AC string=0x00000000003D89B0 ""
 *   insn=0x00000000003D89B4 string=0x00000000003D89B8 ""
 *   insn=0x00000000003D89B8 string=0x00000000003D89BC "@"
 *   insn=0x00000000003D89C8 string=0x00000000003D89CC "h"
 *   insn=0x00000000003D89CC string=0x00000000003D89D0 ""
 *   insn=0x00000000003D89D0 string=0x00000000003D89D4 "h"
 *   insn=0x00000000003D89D4 string=0x00000000003D89D8 "!"
 *   insn=0x00000000003D89D8 string=0x00000000003D89DC "h"
 *   insn=0x00000000003D89E0 string=0x00000000003D89E4 "\t@"
 *   insn=0x00000000003D89E8 string=0x00000000003D89EC "h\n@"
 *   insn=0x00000000003D89EC string=0x00000000003D89F0 ""
 *   insn=0x00000000003D89F0 string=0x00000000003D89F4 "h\n"
 *   insn=0x00000000003D89F8 string=0x00000000003D8A08 "h"
 *   insn=0x00000000003D8A18 string=0x00000000003D8A1C " "
 *   insn=0x00000000003D8A20 string=0x00000000003D8A24 "3"
 *   insn=0x00000000003D8A24 string=0x00000000003D8A28 "h"
 *   insn=0x00000000003D8A28 string=0x00000000003D8A2C ""
 *   insn=0x00000000003D8A2C string=0x00000000003D8A30 "h"
 *   insn=0x00000000003D8A34 string=0x00000000003D8A38 "h"
 *   insn=0x00000000003D8A38 string=0x00000000003D8A3C "\t@"
 *   insn=0x00000000003D8A44 string=0x00000000003D8A48 "h\n@"
 *   insn=0x00000000003D8A48 string=0x00000000003D8A4C ""
 *   insn=0x00000000003D8A4C string=0x00000000003D8A50 "h\n"
 *   insn=0x00000000003D8A54 string=0x00000000003D8A58 "h"
 *   insn=0x00000000003D8A58 string=0x00000000003D8A5C "@"
 *   insn=0x00000000003D8A6C string=0x00000000003D8A70 "7"
 *   insn=0x00000000003D8A90 string=0x00000000003D8A94 "i"
 *   insn=0x00000000003D8A90 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003D8A94 string=0x00000000003D8A98 ")"
 *   insn=0x00000000003D8AA4 string=0x00000000003D8AA8 "(A"
 *   insn=0x00000000003D8AAC string=0x00000000003D8AB0 ""
 *   insn=0x00000000003D8AB8 string=0x00000000003D8ABC "`""
 *   insn=0x00000000003D8ADC string=0x00000000003D8AE0 "4"
 *   insn=0x00000000003D8AE4 string=0x00000000003D8AE8 ""
 *   insn=0x00000000003D8AF4 string=0x00000000003D8AF8 "\t@"
 *   insn=0x00000000003D8B04 string=0x00000000003D8B08 ""
 *   insn=0x00000000003D8B14 string=0x00000000003D8B18 "@"
 *   insn=0x00000000003D8B24 string=0x00000000003D8B28 "g"
 *   insn=0x00000000003D8B28 string=0x00000000003D8B2C ""
 *   insn=0x00000000003D8B30 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003D8B34 string=0x00000000003D8B38 "h"
 *   insn=0x00000000003D8B34 string=0x00000000003D8B48 "\n"
 *   insn=0x00000000003D8B38 string=0x00000000003D8B3C "!@"
 *   insn=0x00000000003D8B50 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003D8B5C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OverlayMenuButton,Caver::OverlayMenuButton>(
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

