/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F97A0
 * Mangled: ._ZN6google8protobuf2io16CodedInputStream25PrintTotalBytesLimitErrorEv
 * Demangled: google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError(void)
 *
 * Callers: 1
 *   0x00000000004E3930  google::protobuf::io::CodedInputStream::Refresh(void)
 *
 * Callees: 1
 *   0x00000000004E3744  google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F97A8 string=0x00000000001F97AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError(
        google::protobuf::io::CodedInputStream *this)
{
  return _ZN6google8protobuf2io16CodedInputStream25PrintTotalBytesLimitErrorEv(this);
}

