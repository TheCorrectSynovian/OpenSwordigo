/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000226518
 * Mangled: _ZNK5Caver14ModelComponent5CloneEv
 * Demangled: Caver::ModelComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000022628C  Caver::ModelComponent::~ModelComponent()
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5F50  Caver::Vector3::IsClose(Caver::Vector3 const&,float)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 33
 *   insn=0x000000000022652C string=0x0000000000226530 ",<"
 *   insn=0x0000000000226530 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000226540 string=0x0000000000226544 "\n&"
 *   insn=0x0000000000226544 string=0x0000000000226548 ""
 *   insn=0x0000000000226548 string=0x000000000022654C "J"
 *   insn=0x0000000000226554 string=0x0000000000226558 "a"
 *   insn=0x0000000000226558 string=0x000000000022655C "K"
 *   insn=0x000000000022655C string=0x0000000000226560 "a"
 *   insn=0x0000000000226560 string=0x0000000000226564 "K"
 *   insn=0x0000000000226568 string=0x000000000022656C ""
 *   insn=0x000000000022656C string=0x0000000000226570 " "
 *   insn=0x0000000000226570 string=0x0000000000226574 "a"
 *   insn=0x0000000000226574 string=0x0000000000226578 "JA"
 *   insn=0x00000000002265CC string=0x00000000002265D0 "\t"
 *   insn=0x00000000002265DC string=0x00000000002265E0 "I"
 *   insn=0x00000000002265E4 string=0x00000000002265E8 "h"@"
 *   insn=0x00000000002265E8 string=0x00000000002265EC "a"
 *   insn=0x00000000002265F0 string=0x00000000002265F4 "-"
 *   insn=0x00000000002265F4 string=0x00000000002265F8 "hBL"
 *   insn=0x0000000000226604 string=0x0000000000226608 "h"
 *   insn=0x0000000000226610 string=0x0000000000583734 "o"
 *   insn=0x0000000000226614 string=0x0000000000226618 "!"
 *   insn=0x0000000000226618 string=0x000000000022661C "M>"
 *   insn=0x000000000022661C string=0x00000000001F5F50 "P'"
 *   insn=0x0000000000226620 string=0x0000000000226624 ""
 *   insn=0x0000000000226628 string=0x000000000022662C "hj@"
 *   insn=0x000000000022662C string=0x0000000000226630 "a"
 *   insn=0x0000000000226638 string=0x000000000022663C "h"
 *   insn=0x0000000000226644 string=0x0000000000226648 "h"
 *   insn=0x0000000000226648 string=0x000000000022664C ""
 *   insn=0x0000000000226658 string=0x000000000022665C "("
 *   insn=0x000000000022665C string=0x0000000000226660 "`*"
 *   insn=0x0000000000226664 string=0x0000000000226668 "hrB9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::ModelComponent::Clone(Caver::ModelComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q1
  long double result; // q0

  v2 = operator new(0x140u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)&v3 = &off_6BA348;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *(_OWORD *)(v2 + 72) = 0u;
  *((_QWORD *)&v3 + 1) = &off_6BA388;
  *(_OWORD *)(v2 + 16) = v3;
  *(_OWORD *)(v2 + 32) = 0u;
  __asm { FMOV            V1.4S, #1.0 }
  *(_QWORD *)v2 = off_6BA230;
  *(_OWORD *)(v2 + 96) = 0u;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_QWORD *)(v2 + 112) = &byte_6FD2F8;
  *(_OWORD *)(v2 + 136) = 0u;
  *(_OWORD *)(v2 + 120) = 0u;
  *(_QWORD *)(v2 + 149) = 0;
  *(_OWORD *)(v2 + 160) = _Q1;
  *(_BYTE *)(v2 + 192) = 0;
  *(_BYTE *)(v2 + 280) = 0;
  *(_QWORD *)(v2 + 204) = 0;
  *(_DWORD *)(v2 + 212) = 0;
  *(_QWORD *)(v2 + 196) = 0;
  *(_QWORD *)(v2 + 300) = 0;
  *(_QWORD *)(v2 + 284) = 0;
  *(_WORD *)(v2 + 308) = 0;
  *(_QWORD *)(v2 + 292) = 0;
  *(_QWORD *)(v2 + 310) = -1;
  *(_BYTE *)(v2 + 318) = 0;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  *(_QWORD *)(v2 + 196) = *(_QWORD *)((char *)this + 196);
  *(_DWORD *)(v2 + 204) = *((_DWORD *)this + 51);
  *(_BYTE *)(v2 + 192) = (Caver::Vector3::IsClose(
                            (Caver::Vector3 *)(v2 + 196),
                            (const Caver::Vector3 *)&Caver::Vector3Zero,
                            0.001)
                        & 1) == 0;
  *(_QWORD *)(v2 + 208) = *((_QWORD *)this + 26);
  *(_DWORD *)(v2 + 152) = *((_DWORD *)this + 38);
  sub_56A6A8(v2 + 112);
  *(_DWORD *)(v2 + 314) = *(_DWORD *)((char *)this + 314);
  result = *((long double *)this + 10);
  *(long double *)(v2 + 160) = result;
  *(_BYTE *)(v2 + 156) = *((_BYTE *)this + 156);
  return result;
}

