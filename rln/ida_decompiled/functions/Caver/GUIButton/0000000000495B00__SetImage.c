/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000495B00
 * Mangled: _ZN5Caver9GUIButton8SetImageERKSs
 * Demangled: Caver::GUIButton::SetImage(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F4C60  Caver::GUIButton::SetImage(std::string const&)
 *
 * Callees: 11
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FC750  Caver::GUIButton::SetImage(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001FD850  Caver::GUITexturedRect::GUITexturedRect(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000002029D0  Caver::GUITexturedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000495D00  Caver::GUIButton::SetHighlightedImage(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 37
 *   insn=0x0000000000495B10 string=0x0000000000495B14 "U"
 *   insn=0x0000000000495B24 string=0x0000000000495B28 "\n"
 *   insn=0x0000000000495B28 string=0x00000000001FA350 "0'"
 *   insn=0x0000000000495B44 string=0x00000000001FC750 "0'"
 *   insn=0x0000000000495B4C string=0x0000000000495B50 "@"
 *   insn=0x0000000000495B50 string=0x0000000000495B54 ""
 *   insn=0x0000000000495B54 string=0x0000000000495B58 ""
 *   insn=0x0000000000495B5C string=0x0000000000495B60 ""
 *   insn=0x0000000000495B60 string=0x0000000000495B64 ""
 *   insn=0x0000000000495B90 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000495B98 string=0x0000000000495B9C "("
 *   insn=0x0000000000495B9C string=0x0000000000495BA0 "\t\t@"
 *   insn=0x0000000000495BA0 string=0x0000000000495BA4 ")"
 *   insn=0x0000000000495BA4 string=0x0000000000495BA8 "\t\t"
 *   insn=0x0000000000495BAC string=0x0000000000495BB0 "\t"
 *   insn=0x0000000000495BB0 string=0x0000000000495BB4 ")"
 *   insn=0x0000000000495BB8 string=0x0000000000495BBC " "
 *   insn=0x0000000000495BC0 string=0x0000000000495BC4 "@"
 *   insn=0x0000000000495BE0 string=0x0000000000495BE4 "W"
 *   insn=0x0000000000495BF4 string=0x0000000000495BF8 "h"
 *   insn=0x0000000000495C08 string=0x0000000000495C0C "u~"
 *   insn=0x0000000000495C0C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000495C14 string=0x00000000001FD850 "0'"
 *   insn=0x0000000000495C28 string=0x0000000000495C2C "@"
 *   insn=0x0000000000495C2C string=0x0000000000495C30 ""
 *   insn=0x0000000000495C30 string=0x0000000000495C34 ""
 *   insn=0x0000000000495C38 string=0x0000000000495C3C ""
 *   insn=0x0000000000495C3C string=0x0000000000495C40 ""
 *   insn=0x0000000000495C4C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000495C64 string=0x0000000000495C68 "Z"
 *   insn=0x0000000000495C78 string=0x0000000000495C7C "`"
 *   insn=0x0000000000495C80 string=0x0000000000495C84 "@"
 *   insn=0x0000000000495C84 string=0x0000000000495C88 ""
 *   insn=0x0000000000495C88 string=0x0000000000495C8C ""
 *   insn=0x0000000000495C90 string=0x0000000000495C94 ""
 *   insn=0x0000000000495C94 string=0x0000000000495C98 ""
 *   insn=0x0000000000495CDC string=0x0000000000495CF4 "o"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIButton::SetImage(Caver::TextureLibrary *a1)
{
  __int64 result; // x0
  int v2; // w8
  _DWORD *v3; // [xsp+50h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  Caver::TextureLibrary::sharedLibrary(a1);
  Caver::TextureLibrary::TextureForName();
  Caver::GUIButton::SetImage();
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

