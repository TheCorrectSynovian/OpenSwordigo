/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021DD10
 * Mangled: _ZN5Caver19BackgroundComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::BackgroundComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001FC1D0  Caver::BackgroundComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FD5B0  Caver::Sprite::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 52
 *   insn=0x000000000021DD1C string=0x000000000021DD20 "T"
 *   insn=0x000000000021DD2C string=0x000000000021DD30 "A"
 *   insn=0x000000000021DD30 string=0x000000000021DD34 "A"
 *   insn=0x000000000021DD44 string=0x000000000021DD48 "\t"
 *   insn=0x000000000021DD4C string=0x000000000021DD50 "sB@"
 *   insn=0x000000000021DD4C string=0x000000000021DDA8 "I&"
 *   insn=0x000000000021DD54 string=0x00000000001FA350 "0'"
 *   insn=0x000000000021DD78 string=0x00000000001FD5B0 "0'"
 *   insn=0x000000000021DD80 string=0x000000000021DD84 "@"
 *   insn=0x000000000021DD84 string=0x000000000021DD88 ""
 *   insn=0x000000000021DD88 string=0x000000000021DD8C ""
 *   insn=0x000000000021DD90 string=0x000000000021DD94 ""
 *   insn=0x000000000021DD94 string=0x000000000021DD98 ""
 *   insn=0x000000000021DDA8 string=0x000000000021DDAC ")"
 *   insn=0x000000000021DDB0 string=0x000000000021DDB4 "!"
 *   insn=0x000000000021DDB4 string=0x000000000021DDD8 ")&"
 *   insn=0x000000000021DDC4 string=0x000000000021DE1C "-a"
 *   insn=0x000000000021DDD8 string=0x000000000021DDDC ")=G"
 *   insn=0x000000000021DDDC string=0x000000000021DDE0 "!"
 *   insn=0x000000000021DDE4 string=0x000000000021DDE8 "\t"
 *   insn=0x000000000021DDE4 string=0x000000000021DDFC "\t"
 *   insn=0x000000000021DDE8 string=0x000000000021DDEC "*"
 *   insn=0x000000000021DDEC string=0x000000000021DDF0 "\n"
 *   insn=0x000000000021DDF8 string=0x000000000021DE08 "?"
 *   insn=0x000000000021DDFC string=0x000000000021DE00 "*"
 *   insn=0x000000000021DE00 string=0x000000000021DE04 "\n"
 *   insn=0x000000000021DE08 string=0x000000000021DE0C "l"
 *   insn=0x000000000021DE10 string=0x000000000021DE14 "d1"
 *   insn=0x000000000021DE1C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021DE28 string=0x000000000021DE2C "\t\t@"
 *   insn=0x000000000021DE2C string=0x000000000021DE30 ")"
 *   insn=0x000000000021DE30 string=0x000000000021DE34 "\t\t"
 *   insn=0x000000000021DE38 string=0x000000000021DE3C "\t"
 *   insn=0x000000000021DE3C string=0x000000000021DE40 ")"
 *   insn=0x000000000021DE44 string=0x000000000021DE48 " "
 *   insn=0x000000000021DE58 string=0x000000000021DE5C "I&"
 *   insn=0x000000000021DE5C string=0x000000000021DE60 ")"
 *   insn=0x000000000021DE6C string=0x000000000021DE70 ")&"
 *   insn=0x000000000021DE70 string=0x000000000021DE74 ")=G"
 *   insn=0x000000000021DE74 string=0x000000000021DE78 "!"
 *   insn=0x000000000021DE78 string=0x000000000021DE7C "i"
 *   insn=0x000000000021DE7C string=0x000000000021DE80 "\t"
 *   insn=0x000000000021DE7C string=0x000000000021DEA8 "\t"
 *   insn=0x000000000021DE80 string=0x000000000021DE84 "*"
 *   insn=0x000000000021DE84 string=0x000000000021DE88 "\n"
 *   insn=0x000000000021DE8C string=0x000000000021DE90 "?"
 *   insn=0x000000000021DE90 string=0x000000000021DE94 "l"
 *   insn=0x000000000021DE98 string=0x000000000021DE9C "B1"
 *   insn=0x000000000021DEA8 string=0x000000000021DEAC "*"
 *   insn=0x000000000021DEAC string=0x000000000021DEB0 "\n"
 *   insn=0x000000000021DEB0 string=0x000000000021DEB4 "?"
 *   insn=0x000000000021DEB4 string=0x000000000021DEB8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BackgroundComponent::SetValueForBindedProperty(
        Caver::BackgroundComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 v4; // x8
  Caver::TextureLibrary *v5; // x0
  Caver::Sprite *v6; // x19
  int v7; // w8
  unsigned int *v8; // x8
  int v9; // w9
  _DWORD *v10; // [xsp+18h] [xbp-28h]
  _QWORD v11[2]; // [xsp+20h] [xbp-20h] BYREF

  v11[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !a2 )
  {
    sub_56A528(v11, *((_QWORD *)a3 + 1));
    v4 = v11[0];
    v5 = (Caver::TextureLibrary *)(v11[0] - 24LL);
    if ( *(_QWORD *)(v11[0] - 24LL) )
    {
      v6 = (Caver::Sprite *)*((_QWORD *)this + 16);
      Caver::TextureLibrary::sharedLibrary(v5);
      Caver::TextureLibrary::TextureForName();
      Caver::Sprite::InitWithTexture(v6);
      if ( v10 )
      {
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

