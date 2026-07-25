/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA6C0
 * Mangled: ._ZN5Caver5Proto13GUIViewLayout9MergeFromERKS1_
 * Demangled: Caver::Proto::GUIViewLayout::MergeFrom(Caver::Proto::GUIViewLayout const&)
 *
 * Callers: 4
 *   0x00000000002D6774  Caver::Proto::GUIViewLayout::GUIViewLayout(Caver::Proto::GUIViewLayout const&)
 *   0x00000000002D7484  Caver::Proto::GUIViewLayout::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002D7488  Caver::Proto::GUIViewLayout::CopyFrom(Caver::Proto::GUIViewLayout const&)
 *   0x00000000002E51E8  Caver::Proto::GameOptions::GameOptions(Caver::Proto::GameOptions const&)
 *
 * Callees: 1
 *   0x00000000002D6774  Caver::Proto::GUIViewLayout::GUIViewLayout(Caver::Proto::GUIViewLayout const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA6C8 string=0x00000000001FA6CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GUIViewLayout::MergeFrom(
        Caver::Proto::GUIViewLayout *this,
        const Caver::Proto::GUIViewLayout *a2)
{
  JUMPOUT(0x2D6840);
}

