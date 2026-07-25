/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201A60
 * Mangled: ._ZN5Caver5Proto15ParticleEmitter27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::ParticleEmitter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 1
 *   0x000000000031E3F0  Caver::Proto::ParticleEmitterComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callees: 1
 *   0x000000000031D0F4  Caver::Proto::ParticleEmitter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201A68 string=0x0000000000201A6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ParticleEmitter::MergePartialFromCodedStream(
        Caver::Proto::ParticleEmitter *this,
        google::protobuf::io::CodedInputStream *a2)
{
  return _ZN5Caver5Proto15ParticleEmitter27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(
           this,
           a2);
}

