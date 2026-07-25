/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCC10
 * Mangled: ._ZN5Caver24DimensionObjectComponentC2Ev
 * Demangled: Caver::DimensionObjectComponent::DimensionObjectComponent(void)
 *
 * Callers: 1
 *   0x00000000002508F8  Caver::DimensionObjectComponent::Create(void)
 *
 * Callees: 1
 *   0x0000000000281914  Caver::DimensionObjectComponent::DimensionObjectComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCC18 string=0x00000000001FCC1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DimensionObjectComponent::DimensionObjectComponent(Caver::DimensionObjectComponent *this)
{
  return _ZN5Caver24DimensionObjectComponentC2Ev(this);
}

