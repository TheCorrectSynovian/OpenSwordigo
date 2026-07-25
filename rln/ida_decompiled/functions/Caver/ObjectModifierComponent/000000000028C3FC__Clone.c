/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028C3FC
 * Mangled: _ZNK5Caver23ObjectModifierComponent5CloneEv
 * Demangled: Caver::ObjectModifierComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000028C2E4  Caver::ObjectModifierComponent::~ObjectModifierComponent()
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 15
 *   insn=0x000000000028C40C string=0x000000000028C410 "t"
 *   insn=0x000000000028C410 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000028C428 string=0x000000000028C42C ""
 *   insn=0x000000000028C42C string=0x000000000028C430 ")"
 *   insn=0x000000000028C430 string=0x000000000028C434 "a"
 *   insn=0x000000000028C434 string=0x000000000028C438 "a"
 *   insn=0x000000000028C438 string=0x000000000028C43C "*"
 *   insn=0x000000000028C43C string=0x000000000028C440 "@"
 *   insn=0x000000000028C440 string=0x000000000028C444 "*"
 *   insn=0x000000000028C444 string=0x000000000028C448 ""
 *   insn=0x000000000028C44C string=0x000000000028C450 "@"
 *   insn=0x000000000028C45C string=0x000000000028C460 "@q@"
 *   insn=0x000000000028C460 string=0x000000000028C464 ")A"
 *   insn=0x000000000028C468 string=0x000000000028C46C "I3"
 *   insn=0x000000000028C488 string=0x000000000028C48C "h"@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ObjectModifierComponent::Clone(Caver::ObjectModifierComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0

  v2 = operator new(0x88u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)&v3 = &off_6C0E08;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *((_QWORD *)&v3 + 1) = &off_6C0E48;
  *(_QWORD *)(v2 + 72) = 0;
  *(_OWORD *)(v2 + 16) = v3;
  *(_QWORD *)v2 = off_6C0CF0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_QWORD *)(v2 + 104) = 0;
  *(_DWORD *)(v2 + 112) = 0;
  *(_DWORD *)(v2 + 124) = 1050253722;
  *(_QWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 116) = 0x3F80000000000000LL;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  return v2;
}

