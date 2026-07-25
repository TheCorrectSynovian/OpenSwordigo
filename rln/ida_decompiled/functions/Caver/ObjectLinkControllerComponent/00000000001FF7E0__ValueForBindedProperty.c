/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF7E0
 * Mangled: ._ZN5Caver29ObjectLinkControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ObjectLinkControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000229DF4  `non-virtual thunk to'Caver::ObjectLinkControllerComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x0000000000229D1C  Caver::ObjectLinkControllerComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF7E8 string=0x00000000001FF7EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ObjectLinkControllerComponent::ValueForBindedProperty(
        Caver::ObjectLinkControllerComponent *this,
        int a2)
{
  return _ZN5Caver29ObjectLinkControllerComponent22ValueForBindedPropertyEi(this, a2);
}

