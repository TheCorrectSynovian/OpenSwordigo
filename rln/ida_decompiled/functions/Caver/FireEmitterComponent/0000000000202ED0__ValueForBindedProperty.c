/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202ED0
 * Mangled: ._ZN5Caver20FireEmitterComponent22ValueForBindedPropertyEi
 * Demangled: Caver::FireEmitterComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000002A2B40  `non-virtual thunk to'Caver::FireEmitterComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000002A2AF4  Caver::FireEmitterComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000202ED4 string=0x00000000002A2AF4 ")"
 *   insn=0x0000000000202ED8 string=0x0000000000202EDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FireEmitterComponent::ValueForBindedProperty(Caver::FireEmitterComponent *this, int a2)
{
  return _ZN5Caver20FireEmitterComponent22ValueForBindedPropertyEi(this, a2);
}

