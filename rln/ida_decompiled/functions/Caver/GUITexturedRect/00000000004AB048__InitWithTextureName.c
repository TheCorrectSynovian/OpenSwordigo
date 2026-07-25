/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB048
 * Mangled: _ZN5Caver15GUITexturedRect19InitWithTextureNameERKSsRKNS_7Vector2E
 * Demangled: Caver::GUITexturedRect::InitWithTextureName(std::string const&,Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001FD390  Caver::GUITexturedRect::InitWithTextureName(std::string const&,Caver::Vector2 const&)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000002029D0  Caver::GUITexturedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 63
 *   insn=0x00000000004AB058 string=0x00000000004AB05C "V"
 *   insn=0x00000000004AB074 string=0x00000000001FA350 "0'"
 *   insn=0x00000000004AB080 string=0x00000000004AB084 "KQ"
 *   insn=0x00000000004AB090 string=0x00000000004AB094 "O^"
 *   insn=0x00000000004AB09C string=0x00000000004AB0A0 "@"
 *   insn=0x00000000004AB0A0 string=0x00000000004AB0A4 ""
 *   insn=0x00000000004AB0A4 string=0x00000000004AB0A8 ""
 *   insn=0x00000000004AB0AC string=0x00000000004AB0B0 ""
 *   insn=0x00000000004AB0B0 string=0x00000000004AB0B4 ""
 *   insn=0x00000000004AB0C8 string=0x00000000004AB0E0 "|,"
 *   insn=0x00000000004AB0E0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004AB0E8 string=0x00000000004AB0EC "("
 *   insn=0x00000000004AB0EC string=0x00000000004AB0F0 "\t\t@"
 *   insn=0x00000000004AB0F0 string=0x00000000004AB0F4 ")"
 *   insn=0x00000000004AB0F4 string=0x00000000004AB0F8 "\t\t"
 *   insn=0x00000000004AB0FC string=0x00000000004AB100 "\t"
 *   insn=0x00000000004AB100 string=0x00000000004AB104 ")"
 *   insn=0x00000000004AB108 string=0x00000000004AB10C " "
 *   insn=0x00000000004AB128 string=0x00000000004AB12C "("
 *   insn=0x00000000004AB13C string=0x00000000004AB140 "\t\t@"
 *   insn=0x00000000004AB13C string=0x00000000004AB14C "`"
 *   insn=0x00000000004AB140 string=0x00000000004AB144 ")"
 *   insn=0x00000000004AB144 string=0x00000000004AB148 "\t\t"
 *   insn=0x00000000004AB14C string=0x00000000004AB150 "h"
 *   insn=0x00000000004AB154 string=0x00000000004AB158 "@"
 *   insn=0x00000000004AB158 string=0x00000000004AB15C ""
 *   insn=0x00000000004AB15C string=0x00000000004AB160 ""
 *   insn=0x00000000004AB164 string=0x00000000004AB168 ""
 *   insn=0x00000000004AB168 string=0x00000000004AB16C ""
 *   insn=0x00000000004AB178 string=0x0000000000583734 "o"
 *   insn=0x00000000004AB180 string=0x00000000004AB184 "`"
 *   insn=0x00000000004AB184 string=0x00000000004AB188 "`"
 *   insn=0x00000000004AB188 string=0x00000000004AB18C "h""
 *   insn=0x00000000004AB190 string=0x00000000004AB194 ""
 *   insn=0x00000000004AB194 string=0x00000000004AB198 "h"
 *   insn=0x00000000004AB19C string=0x00000000004AB1A0 "k"
 *   insn=0x00000000004AB1A0 string=0x00000000004AB1A4 "c"
 *   insn=0x00000000004AB1A4 string=0x00000000004AB1A8 "\t"
 *   insn=0x00000000004AB1AC string=0x00000000004AB1B0 "d"
 *   insn=0x00000000004AB1B8 string=0x00000000004AB1BC "c(%"
 *   insn=0x00000000004AB1BC string=0x00000000004AB1C0 "l"
 *   insn=0x00000000004AB1C4 string=0x00000000004AB1C8 "k""
 *   insn=0x00000000004AB1C8 string=0x00000000004AB1CC "kJ"
 *   insn=0x00000000004AB1CC string=0x00000000004AB1D0 "l~)`6"
 *   insn=0x00000000004AB1D0 string=0x00000000004AB1D4 "`6"
 *   insn=0x00000000004AB1D4 string=0x00000000004AB1D8 "cN"
 *   insn=0x00000000004AB1D8 string=0x00000000004AB1DC "`"
 *   insn=0x00000000004AB1E0 string=0x00000000004AB1E4 "T"
 *   insn=0x00000000004AB1E4 string=0x00000000004AB20C " "
 *   insn=0x00000000004AB1F4 string=0x00000000004AB1F8 "a"
 *   insn=0x00000000004AB1F8 string=0x00000000004AB1FC "d"
 *   insn=0x00000000004AB1FC string=0x00000000004AB200 "eF"
 *   insn=0x00000000004AB200 string=0x00000000004AB204 "dV"
 *   insn=0x00000000004AB204 string=0x00000000004AB208 ""
 *   insn=0x00000000004AB208 string=0x00000000004AB228 "`B"
 *   insn=0x00000000004AB20C string=0x00000000004AB210 "@( "
 *   insn=0x00000000004AB210 string=0x00000000004AB214 "B"
 *   insn=0x00000000004AB214 string=0x00000000004AB218 "i"
 *   insn=0x00000000004AB218 string=0x00000000004AB21C "jF"
 *   insn=0x00000000004AB21C string=0x00000000004AB220 "!(""
 *   insn=0x00000000004AB220 string=0x00000000004AB224 "iV"
 *   insn=0x00000000004AB228 string=0x00000000004AB22C "aZ"
 *   insn=0x00000000004AB22C string=0x00000000004AB230 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITexturedRect::InitWithTextureName(Caver::TextureLibrary *a1)
{
  __int64 result; // x0
  int v2; // w8
  _DWORD *v3; // [xsp+30h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  Caver::TextureLibrary::sharedLibrary(a1);
  Caver::TextureLibrary::TextureForName();
  Caver::GUITexturedRect::InitWithTexture();
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

