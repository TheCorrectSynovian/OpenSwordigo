/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AC768
 * Mangled: _ZN5Caver22ParticleFieldComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ParticleFieldComponent::ValueForBindedProperty(int)
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
__int64 __fastcall Caver::ParticleFieldComponent::ValueForBindedProperty(Caver::ParticleFieldComponent *this, int a2)
{
  return Caver::Component::ValueForBindedProperty(this, a2);
}

