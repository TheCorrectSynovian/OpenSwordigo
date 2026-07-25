/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E4A4C
 * Mangled: _ZN6google8protobuf2io17CodedOutputStream15WriteRawToArrayEPKviPh
 * Demangled: google::protobuf::io::CodedOutputStream::WriteRawToArray(void const*,int,uchar *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 3
 *   insn=0x00000000004E4A5C string=0x00000000004E4A60 "4|@"
 *   insn=0x00000000004E4A6C string=0x00000000004E4A70 "<s"
 *   insn=0x00000000004E4A74 string=0x00000000004E4A78 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedOutputStream::WriteRawToArray(
        google::protobuf::io::CodedOutputStream *this,
        const void *a2,
        void *a3,
        unsigned __int8 *a4)
{
  __int64 v5; // x20

  v5 = (int)a2;
  memcpy(a3, this, (int)a2);
  return (__int64)a3 + v5;
}

