/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8C90
 * Mangled: ._ZN6google8protobuf2io17CodedOutputStream12VarintSize64Em
 * Demangled: google::protobuf::io::CodedOutputStream::VarintSize64(ulong)
 *
 * Callers: 1
 *   0x00000000004DF8DC  google::protobuf::internal::ExtensionSet::Extension::ByteSize(int)
 *
 * Callees: 1
 *   0x00000000004E53C0  google::protobuf::io::CodedOutputStream::VarintSize64(ulong)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F8C94 string=0x00000000004E53C0 ""
 *   insn=0x00000000001F8C98 string=0x00000000001F8C9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::io::CodedOutputStream::VarintSize64(
        google::protobuf::io::CodedOutputStream *this,
        unsigned __int64 a2)
{
  return _ZN6google8protobuf2io17CodedOutputStream12VarintSize64Em(this, a2);
}

