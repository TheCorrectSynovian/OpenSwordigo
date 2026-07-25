/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027F308
 * Mangled: _ZThn16_N5Caver22PhysicsObjectComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::PhysicsObjectComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9900  Caver::PhysicsObjectComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x000000000027F308 string=0x000000000027F30C "}"
 *   insn=0x000000000027F30C string=0x00000000001F9900 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::PhysicsObjectComponent::ValueForBindedProperty(
        Caver::PhysicsObjectComponent *this,
        int a2)
{
  return Caver::PhysicsObjectComponent::ValueForBindedProperty((Caver::PhysicsObjectComponent *)((char *)this - 16), a2);
}

