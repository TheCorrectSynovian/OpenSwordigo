/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026A29C
 * Mangled: _ZN5Caver25EntityControllerComponent17InitWithComponentEPKS0_
 * Demangled: Caver::EntityControllerComponent::InitWithComponent(Caver::EntityControllerComponent const*)
 *
 * Callers: 1
 *   0x0000000000269C68  Caver::EntityControllerComponent::EntityControllerComponent(void)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 9
 *   insn=0x000000000026A2A8 string=0x000000000026A2AC "h"@"
 *   insn=0x000000000026A2B0 string=0x000000000026A2B4 "a"
 *   insn=0x000000000026A2C0 string=0x000000000026A2C4 "hz@"
 *   insn=0x000000000026A2C8 string=0x000000000026A2CC "h"
 *   insn=0x000000000026A2D0 string=0x000000000026A2D4 "h"
 *   insn=0x000000000026A2D8 string=0x000000000026A2DC "h"
 *   insn=0x000000000026A2E0 string=0x000000000026A2E4 "hr@"
 *   insn=0x000000000026A2E8 string=0x000000000026A2EC "h"
 *   insn=0x000000000026A2F0 string=0x000000000026A2F4 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityControllerComponent::InitWithComponent(
        Caver::EntityControllerComponent *this,
        const Caver::EntityControllerComponent *a2)
{
  __int64 result; // x0

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  result = sub_56A6A8((char *)this + 56);
  *((_DWORD *)this + 30) = *((_DWORD *)a2 + 30);
  *((_DWORD *)this + 36) = *((_DWORD *)a2 + 36);
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 42);
  *((_DWORD *)this + 48) = *((_DWORD *)a2 + 48);
  *((_QWORD *)this + 28) = *((_QWORD *)a2 + 28);
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 58);
  *((_DWORD *)this + 62) = *((_DWORD *)a2 + 62);
  return result;
}

