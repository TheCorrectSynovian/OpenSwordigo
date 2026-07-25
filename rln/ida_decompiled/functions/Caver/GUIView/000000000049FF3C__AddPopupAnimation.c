/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049FF3C
 * Mangled: _ZN5Caver7GUIView17AddPopupAnimationEv
 * Demangled: Caver::GUIView::AddPopupAnimation(void)
 *
 * Callers: 1
 *   0x00000000001F8600  Caver::GUIView::AddPopupAnimation(void)
 *
 * Callees: 13
 *   0x00000000001F4B70  Caver::GUIAnimation::GUIAnimation(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8910  Caver::GUIPropertyValue::ValueWithVector2(Caver::Vector2 const&)
 *   0x00000000001F9630  Caver::GUIAnimation::Update(float)
 *   0x00000000001FABF0  boost::detail::shared_count::shared_count<Caver::GUIAnimation>(Caver::GUIAnimation *)
 *   0x00000000001FB0E0  Caver::GUIAnimationCurve::GUIAnimationCurve(Caver::Vector2 const&,Caver::Vector2 const&)
 *   0x0000000000200DB0  Caver::GUIWindow::PresentPopoverViewFromRectangle(boost::shared_ptr<Caver::GUIView> const&,Caver::Rectangle const&,uint)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000052A9AC  sub_52A9AC
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 98
 *   insn=0x000000000049FF50 string=0x000000000049FF54 "V"
 *   insn=0x000000000049FF6C string=0x000000000049FF70 " "
 *   insn=0x000000000049FF78 string=0x000000000049FF7C "5"
 *   insn=0x000000000049FF80 string=0x000000000049FF84 ""
 *   insn=0x000000000049FF94 string=0x000000000049FF98 "\t@"
 *   insn=0x000000000049FFA0 string=0x000000000049FFA4 ""
 *   insn=0x000000000049FFB4 string=0x000000000049FFB8 "@"
 *   insn=0x000000000049FFC4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000049FFCC string=0x000000000049FFD0 "!"
 *   insn=0x000000000049FFD4 string=0x000000000049FFD8 "w^"
 *   insn=0x000000000049FFDC string=0x00000000001F55E0 "P'"
 *   insn=0x000000000049FFE4 string=0x00000000001F4B70 "P'"
 *   insn=0x000000000049FFF8 string=0x00000000001FABF0 "0'"
 *   insn=0x00000000004A0004 string=0x00000000004A0008 "R"
 *   insn=0x00000000004A0018 string=0x00000000004A001C " "
 *   insn=0x00000000004A002C string=0x00000000004A0030 "8b"
 *   insn=0x00000000004A0030 string=0x00000000001F8910 "0'"
 *   insn=0x00000000004A0040 string=0x00000000004A0044 "\n"
 *   insn=0x00000000004A0044 string=0x00000000004A0048 "J"
 *   insn=0x00000000004A0048 string=0x00000000004A004C "\n"
 *   insn=0x00000000004A0054 string=0x00000000004A0058 "4"
 *   insn=0x00000000004A005C string=0x00000000004A0060 ""
 *   insn=0x00000000004A006C string=0x00000000004A0070 "\t@"
 *   insn=0x00000000004A007C string=0x00000000004A0080 ""
 *   insn=0x00000000004A008C string=0x00000000004A0090 "@"
 *   insn=0x00000000004A009C string=0x00000000004A00A0 "4"
 *   insn=0x00000000004A00A4 string=0x00000000004A00A8 ""
 *   insn=0x00000000004A00B4 string=0x00000000004A00B8 "\t@"
 *   insn=0x00000000004A00C4 string=0x00000000004A00C8 ""
 *   insn=0x00000000004A00D4 string=0x00000000004A00D8 "@"
 *   insn=0x00000000004A0108 string=0x00000000004A010C "\n"
 *   insn=0x00000000004A010C string=0x00000000004A0110 "J"
 *   insn=0x00000000004A0110 string=0x00000000004A0114 "\n"
 *   insn=0x00000000004A011C string=0x00000000004A0120 "4"
 *   insn=0x00000000004A0124 string=0x00000000004A0128 ""
 *   insn=0x00000000004A0134 string=0x00000000004A0138 "\t@"
 *   insn=0x00000000004A0144 string=0x00000000004A0148 ""
 *   insn=0x00000000004A0154 string=0x00000000004A0158 "@"
 *   insn=0x00000000004A0164 string=0x00000000004A0168 "4"
 *   insn=0x00000000004A016C string=0x00000000004A0170 ""
 *   insn=0x00000000004A017C string=0x00000000004A0180 "\t@"
 *   insn=0x00000000004A018C string=0x00000000004A0190 ""
 *   insn=0x00000000004A019C string=0x00000000004A01A0 "@"
 *   insn=0x00000000004A01B0 string=0x0000000000592060 "333?"
 *   insn=0x00000000004A01B4 string=0x00000000004A01B8 "!1@"
 *   insn=0x00000000004A01D4 string=0x00000000001FB0E0 "0'"
 *   insn=0x00000000004A01D8 string=0x00000000004A01DC "I3"
 *   insn=0x00000000004A01F0 string=0x00000000004A01F4 "\t]"
 *   insn=0x00000000004A0200 string=0x00000000004A0204 "a"
 *   insn=0x00000000004A0204 string=0x00000000004A0208 "\t "
 *   insn=0x00000000004A020C string=0x00000000004A0210 "\t"
 *   insn=0x00000000004A0210 string=0x00000000004A0214 ")"
 *   insn=0x00000000004A0214 string=0x00000000004A0218 "\t"
 *   insn=0x00000000004A021C string=0x000000000052A9AC """
 *   insn=0x00000000004A0228 string=0x00000000001F9630 "0'"
 *   insn=0x00000000004A022C string=0x00000000004A0230 "3"
 *   insn=0x00000000004A0230 string=0x00000000004A0234 "h"
 *   insn=0x00000000004A0234 string=0x00000000004A0238 ""
 *   insn=0x00000000004A0238 string=0x00000000004A023C "h"
 *   insn=0x00000000004A0240 string=0x00000000004A0244 "h"
 *   insn=0x00000000004A0248 string=0x00000000004A024C "\t@"
 *   insn=0x00000000004A0250 string=0x00000000004A0254 "h\n@"
 *   insn=0x00000000004A0254 string=0x00000000004A0258 ""
 *   insn=0x00000000004A0258 string=0x00000000004A025C "h\n"
 *   insn=0x00000000004A0260 string=0x00000000004A0264 "h"
 *   insn=0x00000000004A0268 string=0x00000000004A026C "@"
 *   insn=0x00000000004A0280 string=0x00000000004A029C "X"
 *   insn=0x00000000004A029C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A02AC string=0x00000000004A02B0 ""
 *   insn=0x00000000004A02B4 string=0x00000000004A02B8 "a"
 *   insn=0x00000000004A02BC string=0x00000000004A02C0 "\t@"
 *   insn=0x00000000004A02CC string=0x00000000004A02D0 ""
 *   insn=0x00000000004A02D4 string=0x00000000004A02D8 "a"
 *   insn=0x00000000004A02DC string=0x00000000004A02E0 "@"
 *   insn=0x00000000004A02F4 string=0x00000000004A02F8 "t"
 *   insn=0x00000000004A02FC string=0x00000000004A0300 ""
 *   insn=0x00000000004A030C string=0x00000000004A0310 "\t@"
 *   insn=0x00000000004A031C string=0x00000000004A0320 ""
 *   insn=0x00000000004A032C string=0x00000000004A0330 "@"
 *   insn=0x00000000004A0338 string=0x00000000004A033C "\n"
 *   insn=0x00000000004A0350 string=0x00000000004A0354 "\"
 *   insn=0x00000000004A0364 string=0x00000000004A0368 "4"
 *   insn=0x00000000004A036C string=0x00000000004A0370 ""
 *   insn=0x00000000004A037C string=0x00000000004A0380 "\t@"
 *   insn=0x00000000004A038C string=0x00000000004A0390 ""
 *   insn=0x00000000004A039C string=0x00000000004A03A0 "@"
 *   insn=0x00000000004A03AC string=0x00000000004A03B0 "E"
 *   insn=0x00000000004A03D0 string=0x00000000004A03D4 "X"
 *   insn=0x00000000004A03D4 string=0x00000000004A03D8 ""
 *   insn=0x00000000004A03F0 string=0x00000000004A03F4 "y@"
 *   insn=0x00000000004A0408 string=0x00000000004A040C ")"
 *   insn=0x00000000004A0410 string=0x00000000004A0414 "("
 *   insn=0x00000000004A0420 string=0x00000000004A0424 "\n"
 *   insn=0x00000000004A0428 string=0x00000000004A042C "@"
 *   insn=0x00000000004A0434 string=0x00000000004A0438 "7"
 *   insn=0x00000000004A043C string=0x00000000004A0440 ")"
 *   insn=0x00000000004A0460 string=0x00000000004A0464 "S"
 *   insn=0x00000000004A0464 string=0x00000000004A0468 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIView::AddPopupAnimation(Caver::GUIView *this)
{
  char *v2; // x20
  char *v3; // x23
  _QWORD *v4; // x21
  char *v5; // x24
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  __int64 v10; // x8
  __int64 v11; // x9
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x8
  Caver::GUIAnimation *v18; // x21
  __int64 v24; // x8
  __int64 v25; // x9
  _QWORD *v26; // x20
  __int64 v27; // x8
  __int64 v28; // x8
  _QWORD *v29; // x20
  __int64 v30; // x8
  __int64 v31; // x8
  Caver::GUIAnimation *v32; // x20
  __int64 v33; // x0
  _QWORD *v34; // x8
  _QWORD *v35; // x19
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // [xsp+78h] [xbp-78h] BYREF
  __int128 v39; // [xsp+80h] [xbp-70h] BYREF
  __int128 v40; // [xsp+90h] [xbp-60h]
  unsigned __int64 v41; // [xsp+A0h] [xbp-50h] BYREF
  Caver::GUIAnimation *v42; // [xsp+A8h] [xbp-48h]
  _QWORD *v43; // [xsp+B0h] [xbp-40h]
  __int64 v44; // [xsp+B8h] [xbp-38h]

  v44 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = (char *)this + 96;
  v2 = (char *)*((_QWORD *)this + 12);
  if ( v2 != (char *)this + 96 )
  {
    do
    {
      v4 = (_QWORD *)*((_QWORD *)v2 + 3);
      v5 = *(char **)v2;
      if ( v4 )
      {
        v6 = v4[1] - 1LL;
        v4[1] = v6;
        if ( !v6 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
          v7 = v4[2] - 1LL;
          v4[2] = v7;
          if ( !v7 )
            (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
        }
      }
      operator delete(v2);
      v2 = v5;
    }
    while ( v5 != v3 );
  }
  *((_QWORD *)this + 12) = v3;
  *((_QWORD *)this + 13) = v3;
  v8 = operator new(0xC0u);
  Caver::GUIAnimation::GUIAnimation((Caver::GUIAnimation *)v8);
  v42 = (Caver::GUIAnimation *)v8;
  boost::detail::shared_count::shared_count<Caver::GUIAnimation>();
  boost::detail::sp_enable_shared_from_this();
  v9 = v8;
  *(_DWORD *)(v8 + 48) = 1;
  v41 = vdup_n_s32(0x3D4CCCCDu).n64_u64[0];
  Caver::GUIPropertyValue::ValueWithVector2();
  *(_DWORD *)(v8 + 112) = v39;
  v11 = *((_QWORD *)&v39 + 1);
  v10 = v40;
  if ( (_QWORD)v40 )
    ++*(_QWORD *)(v40 + 8);
  v12 = *(_QWORD **)(v8 + 128);
  *(_QWORD *)(v9 + 120) = v11;
  *(_QWORD *)(v9 + 128) = v10;
  if ( v12 )
  {
    v13 = v12[1] - 1LL;
    v12[1] = v13;
    if ( !v13 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v14 = v12[2] - 1LL;
      v12[2] = v14;
      if ( !v14 )
        (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  v15 = (_QWORD *)v40;
  if ( (_QWORD)v40 )
  {
    v16 = *(_QWORD *)(v40 + 8) - 1LL;
    *(_QWORD *)(v40 + 8) = v16;
    if ( !v16 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      v17 = v15[2] - 1LL;
      v15[2] = v17;
      if ( !v17 )
        (*(void (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
    }
  }
  v18 = v42;
  __asm { FMOV            V0.2S, #1.0 }
  v41 = _D0;
  Caver::GUIPropertyValue::ValueWithVector2();
  *((_DWORD *)v42 + 34) = v39;
  v25 = *((_QWORD *)&v39 + 1);
  v24 = v40;
  if ( (_QWORD)v40 )
    ++*(_QWORD *)(v40 + 8);
  v26 = (_QWORD *)*((_QWORD *)v18 + 19);
  *((_QWORD *)v18 + 18) = v25;
  *((_QWORD *)v18 + 19) = v24;
  if ( v26 )
  {
    v27 = v26[1] - 1LL;
    v26[1] = v27;
    if ( !v27 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
      v28 = v26[2] - 1LL;
      v26[2] = v28;
      if ( !v28 )
        (*(void (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
    }
  }
  v29 = (_QWORD *)v40;
  if ( (_QWORD)v40 )
  {
    v30 = *(_QWORD *)(v40 + 8) - 1LL;
    *(_QWORD *)(v40 + 8) = v30;
    if ( !v30 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v29 + 16LL))(v29);
      v31 = v29[2] - 1LL;
      v29[2] = v31;
      if ( !v31 )
        (*(void (__fastcall **)(_QWORD *))(*v29 + 24LL))(v29);
    }
  }
  v32 = v42;
  v41 = 0x3FD9999A3EE147AELL;
  v38 = 0x3F8000003F333333LL;
  Caver::GUIAnimationCurve::GUIAnimationCurve(
    (Caver::GUIAnimationCurve *)&v39,
    (const Caver::Vector2 *)&v41,
    (const Caver::Vector2 *)&v38);
  *(_OWORD *)((char *)v32 + 52) = v39;
  *(_OWORD *)((char *)v32 + 68) = v40;
  *((_DWORD *)v42 + 23) = 1050253722;
  v33 = operator new(0x20u);
  v34 = v43;
  *(_QWORD *)(v33 + 16) = v42;
  *(_QWORD *)(v33 + 24) = v34;
  if ( v34 )
    ++v34[1];
  sub_52A9AC(v33, (char *)this + 96);
  Caver::GUIAnimation::Update(v42, 0.0);
  v35 = v43;
  if ( v43 )
  {
    v36 = v43[1] - 1LL;
    v43[1] = v36;
    if ( !v36 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
      v37 = v35[2] - 1LL;
      v35[2] = v37;
      if ( !v37 )
        (*(void (__fastcall **)(_QWORD *))(*v35 + 24LL))(v35);
    }
  }
}

