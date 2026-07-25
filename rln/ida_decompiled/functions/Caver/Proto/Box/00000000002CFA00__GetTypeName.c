/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CFA00
 * Mangled: _ZNK5Caver5Proto3Box11GetTypeNameEv
 * Demangled: Caver::Proto::Box::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000002CFA0C string=0x00000000002CFA10 "S"
 *   insn=0x00000000002CFA10 string=0x00000000002CFA14 "i"
 *   insn=0x00000000002CFA1C string=0x000000000058A467 "Caver.Proto.Box"
 *   insn=0x00000000002CFA28 string=0x00000000002CFA2C "c\\n"
 *   insn=0x00000000002CFA2C string=0x00000000002CFA30 "h"
 *   insn=0x00000000002CFA3C string=0x00000000002CFA50 " "
 *   insn=0x00000000002CFA50 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002CFA58 string=0x00000000002CFA5C ""
 *   insn=0x00000000002CFA64 string=0x00000000002CFA68 "A"
 *   insn=0x00000000002CFA68 string=0x00000000002CFA6C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::Box::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.Box");
}

