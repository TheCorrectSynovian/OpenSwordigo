/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ACC6C
 * Mangled: _ZN5Caver23ParticleObjectComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ParticleObjectComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleObjectComponent::ValueForBindedProperty(Caver::ParticleObjectComponent *this, int a2)
{
  return Caver::Component::ValueForBindedProperty(this, a2);
}

