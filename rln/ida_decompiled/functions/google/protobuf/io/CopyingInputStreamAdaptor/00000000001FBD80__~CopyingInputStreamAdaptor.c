/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBD80
 * Mangled: ._ZN6google8protobuf2io25CopyingInputStreamAdaptorD2Ev
 * Demangled: google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor()
 *
 * Callers: 1
 *   0x00000000004E5CB4  google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor()
 *
 * Callees: 1
 *   0x00000000004E5CB4  google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBD88 string=0x00000000001FBD8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor(
        google::protobuf::io::CopyingInputStreamAdaptor *this)
{
  _ZN6google8protobuf2io25CopyingInputStreamAdaptorD2Ev(this);
}

