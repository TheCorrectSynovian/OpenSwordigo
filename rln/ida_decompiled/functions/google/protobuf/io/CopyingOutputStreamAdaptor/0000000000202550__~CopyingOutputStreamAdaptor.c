/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202550
 * Mangled: ._ZN6google8protobuf2io26CopyingOutputStreamAdaptorD2Ev
 * Demangled: google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor()
 *
 * Callers: 1
 *   0x00000000004E6390  google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor()
 *
 * Callees: 1
 *   0x00000000004E6210  google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor()
 *
 * Referenced strings: 1
 *   insn=0x0000000000202558 string=0x000000000020255C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::io::CopyingOutputStreamAdaptor::~CopyingOutputStreamAdaptor(
        google::protobuf::io::CopyingOutputStreamAdaptor *this)
{
  _ZN6google8protobuf2io26CopyingOutputStreamAdaptorD2Ev(this);
}

