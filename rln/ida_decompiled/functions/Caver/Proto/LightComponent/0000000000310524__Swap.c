/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000310524
 * Mangled: _ZN5Caver5Proto14LightComponent4SwapEPS1_
 * Demangled: Caver::Proto::LightComponent::Swap(Caver::Proto::LightComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 33
 *   insn=0x0000000000310524 string=0x0000000000310528 " "
 *   insn=0x0000000000310528 string=0x000000000031052C "("
 *   insn=0x000000000031052C string=0x0000000000310530 "\t"
 *   insn=0x0000000000310530 string=0x0000000000310534 ""
 *   insn=0x0000000000310534 string=0x0000000000310538 ")"
 *   insn=0x0000000000310538 string=0x000000000031053C "("
 *   insn=0x000000000031053C string=0x0000000000310540 "\t"
 *   insn=0x0000000000310540 string=0x0000000000310544 ""
 *   insn=0x0000000000310544 string=0x0000000000310548 ")"
 *   insn=0x0000000000310548 string=0x000000000031054C "( @"
 *   insn=0x000000000031054C string=0x0000000000310550 "\t @"
 *   insn=0x0000000000310550 string=0x0000000000310554 " "
 *   insn=0x0000000000310554 string=0x0000000000310558 ") "
 *   insn=0x0000000000310558 string=0x000000000031055C "($@"
 *   insn=0x000000000031055C string=0x0000000000310560 "\t$@"
 *   insn=0x0000000000310560 string=0x0000000000310564 "$"
 *   insn=0x0000000000310564 string=0x0000000000310568 ")$"
 *   insn=0x0000000000310568 string=0x000000000031056C "((@"
 *   insn=0x000000000031056C string=0x0000000000310570 "\t(@"
 *   insn=0x0000000000310570 string=0x0000000000310574 "("
 *   insn=0x0000000000310574 string=0x0000000000310578 ")("
 *   insn=0x0000000000310578 string=0x000000000031057C "("
 *   insn=0x000000000031057C string=0x0000000000310580 "\t"
 *   insn=0x0000000000310580 string=0x0000000000310584 ""
 *   insn=0x0000000000310584 string=0x0000000000310588 ")"
 *   insn=0x0000000000310588 string=0x000000000031058C "(8@"
 *   insn=0x000000000031058C string=0x0000000000310590 "\t8@"
 *   insn=0x0000000000310590 string=0x0000000000310594 "8"
 *   insn=0x0000000000310594 string=0x0000000000310598 ")8"
 *   insn=0x0000000000310598 string=0x000000000031059C "(@"
 *   insn=0x000000000031059C string=0x00000000003105A0 "\t@"
 *   insn=0x00000000003105A0 string=0x00000000003105A4 ""
 *   insn=0x00000000003105A4 string=0x00000000003105A8 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LightComponent::Swap(__int64 this, Caver::Proto::LightComponent *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::LightComponent *)this )
  {
    v2 = *(_QWORD *)(this + 12);
    *(_QWORD *)(this + 12) = *(_QWORD *)((char *)a2 + 12);
    *(_QWORD *)((char *)a2 + 12) = v2;
    v3 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 32) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 36);
    *(_DWORD *)(this + 36) = *((_DWORD *)a2 + 9);
    *((_DWORD *)a2 + 9) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 40);
    *(_DWORD *)(this + 40) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a2 + 10) = v3;
    v4 = *(_QWORD *)(this + 48);
    *(_QWORD *)(this + 48) = *((_QWORD *)a2 + 6);
    *((_QWORD *)a2 + 6) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 56);
    *(_DWORD *)(this + 56) = *((_DWORD *)a2 + 14);
    *((_DWORD *)a2 + 14) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

