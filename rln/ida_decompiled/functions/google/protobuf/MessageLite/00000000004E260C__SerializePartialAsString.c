/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E260C
 * Mangled: _ZNK6google8protobuf11MessageLite24SerializePartialAsStringEv
 * Demangled: google::protobuf::MessageLite::SerializePartialAsString(void)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F55F0  google::protobuf::MessageLite::AppendPartialToString(std::string *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 17
 *   insn=0x00000000004E261C string=0x00000000004E2620 "U"
 *   insn=0x00000000004E2638 string=0x00000000004E263C "i"
 *   insn=0x00000000004E2644 string=0x00000000001F55F0 "P'"
 *   insn=0x00000000004E266C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004E2674 string=0x00000000004E2678 "(a"
 *   insn=0x00000000004E2680 string=0x00000000004E2684 "\n"
 *   insn=0x00000000004E2684 string=0x00000000004E2688 "J=G"
 *   insn=0x00000000004E2688 string=0x00000000004E268C ")!"
 *   insn=0x00000000004E2690 string=0x00000000004E2694 "*"
 *   insn=0x00000000004E2690 string=0x00000000004E26C0 "*"
 *   insn=0x00000000004E2694 string=0x00000000004E2698 "K"
 *   insn=0x00000000004E2698 string=0x00000000004E269C "+"
 *   insn=0x00000000004E26A0 string=0x00000000004E26A4 "_"
 *   insn=0x00000000004E26B0 string=0x00000000004E26B4 "<"
 *   insn=0x00000000004E26C0 string=0x00000000004E26C4 "K"
 *   insn=0x00000000004E26C4 string=0x00000000004E26C8 "+"
 *   insn=0x00000000004E26C8 string=0x00000000004E26CC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall google::protobuf::MessageLite::SerializePartialAsString@<X0>(_QWORD *a1@<X8>)
{
  _ReadStatusReg(TPIDR_EL0);
  *a1 = &byte_6FD2F8;
  return google::protobuf::MessageLite::AppendPartialToString();
}

