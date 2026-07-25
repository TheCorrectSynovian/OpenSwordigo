/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A5B88
 * Mangled: _ZNK5Caver17ParticleComponent5CloneEv
 * Demangled: Caver::ParticleComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002A59E4  Caver::ParticleComponent::~ParticleComponent()
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 16
 *   insn=0x00000000002A5BA0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002A5BB0 string=0x00000000002A5BB4 """
 *   insn=0x00000000002A5BB4 string=0x00000000002A5BB8 ""
 *   insn=0x00000000002A5BB8 string=0x00000000002A5BBC "\n""
 *   insn=0x00000000002A5BBC string=0x00000000002A5BC0 "J)D"
 *   insn=0x00000000002A5BC4 string=0x00000000002A5BC8 "a"
 *   insn=0x00000000002A5BC8 string=0x00000000002A5BCC ""
 *   insn=0x00000000002A5BCC string=0x00000000002A5BD0 "L"
 *   insn=0x00000000002A5BD0 string=0x00000000002A5BD4 "?"
 *   insn=0x00000000002A5BDC string=0x00000000002A5BE0 "I"
 *   insn=0x00000000002A5BE0 string=0x00000000002A5BE4 "KA"
 *   insn=0x00000000002A5BE8 string=0x00000000002A5BEC " "
 *   insn=0x00000000002A5C0C string=0x00000000002A5C10 "h"@"
 *   insn=0x00000000002A5C10 string=0x00000000002A5C14 "a"
 *   insn=0x00000000002A5C1C string=0x00000000002A5C20 "a"
 *   insn=0x00000000002A5C28 string=0x00000000002A5C2C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleComponent::Clone(Caver::ParticleComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0
  __int64 result; // x0

  v2 = operator new(0x90u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)&v3 = &off_6C34C8;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *((_QWORD *)&v3 + 1) = &off_6C3508;
  *(_QWORD *)v2 = off_6C33B0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 104) = 0;
  *(_OWORD *)(v2 + 16) = v3;
  *(_QWORD *)(v2 + 112) = &byte_6FD2F8;
  *(_QWORD *)(v2 + 120) = 0;
  *(_QWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 136) = 0xFFFFFFFF00000000LL;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  sub_56A6A8(v2 + 112);
  result = v2;
  *(_DWORD *)(v2 + 128) = *((_DWORD *)this + 32);
  return result;
}

