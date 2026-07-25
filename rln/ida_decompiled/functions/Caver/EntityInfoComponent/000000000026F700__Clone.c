/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026F700
 * Mangled: _ZNK5Caver19EntityInfoComponent5CloneEv
 * Demangled: Caver::EntityInfoComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000026F530  Caver::EntityInfoComponent::~EntityInfoComponent()
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 13
 *   insn=0x000000000026F718 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000026F72C string=0x000000000026F730 ""
 *   insn=0x000000000026F734 string=0x000000000026F738 "J"
 *   insn=0x000000000026F73C string=0x000000000026F740 "a"
 *   insn=0x000000000026F740 string=0x000000000026F744 ""
 *   insn=0x000000000026F744 string=0x000000000026F748 "L"
 *   insn=0x000000000026F748 string=0x000000000026F74C "?"
 *   insn=0x000000000026F754 string=0x000000000026F758 "I"
 *   insn=0x000000000026F758 string=0x000000000026F75C "KA"
 *   insn=0x000000000026F760 string=0x000000000026F764 " "
 *   insn=0x000000000026F784 string=0x000000000026F788 "h"@"
 *   insn=0x000000000026F788 string=0x000000000026F78C "a"
 *   insn=0x000000000026F794 string=0x000000000026F798 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityInfoComponent::Clone(Caver::EntityInfoComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0

  v2 = operator new(0x98u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)&v3 = &off_6BEFB8;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *((_QWORD *)&v3 + 1) = &off_6BEFF8;
  *(_QWORD *)v2 = off_6BEEA0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 104) = 0;
  *(_BYTE *)(v2 + 112) = 0;
  *(_OWORD *)(v2 + 16) = v3;
  *(_QWORD *)(v2 + 120) = &byte_6FD2F8;
  *(_DWORD *)(v2 + 144) = 0;
  *(_QWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 136) = 0;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  sub_56A6A8(v2 + 120);
  return v2;
}

