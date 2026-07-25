/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AC76C
 * Mangled: _ZThn16_N5Caver22ParticleFieldComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::ParticleFieldComponent::ValueForBindedProperty(int)
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

__int64 __fastcall `non-virtual thunk to'Caver::ParticleFieldComponent::ValueForBindedProperty(
        Caver::ParticleFieldComponent *this,
        int a2)
{
  return Caver::Component::ValueForBindedProperty((Caver::ParticleFieldComponent *)((char *)this - 16), a2);
}

