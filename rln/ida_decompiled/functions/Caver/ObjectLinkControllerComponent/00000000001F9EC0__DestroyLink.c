/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9EC0
 * Mangled: ._ZN5Caver29ObjectLinkControllerComponent11DestroyLinkEv
 * Demangled: Caver::ObjectLinkControllerComponent::DestroyLink(void)
 *
 * Callers: 2
 *   0x000000000022A1A0  Caver::ObjectLinkControllerComponent::CreateLink(void)
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *
 * Callees: 1
 *   0x000000000022AECC  Caver::ObjectLinkControllerComponent::DestroyLink(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9EC8 string=0x00000000001F9ECC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ObjectLinkControllerComponent::DestroyLink(Caver::ObjectLinkControllerComponent *this)
{
  return _ZN5Caver29ObjectLinkControllerComponent11DestroyLinkEv(this);
}

