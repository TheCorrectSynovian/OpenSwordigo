/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042B654
 * Mangled: _ZN5Caver11NewMenuView20PresentFromRectangleERKNS_9RectangleE
 * Demangled: Caver::NewMenuView::PresentFromRectangle(Caver::Rectangle const&)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F4B70  Caver::GUIAnimation::GUIAnimation(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8910  Caver::GUIPropertyValue::ValueWithVector2(Caver::Vector2 const&)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001FABF0  boost::detail::shared_count::shared_count<Caver::GUIAnimation>(Caver::GUIAnimation *)
 *   0x00000000001FB0E0  Caver::GUIAnimationCurve::GUIAnimationCurve(Caver::Vector2 const&,Caver::Vector2 const&)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 89
 *   insn=0x000000000042B680 string=0x000000000042B684 "W"
 *   insn=0x000000000042B694 string=0x000000000042B698 "h"
 *   insn=0x000000000042B698 string=0x000000000042B69C "?"
 *   insn=0x000000000042B69C string=0x000000000042B6A0 "!"
 *   insn=0x000000000042B6A0 string=0x000000000042B6E4 "*"
 *   insn=0x000000000042B6B0 string=0x000000000042B9C4 "C*"
 *   insn=0x000000000042B6E4 string=0x000000000042B6E8 "+"
 *   insn=0x000000000042B6E8 string=0x0000000000592060 "333?"
 *   insn=0x000000000042B6EC string=0x000000000042B6F0 "JIA"
 *   insn=0x000000000042B6F0 string=0x000000000042B6F4 "k1@"
 *   insn=0x000000000042B704 string=0x000000000042B708 ""
 *   insn=0x000000000042B708 string=0x000000000042B70C "\t"
 *   insn=0x000000000042B70C string=0x000000000042B710 "5!"
 *   insn=0x000000000042B714 string=0x000000000042B718 ""
 *   insn=0x000000000042B718 string=0x000000000042B71C ""
 *   insn=0x000000000042B724 string=0x000000000042B728 "9"
 *   insn=0x000000000042B728 string=0x000000000042B72C "."
 *   insn=0x000000000042B72C string=0x000000000042B730 ""
 *   insn=0x000000000042B73C string=0x000000000042B740 " "
 *   insn=0x000000000042B748 string=0x000000000042B74C " 8 "
 *   insn=0x000000000042B758 string=0x00000000001FB170 "0'"
 *   insn=0x000000000042B760 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000042B768 string=0x00000000001F4B70 "P'"
 *   insn=0x000000000042B778 string=0x00000000001FABF0 "0'"
 *   insn=0x000000000042B784 string=0x000000000042B788 "r\"
 *   insn=0x000000000042B79C string=0x000000000042B7A0 "\4"
 *   insn=0x000000000042B7A0 string=0x00000000001F8910 "0'"
 *   insn=0x000000000042B7B0 string=0x000000000042B7B4 "\n"
 *   insn=0x000000000042B7B4 string=0x000000000042B7B8 "J"
 *   insn=0x000000000042B7B8 string=0x000000000042B7BC "\n"
 *   insn=0x000000000042B7C4 string=0x000000000042B7C8 "6"
 *   insn=0x000000000042B7CC string=0x000000000042B7D0 ""
 *   insn=0x000000000042B7DC string=0x000000000042B7E0 "\t@"
 *   insn=0x000000000042B7EC string=0x000000000042B7F0 ""
 *   insn=0x000000000042B7FC string=0x000000000042B800 "@"
 *   insn=0x000000000042B80C string=0x000000000042B810 "6"
 *   insn=0x000000000042B814 string=0x000000000042B818 ""
 *   insn=0x000000000042B824 string=0x000000000042B828 "\t@"
 *   insn=0x000000000042B834 string=0x000000000042B838 ""
 *   insn=0x000000000042B844 string=0x000000000042B848 "@"
 *   insn=0x000000000042B860 string=0x000000000042B864 "+4"
 *   insn=0x000000000042B874 string=0x000000000042B878 "\n"
 *   insn=0x000000000042B878 string=0x000000000042B87C "J"
 *   insn=0x000000000042B87C string=0x000000000042B880 "\n"
 *   insn=0x000000000042B888 string=0x000000000042B88C "6"
 *   insn=0x000000000042B890 string=0x000000000042B894 ""
 *   insn=0x000000000042B8A0 string=0x000000000042B8A4 "\t@"
 *   insn=0x000000000042B8B0 string=0x000000000042B8B4 ""
 *   insn=0x000000000042B8C0 string=0x000000000042B8C4 "@"
 *   insn=0x000000000042B8D0 string=0x000000000042B8D4 "6"
 *   insn=0x000000000042B8D8 string=0x000000000042B8DC ""
 *   insn=0x000000000042B8E8 string=0x000000000042B8EC "\t@"
 *   insn=0x000000000042B8F8 string=0x000000000042B8FC ""
 *   insn=0x000000000042B908 string=0x000000000042B90C "@"
 *   insn=0x000000000042B930 string=0x00000000001FB0E0 "0'"
 *   insn=0x000000000042B948 string=0x000000000042B94C "]"
 *   insn=0x000000000042B950 string=0x000000000042B954 "h~@"
 *   insn=0x000000000042B95C string=0x000000000042B960 "44"
 *   insn=0x000000000042B960 string=0x00000000001F8A30 "0'"
 *   insn=0x000000000042B964 string=0x000000000042B968 "6"
 *   insn=0x000000000042B968 string=0x000000000042B9AC "h"
 *   insn=0x000000000042B96C string=0x000000000042B970 ""
 *   insn=0x000000000042B980 string=0x000000000042B984 "\t@"
 *   insn=0x000000000042B98C string=0x000000000042B990 ""
 *   insn=0x000000000042B9A0 string=0x000000000042B9A4 "@"
 *   insn=0x000000000042B9B0 string=0x000000000042B9B4 ")"
 *   insn=0x000000000042B9B4 string=0x000000000042B9B8 "?"
 *   insn=0x000000000042B9B8 string=0x000000000042B9BC "#"
 *   insn=0x000000000042B9BC string=0x000000000042B9C0 "9"
 *   insn=0x000000000042B9C4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000042B9D4 string=0x000000000042B9D8 ""
 *   insn=0x000000000042B9DC string=0x000000000042B9E0 "a"
 *   insn=0x000000000042B9E4 string=0x000000000042B9E8 "\t@"
 *   insn=0x000000000042B9F4 string=0x000000000042B9F8 ""
 *   insn=0x000000000042B9FC string=0x000000000042BA00 "a"
 *   insn=0x000000000042BA04 string=0x000000000042BA08 "@"
 *   insn=0x000000000042BA1C string=0x000000000042BA20 "t"
 *   insn=0x000000000042BA24 string=0x000000000042BA28 ""
 *   insn=0x000000000042BA34 string=0x000000000042BA38 "\t@"
 *   insn=0x000000000042BA44 string=0x000000000042BA48 ""
 *   insn=0x000000000042BA54 string=0x000000000042BA58 "@"
 *   insn=0x000000000042BA60 string=0x000000000042BA64 "\n"
 *   insn=0x000000000042BA78 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000042BA8C string=0x000000000042BA90 "4"
 *   insn=0x000000000042BA94 string=0x000000000042BA98 ""
 *   insn=0x000000000042BAA4 string=0x000000000042BAA8 "\t@"
 *   insn=0x000000000042BAB4 string=0x000000000042BAB8 ""
 *   insn=0x000000000042BAC4 string=0x000000000042BAC8 "@"
 *   insn=0x000000000042BAD4 string=0x000000000042BAD8 "{W"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::NewMenuView::PresentFromRectangle(__int64 this, const Caver::Rectangle *a2)
{
  __int64 v2; // x19
  __int64 v4; // x8
  __int64 v5; // x24
  unsigned __int64 v6; // x25
  float *v12; // x0
  float v13; // s1
  unsigned int v14; // w8
  float v15; // w9
  Caver::GUIAnimation *v16; // x22
  Caver::GUIAnimation *v17; // x28
  __int64 v18; // x8
  __int64 v19; // x9
  _QWORD *v20; // x22
  __int64 v21; // x8
  __int64 v22; // x8
  _QWORD *v23; // x22
  __int64 v24; // x8
  __int64 v25; // x8
  Caver::GUIAnimation *v26; // x28
  __int64 v27; // x8
  __int64 v28; // x9
  _QWORD *v29; // x22
  __int64 v30; // x8
  __int64 v31; // x8
  _QWORD *v32; // x22
  __int64 v33; // x8
  __int64 v34; // x8
  Caver::GUIAnimation *v35; // x22
  Caver::GUIAnimation *v36; // x8
  _QWORD *v37; // x22
  __int64 v38; // x8
  __int64 v39; // x8
  __int64 v40; // [xsp+8h] [xbp-D8h] BYREF
  __int128 v41; // [xsp+10h] [xbp-D0h] BYREF
  __int128 v42; // [xsp+20h] [xbp-C0h]
  __int64 v43; // [xsp+30h] [xbp-B0h] BYREF
  Caver::GUIAnimation *v44; // [xsp+38h] [xbp-A8h]
  _QWORD *v45; // [xsp+40h] [xbp-A0h]
  __int64 v46; // [xsp+48h] [xbp-98h]

  v2 = this;
  v46 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD *)(this + 248);
  if ( *(_QWORD *)(this + 256) != v4 )
  {
    v5 = 0;
    v6 = 0;
    __asm { FMOV            V13.2S, #1.0 }
    do
    {
      v12 = *(float **)(v4 + v5);
      v13 = *((float *)a2 + 1);
      ++v6;
      v14 = *((_DWORD *)v12 + 31);
      v15 = v12[32];
      *(float *)&v41 = *(float *)a2 + 12.0;
      *((float *)&v41 + 1) = v13 - (float)((float)(v15 + 6.0) * (float)v6);
      *((_QWORD *)&v41 + 1) = __PAIR64__(LODWORD(v15), v14);
      Caver::GUIView::SetFrame((Caver::GUIView *)v12, (const Caver::Rectangle *)&v41);
      v16 = (Caver::GUIAnimation *)operator new(0xC0u);
      Caver::GUIAnimation::GUIAnimation(v16);
      v44 = v16;
      boost::detail::shared_count::shared_count<Caver::GUIAnimation>();
      boost::detail::sp_enable_shared_from_this();
      v17 = v44;
      *((_DWORD *)v44 + 12) = 1;
      v43 = 0;
      Caver::GUIPropertyValue::ValueWithVector2();
      *((_DWORD *)v17 + 28) = v41;
      v19 = *((_QWORD *)&v41 + 1);
      v18 = v42;
      if ( (_QWORD)v42 )
        ++*(_QWORD *)(v42 + 8);
      v20 = (_QWORD *)*((_QWORD *)v17 + 16);
      *((_QWORD *)v17 + 15) = v19;
      *((_QWORD *)v17 + 16) = v18;
      if ( v20 )
      {
        v21 = v20[1] - 1LL;
        v20[1] = v21;
        if ( !v21 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
          v22 = v20[2] - 1LL;
          v20[2] = v22;
          if ( !v22 )
            (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
        }
      }
      v23 = (_QWORD *)v42;
      if ( (_QWORD)v42 )
      {
        v24 = *(_QWORD *)(v42 + 8) - 1LL;
        *(_QWORD *)(v42 + 8) = v24;
        if ( !v24 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
          v25 = v23[2] - 1LL;
          v23[2] = v25;
          if ( !v25 )
            (*(void (__fastcall **)(_QWORD *))(*v23 + 24LL))(v23);
        }
      }
      v26 = v44;
      v43 = _D13;
      Caver::GUIPropertyValue::ValueWithVector2();
      *((_DWORD *)v26 + 34) = v41;
      v28 = *((_QWORD *)&v41 + 1);
      v27 = v42;
      if ( (_QWORD)v42 )
        ++*(_QWORD *)(v42 + 8);
      v29 = (_QWORD *)*((_QWORD *)v26 + 19);
      *((_QWORD *)v26 + 18) = v28;
      *((_QWORD *)v26 + 19) = v27;
      if ( v29 )
      {
        v30 = v29[1] - 1LL;
        v29[1] = v30;
        if ( !v30 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v29 + 16LL))(v29);
          v31 = v29[2] - 1LL;
          v29[2] = v31;
          if ( !v31 )
            (*(void (__fastcall **)(_QWORD *))(*v29 + 24LL))(v29);
        }
      }
      v32 = (_QWORD *)v42;
      if ( (_QWORD)v42 )
      {
        v33 = *(_QWORD *)(v42 + 8) - 1LL;
        *(_QWORD *)(v42 + 8) = v33;
        if ( !v33 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
          v34 = v32[2] - 1LL;
          v32[2] = v34;
          if ( !v34 )
            (*(void (__fastcall **)(_QWORD *))(*v32 + 24LL))(v32);
        }
      }
      v35 = v44;
      v43 = 0x3FD9999A3EE147AELL;
      v40 = 0x3F8000003F333333LL;
      Caver::GUIAnimationCurve::GUIAnimationCurve(
        (Caver::GUIAnimationCurve *)&v41,
        (const Caver::Vector2 *)&v43,
        (const Caver::Vector2 *)&v40);
      *(_OWORD *)((char *)v35 + 52) = v41;
      *(_OWORD *)((char *)v35 + 68) = v42;
      v36 = v44;
      *((_DWORD *)v44 + 23) = 1048576000;
      *((float *)v36 + 22) = (float)v6 * 0.1;
      this = Caver::GUIView::AddAnimation();
      v37 = v45;
      if ( v45 )
      {
        v38 = v45[1] - 1LL;
        v45[1] = v38;
        if ( !v38 )
        {
          this = (*(__int64 (__fastcall **)(_QWORD *))(*v37 + 16LL))(v37);
          v39 = v37[2] - 1LL;
          v37[2] = v39;
          if ( !v39 )
            this = (*(__int64 (__fastcall **)(_QWORD *))(*v37 + 24LL))(v37);
        }
      }
      v4 = *(_QWORD *)(v2 + 248);
      v5 += 16;
    }
    while ( v6 < (*(_QWORD *)(v2 + 256) - v4) >> 4 );
  }
  return this;
}

