/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FC8F8
 * Mangled: _ZNK5Caver5Proto14ObjectTemplate11GetTypeNameEv
 * Demangled: Caver::Proto::ObjectTemplate::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x00000000002FC904 string=0x00000000002FC908 "S"
 *   insn=0x00000000002FC908 string=0x00000000002FC90C "i"
 *   insn=0x00000000002FC910 string=0x00000000002FC914 "a"
 *   insn=0x00000000002FC914 string=0x000000000058BAEB "Caver.Proto.ObjectTemplate"
 *   insn=0x00000000002FC924 string=0x00000000002FC928 "h"
 *   insn=0x00000000002FC934 string=0x00000000002FC948 "b"
 *   insn=0x00000000002FC948 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002FC94C string=0x00000000002FC950 "H"
 *   insn=0x00000000002FC950 string=0x00000000002FC954 "J"
 *   insn=0x00000000002FC954 string=0x00000000002FC958 "eG"
 *   insn=0x00000000002FC958 string=0x00000000002FC95C "J"
 *   insn=0x00000000002FC95C string=0x00000000002FC960 "\t"
 *   insn=0x00000000002FC964 string=0x00000000002FC968 "A"
 *   insn=0x00000000002FC968 string=0x00000000002FC96C "\n$"
 *   insn=0x00000000002FC96C string=0x00000000002FC970 "\t"
 *   insn=0x00000000002FC970 string=0x00000000002FC974 "\t("
 *   insn=0x00000000002FC974 string=0x00000000002FC978 "\t"
 *   insn=0x00000000002FC978 string=0x00000000002FC97C "\tD"
 *   insn=0x00000000002FC97C string=0x00000000002FC980 "\t`"
 *   insn=0x00000000002FC980 string=0x00000000002FC984 "\t`"
 *   insn=0x00000000002FC990 string=0x00000000002FC994 "\t("
 *   insn=0x00000000002FC998 string=0x00000000002FC99C "\t`"
 *   insn=0x00000000002FC9A0 string=0x00000000002FC9A4 "\t"
 *   insn=0x00000000002FC9A8 string=0x00000000002FC9AC "\t"
 *   insn=0x00000000002FC9AC string=0x00000000002FC9B0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::ObjectTemplate::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.ObjectTemplate");
}

