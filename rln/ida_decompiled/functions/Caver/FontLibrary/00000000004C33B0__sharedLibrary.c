/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C33B0
 * Mangled: _ZN5Caver11FontLibrary13sharedLibraryEv
 * Demangled: Caver::FontLibrary::sharedLibrary(void)
 *
 * Callers: 1
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 6
 *   insn=0x00000000004C33B8 string=0x00000000004C33BC "3"
 *   insn=0x00000000004C33BC string=0x00000000004C33C0 "`"
 *   insn=0x00000000004C33C0 string=0x00000000004C33C4 " "
 *   insn=0x00000000004C33CC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004C33DC string=0x00000000004C33E0 "|"
 *   insn=0x00000000004C33E0 string=0x00000000004C33E4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FontLibrary::sharedLibrary(Caver::FontLibrary *this)
{
  __int64 result; // x0

  result = qword_6E9FA8;
  if ( !qword_6E9FA8 )
  {
    result = operator new(0x38u);
    *(_QWORD *)(result + 8) = 0;
    *(_BYTE *)(result + 48) = 0;
    *(_QWORD *)(result + 16) = 0;
    *(_QWORD *)(result + 24) = result + 8;
    *(_QWORD *)(result + 32) = result + 8;
    *(_QWORD *)(result + 40) = 0;
    qword_6E9FA8 = result;
  }
  return result;
}

