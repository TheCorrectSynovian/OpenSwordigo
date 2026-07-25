/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E537C
 * Mangled: _ZN6google8protobuf2io17CodedOutputStream20VarintSize32FallbackEj
 * Demangled: google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Callers: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004E537C string=0x00000000004E5380 "b"
 *   insn=0x00000000004E538C string=0x00000000004E5390 "b"
 *   insn=0x00000000004E539C string=0x00000000004E53A0 "b"
 *   insn=0x00000000004E53A0 string=0x00000000004E53AC "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
        google::protobuf::io::CodedOutputStream *this)
{
  if ( (unsigned int)this < 0x80 )
    return 1;
  if ( (unsigned int)this < 0x4000 )
    return 2;
  if ( (unsigned int)this < 0x200000 )
    return 3;
  if ( (unsigned int)this >> 28 )
    return 5;
  return 4;
}

