/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E24E8
 * Mangled: _ZN5Caver5Proto5Quest4SwapEPS1_
 * Demangled: Caver::Proto::Quest::Swap(Caver::Proto::Quest*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x00000000002E24E8 string=0x00000000002E24EC " "
 *   insn=0x00000000002E24EC string=0x00000000002E24F0 "(@"
 *   insn=0x00000000002E24F0 string=0x00000000002E24F4 "\t@"
 *   insn=0x00000000002E24F4 string=0x00000000002E24F8 ""
 *   insn=0x00000000002E24F8 string=0x00000000002E24FC ")"
 *   insn=0x00000000002E24FC string=0x00000000002E2500 "("
 *   insn=0x00000000002E2500 string=0x00000000002E2504 "\t"
 *   insn=0x00000000002E2504 string=0x00000000002E2508 ""
 *   insn=0x00000000002E2508 string=0x00000000002E250C ")"
 *   insn=0x00000000002E250C string=0x00000000002E2510 "("
 *   insn=0x00000000002E2510 string=0x00000000002E2514 "\t"
 *   insn=0x00000000002E2514 string=0x00000000002E2518 ""
 *   insn=0x00000000002E2518 string=0x00000000002E251C ")"
 *   insn=0x00000000002E251C string=0x00000000002E2520 "("
 *   insn=0x00000000002E2520 string=0x00000000002E2524 "\t"
 *   insn=0x00000000002E2524 string=0x00000000002E2528 ""
 *   insn=0x00000000002E2528 string=0x00000000002E252C ")"
 *   insn=0x00000000002E252C string=0x00000000002E2530 "(0@"
 *   insn=0x00000000002E2530 string=0x00000000002E2534 "\t0@"
 *   insn=0x00000000002E2534 string=0x00000000002E2538 "0"
 *   insn=0x00000000002E2538 string=0x00000000002E253C ")0"
 *   insn=0x00000000002E253C string=0x00000000002E2540 "(@"
 *   insn=0x00000000002E2540 string=0x00000000002E2544 "\t@"
 *   insn=0x00000000002E2544 string=0x00000000002E2548 ""
 *   insn=0x00000000002E2548 string=0x00000000002E254C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Quest::Swap(__int64 this, Caver::Proto::Quest *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x9

  if ( a2 != (Caver::Proto::Quest *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    v3 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v3;
    v4 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v4;
    v5 = *(_QWORD *)(this + 40);
    *(_QWORD *)(this + 40) = *((_QWORD *)a2 + 5);
    *((_QWORD *)a2 + 5) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 48);
    *(_DWORD *)(this + 48) = *((_DWORD *)a2 + 12);
    *((_DWORD *)a2 + 12) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

