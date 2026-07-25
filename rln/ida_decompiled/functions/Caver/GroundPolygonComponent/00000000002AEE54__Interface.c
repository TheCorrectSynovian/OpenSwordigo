/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AEE54
 * Mangled: _ZN5Caver22GroundPolygonComponent9InterfaceEv
 * Demangled: Caver::GroundPolygonComponent::Interface(void)
 *
 * Callers: 4
 *   0x00000000002AED84  Caver::ComponentOutlet<Caver::GroundPolygonComponent>::Interface(void)
 *   0x00000000002AEE54  Caver::GroundPolygonComponent::Interface(void)
 *   0x00000000002C0708  Caver::GroundPolygonComponent::ImplementsInterface(long)
 *   0x00000000002C071C  Caver::GroundPolygonComponent::RegisterInterfaces(Caver::ComponentManager *)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::GroundPolygonComponent::Interface(
        Caver::GroundPolygonComponent *this))(Caver::GroundPolygonComponent *__hidden this)
{
  return Caver::GroundPolygonComponent::Interface;
}

