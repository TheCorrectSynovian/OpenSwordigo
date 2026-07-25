/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000263E64
 * Mangled: _ZN5Caver15DamageComponent17InitWithComponentEPKS0_
 * Demangled: Caver::DamageComponent::InitWithComponent(Caver::DamageComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 11
 *   insn=0x0000000000263E70 string=0x0000000000263E74 "h"@"
 *   insn=0x0000000000263E78 string=0x0000000000263E7C "a"
 *   insn=0x0000000000263E84 string=0x0000000000263E88 ""
 *   insn=0x0000000000263E88 string=0x0000000000263E8C "`B"
 *   insn=0x0000000000263E90 string=0x0000000000263E94 "h"
 *   insn=0x0000000000263E98 string=0x0000000000263E9C "h"
 *   insn=0x0000000000263EA0 string=0x0000000000263EA4 "h"
 *   insn=0x0000000000263EA8 string=0x0000000000263EAC "hBC9"
 *   insn=0x0000000000263EB0 string=0x0000000000263EB4 "hf@"
 *   insn=0x0000000000263EB8 string=0x0000000000263EBC "h"
 *   insn=0x0000000000263EC0 string=0x0000000000263EC4 "hFC9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::DamageComponent::InitWithComponent(
        Caver::DamageComponent *this,
        const Caver::DamageComponent *a2)
{
  long double result; // q0

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  result = *(long double *)((char *)a2 + 164);
  *(long double *)((char *)this + 164) = result;
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 45);
  *((_DWORD *)this + 46) = *((_DWORD *)a2 + 46);
  *((_DWORD *)this + 48) = *((_DWORD *)a2 + 48);
  *((_BYTE *)this + 208) = *((_BYTE *)a2 + 208);
  *((_QWORD *)this + 25) = *((_QWORD *)a2 + 25);
  *((_BYTE *)this + 160) = *((_BYTE *)a2 + 160);
  *((_BYTE *)this + 209) = *((_BYTE *)a2 + 209);
  return result;
}

