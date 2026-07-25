/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F1DE0
 * Mangled: _ZNK5Caver5Proto10LevelState3NewEv
 * Demangled: Caver::Proto::LevelState::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 6
 *   insn=0x00000000002F1DEC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002F1DF0 string=0x00000000002F1DF4 "1E"
 *   insn=0x00000000002F1DFC string=0x00000000002F1E00 ")M@"
 *   insn=0x00000000002F1E04 string=0x00000000002F1E08 "A"
 *   insn=0x00000000002F1E10 string=0x00000000002F1E14 "\t"
 *   insn=0x00000000002F1E18 string=0x00000000002F1E1C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::LevelState::New(Caver::Proto::LevelState *this)
{
  __int64 v1; // x0
  double result; // d0

  v1 = operator new(0x38u);
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)&result = 0xFFFFFFFFLL;
  *(_BYTE *)(v1 + 24) = 0;
  *(_QWORD *)(v1 + 32) = 0;
  *(_QWORD *)(v1 + 16) = &Caver::Proto::LevelState::_default_level_name_;
  *(_QWORD *)(v1 + 40) = 0xFFFFFFFFLL;
  *(_QWORD *)v1 = off_6C7000;
  *(_DWORD *)(v1 + 48) = 0;
  return result;
}

