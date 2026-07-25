/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E6390
 * Mangled: _ZN6google8protobuf2io26CopyingOutputStreamAdaptorD0Ev
 * Demangled: google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202550  google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor()
 *   0x00000000004E63C8  google::protobuf::io::CopyingOutputStreamAdaptor::Flush(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000004E639C string=0x00000000004E63A0 "lp"
 *   insn=0x00000000004E63B0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004E63C0 string=0x00000000004E63C4 "@m"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor(
        google::protobuf::io::CopyingOutputStreamAdaptor *this)
{
  google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor(this);
  operator delete(this);
}

