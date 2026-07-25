/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002403B4
 * Mangled: _ZN5Caver18TransformComponent17InitWithComponentEPKS0_
 * Demangled: Caver::TransformComponent::InitWithComponent(Caver::TransformComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 3
 *   insn=0x00000000002403B4 string=0x00000000002403B8 ""
 *   insn=0x00000000002403B8 string=0x00000000002403BC "!"
 *   insn=0x00000000002403BC string=0x00000000002403C0 "\t "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TransformComponent::InitWithComponent(
        Caver::TransformComponent *this,
        const Caver::TransformComponent *a2)
{
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  return sub_56A6A8((char *)this + 56);
}

