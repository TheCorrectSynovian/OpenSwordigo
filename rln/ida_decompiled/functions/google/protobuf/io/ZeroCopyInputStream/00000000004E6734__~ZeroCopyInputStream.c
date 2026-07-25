/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E6734
 * Mangled: _ZN6google8protobuf2io19ZeroCopyInputStreamD0Ev
 * Demangled: google::protobuf::io::ZeroCopyInputStream::~ZeroCopyInputStream()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000004E6738  google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream()
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::io::ZeroCopyInputStream::~ZeroCopyInputStream(
        google::protobuf::io::ZeroCopyInputStream *this)
{
  __break(1u);
  google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream(this);
}

