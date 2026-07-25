/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000265C8C
 * Mangled: _ZThn16_N5Caver15DamageComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::DamageComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000002659DC  Caver::DamageComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000001F8D30  Caver::DamageComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000265C8C string=0x0000000000265C90 "(L"
 *   insn=0x0000000000265C90 string=0x00000000001F8D30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::DamageComponent::ValueForBindedProperty(
        Caver::DamageComponent *this,
        int a2)
{
  return Caver::DamageComponent::ValueForBindedProperty((Caver::DamageComponent *)((char *)this - 16), a2);
}

