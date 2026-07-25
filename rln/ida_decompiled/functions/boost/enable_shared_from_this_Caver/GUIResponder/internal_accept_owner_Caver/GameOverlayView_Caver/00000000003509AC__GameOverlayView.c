/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003509AC
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_15GameOverlayViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverlayView,Caver::GameOverlayView>(boost::shared_ptr<Caver::GameOverlayView> const*,Caver::GameOverlayView *)
 *
 * Callers: 1
 *   0x00000000001F3DA0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverlayView,Caver::GameOverlayView>(boost::shared_ptr<Caver::GameOverlayView> const*,Caver::GameOverlayView *)
 *
 * Callees: 3
 *   0x00000000001FA120  .strcmp
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 56
 *   insn=0x00000000003509BC string=0x00000000003509C0 "`"
 *   insn=0x00000000003509C0 string=0x00000000003509C4 ""
 *   insn=0x00000000003509C0 string=0x00000000003509CC "3"
 *   insn=0x00000000003509C4 string=0x00000000003509C8 "h"
 *   insn=0x00000000003509D0 string=0x00000000003509D4 "h"
 *   insn=0x00000000003509D4 string=0x00000000003509D8 ""
 *   insn=0x00000000003509D8 string=0x00000000003509DC "h"
 *   insn=0x00000000003509EC string=0x00000000003509F0 "h\n@"
 *   insn=0x00000000003509F0 string=0x00000000003509F4 ""
 *   insn=0x00000000003509F4 string=0x00000000003509F8 "h\n"
 *   insn=0x00000000003509FC string=0x0000000000350A00 "@"
 *   insn=0x0000000000350A00 string=0x0000000000350A04 ""
 *   insn=0x0000000000350A04 string=0x0000000000350A08 ""
 *   insn=0x0000000000350A0C string=0x0000000000350A10 ""
 *   insn=0x0000000000350A10 string=0x0000000000350A14 "@"
 *   insn=0x0000000000350A20 string=0x0000000000350A24 "h"
 *   insn=0x0000000000350A24 string=0x0000000000350A28 ""
 *   insn=0x0000000000350A28 string=0x0000000000350A2C "h"
 *   insn=0x0000000000350A2C string=0x0000000000350A30 "!"
 *   insn=0x0000000000350A30 string=0x0000000000350A34 "h"
 *   insn=0x0000000000350A38 string=0x0000000000350A3C "\t@"
 *   insn=0x0000000000350A40 string=0x0000000000350A44 "h\n@"
 *   insn=0x0000000000350A44 string=0x0000000000350A48 ""
 *   insn=0x0000000000350A48 string=0x0000000000350A4C "h\n"
 *   insn=0x0000000000350A50 string=0x0000000000350A60 "h"
 *   insn=0x0000000000350A70 string=0x0000000000350A74 " "
 *   insn=0x0000000000350A78 string=0x0000000000350A7C "3"
 *   insn=0x0000000000350A7C string=0x0000000000350A80 "h"
 *   insn=0x0000000000350A80 string=0x0000000000350A84 ""
 *   insn=0x0000000000350A84 string=0x0000000000350A88 "h"
 *   insn=0x0000000000350A8C string=0x0000000000350A90 "h"
 *   insn=0x0000000000350A90 string=0x0000000000350A94 "\t@"
 *   insn=0x0000000000350A9C string=0x0000000000350AA0 "h\n@"
 *   insn=0x0000000000350AA0 string=0x0000000000350AA4 ""
 *   insn=0x0000000000350AA4 string=0x0000000000350AA8 "h\n"
 *   insn=0x0000000000350AAC string=0x0000000000350AB0 "h"
 *   insn=0x0000000000350AB0 string=0x0000000000350AB4 "@"
 *   insn=0x0000000000350AC4 string=0x0000000000350AC8 "!"
 *   insn=0x0000000000350AD8 string=0x0000000000350ADC "_"
 *   insn=0x0000000000350AE4 string=0x0000000000350AFC "_"
 *   insn=0x0000000000350AE8 string=0x0000000000350AEC ""
 *   insn=0x0000000000350AF0 string=0x0000000000350AF4 "h"
 *   insn=0x0000000000350B00 string=0x0000000000350B18 "_"
 *   insn=0x0000000000350B04 string=0x0000000000350B08 "h\n"
 *   insn=0x0000000000350B0C string=0x0000000000350B10 "`"
 *   insn=0x0000000000350B1C string=0x0000000000350B20 "_"
 *   insn=0x0000000000350B20 string=0x0000000000350B24 "!"
 *   insn=0x0000000000350B24 string=0x0000000000350B28 "h"
 *   insn=0x0000000000350B2C string=0x0000000000350B30 ""
 *   insn=0x0000000000350B34 string=0x0000000000350B38 "*"
 *   insn=0x0000000000350B38 string=0x0000000000350B3C "!"
 *   insn=0x0000000000350B3C string=0x0000000000350B40 "_"
 *   insn=0x0000000000350B3C string=0x000000000058ECD0 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver13GameSceneViewEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x0000000000350B40 string=0x0000000000350B44 " "
 *   insn=0x0000000000350B44 string=0x0000000000350B48 "v"
 *   insn=0x0000000000350B48 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverlayView,Caver::GameOverlayView>(
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

