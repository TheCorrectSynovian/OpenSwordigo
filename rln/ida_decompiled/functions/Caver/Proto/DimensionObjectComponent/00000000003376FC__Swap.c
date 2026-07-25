/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003376FC
 * Mangled: _ZN5Caver5Proto24DimensionObjectComponent4SwapEPS1_
 * Demangled: Caver::Proto::DimensionObjectComponent::Swap(Caver::Proto::DimensionObjectComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000337700 string=0x0000000000337704 "(@"
 *   insn=0x0000000000337704 string=0x0000000000337708 "\t@"
 *   insn=0x0000000000337708 string=0x000000000033770C ""
 *   insn=0x000000000033770C string=0x0000000000337710 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::DimensionObjectComponent *__fastcall Caver::Proto::DimensionObjectComponent::Swap(
        Caver::Proto::DimensionObjectComponent *this,
        Caver::Proto::DimensionObjectComponent *a2)
{
  int v2; // w9

  if ( a2 != this )
  {
    v2 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v2;
  }
  return this;
}

