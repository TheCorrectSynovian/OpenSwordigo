/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021BA74
 * Mangled: _ZNK5Caver23CollisionShapeComponent5CloneEv
 * Demangled: Caver::CollisionShapeComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000021BA3C  Caver::CollisionShapeComponent::~CollisionShapeComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA760  Caver::CollisionShapeComponent::InitWithComponent(Caver::CollisionShapeComponent const*)
 *   0x00000000001FA8A0  Caver::ShapeComponent::ShapeComponent(void)
 *   0x000000000021BBA8  Caver::CollisionShapeComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x000000000021BA88 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000021BA90 string=0x000000000021BA94 "H&"
 *   insn=0x000000000021BA90 string=0x00000000001FA8A0 "0'"
 *   insn=0x000000000021BA94 string=0x000000000021BA98 ""
 *   insn=0x000000000021BA98 string=0x000000000021BA9C "I&"
 *   insn=0x000000000021BA9C string=0x000000000021BAA0 ")"
 *   insn=0x000000000021BAA4 string=0x000000000021BAA8 "\nA"
 *   insn=0x000000000021BAA8 string=0x000000000021BAAC "A"
 *   insn=0x000000000021BAAC string=0x000000000021BAB0 "\nA"
 *   insn=0x000000000021BAB0 string=0x000000000021BAB4 "A"
 *   insn=0x000000000021BAB4 string=0x000000000021BAB8 "J"
 *   insn=0x000000000021BABC string=0x000000000021BAC0 "A"
 *   insn=0x000000000021BAC0 string=0x000000000021BAC4 "A"
 *   insn=0x000000000021BAC4 string=0x000000000021BAC8 ")a"
 *   insn=0x000000000021BAF8 string=0x000000000021BAFC "@"
 *   insn=0x000000000021BB14 string=0x000000000021BB18 " "
 *   insn=0x000000000021BB20 string=0x000000000021BB24 " "
 *   insn=0x000000000021BB28 string=0x000000000021BB2C "@"
 *   insn=0x000000000021BB3C string=0x000000000021BB40 "_"
 *   insn=0x000000000021BB5C string=0x000000000021BB60 "?"
 *   insn=0x000000000021BB60 string=0x000000000021BB64 "_"
 *   insn=0x000000000021BB80 string=0x00000000001FA760 "0'"
 *   insn=0x000000000021BB9C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000021BBA0 string=0x000000000021BBA4 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollisionShapeComponent::Clone(Caver::CollisionShapeComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q1

  v2 = operator new(0x1D0u);
  Caver::ShapeComponent::ShapeComponent((Caver::ShapeComponent *)v2);
  *(_QWORD *)&v3 = &off_6B9680;
  *((_QWORD *)&v3 + 1) = &off_6B96C0;
  *(_OWORD *)(v2 + 16) = v3;
  *(_QWORD *)v2 = off_6B9540;
  *(_QWORD *)(v2 + 144) = &byte_6FD2F8;
  *(_QWORD *)(v2 + 184) = &byte_6FD2F8;
  *(_QWORD *)(v2 + 224) = &byte_6FD2F8;
  *(_DWORD *)(v2 + 296) = 0;
  *(_QWORD *)(v2 + 272) = 0;
  *(_OWORD *)(v2 + 168) = 0u;
  *(_OWORD *)(v2 + 152) = 0u;
  *(_OWORD *)(v2 + 192) = 0u;
  *(_OWORD *)(v2 + 208) = 0u;
  *(_OWORD *)(v2 + 280) = 0u;
  *(_DWORD *)(v2 + 264) = 0;
  *(_OWORD *)(v2 + 248) = 0u;
  *(_OWORD *)(v2 + 232) = 0u;
  *(_DWORD *)(v2 + 300) = 1065353216;
  *(_BYTE *)(v2 + 304) = 0;
  *(_OWORD *)(v2 + 316) = 0u;
  *(_QWORD *)(v2 + 336) = 0x41700000C1700000LL;
  *(_OWORD *)(v2 + 360) = 0u;
  *(_OWORD *)(v2 + 344) = 0u;
  *(_BYTE *)(v2 + 376) = 1;
  *(_DWORD *)(v2 + 384) = 0;
  *(_DWORD *)(v2 + 377) = 0;
  *(_DWORD *)(v2 + 388) = 1065353216;
  *(_BYTE *)(v2 + 381) = 0;
  *(_BYTE *)(v2 + 392) = 0;
  *(_QWORD *)(v2 + 420) = 0;
  *(_QWORD *)(v2 + 428) = 0;
  *(_BYTE *)(v2 + 416) = 0;
  *(_QWORD *)(v2 + 400) = 0;
  *(_QWORD *)(v2 + 408) = 0;
  *(_BYTE *)(v2 + 448) = 0;
  *(_BYTE *)(v2 + 460) = 0;
  *(_QWORD *)(v2 + 452) = 0;
  *(_QWORD *)(v2 + 408) = v2;
  Caver::CollisionShapeComponent::InitWithComponent((Caver::CollisionShapeComponent *)v2, this);
  return v2;
}

