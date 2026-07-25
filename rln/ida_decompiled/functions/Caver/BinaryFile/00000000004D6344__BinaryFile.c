/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D6344
 * Mangled: _ZN5Caver10BinaryFileC2ERKSsNS0_4ModeEb
 * Demangled: Caver::BinaryFile::BinaryFile(std::string const&,Caver::BinaryFile::Mode,bool)
 *
 * Callers: 1
 *   0x00000000001FAFA0  Caver::BinaryFile::BinaryFile(std::string const&,Caver::BinaryFile::Mode,bool)
 *
 * Callees: 1
 *   0x00000000002005B0  Caver::BinaryFile::Open(std::string const&,Caver::BinaryFile::Mode,bool)
 *
 * Referenced strings: 4
 *   insn=0x00000000004D634C string=0x00000000004D6350 "("
 *   insn=0x00000000004D6350 string=0x00000000004D6354 ""
 *   insn=0x00000000004D6354 string=0x00000000004D6358 "h"
 *   insn=0x00000000004D6358 string=0x00000000004D635C "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BinaryFile::BinaryFile(__int64 result, _QWORD *a2)
{
  *(_DWORD *)result = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 16) = 0;
  if ( *(_QWORD *)(*a2 - 24LL) )
    return Caver::BinaryFile::Open();
  return result;
}

