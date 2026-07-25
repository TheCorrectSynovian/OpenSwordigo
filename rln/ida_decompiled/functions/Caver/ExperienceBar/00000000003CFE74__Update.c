/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CFE74
 * Mangled: _ZN5Caver13ExperienceBar6UpdateEf
 * Demangled: Caver::ExperienceBar::Update(float)
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F4B70  Caver::GUIAnimation::GUIAnimation(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8090  Caver::GUIPropertyValue::ValueWithFloat(float)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001FABF0  boost::detail::shared_count::shared_count<Caver::GUIAnimation>(Caver::GUIAnimation *)
 *   0x00000000001FB0E0  Caver::GUIAnimationCurve::GUIAnimationCurve(Caver::Vector2 const&,Caver::Vector2 const&)
 *   0x00000000001FDE30  Caver::ExperienceBar::UpdateText(void)
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003D022C  Caver::ExperienceBar::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 75
 *   insn=0x00000000003CFE8C string=0x00000000003CFE90 "V"
 *   insn=0x00000000003CFE9C string=0x00000000003CFEA0 ""
 *   insn=0x00000000003CFEA0 string=0x00000000003CFEA4 "hz@"
 *   insn=0x00000000003CFEA4 string=0x00000000003CFEA8 ""
 *   insn=0x00000000003CFEAC string=0x00000000003CFEE4 "h"
 *   insn=0x00000000003CFEB4 string=0x00000000001FDE30 "0'"
 *   insn=0x00000000003CFEC0 string=0x00000000003CFEC4 "a"
 *   insn=0x00000000003CFEC4 string=0x00000000003D0170 "X"
 *   insn=0x00000000003CFEE8 string=0x00000000003CFEEC "h"
 *   insn=0x00000000003CFEF0 string=0x00000000003CFEF4 "QA9"
 *   insn=0x00000000003CFEF4 string=0x00000000003CFEF8 ""
 *   insn=0x00000000003CFEFC string=0x00000000003CFF00 "h"
 *   insn=0x00000000003CFF0C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003CFF14 string=0x00000000001F4B70 "P'"
 *   insn=0x00000000003CFF20 string=0x00000000003CFF24 "t"
 *   insn=0x00000000003CFF28 string=0x00000000003CFF2C "1"
 *   insn=0x00000000003CFF2C string=0x00000000001FABF0 "0'"
 *   insn=0x00000000003CFF3C string=0x00000000003CFF40 "h"
 *   insn=0x00000000003CFF48 string=0x00000000003CFF4C "i"
 *   insn=0x00000000003CFF50 string=0x00000000003CFF54 "u"
 *   insn=0x00000000003CFF54 string=0x00000000003CFF58 "h"
 *   insn=0x00000000003CFF5C string=0x00000000003CFF60 "5"
 *   insn=0x00000000003CFF64 string=0x00000000003CFF68 ""
 *   insn=0x00000000003CFF78 string=0x00000000003CFF7C "\t@"
 *   insn=0x00000000003CFF84 string=0x00000000003CFF88 ""
 *   insn=0x00000000003CFF98 string=0x00000000003CFF9C "@"
 *   insn=0x00000000003CFFB4 string=0x00000000003CFFB8 "6"
 *   insn=0x00000000003CFFB8 string=0x00000000001F8090 "0'"
 *   insn=0x00000000003CFFC8 string=0x00000000003CFFCC "\n"
 *   insn=0x00000000003CFFCC string=0x00000000003CFFD0 "J"
 *   insn=0x00000000003CFFD0 string=0x00000000003CFFD4 "\n"
 *   insn=0x00000000003CFFDC string=0x00000000003CFFE0 "5"
 *   insn=0x00000000003CFFE4 string=0x00000000003CFFE8 ""
 *   insn=0x00000000003CFFF4 string=0x00000000003CFFF8 "\t@"
 *   insn=0x00000000003D0004 string=0x00000000003D0008 ""
 *   insn=0x00000000003D0014 string=0x00000000003D0018 "@"
 *   insn=0x00000000003D0024 string=0x00000000003D0028 "5"
 *   insn=0x00000000003D002C string=0x00000000003D0030 ""
 *   insn=0x00000000003D0040 string=0x00000000003D0044 "\t@"
 *   insn=0x00000000003D004C string=0x00000000003D0050 ""
 *   insn=0x00000000003D0060 string=0x00000000003D0064 "@"
 *   insn=0x00000000003D0088 string=0x00000000003D008C "\n"
 *   insn=0x00000000003D008C string=0x00000000003D0090 "J"
 *   insn=0x00000000003D0090 string=0x00000000003D0094 "\n"
 *   insn=0x00000000003D009C string=0x00000000003D00A0 "5"
 *   insn=0x00000000003D00A4 string=0x00000000003D00A8 ""
 *   insn=0x00000000003D00B4 string=0x00000000003D00B8 "\t@"
 *   insn=0x00000000003D00C4 string=0x00000000003D00C8 ""
 *   insn=0x00000000003D00D4 string=0x00000000003D00D8 "@"
 *   insn=0x00000000003D00E4 string=0x00000000003D00E8 "5"
 *   insn=0x00000000003D00E8 string=0x00000000003D012C "u"
 *   insn=0x00000000003D00EC string=0x00000000003D00F0 ""
 *   insn=0x00000000003D0100 string=0x00000000003D0104 "\t@"
 *   insn=0x00000000003D010C string=0x00000000003D0110 ""
 *   insn=0x00000000003D0120 string=0x00000000003D0124 "@"
 *   insn=0x00000000003D0144 string=0x00000000001FB0E0 "0'"
 *   insn=0x00000000003D015C string=0x00000000003D0160 "h"
 *   insn=0x00000000003D0160 string=0x00000000003D0164 "-"
 *   insn=0x00000000003D0164 string=0x00000000003D0168 "2"
 *   insn=0x00000000003D0168 string=0x00000000003D016C "S"
 *   insn=0x00000000003D0168 string=0x00000000001F8A30 "0'"
 *   insn=0x00000000003D0170 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003D0178 string=0x00000000003D017C "T"
 *   insn=0x00000000003D0180 string=0x00000000003D0184 ""
 *   insn=0x00000000003D0190 string=0x00000000003D0194 "\t@"
 *   insn=0x00000000003D01A0 string=0x00000000003D01A4 ""
 *   insn=0x00000000003D01B0 string=0x00000000003D01B4 "@"
 *   insn=0x00000000003D01D0 string=0x00000000003D01D4 ""
 *   insn=0x00000000003D01D8 string=0x00000000003D01DC "A"
 *   insn=0x00000000003D01E0 string=0x00000000003D01E4 "\t@"
 *   insn=0x00000000003D01F0 string=0x00000000003D01F4 ""
 *   insn=0x00000000003D01F8 string=0x00000000003D01FC "A"
 *   insn=0x00000000003D0200 string=0x00000000003D0204 "@"
 *   insn=0x00000000003D021C string=0x00000000003D0220 "$"
 *   insn=0x00000000003D0220 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ExperienceBar::Update(Caver::ExperienceBar *this, float a2)
{
  __int64 result; // x0
  __int64 v4; // x8
  Caver::GUIAnimation *v5; // x21
  char *v6; // x20
  Caver::GUIPropertyValue *v7; // x0
  _QWORD *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x23
  Caver::GUIPropertyValue *v12; // x0
  __int64 v13; // x8
  __int64 v14; // x9
  _QWORD *v15; // x21
  __int64 v16; // x8
  __int64 v17; // x8
  _QWORD *v18; // x21
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x23
  __int64 v22; // x8
  __int64 v23; // x9
  _QWORD *v24; // x21
  __int64 v25; // x8
  __int64 v26; // x8
  _QWORD *v27; // x21
  __int64 v28; // x8
  __int64 v29; // x8
  __int64 v30; // x21
  __int64 v31; // [xsp+0h] [xbp-70h] BYREF
  __int64 v32; // [xsp+8h] [xbp-68h] BYREF
  __int128 v33; // [xsp+10h] [xbp-60h] BYREF
  __int128 v34; // [xsp+20h] [xbp-50h]
  __int64 v35; // [xsp+38h] [xbp-38h]

  v35 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = Caver::GUIView::Update(this, a2);
  if ( *(_BYTE *)(*((_QWORD *)this + 30) + 304LL) )
    return Caver::ExperienceBar::UpdateText(this);
  if ( *((_BYTE *)this + 1016) )
  {
    v4 = *((_QWORD *)this + 128);
    if ( v4 )
    {
      if ( *(_BYTE *)(v4 + 84) )
        *((_BYTE *)this + 228) = 1;
    }
    else
    {
      v5 = (Caver::GUIAnimation *)operator new(0xC0u);
      Caver::GUIAnimation::GUIAnimation(v5);
      v6 = (char *)this + 1024;
      *(_QWORD *)&v33 = v5;
      boost::detail::shared_count::shared_count<Caver::GUIAnimation>();
      boost::detail::sp_enable_shared_from_this();
      *(_QWORD *)&v33 = *((_QWORD *)this + 128);
      *((_QWORD *)this + 128) = v5;
      v8 = (_QWORD *)*((_QWORD *)this + 129);
      *((_QWORD *)this + 129) = *((_QWORD *)&v33 + 1);
      *((_QWORD *)&v33 + 1) = v8;
      if ( v8 )
      {
        v9 = v8[1] - 1LL;
        v8[1] = v9;
        if ( !v9 )
        {
          v7 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
          v10 = v8[2] - 1LL;
          v8[2] = v10;
          if ( !v10 )
            v7 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
        }
      }
      v11 = *(_QWORD *)v6;
      *(_DWORD *)(*(_QWORD *)v6 + 48LL) = 2;
      v12 = (Caver::GUIPropertyValue *)Caver::GUIPropertyValue::ValueWithFloat((__int64 *)&v33, v7, 1.0);
      *(_DWORD *)(v11 + 112) = v33;
      v14 = *((_QWORD *)&v33 + 1);
      v13 = v34;
      if ( (_QWORD)v34 )
        ++*(_QWORD *)(v34 + 8);
      v15 = *(_QWORD **)(v11 + 128);
      *(_QWORD *)(v11 + 120) = v14;
      *(_QWORD *)(v11 + 128) = v13;
      if ( v15 )
      {
        v16 = v15[1] - 1LL;
        v15[1] = v16;
        if ( !v16 )
        {
          v12 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
          v17 = v15[2] - 1LL;
          v15[2] = v17;
          if ( !v17 )
            v12 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
        }
      }
      v18 = (_QWORD *)v34;
      if ( (_QWORD)v34 )
      {
        v19 = *(_QWORD *)(v34 + 8) - 1LL;
        *(_QWORD *)(v34 + 8) = v19;
        if ( !v19 )
        {
          v12 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
          v20 = v18[2] - 1LL;
          v18[2] = v20;
          if ( !v20 )
            v12 = (Caver::GUIPropertyValue *)(*(__int64 (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
        }
      }
      v21 = *(_QWORD *)v6;
      Caver::GUIPropertyValue::ValueWithFloat((__int64 *)&v33, v12, 0.0);
      *(_DWORD *)(v21 + 136) = v33;
      v23 = *((_QWORD *)&v33 + 1);
      v22 = v34;
      if ( (_QWORD)v34 )
        ++*(_QWORD *)(v34 + 8);
      v24 = *(_QWORD **)(v21 + 152);
      *(_QWORD *)(v21 + 144) = v23;
      *(_QWORD *)(v21 + 152) = v22;
      if ( v24 )
      {
        v25 = v24[1] - 1LL;
        v24[1] = v25;
        if ( !v25 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
          v26 = v24[2] - 1LL;
          v24[2] = v26;
          if ( !v26 )
            (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
        }
      }
      v27 = (_QWORD *)v34;
      if ( (_QWORD)v34 )
      {
        v28 = *(_QWORD *)(v34 + 8) - 1LL;
        *(_QWORD *)(v34 + 8) = v28;
        if ( !v28 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
          v29 = v27[2] - 1LL;
          v27[2] = v29;
          if ( !v29 )
            (*(void (__fastcall **)(_QWORD *))(*v27 + 24LL))(v27);
        }
      }
      v30 = *((_QWORD *)this + 128);
      v31 = 0x3F0000003F000000LL;
      v32 = 0x3F0000003F000000LL;
      Caver::GUIAnimationCurve::GUIAnimationCurve(
        (Caver::GUIAnimationCurve *)&v33,
        (const Caver::Vector2 *)&v32,
        (const Caver::Vector2 *)&v31);
      *(_OWORD *)(v30 + 52) = v33;
      *(_OWORD *)(v30 + 68) = v34;
      *(_QWORD *)(*((_QWORD *)this + 128) + 88LL) = 0x3F0000003F000000LL;
      return Caver::GUIView::AddAnimation();
    }
  }
  return result;
}

