/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000302E0C
 * Mangled: _ZN5Caver5Proto15SpriteComponent4SwapEPS1_
 * Demangled: Caver::Proto::SpriteComponent::Swap(Caver::Proto::SpriteComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x0000000000302E10 string=0x0000000000302E14 "(@"
 *   insn=0x0000000000302E14 string=0x0000000000302E18 "\t@"
 *   insn=0x0000000000302E18 string=0x0000000000302E1C ""
 *   insn=0x0000000000302E1C string=0x0000000000302E20 ")"
 *   insn=0x0000000000302E20 string=0x0000000000302E24 "("
 *   insn=0x0000000000302E24 string=0x0000000000302E28 "\t"
 *   insn=0x0000000000302E28 string=0x0000000000302E2C ""
 *   insn=0x0000000000302E2C string=0x0000000000302E30 ")"
 *   insn=0x0000000000302E30 string=0x0000000000302E34 "(@"
 *   insn=0x0000000000302E34 string=0x0000000000302E38 "\t@"
 *   insn=0x0000000000302E38 string=0x0000000000302E3C ""
 *   insn=0x0000000000302E3C string=0x0000000000302E40 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpriteComponent::Swap(__int64 this, Caver::Proto::SpriteComponent *a2)
{
  __int64 v2; // x9

  if ( a2 != (Caver::Proto::SpriteComponent *)this )
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

