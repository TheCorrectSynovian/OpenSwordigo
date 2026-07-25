/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002508F8
 * Mangled: _ZN5Caver24DimensionObjectComponent6CreateEv
 * Demangled: Caver::DimensionObjectComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002508B8  Caver::DimensionSpellComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCC10  Caver::DimensionObjectComponent::DimensionObjectComponent(void)
 *   0x0000000000250938  Caver::MagicExplosionComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000250904 string=0x0000000000250908 "6"
 *   insn=0x0000000000250908 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000250910 string=0x00000000001FCC10 "0'"
 *   insn=0x0000000000250928 string=0x000000000025092C "a"
 *   insn=0x000000000025092C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::DimensionObjectComponent *__fastcall Caver::DimensionObjectComponent::Create(
        Caver::DimensionObjectComponent *this)
{
  Caver::DimensionObjectComponent *v1; // x19

  v1 = (Caver::DimensionObjectComponent *)operator new(0x70u);
  Caver::DimensionObjectComponent::DimensionObjectComponent(v1);
  return v1;
}

