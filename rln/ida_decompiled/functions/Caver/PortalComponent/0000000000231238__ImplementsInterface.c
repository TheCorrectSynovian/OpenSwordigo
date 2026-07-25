/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000231238
 * Mangled: _ZN5Caver15PortalComponent19ImplementsInterfaceEl
 * Demangled: Caver::PortalComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002314D0  Caver::PortalComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000231238 string=0x000000000023123C "uD"
 *   insn=0x000000000023123C string=0x0000000000231240 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::PortalComponent::ImplementsInterface(
        Caver::PortalComponent *this,
        __int64 (__fastcall *a2)(Caver::PortalComponent *__hidden this))
{
  return a2 == Caver::PortalComponent::Interface;
}

