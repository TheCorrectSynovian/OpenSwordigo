/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9BB8
 * Mangled: _ZN5Caver5Proto14ShapeComponent21InitAsDefaultInstanceEv
 * Demangled: Caver::Proto::ShapeComponent::InitAsDefaultInstance(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4240  Caver::Proto::Circle::default_instance(void)
 *   0x00000000001F9600  Caver::Proto::Rectangle::default_instance(void)
 *   0x00000000001FAA90  Caver::Proto::Polygon::default_instance(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002F9BC8 string=0x00000000002F9BCC "`\n"
 *   insn=0x00000000002F9BC8 string=0x00000000001F9600 "0'"
 *   insn=0x00000000002F9BD0 string=0x00000000002F9BD4 "`"
 *   insn=0x00000000002F9BD0 string=0x00000000001F4240 "P'"
 *   insn=0x00000000002F9BD8 string=0x00000000002F9BDC "`"
 *   insn=0x00000000002F9BD8 string=0x00000000001FAA90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShapeComponent::InitAsDefaultInstance(Caver::Proto::ShapeComponent *this)
{
  Caver::Proto::Circle *v2; // x0
  Caver::Proto::Polygon *v3; // x0
  __int64 result; // x0

  v2 = (Caver::Proto::Circle *)Caver::Proto::Rectangle::default_instance(this);
  *((_QWORD *)this + 2) = v2;
  v3 = (Caver::Proto::Polygon *)Caver::Proto::Circle::default_instance(v2);
  *((_QWORD *)this + 3) = v3;
  result = Caver::Proto::Polygon::default_instance(v3);
  *((_QWORD *)this + 4) = result;
  return result;
}

