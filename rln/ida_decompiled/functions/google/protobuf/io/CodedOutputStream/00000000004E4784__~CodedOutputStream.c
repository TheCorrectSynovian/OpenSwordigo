/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E4784
 * Mangled: _ZN6google8protobuf2io17CodedOutputStreamD2Ev
 * Demangled: google::protobuf::io::CodedOutputStream::~CodedOutputStream()
 *
 * Callers: 1
 *   0x00000000001F7CC0  google::protobuf::io::CodedOutputStream::~CodedOutputStream()
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000004E4784 string=0x00000000004E4788 "?"
 *   insn=0x00000000004E4790 string=0x00000000004E4794 ""
 *   insn=0x00000000004E4798 string=0x00000000004E479C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::io::CodedOutputStream::~CodedOutputStream(
        google::protobuf::io::CodedOutputStream *this)
{
  if ( *((int *)this + 4) >= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
}

