/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281DFC
 * Mangled: _ZNK5Caver24DimensionObjectComponent9classNameEv
 * Demangled: Caver::DimensionObjectComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x0000000000281E08 string=0x0000000000281E0C "S"
 *   insn=0x0000000000281E0C string=0x0000000000281E10 "i"
 *   insn=0x0000000000281E14 string=0x0000000000281E18 "!"
 *   insn=0x0000000000281E18 string=0x000000000058577C "DimensionObject"
 *   insn=0x0000000000281E24 string=0x0000000000281E28 "d"
 *   insn=0x0000000000281E28 string=0x0000000000281E2C "h"
 *   insn=0x0000000000281E38 string=0x0000000000281E4C "!"
 *   insn=0x0000000000281E4C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000281E50 string=0x0000000000281E54 " #"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::DimensionObjectComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "DimensionObject");
}

