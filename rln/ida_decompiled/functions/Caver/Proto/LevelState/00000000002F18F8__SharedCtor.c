/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F18F8
 * Mangled: _ZN5Caver5Proto10LevelState10SharedCtorEv
 * Demangled: Caver::Proto::LevelState::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000002F18FC string=0x00000000002F1900 "M@"
 *   insn=0x00000000002F190C string=0x00000000002F1910 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::LevelState::SharedCtor(Caver::Proto::LevelState *this)
{
  double result; // d0

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)&result = 0xFFFFFFFFLL;
  *((_BYTE *)this + 24) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 2) = &Caver::Proto::LevelState::_default_level_name_;
  *((_QWORD *)this + 5) = 0xFFFFFFFFLL;
  *((_DWORD *)this + 12) = 0;
  return result;
}

