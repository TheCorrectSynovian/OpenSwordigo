/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC700
 * Mangled: ._ZN5Caver5Proto11EntityClass9MergeFromERKS1_
 * Demangled: Caver::Proto::EntityClass::MergeFrom(Caver::Proto::EntityClass const&)
 *
 * Callers: 4
 *   0x00000000002E2624  Caver::Proto::EntityClass::EntityClass(Caver::Proto::EntityClass const&)
 *   0x00000000002E3270  Caver::Proto::EntityClass::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002E3274  Caver::Proto::EntityClass::CopyFrom(Caver::Proto::EntityClass const&)
 *   0x00000000002E8208  google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::EntityClass>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *
 * Callees: 1
 *   0x00000000002E2624  Caver::Proto::EntityClass::EntityClass(Caver::Proto::EntityClass const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC708 string=0x00000000001FC70C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::EntityClass::MergeFrom(
        Caver::Proto::EntityClass *this,
        const Caver::Proto::EntityClass *a2)
{
  JUMPOUT(0x2E269C);
}

