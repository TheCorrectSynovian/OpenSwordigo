/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000283968
 * Mangled: _ZNK5Caver22HookshotTrailComponent9classNameEv
 * Demangled: Caver::HookshotTrailComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000283974 string=0x0000000000283978 "S"
 *   insn=0x0000000000283978 string=0x000000000028397C "i"
 *   insn=0x0000000000283980 string=0x0000000000283984 "!"
 *   insn=0x0000000000283984 string=0x0000000000588B21 "HookshotTrail"
 *   insn=0x0000000000283994 string=0x0000000000283998 "h"
 *   insn=0x00000000002839A4 string=0x00000000002839B8 "F"
 *   insn=0x00000000002839B8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::HookshotTrailComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "HookshotTrail");
}

