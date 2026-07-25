/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000302580
 * Mangled: _ZN5Caver5Proto5Scene21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::Scene::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202F80  Caver::Proto::Scene::MergeFrom(Caver::Proto::Scene const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Scene::CheckTypeAndMergeFrom(Caver::Proto::Scene *this, const Caver::Proto::Scene *a2)
{
  Caver::Proto::Scene::MergeFrom(this, a2);
}

