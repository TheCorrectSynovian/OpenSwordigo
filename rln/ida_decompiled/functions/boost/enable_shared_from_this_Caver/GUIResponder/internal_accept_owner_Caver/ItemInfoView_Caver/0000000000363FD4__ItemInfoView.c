/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000363FD4
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12ItemInfoViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoView,Caver::ItemInfoView>(boost::shared_ptr<Caver::ItemInfoView> const*,Caver::ItemInfoView *)
 *
 * Callers: 1
 *   0x00000000001F4350  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoView,Caver::ItemInfoView>(boost::shared_ptr<Caver::ItemInfoView> const*,Caver::ItemInfoView *)
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC500  Caver::GUIEffect::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FDB50  Caver::GUIEffect::GUIEffect(void)
 *   0x00000000001FFB30  boost::detail::shared_count::shared_count<Caver::GUIEffect>(Caver::GUIEffect *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003641FC  boost::shared_ptr<Caver::SceneLoadingView>::shared_ptr<Caver::SceneLoadingView>(Caver::SceneLoadingView *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 59
 *   insn=0x0000000000363FE4 string=0x0000000000363FE8 "`"
 *   insn=0x0000000000363FE8 string=0x0000000000363FEC ""
 *   insn=0x0000000000363FE8 string=0x0000000000363FF4 "3"
 *   insn=0x0000000000363FEC string=0x0000000000363FF0 "h"
 *   insn=0x0000000000363FF8 string=0x0000000000363FFC "h"
 *   insn=0x0000000000363FFC string=0x0000000000364000 ""
 *   insn=0x0000000000364000 string=0x0000000000364004 "h"
 *   insn=0x0000000000364014 string=0x0000000000364018 "h\n@"
 *   insn=0x0000000000364018 string=0x000000000036401C ""
 *   insn=0x000000000036401C string=0x0000000000364020 "h\n"
 *   insn=0x0000000000364024 string=0x0000000000364028 "@"
 *   insn=0x0000000000364028 string=0x000000000036402C ""
 *   insn=0x000000000036402C string=0x0000000000364030 ""
 *   insn=0x0000000000364034 string=0x0000000000364038 ""
 *   insn=0x0000000000364038 string=0x000000000036403C "@"
 *   insn=0x0000000000364048 string=0x000000000036404C "h"
 *   insn=0x000000000036404C string=0x0000000000364050 ""
 *   insn=0x0000000000364050 string=0x0000000000364054 "h"
 *   insn=0x0000000000364054 string=0x0000000000364058 "!"
 *   insn=0x0000000000364058 string=0x000000000036405C "h"
 *   insn=0x0000000000364060 string=0x0000000000364064 "\t@"
 *   insn=0x0000000000364068 string=0x000000000036406C "h\n@"
 *   insn=0x000000000036406C string=0x0000000000364070 ""
 *   insn=0x0000000000364070 string=0x0000000000364074 "h\n"
 *   insn=0x0000000000364078 string=0x0000000000364088 "h"
 *   insn=0x0000000000364098 string=0x000000000036409C " "
 *   insn=0x00000000003640A0 string=0x00000000003640A4 "3"
 *   insn=0x00000000003640A4 string=0x00000000003640A8 "h"
 *   insn=0x00000000003640A8 string=0x00000000003640AC ""
 *   insn=0x00000000003640AC string=0x00000000003640B0 "h"
 *   insn=0x00000000003640B4 string=0x00000000003640B8 "h"
 *   insn=0x00000000003640B8 string=0x00000000003640BC "\t@"
 *   insn=0x00000000003640C4 string=0x00000000003640C8 "h\n@"
 *   insn=0x00000000003640C8 string=0x00000000003640CC ""
 *   insn=0x00000000003640CC string=0x00000000003640D0 "h\n"
 *   insn=0x00000000003640D4 string=0x00000000003640D8 "h"
 *   insn=0x00000000003640D8 string=0x00000000003640DC "@"
 *   insn=0x0000000000364104 string=0x0000000000364108 "U"
 *   insn=0x0000000000364114 string=0x0000000000364118 "`"
 *   insn=0x0000000000364118 string=0x000000000036411C " "
 *   insn=0x0000000000364120 string=0x0000000000364124 "/E"
 *   insn=0x0000000000364124 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000036412C string=0x00000000001FDB50 "0'"
 *   insn=0x000000000036413C string=0x0000000000364140 "|n"
 *   insn=0x0000000000364150 string=0x0000000000364154 "hRV"
 *   insn=0x0000000000364160 string=0x0000000000364164 "i""
 *   insn=0x0000000000364168 string=0x000000000036416C "4"
 *   insn=0x000000000036416C string=0x00000000003641B0 "`"
 *   insn=0x0000000000364170 string=0x0000000000364174 ""
 *   insn=0x0000000000364184 string=0x0000000000364188 "\t@"
 *   insn=0x0000000000364190 string=0x0000000000364194 ""
 *   insn=0x00000000003641A4 string=0x00000000003641A8 "@"
 *   insn=0x00000000003641B0 string=0x00000000003641B4 "a"
 *   insn=0x00000000003641B8 string=0x00000000003641BC "`"
 *   insn=0x00000000003641B8 string=0x00000000001FC500 "0'"
 *   insn=0x00000000003641CC string=0x00000000003641E4 ";H"
 *   insn=0x00000000003641E4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003641EC string=0x00000000003641F0 "0L"
 *   insn=0x00000000003641F0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ItemInfoView,Caver::ItemInfoView>(
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

