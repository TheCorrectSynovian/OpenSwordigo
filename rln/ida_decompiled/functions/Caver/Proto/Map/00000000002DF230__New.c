/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DF230
 * Mangled: _ZNK5Caver5Proto3Map3NewEv
 * Demangled: Caver::Proto::Map::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 8
 *   insn=0x00000000002DF23C string=0x00000000002DF240 "( "
 *   insn=0x00000000002DF23C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002DF240 string=0x00000000002DF244 ""
 *   insn=0x00000000002DF244 string=0x00000000002DF248 "\t"
 *   insn=0x00000000002DF24C string=0x00000000002DF250 "\t|"
 *   insn=0x00000000002DF250 string=0x00000000002DF254 "A"
 *   insn=0x00000000002DF258 string=0x00000000002DF25C "\n "
 *   insn=0x00000000002DF25C string=0x00000000002DF260 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Map::New(Caver::Proto::Map *this)
{
  __int64 result; // x0

  result = operator new(0x50u);
  *(_QWORD *)(result + 16) = result + 40;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = 4;
  *(_QWORD *)result = off_6C6778;
  *(_DWORD *)(result + 72) = 0;
  return result;
}

