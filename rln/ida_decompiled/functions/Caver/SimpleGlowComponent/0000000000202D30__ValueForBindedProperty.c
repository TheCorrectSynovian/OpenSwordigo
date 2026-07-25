/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202D30
 * Mangled: ._ZN5Caver19SimpleGlowComponent22ValueForBindedPropertyEi
 * Demangled: Caver::SimpleGlowComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000002B08B4  `non-virtual thunk to'Caver::SimpleGlowComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000002B0850  Caver::SimpleGlowComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000202D34 string=0x00000000002B0850 ")"
 *   insn=0x0000000000202D38 string=0x0000000000202D3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SimpleGlowComponent::ValueForBindedProperty(Caver::SimpleGlowComponent *this, int a2)
{
  return _ZN5Caver19SimpleGlowComponent22ValueForBindedPropertyEi(this, a2);
}

