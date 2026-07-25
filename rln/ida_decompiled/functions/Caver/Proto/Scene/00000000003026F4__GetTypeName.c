/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003026F4
 * Mangled: _ZNK5Caver5Proto5Scene11GetTypeNameEv
 * Demangled: Caver::Proto::Scene::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x0000000000302700 string=0x0000000000302704 "S"
 *   insn=0x0000000000302704 string=0x0000000000302708 "i"
 *   insn=0x000000000030270C string=0x0000000000302710 "A"
 *   insn=0x0000000000302710 string=0x000000000058BB55 "Caver.Proto.Scene"
 *   insn=0x000000000030271C string=0x0000000000302720 "&"
 *   insn=0x0000000000302720 string=0x0000000000302724 "h"
 *   insn=0x0000000000302744 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000302748 string=0x000000000030274C "("
 *   insn=0x000000000030274C string=0x0000000000302750 "1C"
 *   insn=0x0000000000302754 string=0x0000000000302758 "\t"
 *   insn=0x0000000000302758 string=0x000000000030275C ")"
 *   insn=0x000000000030275C string=0x0000000000302760 "A"
 *   insn=0x0000000000302760 string=0x0000000000302764 ""
 *   insn=0x0000000000302768 string=0x000000000030276C "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::Scene::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.Scene");
}

