/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF360
 * Mangled: ._ZN5Caver5Shape22ShapeWithPolygonNoCopyEPNS_7PolygonE
 * Demangled: Caver::Shape::ShapeWithPolygonNoCopy(Caver::Polygon *)
 *
 * Callers: 1
 *   0x0000000000236DAC  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x0000000000236DAC  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF368 string=0x00000000001FF36C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Shape::ShapeWithPolygonNoCopy()
{
  JUMPOUT(0x237084);
}

