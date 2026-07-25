/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3510
 * Mangled: _ZN5Caver13GlowComponent17InitWithComponentEPKS0_
 * Demangled: Caver::GlowComponent::InitWithComponent(Caver::GlowComponent const*)
 *
 * Callers: 1
 *   0x00000000002032E0  Caver::GlowComponent::InitWithComponent(Caver::GlowComponent const*)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 4
 *   insn=0x00000000002A3510 string=0x00000000002A3514 ""
 *   insn=0x00000000002A3514 string=0x00000000002A3518 "!"
 *   insn=0x00000000002A3518 string=0x00000000002A351C "\t "
 *   insn=0x00000000002A3520 string=0x00000000002A3524 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GlowComponent::InitWithComponent(Caver::GlowComponent *this, const Caver::GlowComponent *a2)
{
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  return sub_56A6A8((char *)this + 56);
}

