/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4300
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto11SoundEffectEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect> const&)
 *
 * Callers: 1
 *   0x00000000002D807C  Caver::Proto::SoundLibrary::SoundLibrary(Caver::Proto::SoundLibrary const&)
 *
 * Callees: 1
 *   0x00000000002D86D0  google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4308 string=0x00000000001F430C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto11SoundEffectEE9MergeFromERKS5_();
}

