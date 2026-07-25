/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000309408
 * Mangled: _ZN5Caver5Proto28GroundMeshGeneratorComponent4SwapEPS1_
 * Demangled: Caver::Proto::GroundMeshGeneratorComponent::Swap(Caver::Proto::GroundMeshGeneratorComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 41
 *   insn=0x0000000000309408 string=0x000000000030940C " "
 *   insn=0x000000000030940C string=0x0000000000309410 "("
 *   insn=0x0000000000309410 string=0x0000000000309414 "\t"
 *   insn=0x0000000000309414 string=0x0000000000309418 ""
 *   insn=0x0000000000309418 string=0x000000000030941C ")"
 *   insn=0x000000000030941C string=0x0000000000309420 "("
 *   insn=0x0000000000309420 string=0x0000000000309424 "\t"
 *   insn=0x0000000000309424 string=0x0000000000309428 ""
 *   insn=0x0000000000309428 string=0x000000000030942C ")"
 *   insn=0x000000000030942C string=0x0000000000309430 "("
 *   insn=0x0000000000309430 string=0x0000000000309434 "\t"
 *   insn=0x0000000000309434 string=0x0000000000309438 ""
 *   insn=0x0000000000309438 string=0x000000000030943C ")"
 *   insn=0x000000000030943C string=0x0000000000309440 "("
 *   insn=0x0000000000309440 string=0x0000000000309444 "\t"
 *   insn=0x0000000000309444 string=0x0000000000309448 ""
 *   insn=0x0000000000309448 string=0x000000000030944C ")"
 *   insn=0x000000000030944C string=0x0000000000309450 "("
 *   insn=0x0000000000309450 string=0x0000000000309454 "\t"
 *   insn=0x0000000000309454 string=0x0000000000309458 ""
 *   insn=0x0000000000309458 string=0x000000000030945C ")"
 *   insn=0x000000000030945C string=0x0000000000309460 "(@B"
 *   insn=0x0000000000309460 string=0x0000000000309464 "\t@B"
 *   insn=0x0000000000309464 string=0x0000000000309468 "@"
 *   insn=0x0000000000309468 string=0x000000000030946C ")@"
 *   insn=0x000000000030946C string=0x0000000000309470 "(,@"
 *   insn=0x0000000000309470 string=0x0000000000309474 "\t,@"
 *   insn=0x0000000000309474 string=0x0000000000309478 ","
 *   insn=0x0000000000309478 string=0x000000000030947C "),"
 *   insn=0x000000000030947C string=0x0000000000309480 "(0@"
 *   insn=0x0000000000309480 string=0x0000000000309484 "\t0@"
 *   insn=0x0000000000309484 string=0x0000000000309488 "0"
 *   insn=0x0000000000309488 string=0x000000000030948C ")0"
 *   insn=0x000000000030948C string=0x0000000000309490 "(@C"
 *   insn=0x0000000000309490 string=0x0000000000309494 "\t@C"
 *   insn=0x0000000000309494 string=0x0000000000309498 "@"
 *   insn=0x0000000000309498 string=0x000000000030949C ")@"
 *   insn=0x000000000030949C string=0x00000000003094A0 "(@"
 *   insn=0x00000000003094A0 string=0x00000000003094A4 "\t@"
 *   insn=0x00000000003094A4 string=0x00000000003094A8 ""
 *   insn=0x00000000003094A8 string=0x00000000003094AC ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundMeshGeneratorComponent::Swap(
        __int64 this,
        Caver::Proto::GroundMeshGeneratorComponent *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9
  int v5; // w9
  __int64 v6; // x9
  __int64 v7; // x9
  __int64 v8; // x9

  if ( a2 != (Caver::Proto::GroundMeshGeneratorComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *(_DWORD *)(this + 20);
    *(_DWORD *)(this + 20) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v4;
    v5 = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v5;
    v6 = *(_QWORD *)(this + 28);
    *(_QWORD *)(this + 28) = *(_QWORD *)((char *)a2 + 28);
    *(_QWORD *)((char *)a2 + 28) = v6;
    v7 = *(_QWORD *)(this + 36);
    *(_QWORD *)(this + 36) = *(_QWORD *)((char *)a2 + 36);
    *(_QWORD *)((char *)a2 + 36) = v7;
    LODWORD(v7) = *(_DWORD *)(this + 44);
    *(_DWORD *)(this + 44) = *((_DWORD *)a2 + 11);
    *((_DWORD *)a2 + 11) = v7;
    LODWORD(v7) = *(_DWORD *)(this + 48);
    *(_DWORD *)(this + 48) = *((_DWORD *)a2 + 12);
    *((_DWORD *)a2 + 12) = v7;
    v8 = *(_QWORD *)(this + 52);
    *(_QWORD *)(this + 52) = *(_QWORD *)((char *)a2 + 52);
    *(_QWORD *)((char *)a2 + 52) = v8;
    LODWORD(v8) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v8;
  }
  return this;
}

