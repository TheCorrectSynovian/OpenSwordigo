/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E546C
 * Mangled: _ZN6google8protobuf2io16ArrayInputStreamD2Ev
 * Demangled: google::protobuf::io::ArrayInputStream::~ArrayInputStream()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201E10  google::protobuf::io::ZeroCopyInputStream::~ZeroCopyInputStream()
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::io::ArrayInputStream::~ArrayInputStream(google::protobuf::io::ArrayInputStream *this)
{
  google::protobuf::io::ZeroCopyInputStream::~ZeroCopyInputStream(this);
}

