/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281794
 * Mangled: _ZNK5Caver24PhysicsPlatformComponent5CloneEv
 * Demangled: Caver::PhysicsPlatformComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000028175C  Caver::PhysicsPlatformComponent::~PhysicsPlatformComponent()
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 19
 *   insn=0x00000000002817A8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002817B8 string=0x00000000002817BC "(#"
 *   insn=0x00000000002817BC string=0x00000000002817C0 ")#"
 *   insn=0x00000000002817C0 string=0x00000000002817C4 ""
 *   insn=0x00000000002817C4 string=0x00000000002817C8 ")"
 *   insn=0x00000000002817C8 string=0x00000000002817CC "a"
 *   insn=0x00000000002817CC string=0x00000000002817D0 "a"
 *   insn=0x00000000002817D0 string=0x00000000002817D4 "*"
 *   insn=0x00000000002817D4 string=0x00000000002817D8 "@"
 *   insn=0x00000000002817D8 string=0x00000000002817DC "*"
 *   insn=0x00000000002817DC string=0x00000000002817E0 ""
 *   insn=0x00000000002817E4 string=0x00000000002817E8 "@"
 *   insn=0x00000000002817E8 string=0x00000000002817EC "*"
 *   insn=0x00000000002817F4 string=0x00000000002817F8 "@E"
 *   insn=0x00000000002817F8 string=0x00000000002817FC ")A"
 *   insn=0x0000000000281820 string=0x0000000000281824 "h"@"
 *   insn=0x000000000028182C string=0x0000000000281830 "hBI"
 *   insn=0x000000000028183C string=0x0000000000281840 "h"
 *   insn=0x0000000000281844 string=0x0000000000281848 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PhysicsPlatformComponent::Clone(Caver::PhysicsPlatformComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0
  __int64 result; // x0

  v2 = operator new(0xA8u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)&v3 = &off_6BFCC8;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *((_QWORD *)&v3 + 1) = &off_6BFD08;
  *(_QWORD *)(v2 + 72) = 0;
  *(_OWORD *)(v2 + 16) = v3;
  *(_QWORD *)v2 = off_6BFBB0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_QWORD *)(v2 + 104) = 0;
  *(_DWORD *)(v2 + 112) = 1;
  *(_QWORD *)(v2 + 116) = 0;
  *(_QWORD *)(v2 + 124) = 0;
  *(_DWORD *)(v2 + 132) = 0;
  *(_OWORD *)(v2 + 148) = xmmword_588910;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  result = v2;
  *(_QWORD *)(v2 + 148) = *(_QWORD *)((char *)this + 148);
  *(_DWORD *)(v2 + 156) = *((_DWORD *)this + 39);
  *(_DWORD *)(v2 + 160) = *((_DWORD *)this + 40);
  return result;
}

