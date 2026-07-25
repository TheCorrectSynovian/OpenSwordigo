/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AED90
 * Mangled: _ZN5Caver15ComponentOutletINS_22GroundPolygonComponentEE6targetEPKNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::GroundPolygonComponent>::target(Caver::Component const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 4
 *   insn=0x00000000002AED9C string=0x00000000002AEDA0 "`\n@"
 *   insn=0x00000000002AEDA8 string=0x00000000002AEDAC "M#"
 *   insn=0x00000000002AEDAC string=0x00000000002AEDB0 "`\n@"
 *   insn=0x00000000002AEDAC string=0x00000000001F7AE0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::GroundPolygonComponent>::target(
        Caver::ComponentOutletBase *this,
        const Caver::Component *a2)
{
  __int64 result; // x0

  result = *((_QWORD *)this + 2);
  if ( !result )
  {
    Caver::ComponentOutletBase::Connect(this, a2);
    return *((_QWORD *)this + 2);
  }
  return result;
}

