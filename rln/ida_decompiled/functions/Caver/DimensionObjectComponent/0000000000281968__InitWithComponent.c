/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281968
 * Mangled: _ZN5Caver24DimensionObjectComponent17InitWithComponentEPKS0_
 * Demangled: Caver::DimensionObjectComponent::InitWithComponent(Caver::DimensionObjectComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 4
 *   insn=0x0000000000281968 string=0x000000000028196C ""
 *   insn=0x000000000028196C string=0x0000000000281970 "!"
 *   insn=0x0000000000281970 string=0x0000000000281974 "\t "
 *   insn=0x0000000000281978 string=0x000000000028197C "K"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DimensionObjectComponent::InitWithComponent(
        Caver::DimensionObjectComponent *this,
        const Caver::DimensionObjectComponent *a2)
{
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  return sub_56A6A8((char *)this + 56);
}

