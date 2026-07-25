/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2828
 * Mangled: _ZN6google8protobuf8internal21StringTypeHandlerBase3NewEv
 * Demangled: google::protobuf::internal::StringTypeHandlerBase::New(void)
 *
 * Callers: 1
 *   0x00000000001F4A00  google::protobuf::internal::StringTypeHandlerBase::New(void)
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 6
 *   insn=0x00000000004E2830 string=0x00000000004E2834 "kK"
 *   insn=0x00000000004E2834 string=0x00000000004E2838 ""
 *   insn=0x00000000004E2834 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004E2838 string=0x00000000004E283C ""
 *   insn=0x00000000004E283C string=0x00000000004E2840 "a"
 *   insn=0x00000000004E2840 string=0x00000000004E2844 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall google::protobuf::internal::StringTypeHandlerBase::New(
        google::protobuf::internal::StringTypeHandlerBase *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(8u);
  *result = &byte_6FD2F8;
  return result;
}

