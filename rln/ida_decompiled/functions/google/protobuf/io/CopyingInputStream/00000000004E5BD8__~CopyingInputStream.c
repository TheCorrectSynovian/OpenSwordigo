/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E5BD8
 * Mangled: _ZN6google8protobuf2io18CopyingInputStreamD0Ev
 * Demangled: google::protobuf::io::CopyingInputStream::~CopyingInputStream()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000004E5BDC  google::protobuf::io::CopyingInputStream::Skip(int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::io::CopyingInputStream::~CopyingInputStream(
        google::protobuf::io::CopyingInputStream *this,
        int a2)
{
  __break(1u);
  google::protobuf::io::CopyingInputStream::Skip(this, a2);
}

