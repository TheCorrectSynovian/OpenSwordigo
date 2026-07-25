/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3B48
 * Mangled: _ZN5Caver24OrbitControllerComponent17InitWithComponentEPKS0_
 * Demangled: Caver::OrbitControllerComponent::InitWithComponent(Caver::OrbitControllerComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 4
 *   insn=0x00000000002A3B54 string=0x00000000002A3B58 "h"@"
 *   insn=0x00000000002A3B5C string=0x00000000002A3B60 "a"
 *   insn=0x00000000002A3B6C string=0x00000000002A3B70 "`"
 *   insn=0x00000000002A3B74 string=0x00000000002A3B78 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::OrbitControllerComponent::InitWithComponent(
        Caver::OrbitControllerComponent *this,
        const Caver::OrbitControllerComponent *a2)
{
  long double result; // q0

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  result = *(long double *)((char *)a2 + 124);
  *(long double *)((char *)this + 124) = result;
  *((_DWORD *)this + 35) = *((_DWORD *)a2 + 35);
  return result;
}

