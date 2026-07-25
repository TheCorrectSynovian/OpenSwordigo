/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000221AD8
 * Mangled: _ZN5Caver14LightComponent17InitWithComponentEPKS0_
 * Demangled: Caver::LightComponent::InitWithComponent(Caver::LightComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 7
 *   insn=0x0000000000221AE4 string=0x0000000000221AE8 "h"@"
 *   insn=0x0000000000221AEC string=0x0000000000221AF0 "a"
 *   insn=0x0000000000221AFC string=0x0000000000221B00 "h:@"
 *   insn=0x0000000000221B04 string=0x0000000000221B08 "`"
 *   insn=0x0000000000221B0C string=0x0000000000221B10 "`B"
 *   insn=0x0000000000221B14 string=0x0000000000221B18 "h"
 *   insn=0x0000000000221B1C string=0x0000000000221B20 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::LightComponent::InitWithComponent(
        Caver::LightComponent *this,
        const Caver::LightComponent *a2)
{
  long double result; // q0

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  *((_QWORD *)this + 14) = *((_QWORD *)a2 + 14);
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)((char *)a2 + 120);
  result = *(long double *)((char *)a2 + 148);
  *(long double *)((char *)this + 148) = result;
  *((_DWORD *)this + 41) = *((_DWORD *)a2 + 41);
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 42);
  return result;
}

