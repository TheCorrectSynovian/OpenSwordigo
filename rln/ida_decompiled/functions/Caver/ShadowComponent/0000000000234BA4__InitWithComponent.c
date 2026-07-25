/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000234BA4
 * Mangled: _ZN5Caver15ShadowComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ShadowComponent::InitWithComponent(Caver::ShadowComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 4
 *   insn=0x0000000000234BB0 string=0x0000000000234BB4 "h"@"
 *   insn=0x0000000000234BB8 string=0x0000000000234BBC "a"
 *   insn=0x0000000000234BC8 string=0x0000000000234BCC "`"
 *   insn=0x0000000000234BD0 string=0x0000000000234BD4 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::ShadowComponent::InitWithComponent(
        Caver::ShadowComponent *this,
        const Caver::ShadowComponent *a2)
{
  long double result; // q0

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  result = *(long double *)((char *)a2 + 124);
  *(long double *)((char *)this + 124) = result;
  *((_DWORD *)this + 35) = *((_DWORD *)a2 + 35);
  return result;
}

