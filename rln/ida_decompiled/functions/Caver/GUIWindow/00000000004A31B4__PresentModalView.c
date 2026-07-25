/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A31B4
 * Mangled: _ZN5Caver9GUIWindow16PresentModalViewERKN5boost10shared_ptrINS_7GUIViewEEEb
 * Demangled: Caver::GUIWindow::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *
 * Callers: 1
 *   0x00000000002013C0  Caver::GUIWindow::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *
 * Callees: 16
 *   0x00000000001F3E80  Caver::GUIWindow::CancelTouch(Caver::FWTouch const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB060  boost::shared_ptr<Caver::GUIWindow>::shared_ptr<Caver::GUIWindow>(Caver::GUIWindow *)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FD770  Caver::GUIWindow::CancelAllTouches(void)
 *   0x00000000001FD9E0  Caver::FWTouch::FWTouch(Caver::FWTouch const&)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x0000000000200520  std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FWTouch*,std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>>,Caver::FWTouch const&)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004A3540  Caver::GUIWindow::DismissModalView(Caver::GUIView *)
 *   0x000000000052A9AC  sub_52A9AC
 *   0x000000000054C640  sub_54C640
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 72
 *   insn=0x00000000004A31C4 string=0x00000000004A31C8 "V"
 *   insn=0x00000000004A31DC string=0x00000000004A31E0 "di"
 *   insn=0x00000000004A31E0 string=0x00000000004A31E4 "U"
 *   insn=0x00000000004A31E0 string=0x00000000001FD770 "0'"
 *   insn=0x00000000004A31E8 string=0x00000000004A31EC "`"
 *   insn=0x00000000004A3208 string=0x00000000004A320C "\tj"
 *   insn=0x00000000004A320C string=0x00000000001FDA30 "0'"
 *   insn=0x00000000004A321C string=0x00000000004A3220 ""
 *   insn=0x00000000004A3228 string=0x00000000001FB170 "0'"
 *   insn=0x00000000004A3230 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004A3234 string=0x00000000004A3238 "B"
 *   insn=0x00000000004A3238 string=0x00000000004A323C ""
 *   insn=0x00000000004A323C string=0x00000000004A3240 "eD"
 *   insn=0x00000000004A3244 string=0x00000000004A3248 " "
 *   insn=0x00000000004A324C string=0x00000000004A3250 "\t!"
 *   insn=0x00000000004A3250 string=0x00000000004A3254 "\nA"
 *   insn=0x00000000004A3254 string=0x00000000004A3258 "!"
 *   insn=0x00000000004A3258 string=0x00000000004A325C ""
 *   insn=0x00000000004A327C string=0x00000000004A3280 "!"
 *   insn=0x00000000004A32A8 string=0x00000000004A32AC "!"
 *   insn=0x00000000004A32D4 string=0x00000000004A32D8 " "
 *   insn=0x00000000004A32F0 string=0x00000000004A32F4 "!"
 *   insn=0x00000000004A32F8 string=0x00000000004A32FC "Y_"
 *   insn=0x00000000004A32FC string=0x00000000001FB060 "0'"
 *   insn=0x00000000004A3300 string=0x00000000004A3304 "a"
 *   insn=0x00000000004A3308 string=0x00000000004A330C "`"
 *   insn=0x00000000004A3310 string=0x00000000004A3314 "`"
 *   insn=0x00000000004A3320 string=0x00000000004A3324 ""
 *   insn=0x00000000004A3324 string=0x00000000004A3328 "1@"
 *   insn=0x00000000004A333C string=0x00000000004A3340 "a"
 *   insn=0x00000000004A3340 string=0x00000000004A3344 "\t "
 *   insn=0x00000000004A3348 string=0x00000000004A334C "\t"
 *   insn=0x00000000004A334C string=0x00000000004A3350 ")"
 *   insn=0x00000000004A3350 string=0x00000000004A3354 "\t"
 *   insn=0x00000000004A3358 string=0x000000000052A9AC """
 *   insn=0x00000000004A335C string=0x00000000004A3360 "3"
 *   insn=0x00000000004A3360 string=0x00000000004A3364 "h"
 *   insn=0x00000000004A3364 string=0x00000000004A3368 ""
 *   insn=0x00000000004A3368 string=0x00000000004A336C "h"
 *   insn=0x00000000004A3370 string=0x00000000004A3374 "h"
 *   insn=0x00000000004A3378 string=0x00000000004A337C "\t@"
 *   insn=0x00000000004A3380 string=0x00000000004A3384 "h\n@"
 *   insn=0x00000000004A3384 string=0x00000000004A3388 ""
 *   insn=0x00000000004A3388 string=0x00000000004A338C "h\n"
 *   insn=0x00000000004A3390 string=0x00000000004A3394 "h"
 *   insn=0x00000000004A3398 string=0x00000000004A339C "@"
 *   insn=0x00000000004A33C8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A33D4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004A33D8 string=0x00000000004A33DC ":y"
 *   insn=0x00000000004A33E4 string=0x00000000004A33E8 "4"
 *   insn=0x00000000004A33EC string=0x00000000004A33F0 ""
 *   insn=0x00000000004A33FC string=0x00000000004A3400 "\t@"
 *   insn=0x00000000004A340C string=0x00000000004A3410 ""
 *   insn=0x00000000004A341C string=0x00000000004A3420 "@"
 *   insn=0x00000000004A342C string=0x00000000004A3430 "%y"
 *   insn=0x00000000004A3448 string=0x00000000004A344C "V"
 *   insn=0x00000000004A3454 string=0x00000000004A3458 "ub"
 *   insn=0x00000000004A3464 string=0x00000000004A3468 "t"
 *   insn=0x00000000004A346C string=0x00000000004A3470 "`"
 *   insn=0x00000000004A3490 string=0x00000000004A3494 "Si"
 *   insn=0x00000000004A3494 string=0x00000000001FD9E0 "0'"
 *   insn=0x00000000004A3498 string=0x00000000004A349C ""
 *   insn=0x00000000004A34B4 string=0x00000000004A34B8 "b"
 *   insn=0x00000000004A34D0 string=0x00000000004A34F0 "t"
 *   insn=0x00000000004A34D8 string=0x00000000004A34DC "iB"
 *   insn=0x00000000004A34DC string=0x00000000001F3E80 "P'"
 *   insn=0x00000000004A34E4 string=0x00000000004A34E8 "a"
 *   insn=0x00000000004A34F4 string=0x00000000004A34F8 "nO"
 *   insn=0x00000000004A3508 string=0x00000000004A3520 "lK"
 *   insn=0x00000000004A352C string=0x00000000004A3530 "@"
 *   insn=0x00000000004A3530 string=0x00000000004A3534 "_O"
 *   insn=0x00000000004A353C string=0x00000000004A3540 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIWindow::PresentModalView(__int64 a1, Caver::GUIView **a2, char a3)
{
  Caver::GUIView *v6; // x21
  _QWORD *v7; // x8
  __int64 v8; // x21
  __int128 v9; // q1
  Caver::GUIView *v10; // x0
  __int64 v11; // x0
  _QWORD *v12; // x8
  __int64 result; // x0
  _QWORD *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x8
  unsigned __int64 v17; // [xsp+58h] [xbp-48h] BYREF
  Caver::GUIView *v18; // [xsp+60h] [xbp-40h] BYREF
  Caver::GUIView *v19; // [xsp+68h] [xbp-38h] BYREF
  _QWORD *v20; // [xsp+70h] [xbp-30h]
  __int64 v21; // [xsp+78h] [xbp-28h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIWindow::CancelAllTouches((Caver::GUIWindow *)a1);
  if ( (a3 & 1) != 0 )
  {
    v6 = *a2;
    v17 = vmul_f32(
            vsub_f32(*(float32x2_t *)(a1 + 140), *(float32x2_t *)((char *)*a2 + 140)),
            (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    Caver::Vector2::Rounded((__int64 *)&v18, (Caver::Vector2 *)&v17);
    v7 = *(_QWORD **)((char *)*a2 + 140);
    v19 = v18;
    v20 = v7;
    Caver::GUIView::SetFrame(v6, (const Caver::Rectangle *)&v19);
  }
  v8 = operator new(0x228u);
  Caver::GUIView::GUIView((Caver::GUIView *)v8);
  *(_QWORD *)&v9 = &off_6D6B58;
  *((_QWORD *)&v9 + 1) = off_6D6B88;
  *(_OWORD *)(v8 + 240) = v9;
  *(_QWORD *)v8 = off_6D69E0;
  *(_OWORD *)(v8 + 312) = 0u;
  *(_OWORD *)(v8 + 296) = 0u;
  *(_QWORD *)(v8 + 312) = v8 + 296;
  *(_QWORD *)(v8 + 320) = v8 + 296;
  *(_QWORD *)(v8 + 328) = 0;
  *(_OWORD *)(v8 + 352) = 0u;
  *(_OWORD *)(v8 + 368) = 0u;
  *(_QWORD *)(v8 + 360) = v8 + 344;
  *(_QWORD *)(v8 + 368) = v8 + 344;
  *(_OWORD *)(v8 + 256) = 0u;
  *(_OWORD *)(v8 + 272) = 0u;
  *(_QWORD *)(v8 + 344) = 0;
  *(_OWORD *)(v8 + 408) = 0u;
  *(_OWORD *)(v8 + 392) = 0u;
  *(_QWORD *)(v8 + 408) = v8 + 392;
  *(_QWORD *)(v8 + 416) = v8 + 392;
  *(_QWORD *)(v8 + 432) = v8 + 432;
  *(_QWORD *)(v8 + 440) = v8 + 432;
  *(_QWORD *)(v8 + 448) = v8 + 448;
  *(_QWORD *)(v8 + 456) = v8 + 448;
  *(_QWORD *)(v8 + 472) = 0x3F4CCCCD00000000LL;
  *(_QWORD *)(v8 + 424) = 0;
  *(_QWORD *)(v8 + 464) = 0;
  *(_QWORD *)(v8 + 508) = 0;
  *(_OWORD *)(v8 + 488) = 0u;
  *(_BYTE *)(v8 + 504) = 0;
  *(_QWORD *)(v8 + 536) = 0;
  *(_OWORD *)(v8 + 520) = 0u;
  *(_BYTE *)(v8 + 544) = 1;
  boost::shared_ptr<Caver::GUIWindow>::shared_ptr<Caver::GUIWindow>();
  v10 = v19;
  *((_QWORD *)v19 + 58) = a1;
  *((_OWORD *)v10 + 3) = *(_OWORD *)(a1 + 48);
  *((_OWORD *)v10 + 4) = *(_OWORD *)(a1 + 64);
  Caver::GUIView::SetFrame(v10, (const Caver::Rectangle *)(a1 + 132));
  (*(void (__fastcall **)(Caver::GUIView *, Caver::GUIView **))(*(_QWORD *)v19 + 96LL))(v19, a2);
  v11 = operator new(0x20u);
  v12 = v20;
  *(_QWORD *)(v11 + 16) = v19;
  *(_QWORD *)(v11 + 24) = v12;
  if ( v12 )
    ++v12[1];
  result = sub_52A9AC(v11, a1 + 448);
  v14 = v20;
  if ( v20 )
  {
    v15 = v20[1] - 1LL;
    v20[1] = v15;
    if ( !v15 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v16 = v14[2] - 1LL;
      v14[2] = v16;
      if ( !v16 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
  }
  return result;
}

