/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000239B44
 * Mangled: _ZN5Caver20SoundEffectComponent17InitWithComponentEPKS0_
 * Demangled: Caver::SoundEffectComponent::InitWithComponent(Caver::SoundEffectComponent const*)
 *
 * Callers: 1
 *   0x0000000000239B0C  Caver::SoundEffectComponent::~SoundEffectComponent()
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 4
 *   insn=0x0000000000239B50 string=0x0000000000239B54 "h"@"
 *   insn=0x0000000000239B58 string=0x0000000000239B5C "a"
 *   insn=0x0000000000239B68 string=0x0000000000239B6C "a"
 *   insn=0x0000000000239B74 string=0x0000000000239B78 "hB@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SoundEffectComponent::InitWithComponent(
        Caver::SoundEffectComponent *this,
        const Caver::SoundEffectComponent *a2)
{
  __int64 result; // x0

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  result = sub_56A6A8((char *)this + 120);
  *((_QWORD *)this + 16) = *((_QWORD *)a2 + 16);
  return result;
}

