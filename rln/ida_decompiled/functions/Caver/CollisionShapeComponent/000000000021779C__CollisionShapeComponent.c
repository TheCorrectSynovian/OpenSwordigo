/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021779C
 * Mangled: _ZN5Caver23CollisionShapeComponentC2Ev
 * Demangled: Caver::CollisionShapeComponent::CollisionShapeComponent(void)
 *
 * Callers: 2
 *   0x00000000001F52A0  Caver::CollisionShapeComponent::CollisionShapeComponent(void)
 *   0x00000000001FC1F0  Caver::CollisionShapeComponent::CollisionShapeComponent(void)
 *
 * Callees: 1
 *   0x00000000001FA8A0  Caver::ShapeComponent::ShapeComponent(void)
 *
 * Referenced strings: 44
 *   insn=0x00000000002177A8 string=0x00000000002177AC "="
 *   insn=0x00000000002177AC string=0x00000000002177B0 "h&"
 *   insn=0x00000000002177AC string=0x00000000001FA8A0 "0'"
 *   insn=0x00000000002177B0 string=0x00000000002177B4 ""
 *   insn=0x00000000002177B4 string=0x00000000002177B8 "i&"
 *   insn=0x00000000002177B8 string=0x00000000002177BC ")"
 *   insn=0x00000000002177C0 string=0x00000000002177C4 "\nA"
 *   insn=0x00000000002177C4 string=0x00000000002177C8 "A"
 *   insn=0x00000000002177C8 string=0x00000000002177CC "\nA"
 *   insn=0x00000000002177CC string=0x00000000002177D0 "A"
 *   insn=0x00000000002177D0 string=0x00000000002177D4 "j"
 *   insn=0x00000000002177D4 string=0x00000000002177D8 "a"
 *   insn=0x00000000002177D8 string=0x00000000002177DC "A"
 *   insn=0x00000000002177DC string=0x00000000002177E0 "A"
 *   insn=0x00000000002177E0 string=0x00000000002177E4 ")a"
 *   insn=0x00000000002177E4 string=0x00000000002177E8 "jb"
 *   insn=0x00000000002177E8 string=0x00000000002177EC "h"
 *   insn=0x00000000002177F0 string=0x00000000002177F4 "iJ"
 *   insn=0x00000000002177F4 string=0x00000000002177F8 "i^"
 *   insn=0x00000000002177F8 string=0x00000000002177FC "ir"
 *   insn=0x00000000002177FC string=0x0000000000217800 "i"
 *   insn=0x0000000000217808 string=0x000000000021780C "`"
 *   insn=0x000000000021780C string=0x0000000000217810 "`"
 *   insn=0x0000000000217810 string=0x0000000000217814 "`"
 *   insn=0x0000000000217814 string=0x0000000000217818 "@"
 *   insn=0x0000000000217818 string=0x000000000021781C "jb"
 *   insn=0x0000000000217820 string=0x0000000000217824 "`"
 *   insn=0x0000000000217824 string=0x0000000000217828 "`"
 *   insn=0x0000000000217828 string=0x000000000021782C "h."
 *   insn=0x0000000000217830 string=0x0000000000217834 " "
 *   insn=0x0000000000217834 string=0x0000000000217838 "i"
 *   insn=0x0000000000217838 string=0x000000000021783C "a"
 *   insn=0x000000000021783C string=0x0000000000217840 " "
 *   insn=0x0000000000217844 string=0x0000000000217848 "@"
 *   insn=0x0000000000217848 string=0x000000000021784C "j"
 *   insn=0x000000000021784C string=0x0000000000217850 "i"
 *   insn=0x0000000000217850 string=0x0000000000217854 "i"
 *   insn=0x0000000000217858 string=0x000000000021785C "_"
 *   insn=0x000000000021785C string=0x0000000000217860 "j"
 *   insn=0x0000000000217860 string=0x0000000000217864 "h"
 *   insn=0x0000000000217864 string=0x0000000000217868 "h"
 *   insn=0x0000000000217870 string=0x0000000000217874 "?"
 *   insn=0x0000000000217874 string=0x0000000000217878 "_"
 *   insn=0x000000000021788C string=0x0000000000217890 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::CollisionShapeComponent::CollisionShapeComponent(Caver::CollisionShapeComponent *this)
{
  long double result; // q0
  __int128 v3; // q1

  Caver::ShapeComponent::ShapeComponent(this);
  *(_OWORD *)&result = 0u;
  *(_QWORD *)&v3 = &off_6B9680;
  *((_QWORD *)&v3 + 1) = &off_6B96C0;
  *((_OWORD *)this + 1) = v3;
  *(_QWORD *)this = off_6B9540;
  *((_QWORD *)this + 18) = &byte_6FD2F8;
  *((_QWORD *)this + 23) = &byte_6FD2F8;
  *((_QWORD *)this + 28) = &byte_6FD2F8;
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 34) = 0;
  *(_OWORD *)((char *)this + 168) = 0u;
  *(_OWORD *)((char *)this + 152) = 0u;
  *((_OWORD *)this + 12) = 0u;
  *((_OWORD *)this + 13) = 0u;
  *(_OWORD *)((char *)this + 280) = 0u;
  *((_DWORD *)this + 66) = 0;
  *(_OWORD *)((char *)this + 248) = 0u;
  *(_OWORD *)((char *)this + 232) = 0u;
  *((_DWORD *)this + 75) = 1065353216;
  *((_BYTE *)this + 304) = 0;
  *(_OWORD *)((char *)this + 316) = 0u;
  *((_QWORD *)this + 42) = 0x41700000C1700000LL;
  *(_OWORD *)((char *)this + 360) = 0u;
  *(_OWORD *)((char *)this + 344) = 0u;
  *((_BYTE *)this + 376) = 1;
  *((_DWORD *)this + 96) = 0;
  *(_DWORD *)((char *)this + 377) = 0;
  *((_DWORD *)this + 97) = 1065353216;
  *((_BYTE *)this + 381) = 0;
  *((_BYTE *)this + 392) = 0;
  *(_QWORD *)((char *)this + 420) = 0;
  *(_QWORD *)((char *)this + 428) = 0;
  *((_BYTE *)this + 416) = 0;
  *((_QWORD *)this + 50) = 0;
  *((_QWORD *)this + 51) = 0;
  *((_BYTE *)this + 448) = 0;
  *((_BYTE *)this + 460) = 0;
  *(_QWORD *)((char *)this + 452) = 0;
  *((_QWORD *)this + 51) = this;
  return result;
}

