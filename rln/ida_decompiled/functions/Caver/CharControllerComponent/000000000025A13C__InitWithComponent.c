/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025A13C
 * Mangled: _ZN5Caver23CharControllerComponent17InitWithComponentEPKS0_
 * Demangled: Caver::CharControllerComponent::InitWithComponent(Caver::CharControllerComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 23
 *   insn=0x000000000025A148 string=0x000000000025A14C "h"@"
 *   insn=0x000000000025A150 string=0x000000000025A154 "a"
 *   insn=0x000000000025A15C string=0x000000000025A160 "RA"
 *   insn=0x000000000025A160 string=0x000000000025A164 "hz@"
 *   insn=0x000000000025A168 string=0x000000000025A16C "h"
 *   insn=0x000000000025A170 string=0x000000000025A174 "h"
 *   insn=0x000000000025A178 string=0x000000000025A17C "h"
 *   insn=0x000000000025A180 string=0x000000000025A184 "h"
 *   insn=0x000000000025A188 string=0x000000000025A18C "h"
 *   insn=0x000000000025A190 string=0x000000000025A194 "h\nA"
 *   insn=0x000000000025A198 string=0x000000000025A19C "h"A"
 *   insn=0x000000000025A1A0 string=0x000000000025A1A4 "h:A"
 *   insn=0x000000000025A1A8 string=0x000000000025A1AC "hRA"
 *   insn=0x000000000025A1B0 string=0x000000000025A1B4 "hjA"
 *   insn=0x000000000025A1B8 string=0x000000000025A1BC "h"
 *   insn=0x000000000025A1C0 string=0x000000000025A1C4 "h"
 *   insn=0x000000000025A1C8 string=0x000000000025A1CC "h"
 *   insn=0x000000000025A1D0 string=0x000000000025A1D4 "h"
 *   insn=0x000000000025A1D8 string=0x000000000025A1DC "h"
 *   insn=0x000000000025A1E0 string=0x000000000025A1E4 "h"
 *   insn=0x000000000025A1E8 string=0x000000000025A1EC "h\nB"
 *   insn=0x000000000025A1F0 string=0x000000000025A1F4 "hnB"
 *   insn=0x000000000025A1F8 string=0x000000000025A1FC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::CharControllerComponent::InitWithComponent(
        Caver::CharControllerComponent *this,
        const Caver::CharControllerComponent *a2)
{
  long double result; // q0

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  *((_DWORD *)this + 30) = *((_DWORD *)a2 + 30);
  *((_DWORD *)this + 36) = *((_DWORD *)a2 + 36);
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 42);
  *((_DWORD *)this + 48) = *((_DWORD *)a2 + 48);
  *((_DWORD *)this + 54) = *((_DWORD *)a2 + 54);
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 60);
  *((_DWORD *)this + 66) = *((_DWORD *)a2 + 66);
  *((_DWORD *)this + 72) = *((_DWORD *)a2 + 72);
  *((_DWORD *)this + 78) = *((_DWORD *)a2 + 78);
  *((_DWORD *)this + 84) = *((_DWORD *)a2 + 84);
  *((_DWORD *)this + 90) = *((_DWORD *)a2 + 90);
  *((_DWORD *)this + 96) = *((_DWORD *)a2 + 96);
  *((_DWORD *)this + 104) = *((_DWORD *)a2 + 104);
  *((_DWORD *)this + 110) = *((_DWORD *)a2 + 110);
  *((_DWORD *)this + 134) = *((_DWORD *)a2 + 134);
  *((_DWORD *)this + 118) = *((_DWORD *)a2 + 118);
  *((_DWORD *)this + 124) = *((_DWORD *)a2 + 124);
  *((_DWORD *)this + 130) = *((_DWORD *)a2 + 130);
  *((_DWORD *)this + 155) = *((_DWORD *)a2 + 155);
  result = *(long double *)((char *)a2 + 632);
  *(long double *)((char *)this + 632) = result;
  return result;
}

