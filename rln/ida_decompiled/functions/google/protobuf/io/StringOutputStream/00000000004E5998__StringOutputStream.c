/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E5998
 * Mangled: _ZN6google8protobuf2io18StringOutputStreamC2EPSs
 * Demangled: google::protobuf::io::StringOutputStream::StringOutputStream(std::string *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000004E5998 string=0x00000000004E599C "9B"
 *   insn=0x00000000004E599C string=0x00000000004E59A0 "A"
 *   insn=0x00000000004E59A0 string=0x00000000004E59A4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall google::protobuf::io::StringOutputStream::StringOutputStream(_QWORD *result, __int64 a2)
{
  *result = off_6D84A8;
  result[1] = a2;
  return result;
}

