/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027ABDC
 * Mangled: _ZN5Caver13ManaComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ManaComponent::InitWithComponent(Caver::ManaComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 3
 *   insn=0x000000000027ABDC string=0x000000000027ABE0 ""
 *   insn=0x000000000027ABE0 string=0x000000000027ABE4 "!"
 *   insn=0x000000000027ABE4 string=0x000000000027ABE8 "\t "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ManaComponent::InitWithComponent(Caver::ManaComponent *this, const Caver::ManaComponent *a2)
{
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  return sub_56A6A8((char *)this + 56);
}

