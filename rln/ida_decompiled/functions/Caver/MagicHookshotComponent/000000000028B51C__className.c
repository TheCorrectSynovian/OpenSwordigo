/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028B51C
 * Mangled: _ZNK5Caver22MagicHookshotComponent9classNameEv
 * Demangled: Caver::MagicHookshotComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x000000000028B528 string=0x000000000028B52C "S"
 *   insn=0x000000000028B52C string=0x000000000028B530 "i"
 *   insn=0x000000000028B538 string=0x000000000058575F "MagicHookshot"
 *   insn=0x000000000028B548 string=0x000000000028B54C "h"
 *   insn=0x000000000028B558 string=0x000000000028B56C "Y"
 *   insn=0x000000000028B56C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::MagicHookshotComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "MagicHookshot");
}

