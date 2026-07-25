/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CC174
 * Mangled: _ZN5Caver11WeaponTrail19InitWithMaxSegmentsEi
 * Demangled: Caver::WeaponTrail::InitWithMaxSegments(int)
 *
 * Callers: 1
 *   0x00000000001F9A50  Caver::WeaponTrail::InitWithMaxSegments(int)
 *
 * Callees: 2
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 12
 *   insn=0x00000000002CC17C string=0x00000000002CC180 ")x"
 *   insn=0x00000000002CC188 string=0x00000000002CC18C "*}@"
 *   insn=0x00000000002CC18C string=0x00000000002CC190 "h""
 *   insn=0x00000000002CC190 string=0x00000000002CC194 "H}"
 *   insn=0x00000000002CC194 string=0x00000000002CC198 ")}{"
 *   insn=0x00000000002CC19C string=0x00000000002CC1A0 " "
 *   insn=0x00000000002CC1A0 string=0x00000000002CC1A4 "a~"
 *   insn=0x00000000002CC1A8 string=0x00000000002CC1AC "h"
 *   insn=0x00000000002CC1A8 string=0x00000000001F8570 "0'"
 *   insn=0x00000000002CC1AC string=0x00000000002CC1B0 "`"
 *   insn=0x00000000002CC1C0 string=0x00000000002CC1C4 "g"
 *   insn=0x00000000002CC1C4 string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::WeaponTrail::InitWithMaxSegments(Caver::WeaponTrail *this, int a2)
{
  unsigned __int64 v3; // x10
  unsigned __int64 v4; // x0
  __int64 v5; // x0
  void *v6; // x8

  v3 = 2 * a2;
  *((_DWORD *)this + 8) = 32;
  if ( is_mul_ok(v3, 0x20u) )
    v4 = 32 * v3;
  else
    v4 = -1;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = 0;
  v5 = operator new[](v4);
  v6 = (void *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v5;
  if ( v6 )
    operator delete[](v6);
}

