/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000305C70
 * Mangled: _ZNK5Caver5Proto33ModelTransformControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::ModelTransformControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x0000000000305C7C string=0x0000000000305C80 "S"
 *   insn=0x0000000000305C80 string=0x0000000000305C84 "i"
 *   insn=0x0000000000305C88 string=0x0000000000305C8C "!"
 *   insn=0x0000000000305C8C string=0x000000000058BBE9 "Caver.Proto.ModelTransformControllerComponent"
 *   insn=0x0000000000305C9C string=0x0000000000305CA0 "h"
 *   insn=0x0000000000305CC0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000305CC4 string=0x0000000000305CC8 ""
 *   insn=0x0000000000305CD0 string=0x0000000000305CD4 "("
 *   insn=0x0000000000305CD8 string=0x0000000000305CDC "`"
 *   insn=0x0000000000305CDC string=0x0000000000305CE0 ""
 *   insn=0x0000000000305CE0 string=0x0000000000305CE4 ""
 *   insn=0x0000000000305CF0 string=0x0000000000305CF4 "A"
 *   insn=0x0000000000305CFC string=0x0000000000305D00 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::ModelTransformControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.ModelTransformControllerComponent");
}

