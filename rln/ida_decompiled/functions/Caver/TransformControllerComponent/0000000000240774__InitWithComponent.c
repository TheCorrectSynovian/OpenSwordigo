/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000240774
 * Mangled: _ZN5Caver28TransformControllerComponent17InitWithComponentEPKS0_
 * Demangled: Caver::TransformControllerComponent::InitWithComponent(Caver::TransformControllerComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 3
 *   insn=0x0000000000240774 string=0x0000000000240778 ""
 *   insn=0x0000000000240778 string=0x000000000024077C "!"
 *   insn=0x000000000024077C string=0x0000000000240780 "\t "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TransformControllerComponent::InitWithComponent(
        Caver::TransformControllerComponent *this,
        const Caver::TransformControllerComponent *a2)
{
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  return sub_56A6A8((char *)this + 56);
}

