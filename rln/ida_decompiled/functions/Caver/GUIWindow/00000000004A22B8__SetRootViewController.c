/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A22B8
 * Mangled: _ZN5Caver9GUIWindow21SetRootViewControllerERKN5boost10shared_ptrINS_17GUIViewControllerEEE
 * Demangled: Caver::GUIWindow::SetRootViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *
 * Callers: 1
 *   0x00000000001F75C0  Caver::GUIWindow::SetRootViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8550  Caver::GUIEffect::Update(float)
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000052A9C8  sub_52A9C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 131
 *   insn=0x00000000004A22CC string=0x00000000004A22D0 "V"
 *   insn=0x00000000004A22E0 string=0x00000000004A22E4 "u"
 *   insn=0x00000000004A22E4 string=0x00000000004A22E8 "U"
 *   insn=0x00000000004A22EC string=0x00000000004A22F0 "w"
 *   insn=0x00000000004A2308 string=0x00000000004A230C "\t@"
 *   insn=0x00000000004A2314 string=0x00000000004A2318 ""
 *   insn=0x00000000004A2328 string=0x00000000004A232C "@"
 *   insn=0x00000000004A2330 string=0x00000000004A2334 "W"
 *   insn=0x00000000004A2334 string=0x00000000004A2338 "&"
 *   insn=0x00000000004A2334 string=0x00000000004A235C "u"
 *   insn=0x00000000004A2340 string=0x00000000004A2344 "@"
 *   insn=0x00000000004A2350 string=0x00000000004A2354 "U"
 *   insn=0x00000000004A236C string=0x00000000004A2370 "@"
 *   insn=0x00000000004A2380 string=0x00000000004A2390 ""
 *   insn=0x00000000004A2384 string=0x00000000004A2388 ""
 *   insn=0x00000000004A2390 string=0x00000000004A2394 "=@"
 *   insn=0x00000000004A23A0 string=0x00000000004A23A4 ""
 *   insn=0x00000000004A23A8 string=0x00000000004A23AC "!"
 *   insn=0x00000000004A23B4 string=0x00000000004A23B8 "\t@"
 *   insn=0x00000000004A23C0 string=0x00000000004A23C4 ""
 *   insn=0x00000000004A23D4 string=0x00000000004A23D8 "\n"
 *   insn=0x00000000004A23D4 string=0x00000000004A23E4 "t"
 *   insn=0x00000000004A23D8 string=0x00000000004A23DC "J"
 *   insn=0x00000000004A23DC string=0x00000000004A23E0 "\n"
 *   insn=0x00000000004A23E4 string=0x00000000004A23E8 "i""
 *   insn=0x00000000004A23E8 string=0x00000000004A23EC "4"
 *   insn=0x00000000004A23EC string=0x00000000004A2430 "t"
 *   insn=0x00000000004A23F0 string=0x00000000004A23F4 ""
 *   insn=0x00000000004A2404 string=0x00000000004A2408 "\t@"
 *   insn=0x00000000004A2410 string=0x00000000004A2414 ""
 *   insn=0x00000000004A2424 string=0x00000000004A2428 "@"
 *   insn=0x00000000004A2434 string=0x00000000004A2438 "u"
 *   insn=0x00000000004A2450 string=0x00000000004A2454 "\t@"
 *   insn=0x00000000004A245C string=0x00000000004A2460 ""
 *   insn=0x00000000004A2470 string=0x00000000004A2474 "@"
 *   insn=0x00000000004A2478 string=0x00000000004A247C "U"
 *   insn=0x00000000004A247C string=0x00000000004A2480 "/"
 *   insn=0x00000000004A247C string=0x00000000004A24A4 "t"
 *   insn=0x00000000004A2488 string=0x00000000004A248C "@"
 *   insn=0x00000000004A2498 string=0x00000000004A249C "T"
 *   insn=0x00000000004A24A4 string=0x00000000004A24A8 "i"
 *   insn=0x00000000004A24AC string=0x00000000004A24B0 "51@"
 *   insn=0x00000000004A24BC string=0x00000000004A24C0 "@"
 *   insn=0x00000000004A24D8 string=0x00000000004A24DC "\t"
 *   insn=0x00000000004A24DC string=0x00000000004A24E0 ")"
 *   insn=0x00000000004A24E0 string=0x00000000004A24E4 "\t"
 *   insn=0x00000000004A24F4 string=0x00000000004A24F8 "3"
 *   insn=0x00000000004A24F8 string=0x00000000004A24FC "h"
 *   insn=0x00000000004A24FC string=0x00000000004A2500 ""
 *   insn=0x00000000004A2500 string=0x00000000004A2504 "h"
 *   insn=0x00000000004A2508 string=0x00000000004A250C "h"
 *   insn=0x00000000004A2510 string=0x00000000004A2514 "\t@"
 *   insn=0x00000000004A2518 string=0x00000000004A251C "h\n@"
 *   insn=0x00000000004A251C string=0x00000000004A2520 ""
 *   insn=0x00000000004A2520 string=0x00000000004A2524 "h\n"
 *   insn=0x00000000004A2528 string=0x00000000004A252C "h"
 *   insn=0x00000000004A2530 string=0x00000000004A2534 "@"
 *   insn=0x00000000004A2548 string=0x00000000004A2580 "TO"
 *   insn=0x00000000004A2568 string=0x00000000004A256C "@"
 *   insn=0x00000000004A2574 string=0x00000000004A2578 ""
 *   insn=0x00000000004A2580 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A258C string=0x00000000004A2590 ""
 *   insn=0x00000000004A2594 string=0x00000000004A2598 "!"
 *   insn=0x00000000004A259C string=0x00000000004A25A0 "\t@"
 *   insn=0x00000000004A25AC string=0x00000000004A25B0 ""
 *   insn=0x00000000004A25B4 string=0x00000000004A25B8 "!"
 *   insn=0x00000000004A25BC string=0x00000000004A25C0 "@"
 *   insn=0x00000000004A25D4 string=0x00000000004A25D8 "4"
 *   insn=0x00000000004A25DC string=0x00000000004A25E0 ""
 *   insn=0x00000000004A25EC string=0x00000000004A25F0 "\t@"
 *   insn=0x00000000004A25FC string=0x00000000004A2600 ""
 *   insn=0x00000000004A260C string=0x00000000004A2610 "@"
 *   insn=0x00000000004A2620 string=0x00000000004A2624 "J"
 *   insn=0x00000000004A2640 string=0x00000000004A2644 "h"
 *   insn=0x00000000004A2644 string=0x00000000004A2648 "v"
 *   insn=0x00000000004A2648 string=0x00000000004A264C ""
 *   insn=0x00000000004A264C string=0x00000000004A2650 "\t"
 *   insn=0x00000000004A2658 string=0x00000000004A265C "\t@"
 *   insn=0x00000000004A2658 string=0x00000000004A2688 "`"
 *   insn=0x00000000004A265C string=0x00000000004A2660 "\t"
 *   insn=0x00000000004A2660 string=0x00000000004A2664 "!5G"
 *   insn=0x00000000004A2660 string=0x0000000000583734 "o"
 *   insn=0x00000000004A2664 string=0x00000000004A2668 "\t"
 *   insn=0x00000000004A2674 string=0x00000000004A2678 ""
 *   insn=0x00000000004A2680 string=0x00000000004A2684 "\t"
 *   insn=0x00000000004A268C string=0x00000000004A2690 ""
 *   insn=0x00000000004A2690 string=0x00000000004A2694 " "
 *   insn=0x00000000004A2694 string=0x00000000004A2698 "%@"
 *   insn=0x00000000004A26A0 string=0x00000000004A26A4 " "
 *   insn=0x00000000004A26A8 string=0x00000000004A26AC "`"
 *   insn=0x00000000004A26AC string=0x00000000004A26B0 "`"
 *   insn=0x00000000004A26B0 string=0x00000000004A26B4 " "
 *   insn=0x00000000004A26B0 string=0x00000000004A26BC ""
 *   insn=0x00000000004A26B8 string=0x00000000001F8550 "0'"
 *   insn=0x00000000004A26BC string=0x00000000004A26C0 "`"
 *   insn=0x00000000004A26C0 string=0x00000000004A26C4 "\t5G"
 *   insn=0x00000000004A26C8 string=0x00000000004A26CC "M"
 *   insn=0x00000000004A26D0 string=0x0000000000597158 "o"
 *   insn=0x00000000004A26D8 string=0x00000000004A26DC "`"
 *   insn=0x00000000004A26E8 string=0x00000000004A26EC "h"
 *   insn=0x00000000004A26FC string=0x00000000004A2798 "h"
 *   insn=0x00000000004A2700 string=0x00000000004A2704 ""
 *   insn=0x00000000004A2704 string=0x00000000004A2708 "H"
 *   insn=0x00000000004A2708 string=0x00000000004A2770 "h"
 *   insn=0x00000000004A271C string=0x00000000004A2720 "5"
 *   insn=0x00000000004A2724 string=0x00000000004A2728 ""
 *   insn=0x00000000004A2738 string=0x00000000004A273C "\t@"
 *   insn=0x00000000004A2744 string=0x00000000004A2748 ""
 *   insn=0x00000000004A2758 string=0x00000000004A275C "@"
 *   insn=0x00000000004A2768 string=0x00000000004A276C ""
 *   insn=0x00000000004A2768 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004A2770 string=0x00000000004A2774 "\t"
 *   insn=0x00000000004A2778 string=0x00000000004A277C ""
 *   insn=0x00000000004A277C string=0x00000000004A2780 "(%@"
 *   insn=0x00000000004A2790 string=0x00000000004A2794 "a"
 *   insn=0x00000000004A279C string=0x00000000004A27A0 "`"
 *   insn=0x00000000004A279C string=0x00000000004A27B4 "`"
 *   insn=0x00000000004A27A4 string=0x00000000004A27A8 "l"
 *   insn=0x00000000004A27A8 string=0x00000000004A27AC "h"
 *   insn=0x00000000004A27B0 string=0x00000000004A27EC ""
 *   insn=0x00000000004A27C0 string=0x00000000004A27C4 "  "
 *   insn=0x00000000004A27C4 string=0x00000000004A27C8 "`"
 *   insn=0x00000000004A27C8 string=0x00000000004A27CC "E"
 *   insn=0x00000000004A27EC string=0x00000000004A27F0 "`"
 *   insn=0x00000000004A27F4 string=0x00000000004A27F8 "b"
 *   insn=0x00000000004A27FC string=0x00000000004A2800 "!("
 *   insn=0x00000000004A2800 string=0x00000000004A2804 "A(!"
 *   insn=0x00000000004A2804 string=0x00000000004A2808 "   "
 *   insn=0x00000000004A2808 string=0x00000000004A280C "a"
 *   insn=0x00000000004A280C string=0x00000000004A2810 "-"
 *   insn=0x00000000004A2810 string=0x00000000004A2814 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIWindow::SetRootViewController(__int64 result, __int64 *a2)
{
  _QWORD *v2; // x19
  _QWORD *v4; // x21
  __int64 v5; // x23
  _QWORD *v6; // x21
  __int64 v7; // x8
  _QWORD *v8; // x21
  __int64 v9; // x0
  _QWORD *v10; // x21
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x9
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x8
  _QWORD *v18; // x20
  __int64 v19; // x21
  _QWORD *v20; // x20
  __int64 v21; // x8
  _QWORD *v22; // x20
  __int64 v23; // x8
  __int64 (__fastcall *v24)(_QWORD *, __int64 *); // x21
  _QWORD *v25; // x8
  _QWORD *v26; // x19
  __int64 v27; // x8
  __int64 v28; // x8
  __int64 v29; // [xsp+58h] [xbp-48h] BYREF
  _QWORD *v30; // [xsp+60h] [xbp-40h]
  __int64 v31; // [xsp+68h] [xbp-38h]

  v2 = (_QWORD *)result;
  v31 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD **)(result + 256);
  if ( !v4 )
    goto LABEL_17;
  v5 = v4[3];
  if ( v5 )
  {
    v6 = (_QWORD *)v4[4];
    if ( !v6 )
      goto LABEL_9;
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*v4 + 24LL))(*(_QWORD *)(result + 256));
    v5 = v4[3];
    v6 = (_QWORD *)v4[4];
    if ( !v6 )
      goto LABEL_9;
  }
  if ( !v6[1] )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
    v7 = v6[2] - 1LL;
    v6[2] = v7;
    if ( !v7 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
      if ( !v5 )
        goto LABEL_17;
      goto LABEL_10;
    }
  }
LABEL_9:
  if ( !v5 )
    goto LABEL_17;
LABEL_10:
  v8 = (_QWORD *)v2[32];
  v9 = v8[3];
  if ( !v9 )
  {
    (*(void (__fastcall **)(_QWORD))(*v8 + 24LL))(v2[32]);
    v9 = v8[3];
  }
  v10 = (_QWORD *)v8[4];
  if ( v10 )
    ++v10[1];
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 120LL))(v9);
  if ( v10 )
  {
    v11 = v10[1] - 1LL;
    v10[1] = v11;
    if ( !v11 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v12 = v10[2] - 1LL;
      v10[2] = v12;
      if ( !v12 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
        v14 = *a2;
        v13 = a2[1];
        if ( !v13 )
          goto LABEL_19;
        goto LABEL_18;
      }
    }
  }
LABEL_17:
  v14 = *a2;
  v13 = a2[1];
  if ( v13 )
LABEL_18:
    ++*(_QWORD *)(v13 + 8);
LABEL_19:
  v15 = (_QWORD *)v2[33];
  v2[32] = v14;
  v2[33] = v13;
  if ( v15 )
  {
    v16 = v15[1] - 1LL;
    v15[1] = v16;
    if ( !v16 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      v17 = v15[2] - 1LL;
      v15[2] = v17;
      if ( !v17 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
    }
  }
  v18 = (_QWORD *)v2[32];
  v19 = v18[3];
  if ( v19 )
  {
    v20 = (_QWORD *)v18[4];
    if ( !v20 )
      goto LABEL_30;
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*v18 + 24LL))(v2[32]);
    v19 = v18[3];
    v20 = (_QWORD *)v18[4];
    if ( !v20 )
      goto LABEL_30;
  }
  if ( v20[1]
    || (result = (*(__int64 (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20), v21 = v20[2] - 1LL, (v20[2] = v21) != 0) )
  {
LABEL_30:
    if ( !v19 )
      return result;
    goto LABEL_31;
  }
  result = (*(__int64 (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
  if ( !v19 )
    return result;
LABEL_31:
  v22 = (_QWORD *)v2[32];
  v23 = v22[3];
  v24 = *(__int64 (__fastcall **)(_QWORD *, __int64 *))(*v2 + 96LL);
  if ( !v23 )
  {
    (*(void (__fastcall **)(_QWORD))(*v22 + 24LL))(v2[32]);
    v23 = v22[3];
  }
  v29 = v23;
  v25 = (_QWORD *)v22[4];
  v30 = v25;
  if ( v25 )
    ++v25[1];
  result = v24(v2, &v29);
  v26 = v30;
  if ( v30 )
  {
    v27 = v30[1] - 1LL;
    v30[1] = v27;
    if ( !v27 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
      v28 = v26[2] - 1LL;
      v26[2] = v28;
      if ( !v28 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
    }
  }
  return result;
}

