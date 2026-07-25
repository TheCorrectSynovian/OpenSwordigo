/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F66F0
 * Mangled: ._ZN5Caver24BreakableObjectComponent22ValueForBindedPropertyEi
 * Demangled: Caver::BreakableObjectComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000255530  `non-virtual thunk to'Caver::BreakableObjectComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000002553A0  Caver::BreakableObjectComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F66F8 string=0x00000000001F66FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BreakableObjectComponent::ValueForBindedProperty(
        Caver::BreakableObjectComponent *this,
        int a2)
{
  return _ZN5Caver24BreakableObjectComponent22ValueForBindedPropertyEi(this, a2);
}

