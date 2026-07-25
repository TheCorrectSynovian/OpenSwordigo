/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028777C
 * Mangled: _ZN5Caver23MagicExplosionComponent7PrepareEv
 * Demangled: Caver::MagicExplosionComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FD5B0  Caver::Sprite::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x0000000000200840  Caver::MagicExplosionComponent::CreateStarPolygon(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 48
 *   insn=0x000000000028778C string=0x0000000000287790 "U"
 *   insn=0x000000000028779C string=0x00000000002877A0 "("
 *   insn=0x00000000002877AC string=0x00000000001FA350 "0'"
 *   insn=0x00000000002877B4 string=0x000000000058831A "particle_explosion"
 *   insn=0x00000000002877D4 string=0x00000000002877D8 "v"
 *   insn=0x00000000002877D8 string=0x00000000002877DC ""
 *   insn=0x00000000002877E0 string=0x00000000002877E4 "`""
 *   insn=0x00000000002877F0 string=0x00000000002877F4 "o"
 *   insn=0x00000000002877F4 string=0x00000000001FD5B0 "0'"
 *   insn=0x00000000002877FC string=0x0000000000287800 "@"
 *   insn=0x0000000000287800 string=0x0000000000287804 ""
 *   insn=0x0000000000287804 string=0x0000000000287808 ""
 *   insn=0x000000000028780C string=0x0000000000287810 ""
 *   insn=0x0000000000287810 string=0x0000000000287814 ""
 *   insn=0x0000000000287820 string=0x0000000000287824 ")"
 *   insn=0x000000000028782C string=0x0000000000287830 "A"
 *   insn=0x0000000000287858 string=0x000000000028785C ")=G"
 *   insn=0x000000000028785C string=0x0000000000287860 "!"
 *   insn=0x0000000000287864 string=0x0000000000287868 "\t"
 *   insn=0x0000000000287864 string=0x000000000028787C "\t"
 *   insn=0x0000000000287868 string=0x000000000028786C "*"
 *   insn=0x000000000028786C string=0x0000000000287870 "\n"
 *   insn=0x0000000000287878 string=0x0000000000287888 "?"
 *   insn=0x000000000028787C string=0x0000000000287880 "*"
 *   insn=0x0000000000287880 string=0x0000000000287884 "\n"
 *   insn=0x0000000000287888 string=0x000000000028788C "L"
 *   insn=0x000000000028789C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002878A8 string=0x00000000002878AC "\t\t@"
 *   insn=0x00000000002878AC string=0x00000000002878B0 ")"
 *   insn=0x00000000002878B0 string=0x00000000002878B4 "\t\t"
 *   insn=0x00000000002878B4 string=0x00000000002878B8 "!"
 *   insn=0x00000000002878B8 string=0x00000000002878BC "\t"
 *   insn=0x00000000002878BC string=0x00000000002878C0 ")"
 *   insn=0x00000000002878C4 string=0x00000000002878C8 " "
 *   insn=0x00000000002878E0 string=0x00000000002878E4 ")"
 *   insn=0x00000000002878F4 string=0x00000000002878F8 ")=G"
 *   insn=0x00000000002878F8 string=0x00000000002878FC "!"
 *   insn=0x00000000002878FC string=0x0000000000287900 "i"
 *   insn=0x0000000000287900 string=0x0000000000287904 "\t"
 *   insn=0x0000000000287900 string=0x000000000028792C "\t"
 *   insn=0x0000000000287904 string=0x0000000000287908 "*"
 *   insn=0x0000000000287908 string=0x000000000028790C "\n"
 *   insn=0x0000000000287910 string=0x0000000000287914 "?"
 *   insn=0x0000000000287914 string=0x0000000000287918 "l"
 *   insn=0x000000000028792C string=0x0000000000287930 "*"
 *   insn=0x0000000000287930 string=0x0000000000287934 "\n"
 *   insn=0x0000000000287934 string=0x0000000000287938 "?"
 *   insn=0x0000000000287938 string=0x000000000028793C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicExplosionComponent::Prepare(Caver::MagicExplosionComponent *this)
{
  Caver::TextureLibrary *StarPolygon; // x0
  __int64 v3; // x0
  int v4; // w8
  void *v5; // x0
  unsigned int *v6; // x8
  int v7; // w9
  __int64 v8; // [xsp+18h] [xbp-38h] BYREF
  __int64 v9; // [xsp+20h] [xbp-30h]
  __int64 v10; // [xsp+28h] [xbp-28h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  StarPolygon = (Caver::TextureLibrary *)Caver::MagicExplosionComponent::CreateStarPolygon(this);
  *(_QWORD *)((char *)this + 252) = 0;
  *(_QWORD *)((char *)this + 244) = 0;
  Caver::TextureLibrary::sharedLibrary(StarPolygon);
  sub_566BB8((int)&v8, "particle_explosion");
  Caver::TextureLibrary::TextureForName();
  Caver::Sprite::InitWithTexture((Caver::MagicExplosionComponent *)((char *)this + 264));
  v3 = v9;
  if ( v9 )
  {
    v4 = *(_DWORD *)(v9 + 8) - 1;
    *(_DWORD *)(v9 + 8) = v4;
    if ( !v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v5 = (void *)(v8 - 24);
  if ( (__int64 *)(v8 - 24) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(v8 - 8);
    if ( &pthread_create )
    {
      do
        v7 = __ldaxr(v6);
      while ( __stlxr(v7 - 1, v6) );
    }
    else
    {
      v7 = (*v6)--;
    }
    if ( v7 <= 0 )
      operator delete(v5);
  }
}

