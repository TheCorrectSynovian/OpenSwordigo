/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000229DF4
 * Mangled: _ZThn16_N5Caver29ObjectLinkControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::ObjectLinkControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF7E0  Caver::ObjectLinkControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000229DF4 string=0x0000000000229DF8 "zV"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ObjectLinkControllerComponent::ValueForBindedProperty(
        Caver::ObjectLinkControllerComponent *this,
        int a2)
{
  return Caver::ObjectLinkControllerComponent::ValueForBindedProperty(
           (Caver::ObjectLinkControllerComponent *)((char *)this - 16),
           a2);
}

