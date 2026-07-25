/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003145F0
 * Mangled: _ZN5Caver5Proto15EntityComponent10SharedCtorEv
 * Demangled: Caver::Proto::EntityComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000003145F8 string=0x00000000003145FC "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::EntityComponent::SharedCtor(Caver::Proto::EntityComponent *this)
{
  double result; // d0

  *(_QWORD *)&result = 0x100000000LL;
  *((_BYTE *)this + 16) = 1;
  *((_DWORD *)this + 5) = 0;
  *((_QWORD *)this + 1) = 0x100000000LL;
  return result;
}

