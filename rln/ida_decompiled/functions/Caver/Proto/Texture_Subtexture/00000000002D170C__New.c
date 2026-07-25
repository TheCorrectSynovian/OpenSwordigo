/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D170C
 * Mangled: _ZNK5Caver5Proto18Texture_Subtexture3NewEv
 * Demangled: Caver::Proto::Texture_Subtexture::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 7
 *   insn=0x00000000002D1718 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D171C string=0x00000000002D1720 "1D"
 *   insn=0x00000000002D1728 string=0x00000000002D172C ")"
 *   insn=0x00000000002D1730 string=0x00000000002D1734 "A"
 *   insn=0x00000000002D1734 string=0x00000000002D1738 ""
 *   insn=0x00000000002D1738 string=0x00000000002D173C "\t|"
 *   insn=0x00000000002D173C string=0x00000000002D1740 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture_Subtexture::New(Caver::Proto::Texture_Subtexture *this)
{
  __int64 result; // x0

  result = operator new(0x28u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)result = off_6C5D50;
  *(_QWORD *)(result + 16) = &Caver::Proto::Texture_Subtexture::_default_name_;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 1065353216;
  return result;
}

