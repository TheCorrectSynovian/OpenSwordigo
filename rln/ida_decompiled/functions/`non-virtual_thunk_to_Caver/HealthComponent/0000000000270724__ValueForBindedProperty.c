/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000270724
 * Mangled: _ZThn16_N5Caver15HealthComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::HealthComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD760  Caver::HealthComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000270728 string=0x00000000001FD760 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::HealthComponent::ValueForBindedProperty(
        Caver::HealthComponent *this,
        int a2)
{
  return Caver::HealthComponent::ValueForBindedProperty((Caver::HealthComponent *)((char *)this - 16), a2);
}

