/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E61E0
 * Mangled: _ZN6google8protobuf2io19CopyingOutputStreamD0Ev
 * Demangled: google::protobuf::io::CopyingOutputStream::~CopyingOutputStream()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000004E61E4  google::protobuf::io::CopyingOutputStreamAdaptor::CopyingOutputStreamAdaptor(google::protobuf::io::CopyingOutputStream *,int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::io::CopyingOutputStream::~CopyingOutputStream(
        google::protobuf::io::CopyingOutputStream *this,
        google::protobuf::io::CopyingOutputStream *a2,
        int a3)
{
  __break(1u);
  google::protobuf::io::CopyingOutputStreamAdaptor::CopyingOutputStreamAdaptor(this, a2, a3);
}

