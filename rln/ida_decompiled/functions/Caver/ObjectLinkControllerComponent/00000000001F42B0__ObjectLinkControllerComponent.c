/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F42B0
 * Mangled: ._ZN5Caver29ObjectLinkControllerComponentC2Ev
 * Demangled: Caver::ObjectLinkControllerComponent::ObjectLinkControllerComponent(void)
 *
 * Callers: 1
 *   0x000000000024F984  Caver::ObjectLinkControllerComponent::Create(void)
 *
 * Callees: 1
 *   0x0000000000228984  Caver::ObjectLinkControllerComponent::ObjectLinkControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F42B8 string=0x00000000001F42BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ObjectLinkControllerComponent::ObjectLinkControllerComponent(
        Caver::ObjectLinkControllerComponent *this)
{
  return _ZN5Caver29ObjectLinkControllerComponentC2Ev(this);
}

