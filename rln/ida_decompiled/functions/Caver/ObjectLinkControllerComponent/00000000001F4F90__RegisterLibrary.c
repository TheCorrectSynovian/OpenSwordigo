/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4F90
 * Mangled: ._ZN5Caver29ObjectLinkControllerComponent15RegisterLibraryEv
 * Demangled: Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x000000000022A440  Caver::ObjectLinkControllerComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4F98 string=0x00000000001F4F9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ObjectLinkControllerComponent::RegisterLibrary(Caver::ObjectLinkControllerComponent *this)
{
  return _ZN5Caver29ObjectLinkControllerComponent15RegisterLibraryEv(this);
}

