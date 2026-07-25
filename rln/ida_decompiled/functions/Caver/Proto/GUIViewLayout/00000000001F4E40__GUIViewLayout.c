/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4E40
 * Mangled: ._ZN5Caver5Proto13GUIViewLayoutC2Ev
 * Demangled: Caver::Proto::GUIViewLayout::GUIViewLayout(void)
 *
 * Callers: 4
 *   0x00000000002E51E8  Caver::Proto::GameOptions::GameOptions(Caver::Proto::GameOptions const&)
 *   0x00000000002E5908  Caver::Proto::GameOptions::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *   0x00000000004A8028  Caver::GUIViewLayout::SaveToProtobufMessage(Caver::Proto::GUIViewLayout *)
 *
 * Callees: 1
 *   0x00000000002D66C4  Caver::Proto::GUIMargins::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F4E44 string=0x00000000002D671C "h "
 *   insn=0x00000000001F4E48 string=0x00000000001F4E4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GUIViewLayout::GUIViewLayout(Caver::Proto::GUIViewLayout *this)
{
  JUMPOUT(0x2D671C);
}

