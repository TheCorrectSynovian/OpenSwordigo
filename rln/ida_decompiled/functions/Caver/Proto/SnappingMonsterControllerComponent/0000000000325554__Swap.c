/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000325554
 * Mangled: _ZN5Caver5Proto34SnappingMonsterControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::SnappingMonsterControllerComponent::Swap(Caver::Proto::SnappingMonsterControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 28
 *   insn=0x0000000000325558 string=0x000000000032555C "("
 *   insn=0x000000000032555C string=0x0000000000325560 "\t"
 *   insn=0x0000000000325560 string=0x0000000000325564 ""
 *   insn=0x0000000000325564 string=0x0000000000325568 ")"
 *   insn=0x0000000000325568 string=0x000000000032556C "("
 *   insn=0x000000000032556C string=0x0000000000325570 "\t"
 *   insn=0x0000000000325570 string=0x0000000000325574 ""
 *   insn=0x0000000000325574 string=0x0000000000325578 ")"
 *   insn=0x0000000000325578 string=0x000000000032557C "("
 *   insn=0x000000000032557C string=0x0000000000325580 "\t"
 *   insn=0x0000000000325580 string=0x0000000000325584 ""
 *   insn=0x0000000000325584 string=0x0000000000325588 ")"
 *   insn=0x0000000000325588 string=0x000000000032558C "("
 *   insn=0x000000000032558C string=0x0000000000325590 "\t"
 *   insn=0x0000000000325590 string=0x0000000000325594 ""
 *   insn=0x0000000000325594 string=0x0000000000325598 ")"
 *   insn=0x0000000000325598 string=0x000000000032559C "("
 *   insn=0x000000000032559C string=0x00000000003255A0 "\t"
 *   insn=0x00000000003255A0 string=0x00000000003255A4 ""
 *   insn=0x00000000003255A4 string=0x00000000003255A8 ")"
 *   insn=0x00000000003255A8 string=0x00000000003255AC "( @"
 *   insn=0x00000000003255AC string=0x00000000003255B0 "\t @"
 *   insn=0x00000000003255B0 string=0x00000000003255B4 " "
 *   insn=0x00000000003255B4 string=0x00000000003255B8 ") "
 *   insn=0x00000000003255B8 string=0x00000000003255BC "(@"
 *   insn=0x00000000003255BC string=0x00000000003255C0 "\t@"
 *   insn=0x00000000003255C0 string=0x00000000003255C4 ""
 *   insn=0x00000000003255C4 string=0x00000000003255C8 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::SnappingMonsterControllerComponent *__fastcall Caver::Proto::SnappingMonsterControllerComponent::Swap(
        Caver::Proto::SnappingMonsterControllerComponent *this,
        Caver::Proto::SnappingMonsterControllerComponent *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9
  int v5; // w9
  int v6; // w9
  int v7; // w9
  int v8; // w9

  if ( a2 != this )
  {
    v2 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v4;
    v5 = *((_DWORD *)this + 6);
    *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v5;
    v6 = *((_DWORD *)this + 7);
    *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
    *((_DWORD *)a2 + 7) = v6;
    v7 = *((_DWORD *)this + 8);
    *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v7;
    v8 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v8;
  }
  return this;
}

