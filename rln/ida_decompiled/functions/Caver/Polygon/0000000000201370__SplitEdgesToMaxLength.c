/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201370
 * Mangled: ._ZN5Caver7Polygon21SplitEdgesToMaxLengthEf
 * Demangled: Caver::Polygon::SplitEdgesToMaxLength(float)
 *
 * Callers: 1
 *   0x00000000002ADE28  Caver::PortalEffectComponent::CreateVertices(void)
 *
 * Callees: 1
 *   0x00000000004B05D8  Caver::Polygon::SplitEdgesToMaxLength(float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201378 string=0x000000000020137C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Polygon::SplitEdgesToMaxLength(Caver::Polygon *this, float a2)
{
  return _ZN5Caver7Polygon21SplitEdgesToMaxLengthEf(this, a2);
}

