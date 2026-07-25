/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002365C8
 * Mangled: _ZN5Caver21ShadowVolumeComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ShadowVolumeComponent::InitWithComponent(Caver::ShadowVolumeComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 4
 *   insn=0x00000000002365C8 string=0x00000000002365CC ""
 *   insn=0x00000000002365CC string=0x00000000002365D0 "!"
 *   insn=0x00000000002365D0 string=0x00000000002365D4 "\t "
 *   insn=0x00000000002365D8 string=0x00000000002365DC "3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShadowVolumeComponent::InitWithComponent(
        Caver::ShadowVolumeComponent *this,
        const Caver::ShadowVolumeComponent *a2)
{
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  return sub_56A6A8((char *)this + 56);
}

