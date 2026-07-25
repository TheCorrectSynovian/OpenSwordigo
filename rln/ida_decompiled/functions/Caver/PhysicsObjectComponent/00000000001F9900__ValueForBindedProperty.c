/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9900
 * Mangled: ._ZN5Caver22PhysicsObjectComponent22ValueForBindedPropertyEi
 * Demangled: Caver::PhysicsObjectComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x000000000027F308  `non-virtual thunk to'Caver::PhysicsObjectComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x000000000027F290  Caver::PhysicsObjectComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9904 string=0x000000000027F290 "? "
 *   insn=0x00000000001F9908 string=0x00000000001F990C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PhysicsObjectComponent::ValueForBindedProperty(Caver::PhysicsObjectComponent *this, int a2)
{
  return _ZN5Caver22PhysicsObjectComponent22ValueForBindedPropertyEi(this, a2);
}

