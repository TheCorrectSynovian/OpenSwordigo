/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA580
 * Mangled: ._ZN6google8protobuf2io17ArrayOutputStreamC2EPvii
 * Demangled: google::protobuf::io::ArrayOutputStream::ArrayOutputStream(void *,int,int)
 *
 * Callers: 1
 *   0x00000000004E1014  google::protobuf::MessageLite::ParseFromZeroCopyStream(google::protobuf::io::ZeroCopyInputStream *)
 *
 * Callees: 1
 *   0x00000000004E5754  google::protobuf::io::ArrayOutputStream::ArrayOutputStream(void *,int,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FA584 string=0x00000000004E5754 ""
 *   insn=0x00000000001FA588 string=0x00000000001FA58C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::io::ArrayOutputStream::ArrayOutputStream(
        google::protobuf::io::ArrayOutputStream *this,
        void *a2,
        int a3,
        int a4)
{
  return _ZN6google8protobuf2io17ArrayOutputStreamC2EPvii(this, a2, a3, a4);
}

