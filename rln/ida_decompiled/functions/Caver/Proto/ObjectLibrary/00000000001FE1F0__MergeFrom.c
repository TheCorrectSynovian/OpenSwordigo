/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE1F0
 * Mangled: ._ZN5Caver5Proto13ObjectLibrary9MergeFromERKS1_
 * Demangled: Caver::Proto::ObjectLibrary::MergeFrom(Caver::Proto::ObjectLibrary const&)
 *
 * Callers: 4
 *   0x00000000002FC9D4  Caver::Proto::ObjectLibrary::ObjectLibrary(Caver::Proto::ObjectLibrary const&)
 *   0x00000000002FDE20  Caver::Proto::ObjectLibrary::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002FDF18  Caver::Proto::ObjectLibrary::CopyFrom(Caver::Proto::ObjectLibrary const&)
 *   0x0000000000301280  Caver::Proto::Scene::Scene(Caver::Proto::Scene const&)
 *
 * Callees: 1
 *   0x00000000002FC9D4  Caver::Proto::ObjectLibrary::ObjectLibrary(Caver::Proto::ObjectLibrary const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE1F8 string=0x00000000001FE1FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ObjectLibrary::MergeFrom(
        Caver::Proto::ObjectLibrary *this,
        const Caver::Proto::ObjectLibrary *a2)
{
  JUMPOUT(0x2FCBCC);
}

