/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200CC0
 * Mangled: ._ZNK5Caver13GUIViewLayout21SaveToProtobufMessageEPNS_5Proto13GUIViewLayoutE
 * Demangled: Caver::GUIViewLayout::SaveToProtobufMessage(Caver::Proto::GUIViewLayout *)
 *
 * Callers: 1
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000004A8028  Caver::GUIViewLayout::SaveToProtobufMessage(Caver::Proto::GUIViewLayout *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200CC8 string=0x0000000000200CCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIViewLayout::SaveToProtobufMessage(
        Caver::GUIViewLayout *this,
        Caver::Proto::GUIViewLayout *a2)
{
  return _ZNK5Caver13GUIViewLayout21SaveToProtobufMessageEPNS_5Proto13GUIViewLayoutE(this, a2);
}

