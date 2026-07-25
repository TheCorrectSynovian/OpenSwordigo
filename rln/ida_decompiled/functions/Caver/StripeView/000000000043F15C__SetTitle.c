/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043F15C
 * Mangled: _ZN5Caver10StripeView8SetTitleERKSs
 * Demangled: Caver::StripeView::SetTitle(std::string const&)
 *
 * Callers: 2
 *   0x00000000001F7060  Caver::StripeView::SetTitle(std::string const&)
 *   0x000000000043ED40  Caver::StripeView::SetHasTag(bool,float)
 *
 * Callees: 11
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F8CE0  Caver::GameInterfaceBuilder::NormalLabel(std::string const&,Caver::Color,Caver::Color)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000043F4E4  Caver::StripeView::SetTitleHorizOffset(float)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 82
 *   insn=0x000000000043F16C string=0x000000000043F170 "V"
 *   insn=0x000000000043F180 string=0x000000000043F184 "u"
 *   insn=0x000000000043F19C string=0x000000000043F1A0 ""
 *   insn=0x000000000043F1BC string=0x00000000001F8CE0 "0'"
 *   insn=0x000000000043F1C4 string=0x000000000043F1C8 "\n"
 *   insn=0x000000000043F1C4 string=0x000000000043F1D4 "u"
 *   insn=0x000000000043F1C8 string=0x000000000043F1CC "J"
 *   insn=0x000000000043F1CC string=0x000000000043F1D0 "\n"
 *   insn=0x000000000043F1D4 string=0x000000000043F1D8 "i""
 *   insn=0x000000000043F1D8 string=0x000000000043F1DC "5"
 *   insn=0x000000000043F1E0 string=0x000000000043F1E4 ""
 *   insn=0x000000000043F1F0 string=0x000000000043F1F4 "\t@"
 *   insn=0x000000000043F200 string=0x000000000043F204 ""
 *   insn=0x000000000043F210 string=0x000000000043F214 "@"
 *   insn=0x000000000043F220 string=0x000000000043F224 "5"
 *   insn=0x000000000043F228 string=0x000000000043F22C ""
 *   insn=0x000000000043F238 string=0x000000000043F23C "\t@"
 *   insn=0x000000000043F248 string=0x000000000043F24C ""
 *   insn=0x000000000043F258 string=0x000000000043F25C "@"
 *   insn=0x000000000043F268 string=0x000000000043F26C ")"
 *   insn=0x000000000043F26C string=0x000000000043F270 ")"
 *   insn=0x000000000043F27C string=0x000000000043F280 "h"
 *   insn=0x000000000043F27C string=0x000000000043F37C ")"
 *   insn=0x000000000043F280 string=0x000000000043F284 "i"
 *   insn=0x000000000043F284 string=0x000000000043F288 "1@"
 *   insn=0x000000000043F28C string=0x000000000043F290 "i"
 *   insn=0x000000000043F298 string=0x000000000043F29C "*"
 *   insn=0x000000000043F29C string=0x000000000043F2A0 "J"
 *   insn=0x000000000043F2A0 string=0x000000000043F2A4 "*"
 *   insn=0x000000000043F2B4 string=0x000000000043F2B8 "5"
 *   insn=0x000000000043F2B8 string=0x000000000043F2FC "u"
 *   insn=0x000000000043F2BC string=0x000000000043F2C0 ""
 *   insn=0x000000000043F2D0 string=0x000000000043F2D4 "\t@"
 *   insn=0x000000000043F2DC string=0x000000000043F2E0 ""
 *   insn=0x000000000043F2F0 string=0x000000000043F2F4 "@"
 *   insn=0x000000000043F308 string=0x000000000043F30C "("
 *   insn=0x000000000043F30C string=0x000000000043F310 "_"
 *   insn=0x000000000043F310 string=0x000000000043F314 "a"
 *   insn=0x000000000043F318 string=0x00000000001F5190 "P'"
 *   insn=0x000000000043F31C string=0x000000000043F334 "(\n"
 *   insn=0x000000000043F32C string=0x000000000043F330 "x"
 *   insn=0x000000000043F330 string=0x00000000001F8510 "0'"
 *   insn=0x000000000043F334 string=0x000000000043F338 "`"
 *   insn=0x000000000043F334 string=0x0000000000583944 "\n"
 *   insn=0x000000000043F344 string=0x000000000043F348 "h"
 *   insn=0x000000000043F34C string=0x000000000043F350 "-@"
 *   insn=0x000000000043F37C string=0x000000000043F380 ")=G"
 *   insn=0x000000000043F380 string=0x000000000043F384 "!"
 *   insn=0x000000000043F388 string=0x000000000043F38C "\t"
 *   insn=0x000000000043F388 string=0x000000000043F3A0 "\t"
 *   insn=0x000000000043F38C string=0x000000000043F390 "*"
 *   insn=0x000000000043F390 string=0x000000000043F394 "\n"
 *   insn=0x000000000043F39C string=0x000000000043F3AC "?"
 *   insn=0x000000000043F3A0 string=0x000000000043F3A4 "*"
 *   insn=0x000000000043F3A4 string=0x000000000043F3A8 "\n"
 *   insn=0x000000000043F3C0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000043F3C8 string=0x000000000043F3CC "t"
 *   insn=0x000000000043F3D0 string=0x000000000043F3D4 ""
 *   insn=0x000000000043F3E0 string=0x000000000043F3E4 "\t@"
 *   insn=0x000000000043F3F0 string=0x000000000043F3F4 ""
 *   insn=0x000000000043F400 string=0x000000000043F404 "@"
 *   insn=0x000000000043F420 string=0x000000000043F424 ""
 *   insn=0x000000000043F430 string=0x000000000043F434 "\t@"
 *   insn=0x000000000043F440 string=0x000000000043F444 ""
 *   insn=0x000000000043F450 string=0x000000000043F454 "@"
 *   insn=0x000000000043F478 string=0x000000000043F47C ")"
 *   insn=0x000000000043F47C string=0x000000000043F480 ")"
 *   insn=0x000000000043F48C string=0x000000000043F490 ")"
 *   insn=0x000000000043F490 string=0x000000000043F494 ")=G"
 *   insn=0x000000000043F494 string=0x000000000043F498 "!"
 *   insn=0x000000000043F498 string=0x000000000043F49C "i"
 *   insn=0x000000000043F49C string=0x000000000043F4A0 "\t"
 *   insn=0x000000000043F49C string=0x000000000043F4C8 "\t"
 *   insn=0x000000000043F4A0 string=0x000000000043F4A4 "*"
 *   insn=0x000000000043F4A4 string=0x000000000043F4A8 "\n"
 *   insn=0x000000000043F4AC string=0x000000000043F4B0 "?"
 *   insn=0x000000000043F4B0 string=0x000000000043F4B4 "L"
 *   insn=0x000000000043F4C8 string=0x000000000043F4CC "*"
 *   insn=0x000000000043F4CC string=0x000000000043F4D0 "\n"
 *   insn=0x000000000043F4D0 string=0x000000000043F4D4 "?"
 *   insn=0x000000000043F4D4 string=0x000000000043F4D8 ""
 *   insn=0x000000000043F4E0 string=0x000000000043F4E4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StripeView::SetTitle(float *a1, const void **a2)
{
  Caver::GUILabel *v4; // x21
  _QWORD *v5; // x8
  __int64 v6; // x9
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x8
  _QWORD *v10; // x21
  __int64 v11; // x8
  __int64 v12; // x8
  void *v13; // x0
  void (__fastcall *v14)(float *, __int64 *); // x8
  _QWORD *v15; // x9
  _QWORD *v16; // x21
  __int64 v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x1
  size_t v20; // x2
  __int64 result; // x0
  unsigned int *v22; // x8
  int v23; // w9
  __int64 v24; // [xsp+18h] [xbp-48h] BYREF
  __int64 v25; // [xsp+20h] [xbp-40h] BYREF
  _QWORD *v26; // [xsp+28h] [xbp-38h]
  __int64 v27; // [xsp+38h] [xbp-28h]

  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (Caver::GUILabel *)*((_QWORD *)a1 + 36);
  if ( !v4 )
  {
    sub_566BB8((int)&v24, "");
    Caver::GameInterfaceBuilder::NormalLabel();
    v6 = v25;
    v5 = v26;
    if ( v26 )
      ++v26[1];
    v7 = (_QWORD *)*((_QWORD *)a1 + 37);
    *((_QWORD *)a1 + 36) = v6;
    *((_QWORD *)a1 + 37) = v5;
    if ( v7 )
    {
      v8 = v7[1] - 1LL;
      v7[1] = v8;
      if ( !v8 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
        v9 = v7[2] - 1LL;
        v7[2] = v9;
        if ( !v9 )
          (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
      }
    }
    v10 = v26;
    if ( v26 )
    {
      v11 = v26[1] - 1LL;
      v26[1] = v11;
      if ( !v11 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
        v12 = v10[2] - 1LL;
        v10[2] = v12;
        if ( !v12 )
          (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
      }
    }
    v13 = (void *)(v24 - 24);
    if ( (__int64 *)(v24 - 24) != &qword_6FD2E0 )
    {
      v22 = (unsigned int *)(v24 - 8);
      if ( &pthread_create )
      {
        do
          v23 = __ldaxr(v22);
        while ( __stlxr(v23 - 1, v22) );
      }
      else
      {
        v23 = (*v22)--;
      }
      if ( v23 <= 0 )
        operator delete(v13);
    }
    v14 = *(void (__fastcall **)(float *, __int64 *))(*(_QWORD *)a1 + 96LL);
    v25 = *((_QWORD *)a1 + 36);
    v15 = (_QWORD *)*((_QWORD *)a1 + 37);
    v26 = v15;
    if ( v15 )
      ++v15[1];
    v14(a1, &v25);
    v16 = v26;
    if ( v26 )
    {
      v17 = v26[1] - 1LL;
      v26[1] = v17;
      if ( !v17 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
        v18 = v16[2] - 1LL;
        v16[2] = v18;
        if ( !v18 )
          (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
      }
    }
    v4 = (Caver::GUILabel *)*((_QWORD *)a1 + 36);
  }
  v19 = (_QWORD *)*((_QWORD *)v4 + 32);
  v20 = *((_QWORD *)*a2 - 3);
  if ( v20 != *(v19 - 3) || (result = memcmp(*a2, v19, v20), (_DWORD)result) )
  {
    sub_56A6A8((char *)v4 + 256);
    result = Caver::GUILabel::UpdateText(v4);
  }
  if ( a1[35] > 0.01 )
    return (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 88LL))(a1);
  return result;
}

