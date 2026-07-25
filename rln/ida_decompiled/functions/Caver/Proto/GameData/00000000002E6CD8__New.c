/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E6CD8
 * Mangled: _ZNK5Caver5Proto8GameData3NewEv
 * Demangled: Caver::Proto::GameData::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 21
 *   insn=0x00000000002E6CE0 string=0x00000000002E6CE4 "?:"
 *   insn=0x00000000002E6CE4 string=0x00000000002E6CE8 " "
 *   insn=0x00000000002E6CE4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E6CE8 string=0x00000000002E6CEC "\t"
 *   insn=0x00000000002E6CEC string=0x00000000002E6CF0 "YG"
 *   insn=0x00000000002E6CF0 string=0x00000000002E6CF4 "\t"
 *   insn=0x00000000002E6CF4 string=0x00000000002E6CF8 "\t"
 *   insn=0x00000000002E6CF8 string=0x00000000002E6CFC "\t$"
 *   insn=0x00000000002E6CFC string=0x00000000002E6D00 "\t`"
 *   insn=0x00000000002E6D00 string=0x00000000002E6D04 "\t@"
 *   insn=0x00000000002E6D04 string=0x00000000002E6D08 "\t@"
 *   insn=0x00000000002E6D08 string=0x00000000002E6D0C "\t\"
 *   insn=0x00000000002E6D0C string=0x00000000002E6D10 "\t "
 *   insn=0x00000000002E6D14 string=0x00000000002E6D18 "\tx"
 *   insn=0x00000000002E6D1C string=0x00000000002E6D20 "A"
 *   insn=0x00000000002E6D28 string=0x00000000002E6D2C "\t "
 *   insn=0x00000000002E6D30 string=0x00000000002E6D34 "\tX"
 *   insn=0x00000000002E6D38 string=0x00000000002E6D3C "\t"
 *   insn=0x00000000002E6D40 string=0x00000000002E6D44 "\t"
 *   insn=0x00000000002E6D48 string=0x00000000002E6D4C "\t"
 *   insn=0x00000000002E6D4C string=0x00000000002E6D50 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::GameData::New(Caver::Proto::GameData *this)
{
  __int64 v1; // x0
  double result; // d0

  v1 = operator new(0x130u);
  *(_QWORD *)(v1 + 16) = v1 + 40;
  *(_QWORD *)(v1 + 72) = v1 + 96;
  *(_QWORD *)(v1 + 128) = v1 + 152;
  *(_QWORD *)(v1 + 184) = v1 + 208;
  result = 0.0;
  *(_QWORD *)(v1 + 240) = v1 + 264;
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 24) = 0;
  *(_DWORD *)(v1 + 32) = 4;
  *(_QWORD *)(v1 + 80) = 0;
  *(_DWORD *)(v1 + 88) = 4;
  *(_QWORD *)(v1 + 136) = 0;
  *(_DWORD *)(v1 + 144) = 4;
  *(_QWORD *)(v1 + 192) = 0;
  *(_DWORD *)(v1 + 200) = 4;
  *(_QWORD *)(v1 + 248) = 0;
  *(_DWORD *)(v1 + 256) = 4;
  *(_QWORD *)v1 = off_6C6B38;
  *(_DWORD *)(v1 + 296) = 0;
  return result;
}

