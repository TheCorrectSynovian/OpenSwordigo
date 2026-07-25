/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E2540
 * Mangled: _ZNK6google8protobuf11MessageLite17SerializeAsStringEv
 * Demangled: google::protobuf::MessageLite::SerializeAsString(void)
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
 * Referenced strings: 18
 *   insn=0x00000000004E2550 string=0x00000000004E2554 "U"
 *   insn=0x00000000004E256C string=0x00000000004E2570 "i"
 *   insn=0x00000000004E2578 string=0x00000000001F55F0 "P'"
 *   insn=0x00000000004E2588 string=0x00000000004E25A0 "LO"
 *   insn=0x00000000004E25A0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004E25A8 string=0x00000000004E25AC "(a"
 *   insn=0x00000000004E25B4 string=0x00000000004E25B8 "\n"
 *   insn=0x00000000004E25B8 string=0x00000000004E25BC "J=G"
 *   insn=0x00000000004E25BC string=0x00000000004E25C0 ")!"
 *   insn=0x00000000004E25C4 string=0x00000000004E25C8 "*"
 *   insn=0x00000000004E25C4 string=0x00000000004E25F4 "*"
 *   insn=0x00000000004E25C8 string=0x00000000004E25CC "K"
 *   insn=0x00000000004E25CC string=0x00000000004E25D0 "+"
 *   insn=0x00000000004E25D4 string=0x00000000004E25D8 "_"
 *   insn=0x00000000004E25E4 string=0x00000000004E25E8 "o"
 *   insn=0x00000000004E25F4 string=0x00000000004E25F8 "K"
 *   insn=0x00000000004E25F8 string=0x00000000004E25FC "+"
 *   insn=0x00000000004E25FC string=0x00000000004E2600 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall google::protobuf::MessageLite::SerializeAsString@<X0>(_QWORD *a1@<X8>)
{
  _ReadStatusReg(TPIDR_EL0);
  *a1 = &byte_6FD2F8;
  return google::protobuf::MessageLite::AppendPartialToString();
}

