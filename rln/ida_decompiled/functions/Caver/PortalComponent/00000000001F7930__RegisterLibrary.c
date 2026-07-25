/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7930
 * Mangled: ._ZN5Caver15PortalComponent15RegisterLibraryEv
 * Demangled: Caver::PortalComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x0000000000230324  Caver::PortalComponent::Prepare(void)
 *
 * Callees: 1
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7938 string=0x00000000001F793C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PortalComponent::RegisterLibrary(Caver::PortalComponent *this)
{
  return _ZN5Caver15PortalComponent15RegisterLibraryEv(this);
}

