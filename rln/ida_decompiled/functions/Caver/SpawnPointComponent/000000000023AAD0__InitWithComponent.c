/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023AAD0
 * Mangled: _ZN5Caver19SpawnPointComponent17InitWithComponentEPKS0_
 * Demangled: Caver::SpawnPointComponent::InitWithComponent(Caver::SpawnPointComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 3
 *   insn=0x000000000023AADC string=0x000000000023AAE0 "h"@"
 *   insn=0x000000000023AAE4 string=0x000000000023AAE8 "a"
 *   insn=0x000000000023AAF4 string=0x000000000023AAF8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::SpawnPointComponent::InitWithComponent(
        Caver::SpawnPointComponent *this,
        const Caver::SpawnPointComponent *a2)
{
  long double result; // q0

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  result = *((long double *)a2 + 7);
  *((long double *)this + 7) = result;
  return result;
}

