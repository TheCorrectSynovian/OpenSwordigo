/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022B938
 * Mangled: _ZN5Caver16OverlayComponent17InitWithComponentEPKS0_
 * Demangled: Caver::OverlayComponent::InitWithComponent(Caver::OverlayComponent const*)
 *
 * Callers: 1
 *   0x00000000001F5810  Caver::OverlayComponent::InitWithComponent(Caver::OverlayComponent const*)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 4
 *   insn=0x000000000022B938 string=0x000000000022B93C ""
 *   insn=0x000000000022B93C string=0x000000000022B940 "!"
 *   insn=0x000000000022B940 string=0x000000000022B944 "\t "
 *   insn=0x000000000022B948 string=0x000000000022B94C "W"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayComponent::InitWithComponent(
        Caver::OverlayComponent *this,
        const Caver::OverlayComponent *a2)
{
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  return sub_56A6A8((char *)this + 56);
}

