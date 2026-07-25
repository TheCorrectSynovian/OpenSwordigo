/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201E10
 * Mangled: ._ZN6google8protobuf2io19ZeroCopyInputStreamD2Ev
 * Demangled: google::protobuf::io::ZeroCopyInputStream::~ZeroCopyInputStream()
 *
 * Callers: 3
 *   0x00000000004E546C  google::protobuf::io::ArrayInputStream::~ArrayInputStream()
 *   0x00000000004E5470  google::protobuf::io::ArrayInputStream::~ArrayInputStream()
 *   0x00000000004E5CB4  google::protobuf::io::CopyingInputStreamAdaptor::~CopyingInputStreamAdaptor()
 *
 * Callees: 1
 *   0x00000000004E6730  google::protobuf::io::ZeroCopyInputStream::~ZeroCopyInputStream()
 *
 * Referenced strings: 1
 *   insn=0x0000000000201E18 string=0x0000000000201E1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall google::protobuf::io::ZeroCopyInputStream::~ZeroCopyInputStream(
        google::protobuf::io::ZeroCopyInputStream *this)
{
  _ZN6google8protobuf2io19ZeroCopyInputStreamD2Ev(this);
}

