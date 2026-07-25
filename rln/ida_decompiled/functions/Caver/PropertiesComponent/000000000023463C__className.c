/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023463C
 * Mangled: _ZNK5Caver19PropertiesComponent9classNameEv
 * Demangled: Caver::PropertiesComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x0000000000234648 string=0x000000000023464C "S"
 *   insn=0x000000000023464C string=0x0000000000234650 "i"
 *   insn=0x0000000000234658 string=0x000000000058B182 "Properties"
 *   insn=0x0000000000234664 string=0x0000000000234668 "T"
 *   insn=0x0000000000234668 string=0x000000000023466C "h"
 *   insn=0x000000000023468C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::PropertiesComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Properties");
}

