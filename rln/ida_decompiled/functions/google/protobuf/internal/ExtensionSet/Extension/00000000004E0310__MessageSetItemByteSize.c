/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E0310
 * Mangled: _ZNK6google8protobuf8internal12ExtensionSet9Extension22MessageSetItemByteSizeEi
 * Demangled: google::protobuf::internal::ExtensionSet::Extension::MessageSetItemByteSize(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FFDB0  google::protobuf::internal::ExtensionSet::Extension::ByteSize(int)
 *
 * Referenced strings: 15
 *   insn=0x00000000004E031C string=0x00000000004E0320 "h"@9"
 *   insn=0x00000000004E0324 string=0x00000000004E0328 "a"
 *   insn=0x00000000004E0328 string=0x00000000004E032C "h&@9"
 *   insn=0x00000000004E0330 string=0x00000000004E0344 "h*@9h"
 *   insn=0x00000000004E0344 string=0x00000000004E0348 "h"
 *   insn=0x00000000004E0348 string=0x00000000004E0354 "("
 *   insn=0x00000000004E0354 string=0x00000000004E0358 ""
 *   insn=0x00000000004E0358 string=0x00000000004E035C "?"
 *   insn=0x00000000004E0360 string=0x00000000004E0364 "b"
 *   insn=0x00000000004E036C string=0x00000000004E0378 "h"
 *   insn=0x00000000004E0374 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000004E037C string=0x00000000004E0380 "\t"
 *   insn=0x00000000004E0384 string=0x00000000004E0388 ")%@"
 *   insn=0x00000000004E0388 string=0x00000000004E038C " "
 *   insn=0x00000000004E0394 string=0x00000000004E0398 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::Extension::MessageSetItemByteSize(
        google::protobuf::internal::ExtensionSet::Extension *this,
        google::protobuf::io::CodedOutputStream *a2)
{
  int v4; // w0
  int v5; // w20
  unsigned int v6; // w1
  unsigned int v7; // w19
  int v8; // w0

  if ( *((_BYTE *)this + 8) != 11 || *((_BYTE *)this + 9) )
    return google::protobuf::internal::ExtensionSet::Extension::ByteSize(this, (int)a2);
  if ( *((_BYTE *)this + 10) )
    return 0;
  if ( (unsigned int)a2 >= 0x80 )
    v4 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
           (google::protobuf::io::CodedOutputStream *)(unsigned int)a2,
           (unsigned int)a2);
  else
    v4 = 1;
  v5 = v4 + 4;
  v7 = (unsigned int)(*(_QWORD *(__fastcall **)(_QWORD *__return_ptr, _QWORD))(**(_QWORD **)this + 72LL))(
                       *(_QWORD **)this,
                       *(_QWORD *)this);
  if ( v7 >= 0x80 )
    v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
           (google::protobuf::io::CodedOutputStream *)v7,
           v6);
  else
    v8 = 1;
  return v5 + v7 + v8;
}

