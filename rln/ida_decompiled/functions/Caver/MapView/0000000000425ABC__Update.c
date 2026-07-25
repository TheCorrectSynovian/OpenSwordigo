/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000425ABC
 * Mangled: _ZN5Caver7MapView6UpdateEf
 * Demangled: Caver::MapView::Update(float)
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F3820  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *   0x00000000001F8BC0  Caver::MapView::UpdateTargetPath(void)
 *   0x00000000001F9850  Caver::GUIView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000001FAAD0  Caver::GUIPropertyValue::InterpolatedValue(Caver::GUIPropertyValue const&,Caver::GUIPropertyValue const&,float)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *   0x0000000000202FC0  Caver::GUIPropertyValue::ValueWithRectangle(Caver::Rectangle const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 94
 *   insn=0x0000000000425AD4 string=0x0000000000425AD8 "V"
 *   insn=0x0000000000425AE0 string=0x0000000000425AE4 ""
 *   insn=0x0000000000425AE8 string=0x0000000000425AEC "hnA"
 *   insn=0x0000000000425AF0 string=0x0000000000425AF4 "h^A"
 *   insn=0x0000000000425AF4 string=0x0000000000425AF8 "i"
 *   insn=0x0000000000425AF8 string=0x0000000000425AFC "jVA"
 *   insn=0x0000000000425B00 string=0x0000000000425B04 ""
 *   insn=0x0000000000425B08 string=0x0000000000425B0C "K"
 *   insn=0x0000000000425B10 string=0x0000000000425B14 ""
 *   insn=0x0000000000425B14 string=0x0000000000425B18 "(ih"
 *   insn=0x0000000000425B18 string=0x0000000000425B1C "b"
 *   insn=0x0000000000425B1C string=0x0000000000425B20 "@ "
 *   insn=0x0000000000425B24 string=0x0000000000425B28 ""
 *   insn=0x0000000000425B2C string=0x0000000000425B30 "B"
 *   insn=0x0000000000425B3C string=0x0000000000425B40 " "
 *   insn=0x0000000000425B44 string=0x0000000000425B48 "hfA"
 *   insn=0x0000000000425B48 string=0x0000000000425B4C ""
 *   insn=0x0000000000425B4C string=0x0000000000425B50 ""
 *   insn=0x0000000000425B50 string=0x0000000000425B54 "(ih"
 *   insn=0x0000000000425B54 string=0x0000000000425B58 ""
 *   insn=0x0000000000425B7C string=0x0000000000425B80 "wb"
 *   insn=0x0000000000425B84 string=0x0000000000425B88 "\t"
 *   insn=0x0000000000425B8C string=0x0000000000425B90 ""
 *   insn=0x0000000000425B8C string=0x0000000000425D80 "\t"
 *   insn=0x0000000000425B98 string=0x0000000000425B9C ")"
 *   insn=0x0000000000425BB4 string=0x00000000001FAAD0 "0'"
 *   insn=0x0000000000425BC0 string=0x0000000000425BC4 "5"
 *   insn=0x0000000000425BC4 string=0x0000000000425C08 "4"
 *   insn=0x0000000000425BC8 string=0x0000000000425BCC ""
 *   insn=0x0000000000425BD8 string=0x0000000000425BDC "\t@"
 *   insn=0x0000000000425BE8 string=0x0000000000425BEC ""
 *   insn=0x0000000000425BF8 string=0x0000000000425BFC "@"
 *   insn=0x0000000000425C0C string=0x0000000000425C10 ""
 *   insn=0x0000000000425C1C string=0x0000000000425C20 "\t@"
 *   insn=0x0000000000425C2C string=0x0000000000425C30 ""
 *   insn=0x0000000000425C3C string=0x0000000000425C40 "@"
 *   insn=0x0000000000425C4C string=0x0000000000425C50 "4"
 *   insn=0x0000000000425C54 string=0x0000000000425C58 ""
 *   insn=0x0000000000425C64 string=0x0000000000425C68 "\t@"
 *   insn=0x0000000000425C74 string=0x0000000000425C78 ""
 *   insn=0x0000000000425C84 string=0x0000000000425C88 "@"
 *   insn=0x0000000000425C94 string=0x0000000000425C98 "4"
 *   insn=0x0000000000425C98 string=0x0000000000425CDC "`VA"
 *   insn=0x0000000000425C9C string=0x0000000000425CA0 ""
 *   insn=0x0000000000425CB0 string=0x0000000000425CB4 "\t@"
 *   insn=0x0000000000425CBC string=0x0000000000425CC0 ""
 *   insn=0x0000000000425CD0 string=0x0000000000425CD4 "@"
 *   insn=0x0000000000425CE0 string=0x0000000000425CE4 "#U"
 *   insn=0x0000000000425CE4 string=0x00000000001FB170 "0'"
 *   insn=0x0000000000425CEC string=0x0000000000425CF0 "hnA"
 *   insn=0x0000000000425CEC string=0x00000000001F8BC0 "0'"
 *   insn=0x0000000000425CF0 string=0x0000000000425CF4 "QA9"
 *   insn=0x0000000000425CF8 string=0x0000000000425CFC "trA"
 *   insn=0x0000000000425D00 string=0x0000000000425D04 "4"
 *   insn=0x0000000000425D08 string=0x0000000000425D0C ""
 *   insn=0x0000000000425D1C string=0x0000000000425D20 "\t@"
 *   insn=0x0000000000425D28 string=0x0000000000425D2C ""
 *   insn=0x0000000000425D3C string=0x0000000000425D40 "@"
 *   insn=0x0000000000425D4C string=0x0000000000425D50 "\b"
 *   insn=0x0000000000425D60 string=0x0000000000425DA0 "LA"
 *   insn=0x0000000000425D84 string=0x0000000000425D88 "QI"
 *   insn=0x0000000000425D84 string=0x0000000000425D94 ""
 *   insn=0x0000000000425D88 string=0x0000000000425D8C "t"
 *   insn=0x0000000000425DA0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000425DAC string=0x0000000000425DB0 "'"
 *   insn=0x0000000000425DB4 string=0x0000000000425DB8 "4"
 *   insn=0x0000000000425DBC string=0x0000000000425DC0 ""
 *   insn=0x0000000000425DCC string=0x0000000000425DD0 "\t@"
 *   insn=0x0000000000425DDC string=0x0000000000425DE0 ""
 *   insn=0x0000000000425DEC string=0x0000000000425DF0 "@"
 *   insn=0x0000000000425DFC string=0x0000000000425E00 "t"
 *   insn=0x0000000000425E04 string=0x0000000000425E08 ""
 *   insn=0x0000000000425E14 string=0x0000000000425E18 "\t@"
 *   insn=0x0000000000425E24 string=0x0000000000425E28 ""
 *   insn=0x0000000000425E34 string=0x0000000000425E38 "@"
 *   insn=0x0000000000425E4C string=0x0000000000425E50 "4"
 *   insn=0x0000000000425E54 string=0x0000000000425E58 ""
 *   insn=0x0000000000425E64 string=0x0000000000425E68 "\t@"
 *   insn=0x0000000000425E74 string=0x0000000000425E78 ""
 *   insn=0x0000000000425E84 string=0x0000000000425E88 "@"
 *   insn=0x0000000000425E98 string=0x0000000000425E9C ","
 *   insn=0x0000000000425EB4 string=0x0000000000425EB8 "W"
 *   insn=0x0000000000425ED8 string=0x0000000000425EDC ""
 *   insn=0x0000000000425EE8 string=0x00000000001F7210 "0'"
 *   insn=0x0000000000425EF0 string=0x0000000000425EF4 "WY"
 *   insn=0x0000000000425EF4 string=0x00000000001FC450 "0'"
 *   insn=0x0000000000425EF8 string=0x0000000000425EFC "I6"
 *   insn=0x0000000000425EFC string=0x00000000001F3820 "P'"
 *   insn=0x0000000000425F08 string=0x00000000001F5ED0 "P'"
 *   insn=0x0000000000425F14 string=0x00000000001FCDA0 "0'"
 *   insn=0x0000000000425F38 string=0x0000000000425F3C ""
 *   insn=0x0000000000425F4C string=0x00000000001FB1A0 "0'"
 *   insn=0x0000000000425F80 string=0x0000000000425F84 "3N"
 *   insn=0x0000000000425F84 string=0x00000000001F9850 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MapView::Update(Caver::GUIView **this, float a2, double a3, int32x2_t a4)
{
  Caver::GUIView *v6; // x9
  Caver::GUIView *v7; // x10
  float v8; // w11
  float32x2_t v9; // d2
  float32x2_t v10; // d1
  float32x2_t v11; // d0
  const Caver::GUIPropertyValue *v12; // x2
  Caver::GUIView *v13; // x8
  float *v14; // x8
  _QWORD *v15; // x20
  char *v16; // t2
  _QWORD *v17; // x21
  __int64 v18; // x8
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x8
  _QWORD *v22; // x20
  __int64 v23; // x8
  __int64 v24; // x8
  _QWORD *v25; // x20
  __int64 v26; // x8
  __int64 v27; // x8
  Caver::GUIView *v28; // x20
  __int64 v29; // x8
  __int64 v30; // x8
  char *v32; // t2
  char *v33; // t2
  char v34[16]; // [xsp+54h] [xbp-B8h] BYREF
  _QWORD *v35; // [xsp+64h] [xbp-A8h]
  char v36[16]; // [xsp+6Ch] [xbp-A0h] BYREF
  _QWORD *v37; // [xsp+7Ch] [xbp-90h]
  __int64 v38[2]; // [xsp+84h] [xbp-88h] BYREF
  _QWORD *v39; // [xsp+94h] [xbp-78h]
  __int128 v40; // [xsp+9Ch] [xbp-70h] BYREF
  unsigned __int64 v41; // [xsp+B4h] [xbp-58h]
  float v42; // [xsp+BCh] [xbp-50h]
  int v43; // [xsp+C0h] [xbp-4Ch]
  unsigned __int64 v44; // [xsp+C4h] [xbp-48h]
  float v45; // [xsp+CCh] [xbp-40h]
  int v46; // [xsp+D0h] [xbp-3Ch]
  __int64 v47; // [xsp+D4h] [xbp-38h]

  v47 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !this[91] )
    return Caver::GUIView::Update((Caver::GUIView *)this, a2);
  v6 = this[35];
  v7 = this[85];
  v8 = *((float *)v7 + 31);
  LODWORD(v7) = *((_DWORD *)v7 + 32);
  a4.n64_u32[0] = 7.0;
  v9.n64_u64[0] = vdup_lane_s32(a4, 0).n64_u64[0];
  v9.n64_f32[0] = (float)(v8 * -0.5) + -3.0;
  v10.n64_u64[0] = *(unsigned __int64 *)(**((_QWORD **)v6 + 2 * *(_QWORD *)this[87]) + 8LL);
  v45 = v8;
  v46 = (int)v7;
  v44 = vadd_f32(v10, v9).n64_u64[0];
  v11.n64_u64[0] = *(unsigned __int64 *)(**((_QWORD **)v6 + 2 * *(_QWORD *)this[89]) + 8LL);
  v42 = v8;
  v43 = (int)v7;
  v41 = vadd_f32(v11, v9).n64_u64[0];
  Caver::GUIPropertyValue::ValueWithRectangle();
  Caver::GUIPropertyValue::ValueWithRectangle();
  v13 = this[91];
  if ( *((_DWORD *)v13 + 40) )
  {
    v16 = (char *)v13 + 168;
    v14 = (float *)*((_QWORD *)v13 + 21);
    v15 = (_QWORD *)*((_QWORD *)v16 + 1);
    if ( !v15 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( *((_BYTE *)v13 + 100) )
  {
    v32 = (char *)v13 + 144;
    v14 = (float *)*((_QWORD *)v13 + 18);
    v15 = (_QWORD *)*((_QWORD *)v32 + 1);
    if ( !v15 )
      goto LABEL_5;
LABEL_4:
    ++v15[1];
    goto LABEL_5;
  }
  v33 = (char *)v13 + 120;
  v14 = (float *)*((_QWORD *)v13 + 15);
  v15 = (_QWORD *)*((_QWORD *)v33 + 1);
  if ( v15 )
    goto LABEL_4;
LABEL_5:
  Caver::GUIPropertyValue::InterpolatedValue(
    v38,
    (Caver::GUIPropertyValue *)v36,
    (const Caver::GUIPropertyValue *)v34,
    v12,
    *v14);
  v17 = v39;
  v40 = *(_OWORD *)v38[1];
  if ( v39 )
  {
    v18 = v39[1] - 1LL;
    v39[1] = v18;
    if ( !v18 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      v19 = v17[2] - 1LL;
      v17[2] = v19;
      if ( !v19 )
        (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
    }
  }
  if ( v15 )
  {
    v20 = v15[1] - 1LL;
    v15[1] = v20;
    if ( !v20 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      v21 = v15[2] - 1LL;
      v15[2] = v21;
      if ( !v21 )
        (*(void (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
    }
  }
  v22 = v35;
  if ( v35 )
  {
    v23 = v35[1] - 1LL;
    v35[1] = v23;
    if ( !v23 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
      v24 = v22[2] - 1LL;
      v22[2] = v24;
      if ( !v24 )
        (*(void (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
    }
  }
  v25 = v37;
  if ( v37 )
  {
    v26 = v37[1] - 1LL;
    v37[1] = v26;
    if ( !v26 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
      v27 = v25[2] - 1LL;
      v25[2] = v27;
      if ( !v27 )
        (*(void (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
    }
  }
  Caver::GUIView::SetFrame(this[85], (const Caver::Rectangle *)&v40);
  Caver::MapView::UpdateTargetPath((Caver::MapView *)this);
  if ( *((_BYTE *)this[91] + 84) )
  {
    v28 = this[92];
    this[91] = 0;
    this[92] = 0;
    if ( v28 )
    {
      v29 = *((_QWORD *)v28 + 1) - 1LL;
      *((_QWORD *)v28 + 1) = v29;
      if ( !v29 )
      {
        (*(void (__fastcall **)(Caver::GUIView *))(*(_QWORD *)v28 + 16LL))(v28);
        v30 = *((_QWORD *)v28 + 2) - 1LL;
        *((_QWORD *)v28 + 2) = v30;
        if ( !v30 )
          (*(void (__fastcall **)(Caver::GUIView *))(*(_QWORD *)v28 + 24LL))(v28);
      }
    }
  }
  return Caver::GUIView::Update((Caver::GUIView *)this, a2);
}

