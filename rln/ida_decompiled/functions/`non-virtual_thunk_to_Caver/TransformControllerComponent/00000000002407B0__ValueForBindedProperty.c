/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002407B0
 * Mangled: _ZThn16_N5Caver28TransformControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::TransformControllerComponent::ValueForBindedProperty(int)
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

__int64 __fastcall `non-virtual thunk to'Caver::TransformControllerComponent::ValueForBindedProperty(
        Caver::TransformControllerComponent *this,
        int a2)
{
  return Caver::Component::ValueForBindedProperty((Caver::TransformControllerComponent *)((char *)this - 16), a2);
}

