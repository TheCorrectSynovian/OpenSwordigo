/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d8fc0
 * Function: Caver::Proto::MusicTrack::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(MusicTrack * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MusicTrack::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::MusicTrack::SerializeWithCachedSizes(MusicTrack *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x1c);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x1c);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteFloat(2,*(float *)(this + 0x18),param_1);
  return;
}


