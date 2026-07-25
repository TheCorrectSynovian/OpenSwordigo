/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD760
 * Mangled: ._ZN5Caver15HealthComponent22ValueForBindedPropertyEi
 * Demangled: Caver::HealthComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000270724  `non-virtual thunk to'Caver::HealthComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000002706D4  Caver::HealthComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FD764 string=0x00000000002706D4 "?"
 *   insn=0x00000000001FD768 string=0x00000000001FD76C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::HealthComponent::ValueForBindedProperty(Caver::HealthComponent *this, int a2)
{
  return _ZN5Caver15HealthComponent22ValueForBindedPropertyEi(this, a2);
}

