/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023C678
 * Mangled: _ZN5Caver15SpriteComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SpriteComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x0000000000203D40  Caver::SpriteComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F73A0  Caver::Component::UpdateObjectBounds(void)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FD5B0  Caver::Sprite::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 57
 *   insn=0x000000000023C684 string=0x000000000023C688 "T"
 *   insn=0x000000000023C694 string=0x000000000023C698 "a"
 *   insn=0x000000000023C698 string=0x000000000023C69C "A"
 *   insn=0x000000000023C6AC string=0x000000000023C6B0 "\t"
 *   insn=0x000000000023C6B0 string=0x000000000023C6B4 "\t"
 *   insn=0x000000000023C6B4 string=0x000000000023C6B8 "&"
 *   insn=0x000000000023C6B4 string=0x000000000023C734 "I%"
 *   insn=0x000000000023C6B8 string=0x00000000001FA350 "0'"
 *   insn=0x000000000023C6D4 string=0x000000000023C6D8 "`"
 *   insn=0x000000000023C6DC string=0x000000000023C6E0 "`>@"
 *   insn=0x000000000023C6F0 string=0x000000000023C6F4 "h>@"
 *   insn=0x000000000023C6F0 string=0x00000000001FD5B0 "0'"
 *   insn=0x000000000023C6F8 string=0x000000000023C6FC "`"
 *   insn=0x000000000023C700 string=0x000000000023C704 "'"
 *   insn=0x000000000023C704 string=0x00000000001F73A0 "0'"
 *   insn=0x000000000023C70C string=0x000000000023C710 "@"
 *   insn=0x000000000023C710 string=0x000000000023C714 ""
 *   insn=0x000000000023C714 string=0x000000000023C718 ""
 *   insn=0x000000000023C71C string=0x000000000023C720 ""
 *   insn=0x000000000023C720 string=0x000000000023C724 ""
 *   insn=0x000000000023C734 string=0x000000000023C738 ")"
 *   insn=0x000000000023C73C string=0x000000000023C740 "!"
 *   insn=0x000000000023C740 string=0x000000000023C764 "I%"
 *   insn=0x000000000023C764 string=0x000000000023C768 ")=G"
 *   insn=0x000000000023C768 string=0x000000000023C76C "!"
 *   insn=0x000000000023C770 string=0x000000000023C774 "\t"
 *   insn=0x000000000023C770 string=0x000000000023C788 "\t"
 *   insn=0x000000000023C774 string=0x000000000023C778 "*"
 *   insn=0x000000000023C778 string=0x000000000023C77C "\n"
 *   insn=0x000000000023C784 string=0x000000000023C794 "?"
 *   insn=0x000000000023C788 string=0x000000000023C78C "*"
 *   insn=0x000000000023C78C string=0x000000000023C790 "\n"
 *   insn=0x000000000023C794 string=0x000000000023C798 "l"
 *   insn=0x000000000023C7A8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023C7B4 string=0x000000000023C7B8 "\t\t@"
 *   insn=0x000000000023C7B8 string=0x000000000023C7BC ")"
 *   insn=0x000000000023C7BC string=0x000000000023C7C0 "\t\t"
 *   insn=0x000000000023C7C4 string=0x000000000023C7C8 "\t"
 *   insn=0x000000000023C7C8 string=0x000000000023C7CC ")"
 *   insn=0x000000000023C7D0 string=0x000000000023C7D4 " "
 *   insn=0x000000000023C7E4 string=0x000000000023C7E8 "I%"
 *   insn=0x000000000023C7E8 string=0x000000000023C7EC ")"
 *   insn=0x000000000023C7F8 string=0x000000000023C7FC "I%"
 *   insn=0x000000000023C7FC string=0x000000000023C800 ")=G"
 *   insn=0x000000000023C800 string=0x000000000023C804 "!"
 *   insn=0x000000000023C804 string=0x000000000023C808 "i"
 *   insn=0x000000000023C808 string=0x000000000023C80C "\t"
 *   insn=0x000000000023C808 string=0x000000000023C834 "\t"
 *   insn=0x000000000023C80C string=0x000000000023C810 "*"
 *   insn=0x000000000023C810 string=0x000000000023C814 "\n"
 *   insn=0x000000000023C818 string=0x000000000023C81C "?"
 *   insn=0x000000000023C81C string=0x000000000023C820 "l"
 *   insn=0x000000000023C82C string=0x000000000023C830 "%"
 *   insn=0x000000000023C834 string=0x000000000023C838 "*"
 *   insn=0x000000000023C838 string=0x000000000023C83C "\n"
 *   insn=0x000000000023C83C string=0x000000000023C840 "?"
 *   insn=0x000000000023C840 string=0x000000000023C844 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SpriteComponent::SetValueForBindedProperty(
        Caver::SpriteComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 v4; // x8
  Caver::TextureLibrary *v5; // x0
  Caver::Sprite *v6; // x0
  int v7; // w8
  unsigned int *v8; // x8
  int v9; // w9
  _DWORD *v10; // [xsp+8h] [xbp-38h]
  _QWORD v11[4]; // [xsp+10h] [xbp-30h] BYREF

  v11[3] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !a2 )
  {
    sub_56A528(v11, *((_QWORD *)a3 + 1));
    v4 = v11[0];
    v5 = (Caver::TextureLibrary *)(v11[0] - 24LL);
    if ( *(_QWORD *)(v11[0] - 24LL) )
    {
      Caver::TextureLibrary::sharedLibrary(v5);
      Caver::TextureLibrary::TextureForName();
      if ( v10 )
      {
        sub_56A6A8((char *)this + 112);
        v6 = (Caver::Sprite *)*((_QWORD *)this + 15);
        v11[1] = 0;
        v11[2] = 0;
        Caver::Sprite::InitWithTexture(v6);
        *(_OWORD *)((char *)this + 136) = *(_OWORD *)(*((_QWORD *)this + 15) + 8LL);
        Caver::Component::UpdateObjectBounds(this);
        v7 = v10[2] - 1;
        v10[2] = v7;
        if ( !v7 )
          (*(void (__fastcall **)())(*(_QWORD *)v10 + 8LL))();
      }
      v4 = v11[0];
      v5 = (Caver::TextureLibrary *)(v11[0] - 24LL);
    }
    if ( v5 != (Caver::TextureLibrary *)&qword_6FD2E0 )
    {
      v8 = (unsigned int *)(v4 - 8);
      if ( &pthread_create )
      {
        do
          v9 = __ldaxr(v8);
        while ( __stlxr(v9 - 1, v8) );
      }
      else
      {
        v9 = (*v8)--;
      }
      if ( v9 <= 0 )
        operator delete(v5);
    }
  }
}

