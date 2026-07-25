/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026E9D0
 * Mangled: _ZN5Caver19EntityInfoComponent17InitWithComponentEPKS0_
 * Demangled: Caver::EntityInfoComponent::InitWithComponent(Caver::EntityInfoComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 5
 *   insn=0x000000000026E9DC string=0x000000000026E9E0 "h"@"
 *   insn=0x000000000026E9E4 string=0x000000000026E9E8 "a"
 *   insn=0x000000000026E9F0 string=0x000000000026E9F4 "-"
 *   insn=0x000000000026E9F8 string=0x000000000026E9FC "a"
 *   insn=0x000000000026EA04 string=0x000000000026EA08 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityInfoComponent::InitWithComponent(
        Caver::EntityInfoComponent *this,
        const Caver::EntityInfoComponent *a2)
{
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  return sub_56A6A8((char *)this + 120);
}

