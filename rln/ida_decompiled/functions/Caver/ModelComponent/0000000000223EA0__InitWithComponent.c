/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000223EA0
 * Mangled: _ZN5Caver14ModelComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ModelComponent::InitWithComponent(Caver::ModelComponent const*)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5F50  Caver::Vector3::IsClose(Caver::Vector3 const&,float)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 17
 *   insn=0x0000000000223EAC string=0x0000000000223EB0 "h"@"
 *   insn=0x0000000000223EB4 string=0x0000000000223EB8 "a"
 *   insn=0x0000000000223EC4 string=0x0000000000223EC8 "hBL"
 *   insn=0x0000000000223ED4 string=0x0000000000223ED8 "h"
 *   insn=0x0000000000223EDC string=0x0000000000223EE0 ""
 *   insn=0x0000000000223EE0 string=0x0000000000583734 "o"
 *   insn=0x0000000000223EE4 string=0x0000000000223EE8 "!"
 *   insn=0x0000000000223EEC string=0x00000000001F5F50 "P'"
 *   insn=0x0000000000223EF0 string=0x0000000000223EF4 ""
 *   insn=0x0000000000223EF8 string=0x0000000000223EFC "hj@"
 *   insn=0x0000000000223EFC string=0x0000000000223F00 "a"
 *   insn=0x0000000000223F08 string=0x0000000000223F0C "h"
 *   insn=0x0000000000223F14 string=0x0000000000223F18 "h"
 *   insn=0x0000000000223F18 string=0x0000000000223F1C ""
 *   insn=0x0000000000223F20 string=0x0000000000223F24 "("
 *   insn=0x0000000000223F24 string=0x0000000000223F28 "`*"
 *   insn=0x0000000000223F2C string=0x0000000000223F30 "hrB9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::ModelComponent::InitWithComponent(
        Caver::ModelComponent *this,
        const Caver::ModelComponent *a2)
{
  long double result; // q0

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  *(_QWORD *)((char *)this + 196) = *(_QWORD *)((char *)a2 + 196);
  *((_DWORD *)this + 51) = *((_DWORD *)a2 + 51);
  *((_BYTE *)this + 192) = (Caver::Vector3::IsClose(
                              (Caver::ModelComponent *)((char *)this + 196),
                              (const Caver::Vector3 *)&Caver::Vector3Zero,
                              0.001)
                          & 1) == 0;
  *((_QWORD *)this + 26) = *((_QWORD *)a2 + 26);
  *((_DWORD *)this + 38) = *((_DWORD *)a2 + 38);
  sub_56A6A8((char *)this + 112);
  *(_DWORD *)((char *)this + 314) = *(_DWORD *)((char *)a2 + 314);
  result = *((long double *)a2 + 10);
  *((long double *)this + 10) = result;
  *((_BYTE *)this + 156) = *((_BYTE *)a2 + 156);
  return result;
}

