/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D2B5C
 * Mangled: _ZNK5Caver5Proto7Texture3NewEv
 * Demangled: Caver::Proto::Texture::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 10
 *   insn=0x00000000002D2B68 string=0x00000000002D2B6C ""
 *   insn=0x00000000002D2B68 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D2B6C string=0x00000000002D2B70 ""
 *   insn=0x00000000002D2B74 string=0x00000000002D2B78 "0"
 *   insn=0x00000000002D2B7C string=0x00000000002D2B80 ""
 *   insn=0x00000000002D2B80 string=0x00000000002D2B84 ""
 *   insn=0x00000000002D2B88 string=0x00000000002D2B8C ""
 *   insn=0x00000000002D2B90 string=0x00000000002D2B94 "mD"
 *   insn=0x00000000002D2BA0 string=0x00000000002D2BA4 "A"
 *   insn=0x00000000002D2BA8 string=0x00000000002D2BAC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture::New(Caver::Proto::Texture *this)
{
  __int64 result; // x0

  result = operator new(0x70u);
  *(_QWORD *)(result + 32) = result + 56;
  *(_DWORD *)(result + 48) = 4;
  *(_QWORD *)(result + 16) = &Caver::Proto::Texture::_default_name_;
  *(_DWORD *)(result + 24) = 1;
  *(_QWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 88) = 0;
  *(_QWORD *)(result + 96) = 0;
  *(_QWORD *)result = off_6C5E40;
  *(_DWORD *)(result + 104) = 0;
  return result;
}

