/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9A1C
 * Mangled: _ZN5Caver5Proto22GroundPolygonComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::GroundPolygonComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F6B40  Caver::Proto::Program::default_instance(void)
 *   0x00000000001FAA90  Caver::Proto::Polygon::default_instance(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F9A28 string=0x00000000002F9A2C "E"
 *   insn=0x00000000002F9A2C string=0x00000000002F9A30 "`\n"
 *   insn=0x00000000002F9A2C string=0x00000000001F6B40 "0'"
 *   insn=0x00000000002F9A34 string=0x00000000002F9A38 "`*"
 *   insn=0x00000000002F9A34 string=0x00000000001FAA90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundPolygonComponent::InitAsDefaultInstance(
        Caver::Proto::GroundPolygonComponent *this)
{
  Caver::Proto::Polygon *v2; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::Polygon *)Caver::Proto::Program::default_instance(this);
  *((_QWORD *)this + 2) = v2;
  result = Caver::Proto::Polygon::default_instance(v2);
  *((_QWORD *)this + 10) = result;
  return result;
}

