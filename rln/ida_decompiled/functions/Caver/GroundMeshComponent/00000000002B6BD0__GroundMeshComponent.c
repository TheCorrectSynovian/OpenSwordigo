/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B6BD0
 * Mangled: _ZN5Caver19GroundMeshComponentC2Ev
 * Demangled: Caver::GroundMeshComponent::GroundMeshComponent(void)
 *
 * Callers: 1
 *   0x00000000001FB530  Caver::GroundMeshComponent::GroundMeshComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x00000000002B6BD8 string=0x00000000002B6BDC "h!"
 *   insn=0x00000000002B6BDC string=0x00000000002B6BE0 ""
 *   insn=0x00000000002B6BE8 string=0x00000000002B6BEC ")=B"
 *   insn=0x00000000002B6BEC string=0x00000000002B6BF0 "a"
 *   insn=0x00000000002B6BF0 string=0x00000000002B6BF4 ""
 *   insn=0x00000000002B6BF8 string=0x00000000002B6BFC "("
 *   insn=0x00000000002B6C00 string=0x00000000002B6C04 "("
 *   insn=0x00000000002B6C18 string=0x00000000002B6C1C ")A"
 *   insn=0x00000000002B6C1C string=0x00000000002B6C20 "\t"
 *   insn=0x00000000002B6C38 string=0x00000000002B6C3C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::GroundMeshComponent::GroundMeshComponent(Caver::GroundMeshComponent *this)
{
  __int128 v1; // q0
  long double result; // q0

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *(_QWORD *)&v1 = &off_6C4A68;
  *((_QWORD *)&v1 + 1) = &off_6C4AA8;
  *((_QWORD *)this + 9) = 0;
  *((_OWORD *)this + 1) = v1;
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)this = off_6C4950;
  *((_QWORD *)this + 20) = 0;
  *((_QWORD *)this + 21) = 0;
  *((_QWORD *)this + 18) = 0;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 15) = 0;
  *((long double *)this + 11) = result;
  *((_BYTE *)this + 192) = 0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *(long double *)((char *)this + 196) = result;
  return result;
}

