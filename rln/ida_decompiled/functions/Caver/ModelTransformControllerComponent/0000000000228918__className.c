/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000228918
 * Mangled: _ZNK5Caver33ModelTransformControllerComponent9classNameEv
 * Demangled: Caver::ModelTransformControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x0000000000228924 string=0x0000000000228928 "S"
 *   insn=0x0000000000228928 string=0x000000000022892C "i"
 *   insn=0x0000000000228934 string=0x00000000005841C2 "ModelTransformController"
 *   insn=0x0000000000228944 string=0x0000000000228948 "h"
 *   insn=0x0000000000228954 string=0x0000000000228968 "Z6"
 *   insn=0x0000000000228968 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ModelTransformControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "ModelTransformController");
}

