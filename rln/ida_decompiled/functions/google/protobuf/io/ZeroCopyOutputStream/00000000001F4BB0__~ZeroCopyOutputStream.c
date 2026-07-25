/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4BB0
 * Mangled: ._ZN6google8protobuf2io20ZeroCopyOutputStreamD2Ev
 * Demangled: google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream()
 *
 * Callers: 5
 *   0x00000000004E5778  google::protobuf::io::ArrayOutputStream::~ArrayOutputStream()
 *   0x00000000004E577C  google::protobuf::io::ArrayOutputStream::~ArrayOutputStream()
 *   0x00000000004E59AC  google::protobuf::io::StringOutputStream::~StringOutputStream()
 *   0x00000000004E59B0  google::protobuf::io::StringOutputStream::~StringOutputStream()
 *   0x00000000004E6210  google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor()
 *
 * Callees: 1
 *   0x00000000004E6738  google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4BB8 string=0x00000000001F4BBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::io::ZeroCopyOutputStream::~ZeroCopyOutputStream(
        google::protobuf::io::ZeroCopyOutputStream *this)
{
  _ZN6google8protobuf2io20ZeroCopyOutputStreamD2Ev(this);
}

