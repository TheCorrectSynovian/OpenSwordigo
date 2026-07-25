/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DD66C
 * Mangled: _ZN5Caver11ItemOverlay13IsOverlayItemERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::ItemOverlay::IsOverlayItem(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 2
 *   0x00000000001FEA20  Caver::ItemOverlay::IsOverlayItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003DD450  Caver::ItemOverlay::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 62
 *   insn=0x00000000003DD67C string=0x00000000003DD680 "U"
 *   insn=0x00000000003DD68C string=0x00000000003DD690 "0s"
 *   insn=0x00000000003DD690 string=0x00000000001FA350 "0'"
 *   insn=0x00000000003DD6A8 string=0x00000000005922A8 "overlayitem_"
 *   insn=0x00000000003DD6B4 string=0x00000000003DD6B8 "^"
 *   insn=0x00000000003DD6DC string=0x00000000003DD6E0 "@"
 *   insn=0x00000000003DD6E0 string=0x00000000003DD6E4 ""
 *   insn=0x00000000003DD6E4 string=0x00000000003DD6E8 ""
 *   insn=0x00000000003DD6EC string=0x00000000003DD6F0 ""
 *   insn=0x00000000003DD6F0 string=0x00000000003DD6F4 ""
 *   insn=0x00000000003DD6FC string=0x00000000003DD700 "T"
 *   insn=0x00000000003DD710 string=0x00000000003DD74C ")"
 *   insn=0x00000000003DD720 string=0x00000000003DD770 ")"
 *   insn=0x00000000003DD72C string=0x00000000003DD730 "!"
 *   insn=0x00000000003DD74C string=0x00000000003DD750 ")=G"
 *   insn=0x00000000003DD750 string=0x00000000003DD754 "!"
 *   insn=0x00000000003DD758 string=0x00000000003DD75C "\t"
 *   insn=0x00000000003DD758 string=0x00000000003DD794 "\t"
 *   insn=0x00000000003DD75C string=0x00000000003DD760 "*"
 *   insn=0x00000000003DD760 string=0x00000000003DD764 "\n"
 *   insn=0x00000000003DD768 string=0x00000000003DD76C ""
 *   insn=0x00000000003DD76C string=0x00000000003DD7A0 "?"
 *   insn=0x00000000003DD770 string=0x00000000003DD774 ")=G"
 *   insn=0x00000000003DD774 string=0x00000000003DD778 "!"
 *   insn=0x00000000003DD77C string=0x00000000003DD780 "\t"
 *   insn=0x00000000003DD77C string=0x00000000003DD7B4 "\t"
 *   insn=0x00000000003DD780 string=0x00000000003DD784 "*"
 *   insn=0x00000000003DD784 string=0x00000000003DD788 "\n"
 *   insn=0x00000000003DD790 string=0x00000000003DD7C0 "?"
 *   insn=0x00000000003DD794 string=0x00000000003DD798 "*"
 *   insn=0x00000000003DD798 string=0x00000000003DD79C "\n"
 *   insn=0x00000000003DD7B4 string=0x00000000003DD7B8 "*"
 *   insn=0x00000000003DD7B8 string=0x00000000003DD7BC "\n"
 *   insn=0x00000000003DD7D4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003DD7D8 string=0x00000000003DD7DC ""
 *   insn=0x00000000003DD7E0 string=0x00000000003DD7E4 "J"
 *   insn=0x00000000003DD7E4 string=0x00000000003DD7E8 "J"
 *   insn=0x00000000003DD7EC string=0x00000000003DD7F0 "(a"
 *   insn=0x00000000003DD7F8 string=0x00000000003DD84C "*"
 *   insn=0x00000000003DD7FC string=0x00000000003DD800 "I"
 *   insn=0x00000000003DD800 string=0x00000000003DD804 ")"
 *   insn=0x00000000003DD810 string=0x00000000003DD814 ")"
 *   insn=0x00000000003DD814 string=0x00000000003DD818 ")=G"
 *   insn=0x00000000003DD818 string=0x00000000003DD81C "!"
 *   insn=0x00000000003DD820 string=0x00000000003DD824 "\t"
 *   insn=0x00000000003DD820 string=0x00000000003DD894 "\t"
 *   insn=0x00000000003DD824 string=0x00000000003DD828 "*"
 *   insn=0x00000000003DD828 string=0x00000000003DD82C "\n"
 *   insn=0x00000000003DD830 string=0x00000000003DD834 "?"
 *   insn=0x00000000003DD834 string=0x00000000003DD838 "l"
 *   insn=0x00000000003DD84C string=0x00000000003DD850 "J=G"
 *   insn=0x00000000003DD850 string=0x00000000003DD854 ")!"
 *   insn=0x00000000003DD858 string=0x00000000003DD85C "*"
 *   insn=0x00000000003DD858 string=0x00000000003DD870 "*"
 *   insn=0x00000000003DD85C string=0x00000000003DD860 "K"
 *   insn=0x00000000003DD860 string=0x00000000003DD864 "+"
 *   insn=0x00000000003DD86C string=0x00000000003DD87C "_"
 *   insn=0x00000000003DD870 string=0x00000000003DD874 "K"
 *   insn=0x00000000003DD874 string=0x00000000003DD878 "+"
 *   insn=0x00000000003DD894 string=0x00000000003DD898 "*"
 *   insn=0x00000000003DD898 string=0x00000000003DD89C "\n"
 *   insn=0x00000000003DD89C string=0x00000000003DD8A0 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ItemOverlay::IsOverlayItem(Caver::TextureLibrary *a1, _QWORD *a2)
{
  __int64 v3; // x0
  _BOOL4 v4; // w19
  int v5; // w8
  void *v6; // x0
  void *v7; // x0
  unsigned int *v9; // x8
  int v10; // w9
  unsigned int *v11; // x8
  int v12; // w9
  __int64 v13; // [xsp+8h] [xbp-48h] BYREF
  __int64 v14; // [xsp+10h] [xbp-40h] BYREF
  __int64 v15; // [xsp+18h] [xbp-38h]
  __int64 v16; // [xsp+28h] [xbp-28h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::TextureLibrary::sharedLibrary(a1);
  sub_56A528(&v13, *a2 + 8LL);
  ((void (__fastcall *)(__int64 *__return_ptr, const char *, __int64 *))loc_25A030)(&v14, "overlayitem_", &v13);
  Caver::TextureLibrary::TextureForName();
  v3 = v15;
  v4 = v15 != 0;
  if ( v15 )
  {
    v5 = *(_DWORD *)(v15 + 8) - 1;
    *(_DWORD *)(v15 + 8) = v5;
    if ( !v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v6 = (void *)(v14 - 24);
  if ( (__int64 *)(v14 - 24) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v14 - 8);
    if ( &pthread_create )
    {
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = (*v9)--;
    }
    if ( v10 <= 0 )
      operator delete(v6);
  }
  v7 = (void *)(v13 - 24);
  if ( (__int64 *)(v13 - 24) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v13 - 8);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v7);
  }
  return v4;
}

