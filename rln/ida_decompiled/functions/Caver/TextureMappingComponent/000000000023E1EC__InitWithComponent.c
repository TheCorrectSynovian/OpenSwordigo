/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023E1EC
 * Mangled: _ZN5Caver23TextureMappingComponent17InitWithComponentEPKS0_
 * Demangled: Caver::TextureMappingComponent::InitWithComponent(Caver::TextureMappingComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 7
 *   insn=0x000000000023E1F8 string=0x000000000023E1FC "h"@"
 *   insn=0x000000000023E200 string=0x000000000023E204 "a"
 *   insn=0x000000000023E20C string=0x000000000023E210 "&"
 *   insn=0x000000000023E210 string=0x000000000023E214 "a"
 *   insn=0x000000000023E218 string=0x000000000023E21C "#"
 *   insn=0x000000000023E21C string=0x000000000023E220 "hB@"
 *   insn=0x000000000023E224 string=0x000000000023E228 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TextureMappingComponent::InitWithComponent(
        Caver::TextureMappingComponent *this,
        const Caver::TextureMappingComponent *a2)
{
  __int64 result; // x0

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  result = sub_56A6A8((char *)this + 112);
  *((_QWORD *)this + 16) = *((_QWORD *)a2 + 16);
  *((_DWORD *)this + 34) = *((_DWORD *)a2 + 34);
  return result;
}

