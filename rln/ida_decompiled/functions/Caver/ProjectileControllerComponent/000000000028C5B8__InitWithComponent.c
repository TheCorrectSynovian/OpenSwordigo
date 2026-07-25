/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028C5B8
 * Mangled: _ZN5Caver29ProjectileControllerComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ProjectileControllerComponent::InitWithComponent(Caver::ProjectileControllerComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 5
 *   insn=0x000000000028C5C4 string=0x000000000028C5C8 "h"@"
 *   insn=0x000000000028C5CC string=0x000000000028C5D0 "a"
 *   insn=0x000000000028C5D8 string=0x000000000028C5DC "3x"
 *   insn=0x000000000028C5DC string=0x000000000028C5E0 "h"
 *   insn=0x000000000028C5E4 string=0x000000000028C5E8 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProjectileControllerComponent::InitWithComponent(
        Caver::ProjectileControllerComponent *this,
        const Caver::ProjectileControllerComponent *a2)
{
  __int64 result; // x0

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  result = sub_56A6A8((char *)this + 56);
  *((_BYTE *)this + 112) = *((_BYTE *)a2 + 112);
  *((_BYTE *)this + 113) = *((_BYTE *)a2 + 113);
  return result;
}

