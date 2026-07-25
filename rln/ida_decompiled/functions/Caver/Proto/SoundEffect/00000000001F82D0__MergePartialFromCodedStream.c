/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F82D0
 * Mangled: ._ZN5Caver5Proto11SoundEffect27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::SoundEffect::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x00000000002D8398  Caver::Proto::SoundLibrary::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x00000000002D7B40  Caver::Proto::SoundEffect::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F82D8 string=0x00000000001F82DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::SoundEffect::MergePartialFromCodedStream(
        Caver::Proto::SoundEffect *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto11SoundEffect27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(this, a2);
}

