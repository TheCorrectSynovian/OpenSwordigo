/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDEF0
 * Mangled: ._ZN6google8protobuf8internal20RepeatedPtrFieldBase3AddINS0_16RepeatedPtrFieldIN5Caver5Proto9ComponentEE11TypeHandlerEEEPNT_4TypeEv
 * Demangled: google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>(void)
 *
 * Callers: 2
 *   0x00000000002FC4C0  Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&)
 *   0x00000000002FE598  Caver::Proto::SceneObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x000000000033DAC4  google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDEF8 string=0x00000000001FDEFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *this)
{
  return _ZN6google8protobuf8internal20RepeatedPtrFieldBase3AddINS0_16RepeatedPtrFieldIN5Caver5Proto9ComponentEE11TypeHandlerEEEPNT_4TypeEv(this);
}

