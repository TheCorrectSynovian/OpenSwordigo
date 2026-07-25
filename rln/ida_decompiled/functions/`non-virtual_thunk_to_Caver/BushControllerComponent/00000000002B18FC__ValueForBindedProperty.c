/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B18FC
 * Mangled: _ZThn16_N5Caver23BushControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::BushControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002B18FC string=0x00000000002B1900 "t5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::BushControllerComponent::ValueForBindedProperty(
        Caver::BushControllerComponent *this,
        int a2)
{
  return Caver::Component::ValueForBindedProperty((Caver::BushControllerComponent *)((char *)this - 16), a2);
}

