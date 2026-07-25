/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AF0B8
 * Mangled: _ZN5Caver16ShatterComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ShatterComponent::InitWithComponent(Caver::ShatterComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 4
 *   insn=0x00000000002AF0B8 string=0x00000000002AF0BC ""
 *   insn=0x00000000002AF0BC string=0x00000000002AF0C0 "!"
 *   insn=0x00000000002AF0C0 string=0x00000000002AF0C4 "\t "
 *   insn=0x00000000002AF0C8 string=0x00000000002AF0CC "w"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShatterComponent::InitWithComponent(
        Caver::ShatterComponent *this,
        const Caver::ShatterComponent *a2)
{
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  return sub_56A6A8((char *)this + 56);
}

