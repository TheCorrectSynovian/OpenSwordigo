/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B08B4
 * Mangled: _ZThn16_N5Caver19SimpleGlowComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::SimpleGlowComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202D30  Caver::SimpleGlowComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SimpleGlowComponent::ValueForBindedProperty(
        Caver::SimpleGlowComponent *this,
        int a2)
{
  return Caver::SimpleGlowComponent::ValueForBindedProperty((Caver::SimpleGlowComponent *)((char *)this - 16), a2);
}

