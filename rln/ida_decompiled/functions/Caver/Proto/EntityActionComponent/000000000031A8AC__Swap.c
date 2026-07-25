/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031A8AC
 * Mangled: _ZN5Caver5Proto21EntityActionComponent4SwapEPS1_
 * Demangled: Caver::Proto::EntityActionComponent::Swap(Caver::Proto::EntityActionComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000031A8B0 string=0x000000000031A8B4 "(@"
 *   insn=0x000000000031A8B4 string=0x000000000031A8B8 "\t@"
 *   insn=0x000000000031A8B8 string=0x000000000031A8BC ""
 *   insn=0x000000000031A8BC string=0x000000000031A8C0 ")"
 *   insn=0x000000000031A8C0 string=0x000000000031A8C4 "("
 *   insn=0x000000000031A8C4 string=0x000000000031A8C8 "\t"
 *   insn=0x000000000031A8C8 string=0x000000000031A8CC ""
 *   insn=0x000000000031A8CC string=0x000000000031A8D0 ")"
 *   insn=0x000000000031A8D0 string=0x000000000031A8D4 "(@"
 *   insn=0x000000000031A8D4 string=0x000000000031A8D8 "\t@"
 *   insn=0x000000000031A8D8 string=0x000000000031A8DC ""
 *   insn=0x000000000031A8DC string=0x000000000031A8E0 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityActionComponent::Swap(__int64 this, Caver::Proto::EntityActionComponent *a2)
{
  __int64 v2; // x9

  if ( a2 != (Caver::Proto::EntityActionComponent *)this )
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

