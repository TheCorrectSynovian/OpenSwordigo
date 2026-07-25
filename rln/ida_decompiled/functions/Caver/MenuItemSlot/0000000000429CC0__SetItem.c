/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000429CC0
 * Mangled: _ZN5Caver12MenuItemSlot7SetItemERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::MenuItemSlot::SetItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x0000000000202710  Caver::MenuItemSlot::SetItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 13
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6360  Caver::GUITexturedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,bool)
 *   0x00000000001F95E0  Caver::GUITexturedRect::CreateWithBounds(Caver::Rectangle const&,bool)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000202F00  Caver::GUITexturedRect::Reset(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 90
 *   insn=0x0000000000429CD8 string=0x0000000000429CDC "W"
 *   insn=0x0000000000429CF4 string=0x0000000000429CF8 "\n"
 *   insn=0x0000000000429CF4 string=0x0000000000429D04 "t"
 *   insn=0x0000000000429CF8 string=0x0000000000429CFC "J"
 *   insn=0x0000000000429CFC string=0x0000000000429D00 "\n"
 *   insn=0x0000000000429D04 string=0x0000000000429D08 "i""
 *   insn=0x0000000000429D08 string=0x0000000000429D0C "4"
 *   insn=0x0000000000429D10 string=0x0000000000429D14 ""
 *   insn=0x0000000000429D24 string=0x0000000000429D28 "\t@"
 *   insn=0x0000000000429D30 string=0x0000000000429D34 ""
 *   insn=0x0000000000429D44 string=0x0000000000429D48 "@"
 *   insn=0x0000000000429D50 string=0x0000000000429D54 "t""
 *   insn=0x0000000000429D58 string=0x0000000000429D5C "}A"
 *   insn=0x0000000000429D5C string=0x00000000001FA350 "0'"
 *   insn=0x0000000000429D70 string=0x0000000000429D74 "@"
 *   insn=0x0000000000429D74 string=0x00000000005922AF "item_"
 *   insn=0x0000000000429DAC string=0x0000000000429DB0 "l1"
 *   insn=0x0000000000429DB0 string=0x00000000001F6360 "0'"
 *   insn=0x0000000000429DB8 string=0x0000000000429DBC "@"
 *   insn=0x0000000000429DBC string=0x0000000000429DC0 ""
 *   insn=0x0000000000429DC0 string=0x0000000000429DC4 ""
 *   insn=0x0000000000429DC8 string=0x0000000000429DCC ""
 *   insn=0x0000000000429DCC string=0x0000000000429DD0 ""
 *   insn=0x0000000000429E04 string=0x0000000000429E08 "@"
 *   insn=0x0000000000429E08 string=0x0000000000429E0C ""
 *   insn=0x0000000000429E0C string=0x0000000000429E10 ""
 *   insn=0x0000000000429E14 string=0x0000000000429E18 "a"
 *   insn=0x0000000000429E18 string=0x0000000000429E1C ""
 *   insn=0x0000000000429E20 string=0x0000000000429E24 "@"
 *   insn=0x0000000000429E20 string=0x0000000000429E40 "i"
 *   insn=0x0000000000429E24 string=0x0000000000429E28 ""
 *   insn=0x0000000000429E28 string=0x0000000000429E2C ""
 *   insn=0x0000000000429E30 string=0x0000000000429E34 ""
 *   insn=0x0000000000429E34 string=0x0000000000429E38 ""
 *   insn=0x0000000000429E40 string=0x0000000000429E44 "h"
 *   insn=0x0000000000429E44 string=0x0000000000429E48 " "
 *   insn=0x0000000000429E58 string=0x0000000000429E5C " "
 *   insn=0x0000000000429E70 string=0x00000000001FDA30 "0'"
 *   insn=0x0000000000429E8C string=0x00000000001F95E0 "0'"
 *   insn=0x0000000000429EC8 string=0x0000000000429ECC ")=G"
 *   insn=0x0000000000429ECC string=0x0000000000429ED0 "!"
 *   insn=0x0000000000429ED4 string=0x0000000000429ED8 "\t"
 *   insn=0x0000000000429ED4 string=0x0000000000429F10 "\t"
 *   insn=0x0000000000429ED8 string=0x0000000000429EDC "*"
 *   insn=0x0000000000429EDC string=0x0000000000429EE0 "\n"
 *   insn=0x0000000000429EE4 string=0x0000000000429EE8 ""
 *   insn=0x0000000000429EE8 string=0x0000000000429F1C "?"
 *   insn=0x0000000000429EEC string=0x0000000000429EF0 ")=G"
 *   insn=0x0000000000429EF0 string=0x0000000000429EF4 "!"
 *   insn=0x0000000000429EF8 string=0x0000000000429EFC "\t"
 *   insn=0x0000000000429EF8 string=0x0000000000429F30 "\t"
 *   insn=0x0000000000429EFC string=0x0000000000429F00 "*"
 *   insn=0x0000000000429F00 string=0x0000000000429F04 "\n"
 *   insn=0x0000000000429F0C string=0x0000000000429F3C "?"
 *   insn=0x0000000000429F10 string=0x0000000000429F14 "*"
 *   insn=0x0000000000429F14 string=0x0000000000429F18 "\n"
 *   insn=0x0000000000429F30 string=0x0000000000429F34 "*"
 *   insn=0x0000000000429F34 string=0x0000000000429F38 "\n"
 *   insn=0x0000000000429F58 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000429F64 string=0x0000000000429F68 "\t\t@"
 *   insn=0x0000000000429F68 string=0x0000000000429F6C ")"
 *   insn=0x0000000000429F6C string=0x0000000000429F70 "\t\t"
 *   insn=0x0000000000429F70 string=0x0000000000429F74 "A"
 *   insn=0x0000000000429F74 string=0x0000000000429F78 "\t"
 *   insn=0x0000000000429F78 string=0x0000000000429F7C ")"
 *   insn=0x0000000000429F80 string=0x0000000000429F84 " "
 *   insn=0x0000000000429F90 string=0x0000000000429F94 ""
 *   insn=0x0000000000429FA0 string=0x0000000000429FA4 ")"
 *   insn=0x0000000000429FB8 string=0x0000000000429FBC ")"
 *   insn=0x0000000000429FCC string=0x0000000000429FD0 ")=G"
 *   insn=0x0000000000429FD0 string=0x0000000000429FD4 "!"
 *   insn=0x0000000000429FD8 string=0x0000000000429FDC "\t"
 *   insn=0x0000000000429FD8 string=0x000000000042A048 "\t"
 *   insn=0x0000000000429FDC string=0x0000000000429FE0 "*"
 *   insn=0x0000000000429FE0 string=0x0000000000429FE4 "\n"
 *   insn=0x0000000000429FE8 string=0x0000000000429FEC "?"
 *   insn=0x0000000000429FEC string=0x0000000000429FF0 "l"
 *   insn=0x0000000000429FFC string=0x000000000042A000 "1^"
 *   insn=0x000000000042A004 string=0x000000000042A008 ")=G"
 *   insn=0x000000000042A008 string=0x000000000042A00C "!"
 *   insn=0x000000000042A010 string=0x000000000042A014 "\t"
 *   insn=0x000000000042A010 string=0x000000000042A028 "\t"
 *   insn=0x000000000042A014 string=0x000000000042A018 "*"
 *   insn=0x000000000042A018 string=0x000000000042A01C "\n"
 *   insn=0x000000000042A024 string=0x000000000042A034 "?"
 *   insn=0x000000000042A028 string=0x000000000042A02C "*"
 *   insn=0x000000000042A02C string=0x000000000042A030 "\n"
 *   insn=0x000000000042A048 string=0x000000000042A04C "*"
 *   insn=0x000000000042A04C string=0x000000000042A050 "\n"
 *   insn=0x000000000042A050 string=0x000000000042A054 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MenuItemSlot::SetItem(Caver::TextureLibrary *a1, __int64 *a2)
{
  Caver::TextureLibrary *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 *v9; // x20
  __int64 v10; // x0
  int v11; // w8
  void *v12; // x0
  void *v13; // x0
  __int64 v14; // x0
  float32x2_t v15; // d8
  int v16; // w8
  unsigned int *v18; // x8
  int v19; // w9
  unsigned int *v20; // x8
  int v21; // w9
  unsigned __int64 v22; // [xsp+8h] [xbp-68h] BYREF
  __int64 v23; // [xsp+10h] [xbp-60h] BYREF
  unsigned __int64 v24; // [xsp+18h] [xbp-58h]
  __int64 v25; // [xsp+20h] [xbp-50h] BYREF
  __int64 v26; // [xsp+28h] [xbp-48h] BYREF
  __int64 v27[2]; // [xsp+30h] [xbp-40h] BYREF

  v3 = a1;
  v27[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *a2;
  v4 = a2[1];
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  v6 = (_QWORD *)*((_QWORD *)a1 + 33);
  *((_QWORD *)a1 + 32) = v5;
  *((_QWORD *)a1 + 33) = v4;
  if ( v6 )
  {
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      a1 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        a1 = (Caver::TextureLibrary *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  v9 = (__int64 *)((char *)v3 + 520);
  if ( !*a2 )
    return Caver::GUITexturedRect::Reset((Caver::TextureLibrary *)((char *)v3 + 520));
  Caver::TextureLibrary::sharedLibrary(a1);
  sub_56A528(&v25, *a2 + 8);
  ((void (__fastcall *)(__int64 *__return_ptr, char *, __int64 *))loc_25A030)(&v26, "item_", &v25);
  Caver::TextureLibrary::TextureForName();
  v23 = 0;
  v24 = 0;
  Caver::GUITexturedRect::InitWithTexture();
  v10 = v27[0];
  if ( v27[0] )
  {
    v11 = *(_DWORD *)(v27[0] + 8) - 1;
    *(_DWORD *)(v27[0] + 8) = v11;
    if ( !v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
  v12 = (void *)(v26 - 24);
  if ( (__int64 *)(v26 - 24) != &qword_6FD2E0 )
  {
    v18 = (unsigned int *)(v26 - 8);
    if ( &pthread_create )
    {
      do
        v19 = __ldaxr(v18);
      while ( __stlxr(v19 - 1, v18) );
    }
    else
    {
      v19 = (*v18)--;
    }
    if ( v19 <= 0 )
      operator delete(v12);
  }
  v13 = (void *)(v25 - 24);
  if ( (__int64 *)(v25 - 24) != &qword_6FD2E0 )
  {
    v20 = (unsigned int *)(v25 - 8);
    if ( &pthread_create )
    {
      do
        v21 = __ldaxr(v20);
      while ( __stlxr(v21 - 1, v20) );
    }
    else
    {
      v21 = (*v20)--;
    }
    if ( v21 <= 0 )
    {
      operator delete(v13);
      v14 = *v9;
      if ( !*v9 )
        goto LABEL_15;
      goto LABEL_14;
    }
  }
  v14 = *v9;
  if ( *v9 )
LABEL_14:
    ++*(_DWORD *)(v14 + 8);
LABEL_15:
  v15.n64_u64[0] = vmul_n_f32(*(float32x2_t *)(v14 + 84), *((float *)v3 + 62)).n64_u64[0];
  if ( v14 )
  {
    v16 = *(_DWORD *)(v14 + 8) - 1;
    *(_DWORD *)(v14 + 8) = v16;
    if ( !v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  }
  v22 = vsub_f32(
          vadd_f32(
            *(float32x2_t *)((char *)v3 + 308),
            vmul_f32(*(float32x2_t *)((char *)v3 + 316), (float32x2_t)0x3F0000003F000000LL)),
          vmul_f32(v15, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  Caver::Vector2::Rounded(v27, (Caver::Vector2 *)&v22);
  v23 = v27[0];
  v24 = v15.n64_u64[0];
  return Caver::GUITexturedRect::CreateWithBounds(
           (Caver::TextureLibrary *)((char *)v3 + 520),
           (const Caver::Rectangle *)&v23,
           0);
}

