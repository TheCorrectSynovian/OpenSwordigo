/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042A060
 * Mangled: _ZN5Caver12MenuItemSlot8SetSkillERKN5boost10shared_ptrINS_5SkillEEEb
 * Demangled: Caver::MenuItemSlot::SetSkill(boost::shared_ptr<Caver::Skill> const&,bool)
 *
 * Callers: 1
 *   0x00000000001F9C80  Caver::MenuItemSlot::SetSkill(boost::shared_ptr<Caver::Skill> const&,bool)
 *
 * Callees: 14
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6360  Caver::GUITexturedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,bool)
 *   0x00000000001F95E0  Caver::GUITexturedRect::CreateWithBounds(Caver::Rectangle const&,bool)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000202F00  Caver::GUITexturedRect::Reset(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 107
 *   insn=0x000000000042A078 string=0x000000000042A07C "W"
 *   insn=0x000000000042A098 string=0x000000000042A09C "\n"
 *   insn=0x000000000042A098 string=0x000000000042A0A8 "v"
 *   insn=0x000000000042A09C string=0x000000000042A0A0 "J"
 *   insn=0x000000000042A0A0 string=0x000000000042A0A4 "\n"
 *   insn=0x000000000042A0A8 string=0x000000000042A0AC "i""
 *   insn=0x000000000042A0B4 string=0x000000000042A0B8 ""
 *   insn=0x000000000042A0BC string=0x000000000042A0C0 "!"
 *   insn=0x000000000042A0C8 string=0x000000000042A0CC "\t@"
 *   insn=0x000000000042A0D4 string=0x000000000042A0D8 ""
 *   insn=0x000000000042A0E4 string=0x000000000042A0E8 "A"
 *   insn=0x000000000042A0E8 string=0x000000000042A270 "`""
 *   insn=0x000000000042A0F0 string=0x000000000042A0F4 "@"
 *   insn=0x000000000042A0F4 string=0x0000000000592623 "ui_skill_"
 *   insn=0x000000000042A118 string=0x000000000042A11C "A"
 *   insn=0x000000000042A120 string=0x000000000042A124 "A"
 *   insn=0x000000000042A124 string=0x0000000000593F11 "_icon"
 *   insn=0x000000000042A138 string=0x00000000001FA350 "0'"
 *   insn=0x000000000042A148 string=0x000000000042A14C "t""
 *   insn=0x000000000042A164 string=0x00000000001F6360 "0'"
 *   insn=0x000000000042A16C string=0x000000000042A170 "@"
 *   insn=0x000000000042A170 string=0x000000000042A174 ""
 *   insn=0x000000000042A174 string=0x000000000042A178 ""
 *   insn=0x000000000042A17C string=0x000000000042A180 ""
 *   insn=0x000000000042A180 string=0x000000000042A184 ""
 *   insn=0x000000000042A190 string=0x000000000042A194 "@"
 *   insn=0x000000000042A190 string=0x000000000042A1A0 "@E"
 *   insn=0x000000000042A194 string=0x000000000042A198 ""
 *   insn=0x000000000042A198 string=0x000000000042A19C ""
 *   insn=0x000000000042A1A0 string=0x000000000042A1A4 "b"
 *   insn=0x000000000042A1A4 string=0x000000000042A1A8 "@"
 *   insn=0x000000000042A1A8 string=0x000000000042A1AC "@"
 *   insn=0x000000000042A1A8 string=0x000000000042A1D0 "i"
 *   insn=0x000000000042A1AC string=0x000000000042A1B0 ""
 *   insn=0x000000000042A1B0 string=0x000000000042A1B4 ""
 *   insn=0x000000000042A1B8 string=0x000000000042A1BC ""
 *   insn=0x000000000042A1BC string=0x000000000042A1C0 ""
 *   insn=0x000000000042A1D0 string=0x000000000042A1D4 "h"
 *   insn=0x000000000042A1D4 string=0x000000000042A1D8 " "
 *   insn=0x000000000042A1DC string=0x000000000042A1E0 ""
 *   insn=0x000000000042A1E8 string=0x000000000042A1EC " "
 *   insn=0x000000000042A200 string=0x000000000042A204 "N"
 *   insn=0x000000000042A204 string=0x00000000001FDA30 "0'"
 *   insn=0x000000000042A220 string=0x00000000001F95E0 "0'"
 *   insn=0x000000000042A22C string=0x000000000042A230 "@"
 *   insn=0x000000000042A234 string=0x000000000042A238 ")=G"
 *   insn=0x000000000042A238 string=0x000000000042A23C "!"
 *   insn=0x000000000042A23C string=0x000000000042A240 "i"
 *   insn=0x000000000042A240 string=0x000000000042A244 "\t"
 *   insn=0x000000000042A240 string=0x000000000042A2EC "\t"
 *   insn=0x000000000042A244 string=0x000000000042A248 "*"
 *   insn=0x000000000042A248 string=0x000000000042A24C "\n"
 *   insn=0x000000000042A250 string=0x000000000042A254 ")"
 *   insn=0x000000000042A254 string=0x000000000042A2F8 "?"
 *   insn=0x000000000042A25C string=0x000000000042A260 "@"
 *   insn=0x000000000042A270 string=0x000000000042A274 "#c"
 *   insn=0x000000000042A280 string=0x000000000042A284 "A"
 *   insn=0x000000000042A2A4 string=0x000000000042A2A8 ")=G"
 *   insn=0x000000000042A2A8 string=0x000000000042A2AC "!"
 *   insn=0x000000000042A2B0 string=0x000000000042A2B4 "\t"
 *   insn=0x000000000042A2B0 string=0x000000000042A2C8 "\t"
 *   insn=0x000000000042A2B4 string=0x000000000042A2B8 "*"
 *   insn=0x000000000042A2B8 string=0x000000000042A2BC "\n"
 *   insn=0x000000000042A2C4 string=0x000000000042A2D4 "?"
 *   insn=0x000000000042A2C8 string=0x000000000042A2CC "*"
 *   insn=0x000000000042A2CC string=0x000000000042A2D0 "\n"
 *   insn=0x000000000042A2D4 string=0x000000000042A2D8 "L"
 *   insn=0x000000000042A2DC string=0x000000000042A2E0 "1"
 *   insn=0x000000000042A2EC string=0x000000000042A2F0 "*"
 *   insn=0x000000000042A2F0 string=0x000000000042A2F4 "\n"
 *   insn=0x000000000042A300 string=0x000000000042A304 "("
 *   insn=0x000000000042A30C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000042A320 string=0x000000000042A324 "\t\t@"
 *   insn=0x000000000042A324 string=0x000000000042A328 ")"
 *   insn=0x000000000042A328 string=0x000000000042A32C "\t\t"
 *   insn=0x000000000042A32C string=0x000000000042A330 "a"
 *   insn=0x000000000042A330 string=0x000000000042A334 "\t"
 *   insn=0x000000000042A334 string=0x000000000042A338 ")"
 *   insn=0x000000000042A33C string=0x000000000042A340 " "
 *   insn=0x000000000042A350 string=0x000000000042A354 "J"
 *   insn=0x000000000042A358 string=0x000000000042A35C "(a"
 *   insn=0x000000000042A368 string=0x000000000042A36C "J=G"
 *   insn=0x000000000042A36C string=0x000000000042A370 ")!"
 *   insn=0x000000000042A370 string=0x000000000042A374 "J"
 *   insn=0x000000000042A374 string=0x000000000042A378 "*"
 *   insn=0x000000000042A374 string=0x000000000042A39C "*"
 *   insn=0x000000000042A378 string=0x000000000042A37C "K"
 *   insn=0x000000000042A37C string=0x000000000042A380 "+"
 *   insn=0x000000000042A384 string=0x000000000042A388 "_"
 *   insn=0x000000000042A39C string=0x000000000042A3A0 "K"
 *   insn=0x000000000042A3A0 string=0x000000000042A3A4 "+"
 *   insn=0x000000000042A3A4 string=0x000000000042A3A8 "_"
 *   insn=0x000000000042A3A8 string=0x000000000042A3AC "-"
 *   insn=0x000000000042A3CC string=0x000000000042A3D0 ")=G"
 *   insn=0x000000000042A3D0 string=0x000000000042A3D4 "!"
 *   insn=0x000000000042A3D4 string=0x000000000042A3D8 "i"
 *   insn=0x000000000042A3D8 string=0x000000000042A3DC "\t"
 *   insn=0x000000000042A3D8 string=0x000000000042A404 "\t"
 *   insn=0x000000000042A3DC string=0x000000000042A3E0 "*"
 *   insn=0x000000000042A3E0 string=0x000000000042A3E4 "\n"
 *   insn=0x000000000042A3E8 string=0x000000000042A3EC "?"
 *   insn=0x000000000042A3EC string=0x000000000042A3F0 "l"
 *   insn=0x000000000042A3FC string=0x000000000042A400 "1]"
 *   insn=0x000000000042A404 string=0x000000000042A408 "*"
 *   insn=0x000000000042A408 string=0x000000000042A40C "\n"
 *   insn=0x000000000042A40C string=0x000000000042A410 "?"
 *   insn=0x000000000042A410 string=0x000000000042A414 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MenuItemSlot::SetSkill(__int64 a1, __int64 *a2, char a3)
{
  __int64 v6; // x8
  __int64 v7; // x9
  _QWORD *v8; // x22
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x1
  void *v12; // x0
  __int64 *v13; // x20
  __int64 v14; // x0
  int v15; // w8
  __int64 v16; // x0
  float32x2_t v17; // d8
  float v18; // s2
  int v19; // w8
  float32x2_t v20; // d8
  void *v21; // x0
  unsigned int *v22; // x8
  int v23; // w9
  unsigned int *v24; // x8
  int v25; // w9
  float v26; // [xsp+0h] [xbp-70h]
  unsigned __int64 v27; // [xsp+10h] [xbp-60h] BYREF
  __int64 v28; // [xsp+18h] [xbp-58h] BYREF
  unsigned __int64 v29; // [xsp+20h] [xbp-50h]
  __int64 v30; // [xsp+28h] [xbp-48h] BYREF
  _QWORD v31[2]; // [xsp+30h] [xbp-40h] BYREF

  v31[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = *a2;
  v6 = a2[1];
  if ( v6 )
    ++*(_QWORD *)(v6 + 8);
  v8 = *(_QWORD **)(a1 + 280);
  *(_QWORD *)(a1 + 272) = v7;
  *(_QWORD *)(a1 + 280) = v6;
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
        v11 = *a2;
        if ( *a2 )
          goto LABEL_7;
LABEL_23:
        Caver::GUITexturedRect::Reset((Caver::GUITexturedRect *)(a1 + 520));
        return;
      }
    }
  }
  v11 = *a2;
  if ( !*a2 )
    goto LABEL_23;
LABEL_7:
  sub_56A528(&v28, v11);
  ((void (__fastcall *)(_QWORD *__return_ptr, const char *, __int64 *))loc_25A030)(v31, "ui_skill_", &v28);
  v12 = (void *)(v28 - 24);
  if ( (__int64 *)(v28 - 24) == &qword_6FD2E0 )
    goto LABEL_8;
  v24 = (unsigned int *)(v28 - 8);
  if ( &pthread_create )
  {
    do
      v25 = __ldaxr(v24);
    while ( __stlxr(v25 - 1, v24) );
  }
  else
  {
    v25 = (*v24)--;
  }
  if ( v25 > 0 )
  {
LABEL_8:
    if ( (a3 & 1) == 0 )
      goto LABEL_10;
    goto LABEL_9;
  }
  operator delete(v12);
  if ( (a3 & 1) != 0 )
LABEL_9:
    v12 = (void *)sub_5677D4(v31, "_icon", 5);
LABEL_10:
  Caver::TextureLibrary::sharedLibrary((Caver::TextureLibrary *)v12);
  Caver::TextureLibrary::TextureForName();
  v13 = (__int64 *)(a1 + 520);
  v28 = 0;
  v29 = 0;
  Caver::GUITexturedRect::InitWithTexture();
  v14 = v30;
  if ( v30 )
  {
    v15 = *(_DWORD *)(v30 + 8) - 1;
    *(_DWORD *)(v30 + 8) = v15;
    if ( !v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  }
  v16 = *v13;
  if ( *v13 )
    ++*(_DWORD *)(v16 + 8);
  v17.n64_u64[0] = *(unsigned __int64 *)(v16 + 84);
  v18 = *(float *)(a1 + 248);
  if ( v16 )
  {
    v19 = *(_DWORD *)(v16 + 8) - 1;
    *(_DWORD *)(v16 + 8) = v19;
    if ( !v19 )
    {
      v26 = v18;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      v18 = v26;
    }
  }
  v20.n64_u64[0] = vmul_n_f32(v17, v18).n64_u64[0];
  v27 = vsub_f32(
          vadd_f32(*(float32x2_t *)(a1 + 308), vmul_f32(*(float32x2_t *)(a1 + 316), (float32x2_t)0x3F0000003F000000LL)),
          vmul_f32(v20, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  Caver::Vector2::Rounded(&v30, (Caver::Vector2 *)&v27);
  v29 = v20.n64_u64[0];
  v28 = v30;
  Caver::GUITexturedRect::CreateWithBounds((Caver::GUITexturedRect *)(a1 + 520), (const Caver::Rectangle *)&v28, 0);
  v21 = (void *)(v31[0] - 24LL);
  if ( (__int64 *)(v31[0] - 24LL) != &qword_6FD2E0 )
  {
    v22 = (unsigned int *)(v31[0] - 8LL);
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
      operator delete(v21);
  }
}

