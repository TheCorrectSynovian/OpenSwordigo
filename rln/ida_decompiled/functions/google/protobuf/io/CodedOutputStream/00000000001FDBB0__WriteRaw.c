/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDBB0
 * Mangled: ._ZN6google8protobuf2io17CodedOutputStream8WriteRawEPKvi
 * Demangled: google::protobuf::io::CodedOutputStream::WriteRaw(void const*,int)
 *
 * Callers: 2
 *   0x00000000004E30B4  google::protobuf::internal::WireFormatLite::WriteString(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *   0x00000000004E3100  google::protobuf::internal::WireFormatLite::WriteBytes(int,std::string const&,google::protobuf::io::CodedOutputStream *)
 *
 * Callees: 1
 *   0x00000000004E4950  google::protobuf::io::CodedOutputStream::WriteRaw(void const*,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDBB8 string=0x00000000001FDBBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall google::protobuf::io::CodedOutputStream::WriteRaw(
        google::protobuf::io::CodedOutputStream *this,
        const void *a2,
        int a3)
{
  return _ZN6google8protobuf2io17CodedOutputStream8WriteRawEPKvi(this, a2, a3);
}

