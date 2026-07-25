/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F77F0
 * Mangled: ._ZN5Caver29ObjectLinkControllerComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ObjectLinkControllerComponent::InitWithComponent(Caver::ObjectLinkControllerComponent const*)
 *
 * Callers: 1
 *   0x000000000022B778  Caver::ObjectLinkControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x0000000000228A04  Caver::ObjectLinkControllerComponent::InitWithComponent(Caver::ObjectLinkControllerComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F77F8 string=0x00000000001F77FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ObjectLinkControllerComponent::InitWithComponent(
        Caver::ObjectLinkControllerComponent *this,
        const Caver::ObjectLinkControllerComponent *a2)
{
  return _ZN5Caver29ObjectLinkControllerComponent17InitWithComponentEPKS0_(this, a2);
}

