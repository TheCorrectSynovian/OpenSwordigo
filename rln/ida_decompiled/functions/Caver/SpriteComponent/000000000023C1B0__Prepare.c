/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023C1B0
 * Mangled: _ZN5Caver15SpriteComponent7PrepareEv
 * Demangled: Caver::SpriteComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F73A0  Caver::Component::UpdateObjectBounds(void)
 *   0x00000000001F78E0  std::vector<Caver::Binding,std::allocator<Caver::Binding>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Binding*,std::vector<Caver::Binding,std::allocator<Caver::Binding>>>,Caver::Binding const&)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FD450  Caver::SpriteComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000001FD5B0  Caver::Sprite::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 93
 *   insn=0x000000000023C1C0 string=0x000000000023C1C4 "U"
 *   insn=0x000000000023C1D8 string=0x000000000023C1DC ""
 *   insn=0x000000000023C1E0 string=0x000000000023C1E4 "["
 *   insn=0x000000000023C1E4 string=0x00000000001FA350 "0'"
 *   insn=0x000000000023C204 string=0x000000000023C208 "("
 *   insn=0x000000000023C208 string=0x000000000023C20C "`>@"
 *   insn=0x000000000023C21C string=0x000000000023C220 "h>@"
 *   insn=0x000000000023C21C string=0x00000000001FD5B0 "0'"
 *   insn=0x000000000023C224 string=0x000000000023C228 "`"
 *   insn=0x000000000023C22C string=0x000000000023C230 "\"
 *   insn=0x000000000023C230 string=0x00000000001F73A0 "0'"
 *   insn=0x000000000023C238 string=0x000000000023C23C "@"
 *   insn=0x000000000023C23C string=0x000000000023C240 ""
 *   insn=0x000000000023C240 string=0x000000000023C244 ""
 *   insn=0x000000000023C248 string=0x000000000023C24C ""
 *   insn=0x000000000023C24C string=0x000000000023C250 ""
 *   insn=0x000000000023C27C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023C284 string=0x000000000023C288 "("
 *   insn=0x000000000023C288 string=0x000000000023C28C "\t\t@"
 *   insn=0x000000000023C28C string=0x000000000023C290 ")"
 *   insn=0x000000000023C290 string=0x000000000023C294 "\t\t"
 *   insn=0x000000000023C298 string=0x000000000023C29C "\t"
 *   insn=0x000000000023C29C string=0x000000000023C2A0 ")"
 *   insn=0x000000000023C2A4 string=0x000000000023C2A8 " "
 *   insn=0x000000000023C2B0 string=0x000000000023C2B4 "&H"
 *   insn=0x000000000023C2CC string=0x000000000023C2D0 "V"
 *   insn=0x000000000023C2E0 string=0x000000000059C36B "texture"
 *   insn=0x000000000023C2EC string=0x000000000023C2F0 "2"
 *   insn=0x000000000023C308 string=0x000000000023C30C " "
 *   insn=0x000000000023C314 string=0x000000000023C318 "t"
 *   insn=0x000000000023C328 string=0x000000000023C32C ""
 *   insn=0x000000000023C330 string=0x000000000023C334 "}"
 *   insn=0x000000000023C338 string=0x000000000023C33C "\t\t@"
 *   insn=0x000000000023C340 string=0x000000000023C344 ""
 *   insn=0x000000000023C348 string=0x000000000023C34C "h"
 *   insn=0x000000000023C34C string=0x000000000023C350 ""
 *   insn=0x000000000023C350 string=0x000000000023C354 "h"
 *   insn=0x000000000023C364 string=0x000000000023C368 "^"
 *   insn=0x000000000023C368 string=0x00000000001F78E0 "0'"
 *   insn=0x000000000023C36C string=0x000000000023C370 "S%"
 *   insn=0x000000000023C370 string=0x000000000023C374 "s"
 *   insn=0x000000000023C380 string=0x000000000023C3BC "I%"
 *   insn=0x000000000023C390 string=0x000000000023C3E0 "I%"
 *   insn=0x000000000023C39C string=0x000000000023C3A0 "!"
 *   insn=0x000000000023C3BC string=0x000000000023C3C0 ")=G"
 *   insn=0x000000000023C3C0 string=0x000000000023C3C4 "!"
 *   insn=0x000000000023C3C8 string=0x000000000023C3CC "\t"
 *   insn=0x000000000023C3C8 string=0x000000000023C404 "\t"
 *   insn=0x000000000023C3CC string=0x000000000023C3D0 "*"
 *   insn=0x000000000023C3D0 string=0x000000000023C3D4 "\n"
 *   insn=0x000000000023C3D8 string=0x000000000023C3DC ""
 *   insn=0x000000000023C3DC string=0x000000000023C410 "?"
 *   insn=0x000000000023C3E0 string=0x000000000023C3E4 ")=G"
 *   insn=0x000000000023C3E4 string=0x000000000023C3E8 "!"
 *   insn=0x000000000023C3EC string=0x000000000023C3F0 "\t"
 *   insn=0x000000000023C3EC string=0x000000000023C424 "\t"
 *   insn=0x000000000023C3F0 string=0x000000000023C3F4 "*"
 *   insn=0x000000000023C3F4 string=0x000000000023C3F8 "\n"
 *   insn=0x000000000023C400 string=0x000000000023C430 "?"
 *   insn=0x000000000023C404 string=0x000000000023C408 "*"
 *   insn=0x000000000023C408 string=0x000000000023C40C "\n"
 *   insn=0x000000000023C424 string=0x000000000023C428 "*"
 *   insn=0x000000000023C428 string=0x000000000023C42C "\n"
 *   insn=0x000000000023C448 string=0x000000000023C44C "J%"
 *   insn=0x000000000023C44C string=0x000000000023C450 "J"
 *   insn=0x000000000023C454 string=0x000000000023C458 "(a"
 *   insn=0x000000000023C460 string=0x000000000023C464 "J%"
 *   insn=0x000000000023C464 string=0x000000000023C468 "J=G"
 *   insn=0x000000000023C468 string=0x000000000023C46C ")!"
 *   insn=0x000000000023C470 string=0x000000000023C474 "*"
 *   insn=0x000000000023C470 string=0x000000000023C488 "*"
 *   insn=0x000000000023C474 string=0x000000000023C478 "K"
 *   insn=0x000000000023C478 string=0x000000000023C47C "+"
 *   insn=0x000000000023C484 string=0x000000000023C494 "_"
 *   insn=0x000000000023C488 string=0x000000000023C48C "K"
 *   insn=0x000000000023C48C string=0x000000000023C490 "+"
 *   insn=0x000000000023C4B0 string=0x000000000023C4B4 "I%"
 *   insn=0x000000000023C4B4 string=0x000000000023C4B8 ")"
 *   insn=0x000000000023C4C4 string=0x000000000023C4C8 "I%"
 *   insn=0x000000000023C4C8 string=0x000000000023C4CC ")=G"
 *   insn=0x000000000023C4CC string=0x000000000023C4D0 "!"
 *   insn=0x000000000023C4D0 string=0x000000000023C4D4 "i"
 *   insn=0x000000000023C4D4 string=0x000000000023C4D8 "\t"
 *   insn=0x000000000023C4D4 string=0x000000000023C500 "\t"
 *   insn=0x000000000023C4D8 string=0x000000000023C4DC "*"
 *   insn=0x000000000023C4DC string=0x000000000023C4E0 "\n"
 *   insn=0x000000000023C4E4 string=0x000000000023C4E8 "?"
 *   insn=0x000000000023C4E8 string=0x000000000023C4EC "l"
 *   insn=0x000000000023C500 string=0x000000000023C504 "*"
 *   insn=0x000000000023C504 string=0x000000000023C508 "\n"
 *   insn=0x000000000023C508 string=0x000000000023C50C "?"
 *   insn=0x000000000023C50C string=0x000000000023C510 ""
 *   insn=0x000000000023C51C string=0x00000000001FD450 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::SpriteComponent::Prepare(_QWORD *this)
{
  _QWORD *v1; // x19
  _QWORD *v2; // x20
  int v3; // w8
  _DWORD *v4; // [xsp+78h] [xbp-40h]

  v1 = this;
  _ReadStatusReg(TPIDR_EL0);
  v2 = this + 14;
  if ( *(_QWORD *)(this[14] - 24LL) )
  {
    Caver::TextureLibrary::sharedLibrary((Caver::TextureLibrary *)this);
    this = (_QWORD *)Caver::TextureLibrary::TextureForName();
    if ( v4 )
    {
      sub_56A6A8(v2);
      Caver::Sprite::InitWithTexture((Caver::Sprite *)v1[15]);
      *(_OWORD *)(v1 + 17) = *(_OWORD *)(v1[15] + 8LL);
      Caver::Component::UpdateObjectBounds((Caver::Component *)v1);
      this = v4;
      v3 = v4[2] - 1;
      v4[2] = v3;
      if ( !v3 )
        return (_QWORD *)(*(__int64 (__fastcall **)())(*(_QWORD *)v4 + 8LL))();
    }
  }
  return this;
}

