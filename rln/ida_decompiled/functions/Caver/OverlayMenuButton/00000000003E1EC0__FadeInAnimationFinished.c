/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E1EC0
 * Mangled: _ZN5Caver17OverlayMenuButton23FadeInAnimationFinishedEPvPNS_8GUIEventE
 * Demangled: Caver::OverlayMenuButton::FadeInAnimationFinished(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x00000000003E1704  Caver::OverlayMenuButton::FadeOutAnimationFinished(void *,Caver::GUIEvent *)
 *
 * Callees: 17
 *   0x00000000001F4B70  Caver::GUIAnimation::GUIAnimation(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8090  Caver::GUIPropertyValue::ValueWithFloat(float)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x00000000001FABF0  boost::detail::shared_count::shared_count<Caver::GUIAnimation>(Caver::GUIAnimation *)
 *   0x0000000000200070  std::exception::~exception()
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x00000000002033A0  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003E1704  Caver::OverlayMenuButton::FadeOutAnimationFinished(void *,Caver::GUIEvent *)
 *   0x00000000003E267C  Caver::OverlayMenuButton::~OverlayMenuButton()
 *   0x00000000003E2A5C  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OverlayMenuButton,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OverlayMenuButton*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 177
 *   insn=0x00000000003E1ED4 string=0x00000000003E1ED8 "U"
 *   insn=0x00000000003E1EE4 string=0x00000000003E1EE8 "h"
 *   insn=0x00000000003E1EE8 string=0x00000000003E1EEC "h""
 *   insn=0x00000000003E1EF4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003E1EFC string=0x00000000001F4B70 "P'"
 *   insn=0x00000000003E1F0C string=0x00000000003E1F10 "8c"
 *   insn=0x00000000003E1F10 string=0x00000000001FABF0 "0'"
 *   insn=0x00000000003E1F34 string=0x00000000003E1F38 "VX"
 *   insn=0x00000000003E1F38 string=0x00000000001F8090 "0'"
 *   insn=0x00000000003E1F48 string=0x00000000003E1F4C "\n"
 *   insn=0x00000000003E1F4C string=0x00000000003E1F50 "J"
 *   insn=0x00000000003E1F50 string=0x00000000003E1F54 "\n"
 *   insn=0x00000000003E1F5C string=0x00000000003E1F60 "4"
 *   insn=0x00000000003E1F64 string=0x00000000003E1F68 ""
 *   insn=0x00000000003E1F74 string=0x00000000003E1F78 "\t@"
 *   insn=0x00000000003E1F84 string=0x00000000003E1F88 ""
 *   insn=0x00000000003E1F94 string=0x00000000003E1F98 "@"
 *   insn=0x00000000003E1FA4 string=0x00000000003E1FA8 "4"
 *   insn=0x00000000003E1FAC string=0x00000000003E1FB0 ""
 *   insn=0x00000000003E1FBC string=0x00000000003E1FC0 "\t@"
 *   insn=0x00000000003E1FCC string=0x00000000003E1FD0 ""
 *   insn=0x00000000003E1FDC string=0x00000000003E1FE0 "@"
 *   insn=0x00000000003E1FEC string=0x00000000003E1FF0 "("
 *   insn=0x00000000003E1FF8 string=0x00000000003E1FFC "%X"
 *   insn=0x00000000003E200C string=0x00000000003E2010 "\n"
 *   insn=0x00000000003E2010 string=0x00000000003E2014 "J"
 *   insn=0x00000000003E2014 string=0x00000000003E2018 "\n"
 *   insn=0x00000000003E2020 string=0x00000000003E2024 "4"
 *   insn=0x00000000003E2028 string=0x00000000003E202C ""
 *   insn=0x00000000003E2038 string=0x00000000003E203C "\t@"
 *   insn=0x00000000003E2048 string=0x00000000003E204C ""
 *   insn=0x00000000003E2058 string=0x00000000003E205C "@"
 *   insn=0x00000000003E2068 string=0x00000000003E206C "4"
 *   insn=0x00000000003E2070 string=0x00000000003E2074 ""
 *   insn=0x00000000003E2080 string=0x00000000003E2084 "\t@"
 *   insn=0x00000000003E2090 string=0x00000000003E2094 ""
 *   insn=0x00000000003E20A0 string=0x00000000003E20A4 "@"
 *   insn=0x00000000003E20C4 string=0x00000000003E20C8 "t\n@"
 *   insn=0x00000000003E20CC string=0x00000000003E2360 "("
 *   insn=0x00000000003E20D0 string=0x00000000003E20D4 "h"
 *   insn=0x00000000003E20D4 string=0x00000000003E20D8 "\t"
 *   insn=0x00000000003E20D8 string=0x00000000003E20DC "w"
 *   insn=0x00000000003E20DC string=0x00000000003E20E0 ")"
 *   insn=0x00000000003E20E4 string=0x00000000003E20E8 "\t"
 *   insn=0x00000000003E20EC string=0x00000000003E20F0 " "
 *   insn=0x00000000003E2104 string=0x00000000003E2108 "`"
 *   insn=0x00000000003E2104 string=0x00000000001F6B70 "0'"
 *   insn=0x00000000003E210C string=0x00000000003E2110 ""
 *   insn=0x00000000003E2120 string=0x00000000003E2124 "("
 *   insn=0x00000000003E2124 string=0x00000000003E2128 ""
 *   insn=0x00000000003E2134 string=0x00000000003E2138 ")"
 *   insn=0x00000000003E2140 string=0x00000000003E2144 "("
 *   insn=0x00000000003E2148 string=0x00000000003E214C "h"
 *   insn=0x00000000003E214C string=0x00000000003E2150 ""
 *   insn=0x00000000003E2150 string=0x00000000003E2154 ""
 *   insn=0x00000000003E2158 string=0x00000000003E215C " !"
 *   insn=0x00000000003E2160 string=0x00000000003E2164 "!a"
 *   insn=0x00000000003E219C string=0x00000000003E21A0 "@"
 *   insn=0x00000000003E21A0 string=0x00000000003E21A4 ""
 *   insn=0x00000000003E21A4 string=0x00000000003E21A8 ""
 *   insn=0x00000000003E21AC string=0x00000000003E21B0 "@"
 *   insn=0x00000000003E21B0 string=0x00000000003E21B4 ""
 *   insn=0x00000000003E21B4 string=0x00000000003E21B8 ""
 *   insn=0x00000000003E21BC string=0x00000000003E21C0 ""
 *   insn=0x00000000003E21C0 string=0x00000000003E21C4 "@"
 *   insn=0x00000000003E21D8 string=0x00000000003E21DC "q"
 *   insn=0x00000000003E21E0 string=0x00000000003E21E4 "h"
 *   insn=0x00000000003E21E4 string=0x00000000003E21E8 "("
 *   insn=0x00000000003E21E8 string=0x00000000003E21EC ""
 *   insn=0x00000000003E21EC string=0x00000000003E21F0 ""
 *   insn=0x00000000003E21F8 string=0x00000000003E21FC " a"
 *   insn=0x00000000003E2214 string=0x00000000003E2218 "@"
 *   insn=0x00000000003E2218 string=0x00000000003E221C ""
 *   insn=0x00000000003E221C string=0x00000000003E2220 ""
 *   insn=0x00000000003E2224 string=0x00000000003E2228 ""
 *   insn=0x00000000003E2228 string=0x00000000003E222C "@"
 *   insn=0x00000000003E2234 string=0x00000000003E2238 "h"
 *   insn=0x00000000003E2238 string=0x00000000003E223C "("
 *   insn=0x00000000003E223C string=0x00000000003E2240 ""
 *   insn=0x00000000003E2240 string=0x00000000003E2244 ""
 *   insn=0x00000000003E224C string=0x00000000003E2250 " !"
 *   insn=0x00000000003E2264 string=0x00000000003E2268 ""
 *   insn=0x00000000003E2274 string=0x00000000003E2278 "\t@"
 *   insn=0x00000000003E2284 string=0x00000000003E2288 ""
 *   insn=0x00000000003E2294 string=0x00000000003E2298 "@"
 *   insn=0x00000000003E22A4 string=0x00000000003E22A8 ""
 *   insn=0x00000000003E22B4 string=0x00000000003E22B8 "\t@"
 *   insn=0x00000000003E22C4 string=0x00000000003E22C8 ""
 *   insn=0x00000000003E22D4 string=0x00000000003E22D8 "@"
 *   insn=0x00000000003E22EC string=0x00000000001F8A30 "0'"
 *   insn=0x00000000003E22F0 string=0x00000000003E22F4 "3"
 *   insn=0x00000000003E22F4 string=0x00000000003E22F8 "h"
 *   insn=0x00000000003E22F8 string=0x00000000003E22FC ""
 *   insn=0x00000000003E22FC string=0x00000000003E2300 "h"
 *   insn=0x00000000003E2304 string=0x00000000003E2308 "h"
 *   insn=0x00000000003E230C string=0x00000000003E2310 "\t@"
 *   insn=0x00000000003E2314 string=0x00000000003E2318 "h\n@"
 *   insn=0x00000000003E2318 string=0x00000000003E231C ""
 *   insn=0x00000000003E231C string=0x00000000003E2320 "h\n"
 *   insn=0x00000000003E2324 string=0x00000000003E2328 "h"
 *   insn=0x00000000003E232C string=0x00000000003E2330 "@"
 *   insn=0x00000000003E2360 string=0x00000000003E2364 ""
 *   insn=0x00000000003E2364 string=0x00000000003E2368 "A"
 *   insn=0x00000000003E2374 string=0x00000000001FA980 "0'"
 *   insn=0x00000000003E2378 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003E2380 string=0x00000000003E2384 ";w"
 *   insn=0x00000000003E2394 string=0x00000000003E2398 "r"
 *   insn=0x00000000003E23A0 string=0x00000000003E23A4 "h"
 *   insn=0x00000000003E23A4 string=0x00000000003E23A8 "\t\t@"
 *   insn=0x00000000003E23A8 string=0x00000000003E23AC ")"
 *   insn=0x00000000003E23AC string=0x00000000003E23B0 "\t\t"
 *   insn=0x00000000003E23B4 string=0x00000000003E23B8 "\t"
 *   insn=0x00000000003E23B8 string=0x00000000003E23BC ")@"
 *   insn=0x00000000003E23C0 string=0x00000000003E23C4 " "
 *   insn=0x00000000003E23C4 string=0x00000000003E23C8 "Z"
 *   insn=0x00000000003E23D4 string=0x00000000003E23D8 ""
 *   insn=0x00000000003E23D8 string=0x00000000003E23DC "a"
 *   insn=0x00000000003E23D8 string=0x00000000003E2538 "("
 *   insn=0x00000000003E23E4 string=0x00000000003E23E8 "H\n"
 *   insn=0x00000000003E23E8 string=0x00000000003E23EC "\t\t@"
 *   insn=0x00000000003E23EC string=0x00000000003E23F0 ")"
 *   insn=0x00000000003E23F0 string=0x00000000003E23F4 "\t\t"
 *   insn=0x00000000003E23F8 string=0x00000000003E23FC "\t"
 *   insn=0x00000000003E23FC string=0x00000000003E2400 ")@"
 *   insn=0x00000000003E2404 string=0x00000000003E2408 " "
 *   insn=0x00000000003E2408 string=0x00000000003E240C "I"
 *   insn=0x00000000003E2418 string=0x00000000003E241C "4"
 *   insn=0x00000000003E2420 string=0x00000000003E2424 ""
 *   insn=0x00000000003E2430 string=0x00000000003E2434 "\t@"
 *   insn=0x00000000003E2440 string=0x00000000003E2444 ""
 *   insn=0x00000000003E2450 string=0x00000000003E2454 "@"
 *   insn=0x00000000003E245C string=0x00000000003E2460 "p"
 *   insn=0x00000000003E2470 string=0x00000000003E2474 ""
 *   insn=0x00000000003E2478 string=0x00000000003E247C "!"
 *   insn=0x00000000003E2480 string=0x00000000003E2484 "\t@"
 *   insn=0x00000000003E2490 string=0x00000000003E2494 ""
 *   insn=0x00000000003E2498 string=0x00000000003E249C "!"
 *   insn=0x00000000003E24A0 string=0x00000000003E24A4 "@"
 *   insn=0x00000000003E24AC string=0x00000000003E24B0 "\"
 *   insn=0x00000000003E24B8 string=0x00000000003E24BC "9"
 *   insn=0x00000000003E24C8 string=0x00000000003E24CC "yS"
 *   insn=0x00000000003E24CC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003E24DC string=0x00000000003E24E0 "h"
 *   insn=0x00000000003E24E0 string=0x00000000003E24E4 "("
 *   insn=0x00000000003E24E4 string=0x00000000003E24E8 ""
 *   insn=0x00000000003E24E8 string=0x00000000003E24EC ""
 *   insn=0x00000000003E24F4 string=0x00000000003E24F8 " a"
 *   insn=0x00000000003E2510 string=0x00000000003E2514 "@"
 *   insn=0x00000000003E2514 string=0x00000000003E2518 ""
 *   insn=0x00000000003E2518 string=0x00000000003E251C ""
 *   insn=0x00000000003E2520 string=0x00000000003E2524 ""
 *   insn=0x00000000003E2524 string=0x00000000003E2528 "@"
 *   insn=0x00000000003E2530 string=0x00000000003E2534 "h"
 *   insn=0x00000000003E2538 string=0x00000000003E253C ""
 *   insn=0x00000000003E253C string=0x00000000003E2540 ""
 *   insn=0x00000000003E2548 string=0x00000000003E254C " !"
 *   insn=0x00000000003E2560 string=0x00000000003E2564 ""
 *   insn=0x00000000003E2570 string=0x00000000003E2574 "\t@"
 *   insn=0x00000000003E2580 string=0x00000000003E2584 ""
 *   insn=0x00000000003E2590 string=0x00000000003E2594 "@"
 *   insn=0x00000000003E25A0 string=0x00000000003E25A4 ""
 *   insn=0x00000000003E25B0 string=0x00000000003E25B4 "\t@"
 *   insn=0x00000000003E25C0 string=0x00000000003E25C4 ""
 *   insn=0x00000000003E25D0 string=0x00000000003E25D4 "@"
 *   insn=0x00000000003E25E8 string=0x00000000003E25EC "H"
 *   insn=0x00000000003E25EC string=0x00000000003E25F0 "\t\t@"
 *   insn=0x00000000003E25F0 string=0x00000000003E25F4 ")"
 *   insn=0x00000000003E25F4 string=0x00000000003E25F8 "\t\t"
 *   insn=0x00000000003E25FC string=0x00000000003E2600 "\t"
 *   insn=0x00000000003E2600 string=0x00000000003E2604 ")@"
 *   insn=0x00000000003E2608 string=0x00000000003E260C " "
 *   insn=0x00000000003E2620 string=0x00000000003E2624 "4"
 *   insn=0x00000000003E2628 string=0x00000000003E262C ""
 *   insn=0x00000000003E2638 string=0x00000000003E263C "\t@"
 *   insn=0x00000000003E2648 string=0x00000000003E264C ""
 *   insn=0x00000000003E2658 string=0x00000000003E265C "@"
 *   insn=0x00000000003E2674 string=0x00000000003E2678 "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayMenuButton::FadeInAnimationFinished(__int64 result)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 v3; // x22
  Caver::GUIPropertyValue *v4; // x0
  Caver::GUIPropertyValue *v5; // x0
  unsigned __int64 v6; // x8
  _QWORD *v7; // x9
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x22
  unsigned __int64 v15; // x8
  _QWORD *v16; // x9
  _QWORD *v17; // x20
  __int64 v18; // x8
  __int64 v19; // x8
  _QWORD *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 *v23; // x22
  _QWORD *v24; // x20
  __int64 v25; // x8
  __int64 v26; // x23
  int64x2_t v27; // q0
  unsigned __int64 v28; // x8
  _QWORD *v29; // x24
  _QWORD *v30; // x0
  __int64 v31; // x8
  void (__fastcall *v32)(int64x2_t *, int64x2_t *, __int64); // x8
  _QWORD *v33; // x0
  __int64 v34; // x8
  void (__fastcall *v35)(int64x2_t *, int64x2_t *, __int64); // x8
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // x8
  __int64 v39; // x8
  _QWORD *v40; // x19
  __int64 v41; // x8
  __int64 v42; // x8
  unsigned __int64 v43; // [xsp+0h] [xbp-B0h]
  int64x2_t v44; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v45; // [xsp+18h] [xbp-98h]
  __int64 v46; // [xsp+20h] [xbp-90h] BYREF
  _QWORD *v47; // [xsp+28h] [xbp-88h]
  unsigned __int64 v48; // [xsp+30h] [xbp-80h]
  int64x2_t v49; // [xsp+38h] [xbp-78h] BYREF
  __int64 v50; // [xsp+48h] [xbp-68h]
  __int64 v51; // [xsp+50h] [xbp-60h]
  _QWORD *v52; // [xsp+58h] [xbp-58h]
  int64x2_t v53; // [xsp+60h] [xbp-50h]
  __int64 v54; // [xsp+70h] [xbp-40h]
  __int64 v55; // [xsp+78h] [xbp-38h]

  v1 = result;
  v55 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*(_BYTE *)(result + 504) )
    return result;
  v2 = operator new(0xC0u);
  Caver::GUIAnimation::GUIAnimation((Caver::GUIAnimation *)v2);
  v51 = v2;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>();
  boost::detail::sp_enable_shared_from_this();
  v3 = v2;
  *(_DWORD *)(v2 + 48) = 1;
  v5 = (Caver::GUIPropertyValue *)Caver::GUIPropertyValue::ValueWithFloat(&v46, v4, 1.0);
  *(_DWORD *)(v2 + 112) = v46;
  v7 = v47;
  v6 = v48;
  if ( v48 )
    ++*(_QWORD *)(v48 + 8);
  v8 = *(_QWORD **)(v2 + 128);
  *(_QWORD *)(v3 + 120) = v7;
  *(_QWORD *)(v3 + 128) = v6;
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      v5 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        v5 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  v11 = (_QWORD *)v48;
  if ( v48 )
  {
    v12 = *(_QWORD *)(v48 + 8) - 1LL;
    *(_QWORD *)(v48 + 8) = v12;
    if ( !v12 )
    {
      v5 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        v5 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v14 = v51;
  Caver::GUIPropertyValue::ValueWithFloat(&v46, v5, 1.2);
  *(_DWORD *)(v14 + 136) = v46;
  v16 = v47;
  v15 = v48;
  if ( v48 )
    ++*(_QWORD *)(v48 + 8);
  v17 = *(_QWORD **)(v14 + 152);
  *(_QWORD *)(v14 + 144) = v16;
  *(_QWORD *)(v14 + 152) = v15;
  if ( v17 )
  {
    v18 = v17[1] - 1LL;
    v17[1] = v18;
    if ( !v18 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      v19 = v17[2] - 1LL;
      v17[2] = v19;
      if ( !v19 )
        (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
    }
  }
  v20 = (_QWORD *)v48;
  if ( v48 )
  {
    v21 = *(_QWORD *)(v48 + 8) - 1LL;
    *(_QWORD *)(v48 + 8) = v21;
    if ( !v21 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      v22 = v20[2] - 1LL;
      v20[2] = v22;
      if ( !v22 )
        (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
    }
  }
  v23 = (__int64 *)v51;
  *(_BYTE *)(v51 + 184) = 1;
  v23[11] = 0x3E99999A3F000000LL;
  v24 = *(_QWORD **)(v1 + 16);
  if ( !v24 || (v25 = v24[1]) == 0 )
  {
    v53.n128_u64[0] = (unsigned __int64)off_6CC4E8;
    boost::throw_exception<boost::bad_weak_ptr>();
  }
  v26 = *(_QWORD *)(v1 + 8);
  v27 = vdupq_n_s64(0);
  v27.n128_u64[0] = (unsigned __int64)Caver::OverlayMenuButton::FadeOutAnimationFinished;
  v24[1] = v25 + 2;
  v53 = v27;
  v54 = v1;
  if ( (boost::detail::function::has_empty_target() & 1) != 0 )
  {
    v28 = 0;
  }
  else
  {
    v45 = v54;
    v44 = v53;
    v28 = (unsigned __int64)boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OverlayMenuButton,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OverlayMenuButton*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OverlayMenuButton,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OverlayMenuButton*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable;
  }
  v43 = v28;
  v46 = v26;
  v47 = v24;
  ++v24[2];
  v48 = 0;
  if ( !v28 )
    goto LABEL_31;
  v48 = v28;
  if ( (v28 & 1) != 0 )
  {
    v50 = v45;
    v49 = v44;
LABEL_31:
    v29 = v24;
    goto LABEL_32;
  }
  (*(void (__fastcall **)(int64x2_t *, int64x2_t *, _QWORD))(v28 & 0xFFFFFFFFFFFFFFFELL))(&v44, &v49, 0);
  v26 = v46;
  v29 = v47;
LABEL_32:
  v30 = (_QWORD *)v23[1];
  *v23 = v26;
  if ( v29 != v30 )
  {
    if ( v29 )
      ++v29[2];
    if ( v30 )
    {
      v31 = v30[2] - 1LL;
      v30[2] = v31;
      if ( !v31 )
        (*(void (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
    }
    v23[1] = (__int64)v29;
  }
  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=();
  if ( v48 )
  {
    if ( (v48 & 1) == 0 )
    {
      v32 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v48 & 0xFFFFFFFFFFFFFFFELL);
      if ( v32 )
        v32(&v49, &v49, 2);
    }
    v48 = 0;
  }
  v33 = v47;
  if ( v47 )
  {
    v34 = v47[2] - 1LL;
    v47[2] = v34;
    if ( !v34 )
      (*(void (__fastcall **)(_QWORD *))(*v33 + 24LL))(v33);
  }
  if ( v43 )
  {
    if ( (v43 & 1) == 0 )
    {
      v35 = *(void (__fastcall **)(int64x2_t *, int64x2_t *, __int64))(v43 & 0xFFFFFFFFFFFFFFFELL);
      if ( v35 )
        v35(&v44, &v44, 2);
    }
  }
  v36 = v24[1] - 1LL;
  v24[1] = v36;
  if ( !v36 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
    v37 = v24[2] - 1LL;
    v24[2] = v37;
    if ( !v37 )
      (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
  }
  v38 = v24[1] - 1LL;
  v24[1] = v38;
  if ( !v38 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
    v39 = v24[2] - 1LL;
    v24[2] = v39;
    if ( !v39 )
      (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
  }
  result = Caver::GUIView::AddAnimation();
  v40 = v52;
  if ( v52 )
  {
    v41 = v52[1] - 1LL;
    v52[1] = v41;
    if ( !v41 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v40 + 16LL))(v40);
      v42 = v40[2] - 1LL;
      v40[2] = v42;
      if ( !v42 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v40 + 24LL))(v40);
    }
  }
  return result;
}

