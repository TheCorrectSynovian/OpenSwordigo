/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031B658
 * Mangled: _ZN5Caver5Proto19EntityInfoComponent4SwapEPS1_
 * Demangled: Caver::Proto::EntityInfoComponent::Swap(Caver::Proto::EntityInfoComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000031B65C string=0x000000000031B660 "(@"
 *   insn=0x000000000031B660 string=0x000000000031B664 "\t@"
 *   insn=0x000000000031B664 string=0x000000000031B668 ""
 *   insn=0x000000000031B668 string=0x000000000031B66C ")"
 *   insn=0x000000000031B66C string=0x000000000031B670 "("
 *   insn=0x000000000031B670 string=0x000000000031B674 "\t"
 *   insn=0x000000000031B674 string=0x000000000031B678 ""
 *   insn=0x000000000031B678 string=0x000000000031B67C ")"
 *   insn=0x000000000031B67C string=0x000000000031B680 "(@"
 *   insn=0x000000000031B680 string=0x000000000031B684 "\t@"
 *   insn=0x000000000031B684 string=0x000000000031B688 ""
 *   insn=0x000000000031B688 string=0x000000000031B68C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityInfoComponent::Swap(__int64 this, Caver::Proto::EntityInfoComponent *a2)
{
  __int64 v2; // x9

  if ( a2 != (Caver::Proto::EntityInfoComponent *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v2;
    LODWORD(v2) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v2;
  }
  return this;
}

