/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000416238
 * Mangled: _ZN5Caver17ItemInfoPopupView13InitWithSkillERKN5boost10shared_ptrINS_5SkillEEE
 * Demangled: Caver::ItemInfoPopupView::InitWithSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callers: 1
 *   0x000000000041538C  Caver::ItemInfoPopupView::Init(boost::intrusive_ptr<Caver::Texture> const&,std::string const&,std::string const&)
 *
 * Callees: 12
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FB3A0  Caver::ItemInfoPopupView::Init(boost::intrusive_ptr<Caver::Texture> const&,std::string const&,std::string const&)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x0000000000416758  Caver::ItemInfoPopupView::Update(float)
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 164
 *   insn=0x0000000000416248 string=0x000000000041624C "V"
 *   insn=0x000000000041625C string=0x0000000000416260 "<"
 *   insn=0x0000000000416260 string=0x00000000001FA350 "0'"
 *   insn=0x0000000000416274 string=0x0000000000592623 "ui_skill_"
 *   insn=0x0000000000416280 string=0x0000000000416284 "k"
 *   insn=0x0000000000416294 string=0x0000000000593F11 "_icon"
 *   insn=0x00000000004162A0 string=0x00000000004162A4 "LE"
 *   insn=0x00000000004162BC string=0x00000000004162C0 "u"
 *   insn=0x00000000004162D0 string=0x0000000000416390 "i"
 *   insn=0x00000000004162E0 string=0x00000000004163B4 "i"
 *   insn=0x00000000004162EC string=0x00000000004162F0 "A"
 *   insn=0x00000000004162F0 string=0x00000000004163D8 "i"
 *   insn=0x0000000000416324 string=0x00000000001FB3A0 "0'"
 *   insn=0x0000000000416330 string=0x0000000000416334 "A"
 *   insn=0x0000000000416334 string=0x00000000004163FC "i"
 *   insn=0x0000000000416344 string=0x0000000000416420 "i"
 *   insn=0x000000000041634C string=0x0000000000416350 "@"
 *   insn=0x0000000000416350 string=0x0000000000416354 ""
 *   insn=0x0000000000416354 string=0x0000000000416358 ""
 *   insn=0x000000000041635C string=0x0000000000416360 ""
 *   insn=0x0000000000416360 string=0x0000000000416364 ""
 *   insn=0x0000000000416378 string=0x00000000004164EC "y"
 *   insn=0x0000000000416390 string=0x0000000000416394 ")=G"
 *   insn=0x0000000000416394 string=0x0000000000416398 "!"
 *   insn=0x0000000000416398 string=0x000000000041639C "I"
 *   insn=0x000000000041639C string=0x00000000004163A0 "\t"
 *   insn=0x000000000041639C string=0x0000000000416444 "\t"
 *   insn=0x00000000004163A0 string=0x00000000004163A4 "*"
 *   insn=0x00000000004163A4 string=0x00000000004163A8 "\n"
 *   insn=0x00000000004163AC string=0x00000000004163B0 "("
 *   insn=0x00000000004163B0 string=0x0000000000416450 "?"
 *   insn=0x00000000004163B4 string=0x00000000004163B8 ")=G"
 *   insn=0x00000000004163B8 string=0x00000000004163BC "!"
 *   insn=0x00000000004163BC string=0x00000000004163C0 ")"
 *   insn=0x00000000004163C0 string=0x00000000004163C4 "\t"
 *   insn=0x00000000004163C0 string=0x0000000000416464 "\t"
 *   insn=0x00000000004163C4 string=0x00000000004163C8 "*"
 *   insn=0x00000000004163C8 string=0x00000000004163CC "\n"
 *   insn=0x00000000004163D0 string=0x00000000004163D4 "'"
 *   insn=0x00000000004163D4 string=0x0000000000416470 "?"
 *   insn=0x00000000004163D8 string=0x00000000004163DC ")=G"
 *   insn=0x00000000004163DC string=0x00000000004163E0 "!"
 *   insn=0x00000000004163E0 string=0x00000000004163E4 "\t"
 *   insn=0x00000000004163E4 string=0x00000000004163E8 "\t"
 *   insn=0x00000000004163E4 string=0x0000000000416484 "\t"
 *   insn=0x00000000004163E8 string=0x00000000004163EC "*"
 *   insn=0x00000000004163EC string=0x00000000004163F0 "\n"
 *   insn=0x00000000004163F4 string=0x00000000004163F8 "&"
 *   insn=0x00000000004163F8 string=0x0000000000416490 "?"
 *   insn=0x00000000004163FC string=0x0000000000416400 ")=G"
 *   insn=0x0000000000416400 string=0x0000000000416404 "!"
 *   insn=0x0000000000416408 string=0x000000000041640C "\t"
 *   insn=0x0000000000416408 string=0x00000000004164A4 "\t"
 *   insn=0x000000000041640C string=0x0000000000416410 "*"
 *   insn=0x0000000000416410 string=0x0000000000416414 "\n"
 *   insn=0x0000000000416418 string=0x000000000041641C "%"
 *   insn=0x000000000041641C string=0x00000000004164B0 "?"
 *   insn=0x0000000000416420 string=0x0000000000416424 ")=G"
 *   insn=0x0000000000416424 string=0x0000000000416428 "!"
 *   insn=0x000000000041642C string=0x0000000000416430 "\t"
 *   insn=0x000000000041642C string=0x00000000004164C4 "\t"
 *   insn=0x0000000000416430 string=0x0000000000416434 "*"
 *   insn=0x0000000000416434 string=0x0000000000416438 "\n"
 *   insn=0x000000000041643C string=0x0000000000416440 "$"
 *   insn=0x0000000000416440 string=0x00000000004164D0 "?"
 *   insn=0x0000000000416444 string=0x0000000000416448 "*"
 *   insn=0x0000000000416448 string=0x000000000041644C "\n"
 *   insn=0x0000000000416464 string=0x0000000000416468 "*"
 *   insn=0x0000000000416468 string=0x000000000041646C "\n"
 *   insn=0x0000000000416484 string=0x0000000000416488 "*"
 *   insn=0x0000000000416488 string=0x000000000041648C "\n"
 *   insn=0x00000000004164A4 string=0x00000000004164A8 "*"
 *   insn=0x00000000004164A8 string=0x00000000004164AC "\n"
 *   insn=0x00000000004164B0 string=0x00000000004164B4 ","
 *   insn=0x00000000004164C4 string=0x00000000004164C8 "*"
 *   insn=0x00000000004164C8 string=0x00000000004164CC "\n"
 *   insn=0x00000000004164E0 string=0x00000000004164E4 "`"
 *   insn=0x00000000004164EC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004164F4 string=0x00000000004164F8 "(a"
 *   insn=0x0000000000416500 string=0x0000000000416504 "j"
 *   insn=0x0000000000416504 string=0x0000000000416508 "J=G"
 *   insn=0x0000000000416508 string=0x000000000041650C ")!"
 *   insn=0x0000000000416510 string=0x0000000000416514 "*"
 *   insn=0x0000000000416510 string=0x0000000000416528 "*"
 *   insn=0x0000000000416514 string=0x0000000000416518 "K"
 *   insn=0x0000000000416518 string=0x000000000041651C "+"
 *   insn=0x0000000000416524 string=0x0000000000416534 "_"
 *   insn=0x0000000000416528 string=0x000000000041652C "K"
 *   insn=0x000000000041652C string=0x0000000000416530 "+"
 *   insn=0x000000000041655C string=0x0000000000416560 "i"
 *   insn=0x0000000000416560 string=0x0000000000416564 ")=G"
 *   insn=0x0000000000416564 string=0x0000000000416568 "!"
 *   insn=0x000000000041656C string=0x0000000000416570 "\t"
 *   insn=0x000000000041656C string=0x000000000041659C "\t"
 *   insn=0x0000000000416570 string=0x0000000000416574 "*"
 *   insn=0x0000000000416574 string=0x0000000000416578 "\n"
 *   insn=0x000000000041657C string=0x0000000000416580 "?"
 *   insn=0x0000000000416590 string=0x0000000000416594 "`"
 *   insn=0x0000000000416594 string=0x0000000000416598 "n"
 *   insn=0x0000000000416594 string=0x00000000004165C0 "@"
 *   insn=0x000000000041659C string=0x00000000004165A0 "*"
 *   insn=0x00000000004165A0 string=0x00000000004165A4 "\n"
 *   insn=0x00000000004165A4 string=0x00000000004165A8 "?"
 *   insn=0x00000000004165C0 string=0x00000000004165C4 ""
 *   insn=0x00000000004165C4 string=0x00000000004165C8 ""
 *   insn=0x00000000004165C8 string=0x00000000004165CC "!"
 *   insn=0x00000000004165CC string=0x00000000004165D0 ""
 *   insn=0x00000000004165D0 string=0x00000000004165D4 ""
 *   insn=0x00000000004165D8 string=0x00000000004165DC "]"
 *   insn=0x00000000004165E4 string=0x00000000004165E8 "j"
 *   insn=0x00000000004165E8 string=0x00000000004165EC "J"
 *   insn=0x00000000004165F0 string=0x00000000004165F4 "(a"
 *   insn=0x00000000004165FC string=0x0000000000416600 "j"
 *   insn=0x0000000000416600 string=0x0000000000416604 "J=G"
 *   insn=0x0000000000416604 string=0x0000000000416608 ")!"
 *   insn=0x000000000041660C string=0x0000000000416610 "*"
 *   insn=0x000000000041660C string=0x0000000000416664 "*"
 *   insn=0x0000000000416610 string=0x0000000000416614 "K"
 *   insn=0x0000000000416614 string=0x0000000000416618 "+"
 *   insn=0x0000000000416620 string=0x0000000000416670 "_"
 *   insn=0x0000000000416624 string=0x0000000000416628 "j"
 *   insn=0x0000000000416628 string=0x000000000041662C "J"
 *   insn=0x0000000000416630 string=0x0000000000416634 "(a"
 *   insn=0x000000000041663C string=0x0000000000416640 "j"
 *   insn=0x0000000000416640 string=0x0000000000416644 "J=G"
 *   insn=0x0000000000416644 string=0x0000000000416648 ")!"
 *   insn=0x000000000041664C string=0x0000000000416650 "*"
 *   insn=0x0000000000416650 string=0x0000000000416654 "K"
 *   insn=0x0000000000416654 string=0x0000000000416658 "+"
 *   insn=0x0000000000416664 string=0x0000000000416668 "K"
 *   insn=0x0000000000416668 string=0x000000000041666C "+"
 *   insn=0x000000000041667C string=0x0000000000416680 "IO"
 *   insn=0x000000000041668C string=0x0000000000416690 "i"
 *   insn=0x0000000000416690 string=0x0000000000416694 ")"
 *   insn=0x000000000041669C string=0x00000000004166A0 "`"
 *   insn=0x00000000004166A0 string=0x00000000004166A4 "i"
 *   insn=0x00000000004166A4 string=0x00000000004166A8 ")=G"
 *   insn=0x00000000004166A8 string=0x00000000004166AC "!"
 *   insn=0x00000000004166B0 string=0x00000000004166B4 "\t"
 *   insn=0x00000000004166B0 string=0x00000000004166C8 "\t"
 *   insn=0x00000000004166B4 string=0x00000000004166B8 "*"
 *   insn=0x00000000004166B8 string=0x00000000004166BC "\n"
 *   insn=0x00000000004166C4 string=0x00000000004166D4 "?"
 *   insn=0x00000000004166C8 string=0x00000000004166CC "*"
 *   insn=0x00000000004166CC string=0x00000000004166D0 "\n"
 *   insn=0x00000000004166DC string=0x00000000004166E0 "1O"
 *   insn=0x00000000004166EC string=0x00000000004166F0 "i"
 *   insn=0x00000000004166F0 string=0x00000000004166F4 ")"
 *   insn=0x0000000000416700 string=0x0000000000416704 "i"
 *   insn=0x0000000000416704 string=0x0000000000416708 ")=G"
 *   insn=0x0000000000416708 string=0x000000000041670C "!"
 *   insn=0x000000000041670C string=0x0000000000416710 "i"
 *   insn=0x0000000000416710 string=0x0000000000416714 "\t"
 *   insn=0x0000000000416710 string=0x000000000041673C "\t"
 *   insn=0x0000000000416714 string=0x0000000000416718 "*"
 *   insn=0x0000000000416718 string=0x000000000041671C "\n"
 *   insn=0x0000000000416720 string=0x0000000000416724 "?"
 *   insn=0x0000000000416724 string=0x0000000000416728 "L"
 *   insn=0x0000000000416734 string=0x0000000000416738 "c"
 *   insn=0x000000000041673C string=0x0000000000416740 "*"
 *   insn=0x0000000000416740 string=0x0000000000416744 "\n"
 *   insn=0x0000000000416744 string=0x0000000000416748 "?"
 *   insn=0x0000000000416748 string=0x000000000041674C ""
 *   insn=0x0000000000416750 string=0x0000000000416754 "\"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::ItemInfoPopupView::InitWithSkill(Caver::TextureLibrary *a1, _QWORD *a2)
{
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0
  void *v7; // x0
  _DWORD *result; // x0
  int v9; // w8
  unsigned int *v10; // x8
  int v11; // w9
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9
  unsigned int *v18; // x8
  int v19; // w9
  __int64 v20; // [xsp+0h] [xbp-50h] BYREF
  __int64 v21; // [xsp+8h] [xbp-48h] BYREF
  __int64 v22; // [xsp+10h] [xbp-40h] BYREF
  _DWORD *v23; // [xsp+18h] [xbp-38h]
  __int64 v24; // [xsp+28h] [xbp-28h]

  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::TextureLibrary::sharedLibrary(a1);
  sub_56A528(&v20, *a2);
  ((void (__fastcall *)(__int64 *__return_ptr, const char *, __int64 *))loc_25A030)(&v21, "ui_skill_", &v20);
  sub_56A528(&v22, &v21);
  sub_5677D4(&v22, "_icon", 5);
  Caver::TextureLibrary::TextureForName();
  v3 = (void *)(v22 - 24);
  if ( (__int64 *)(v22 - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v22 - 8);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
    }
    else
    {
      v11 = (*v10)--;
    }
    if ( v11 <= 0 )
      operator delete(v3);
  }
  v4 = (void *)(v21 - 24);
  if ( (__int64 *)(v21 - 24) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v21 - 8);
    if ( &pthread_create )
    {
      do
        v13 = __ldaxr(v12);
      while ( __stlxr(v13 - 1, v12) );
    }
    else
    {
      v13 = (*v12)--;
    }
    if ( v13 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(v20 - 24);
  if ( (__int64 *)(v20 - 24) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v20 - 8);
    if ( &pthread_create )
    {
      do
        v15 = __ldaxr(v14);
      while ( __stlxr(v15 - 1, v14) );
    }
    else
    {
      v15 = (*v14)--;
    }
    if ( v15 <= 0 )
      operator delete(v5);
  }
  sub_56A528(&v22, *a2 + 8LL);
  sub_56A528(&v21, *a2 + 16LL);
  Caver::ItemInfoPopupView::Init();
  v6 = (void *)(v21 - 24);
  if ( (__int64 *)(v21 - 24) != &qword_6FD2E0 )
  {
    v16 = (unsigned int *)(v21 - 8);
    if ( &pthread_create )
    {
      do
        v17 = __ldaxr(v16);
      while ( __stlxr(v17 - 1, v16) );
    }
    else
    {
      v17 = (*v16)--;
    }
    if ( v17 <= 0 )
      operator delete(v6);
  }
  v7 = (void *)(v22 - 24);
  if ( (__int64 *)(v22 - 24) == &qword_6FD2E0 )
    goto LABEL_6;
  v18 = (unsigned int *)(v22 - 8);
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
  if ( v19 > 0 )
  {
LABEL_6:
    result = v23;
    if ( !v23 )
      return result;
  }
  else
  {
    operator delete(v7);
    result = v23;
    if ( !v23 )
      return result;
  }
  v9 = result[2] - 1;
  result[2] = v9;
  if ( !v9 )
    return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  return result;
}

