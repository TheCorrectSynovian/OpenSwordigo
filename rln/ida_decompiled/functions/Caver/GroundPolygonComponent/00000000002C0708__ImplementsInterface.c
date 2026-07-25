/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C0708
 * Mangled: _ZN5Caver22GroundPolygonComponent19ImplementsInterfaceEl
 * Demangled: Caver::GroundPolygonComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002AEE54  Caver::GroundPolygonComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002C0708 string=0x00000000002C070C ""
 *   insn=0x00000000002C070C string=0x00000000002C0710 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::GroundPolygonComponent::ImplementsInterface(
        Caver::GroundPolygonComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::GroundPolygonComponent *this))(Caver::GroundPolygonComponent *__hidden this))
{
  return a2 == Caver::GroundPolygonComponent::Interface;
}

