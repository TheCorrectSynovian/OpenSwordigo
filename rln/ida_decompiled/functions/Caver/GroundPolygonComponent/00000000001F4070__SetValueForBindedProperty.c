/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4070
 * Mangled: ._ZN5Caver22GroundPolygonComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::GroundPolygonComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000002BF910  Caver::GroundPolygonComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000002BF910  Caver::GroundPolygonComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4078 string=0x00000000001F407C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GroundPolygonComponent::SetValueForBindedProperty(
        Caver::GroundPolygonComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver22GroundPolygonComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

