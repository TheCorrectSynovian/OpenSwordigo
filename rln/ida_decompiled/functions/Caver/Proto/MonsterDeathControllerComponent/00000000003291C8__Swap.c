/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003291C8
 * Mangled: _ZN5Caver5Proto31MonsterDeathControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::MonsterDeathControllerComponent::Swap(Caver::Proto::MonsterDeathControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x00000000003291CC string=0x00000000003291D0 "("
 *   insn=0x00000000003291D0 string=0x00000000003291D4 "\t"
 *   insn=0x00000000003291D4 string=0x00000000003291D8 ""
 *   insn=0x00000000003291D8 string=0x00000000003291DC ")"
 *   insn=0x00000000003291DC string=0x00000000003291E0 "("
 *   insn=0x00000000003291E0 string=0x00000000003291E4 "\t"
 *   insn=0x00000000003291E4 string=0x00000000003291E8 ""
 *   insn=0x00000000003291E8 string=0x00000000003291EC ")"
 *   insn=0x00000000003291EC string=0x00000000003291F0 "(@"
 *   insn=0x00000000003291F0 string=0x00000000003291F4 "\t@"
 *   insn=0x00000000003291F4 string=0x00000000003291F8 ""
 *   insn=0x00000000003291F8 string=0x00000000003291FC ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::MonsterDeathControllerComponent *__fastcall Caver::Proto::MonsterDeathControllerComponent::Swap(
        Caver::Proto::MonsterDeathControllerComponent *this,
        Caver::Proto::MonsterDeathControllerComponent *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9

  if ( a2 != this )
  {
    v2 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

