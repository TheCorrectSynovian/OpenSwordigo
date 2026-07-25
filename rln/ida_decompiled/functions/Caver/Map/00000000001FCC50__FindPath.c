/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCC50
 * Mangled: ._ZN5Caver3Map8FindPathERKSsS2_
 * Demangled: Caver::Map::FindPath(std::string const&,std::string const&)
 *
 * Callers: 2
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x0000000000424008  Caver::MapView::UpdateTargetPath(void)
 *
 * Callees: 1
 *   0x00000000003BC240  Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCC58 string=0x00000000001FCC5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Map::FindPath()
{
  JUMPOUT(0x3BC57C);
}

