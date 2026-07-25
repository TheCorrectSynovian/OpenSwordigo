/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E51C0
 * Mangled: _ZN5Caver5Proto11GameOptions10SharedCtorEv
 * Demangled: Caver::Proto::GameOptions::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000002E51D4 string=0x00000000002E51D8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::GameOptions::SharedCtor(Caver::Proto::GameOptions *this)
{
  double result; // d0

  __asm { FMOV            V0.2S, #1.0 }
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
  *((_BYTE *)this + 106) = 0;
  *((_WORD *)this + 36) = 257;
  *(double *)((char *)this + 76) = result;
  *((_WORD *)this + 52) = 0;
  return result;
}

