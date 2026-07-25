/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDA50
 * Mangled: ._ZN5Caver5Proto3BoxC2Ev
 * Demangled: Caver::Proto::Box::Box(void)
 *
 * Callers: 3
 *   0x0000000000339178  Caver::Proto::Mesh::Mesh(Caver::Proto::Mesh const&)
 *   0x0000000000339D60  Caver::Proto::Mesh::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000444C48  Caver::Mesh::SaveToProtobufMessage(Caver::Proto::Mesh *)
 *
 * Callees: 1
 *   0x00000000002CF20C  Caver::Proto::Rectangle::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDA58 string=0x00000000001FDA5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Box::Box(Caver::Proto::Box *this)
{
  JUMPOUT(0x2CF264);
}

