/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A9820
 * Mangled: _ZN5Caver14GUIRoundedRect19InitWithTextureNameERKSs
 * Demangled: Caver::GUIRoundedRect::InitWithTextureName(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F8300  Caver::GUIRoundedRect::InitWithTextureName(std::string const&)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9E10  Caver::GUIRoundedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 43
 *   insn=0x00000000004A9830 string=0x00000000004A9834 "U"
 *   insn=0x00000000004A9848 string=0x00000000001FA350 "0'"
 *   insn=0x00000000004A9854 string=0x00000000004A9858 "VW"
 *   insn=0x00000000004A9860 string=0x00000000004A9864 "kA"
 *   insn=0x00000000004A9864 string=0x00000000001F9E10 "0'"
 *   insn=0x00000000004A986C string=0x00000000004A9870 "@"
 *   insn=0x00000000004A9870 string=0x00000000004A9874 ""
 *   insn=0x00000000004A9874 string=0x00000000004A9878 ""
 *   insn=0x00000000004A987C string=0x00000000004A9880 ""
 *   insn=0x00000000004A9880 string=0x00000000004A9884 ""
 *   insn=0x00000000004A98B0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A98B8 string=0x00000000004A98BC "("
 *   insn=0x00000000004A98BC string=0x00000000004A98C0 "\t\t@"
 *   insn=0x00000000004A98C0 string=0x00000000004A98C4 ")"
 *   insn=0x00000000004A98C4 string=0x00000000004A98C8 "\t\t"
 *   insn=0x00000000004A98CC string=0x00000000004A98D0 "\t"
 *   insn=0x00000000004A98D0 string=0x00000000004A98D4 ")"
 *   insn=0x00000000004A98D8 string=0x00000000004A98DC " "
 *   insn=0x00000000004A98F4 string=0x00000000004A98F8 "("
 *   insn=0x00000000004A9900 string=0x00000000004A9904 "\t\t@"
 *   insn=0x00000000004A9900 string=0x00000000004A9910 "`"
 *   insn=0x00000000004A9904 string=0x00000000004A9908 ")"
 *   insn=0x00000000004A9908 string=0x00000000004A990C "\t\t"
 *   insn=0x00000000004A9910 string=0x00000000004A9914 "h"
 *   insn=0x00000000004A9914 string=0x00000000004A9918 " "
 *   insn=0x00000000004A9918 string=0x00000000004A991C "\t@"
 *   insn=0x00000000004A991C string=0x00000000004A9920 ")"
 *   insn=0x00000000004A9920 string=0x00000000004A9924 "\t"
 *   insn=0x00000000004A9928 string=0x00000000004A992C ""
 *   insn=0x00000000004A992C string=0x00000000004A9930 ""
 *   insn=0x00000000004A9934 string=0x00000000004A9938 "h"
 *   insn=0x00000000004A9950 string=0x00000000004A9954 "B"
 *   insn=0x00000000004A9960 string=0x00000000004A9964 "e"
 *   insn=0x00000000004A996C string=0x00000000004A9970 "e@%"
 *   insn=0x00000000004A9974 string=0x00000000004A9978 "c"
 *   insn=0x00000000004A9978 string=0x00000000004A997C "d"
 *   insn=0x00000000004A997C string=0x00000000004A9980 "$"
 *   insn=0x00000000004A9980 string=0x00000000004A9984 "!"
 *   insn=0x00000000004A9984 string=0x00000000004A9988 "c@%"
 *   insn=0x00000000004A9988 string=0x00000000004A998C "!"
 *   insn=0x00000000004A9990 string=0x00000000004A9994 "e"
 *   insn=0x00000000004A9994 string=0x00000000004A9998 "`B"
 *   insn=0x00000000004A9998 string=0x00000000004A999C "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIRoundedRect::InitWithTextureName(Caver::TextureLibrary *a1)
{
  __int64 result; // x0
  int v2; // w8
  _DWORD *v3; // [xsp+20h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  Caver::TextureLibrary::sharedLibrary(a1);
  Caver::TextureLibrary::TextureForName();
  Caver::GUIRoundedRect::InitWithTexture();
  result = (__int64)v3;
  if ( v3 )
  {
    v2 = v3[2] - 1;
    v3[2] = v2;
    if ( !v2 )
      return (*(__int64 (__fastcall **)())(*(_QWORD *)v3 + 8LL))();
  }
  return result;
}

