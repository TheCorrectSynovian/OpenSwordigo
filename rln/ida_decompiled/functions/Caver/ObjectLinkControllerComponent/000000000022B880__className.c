/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022B880
 * Mangled: _ZNK5Caver29ObjectLinkControllerComponent9classNameEv
 * Demangled: Caver::ObjectLinkControllerComponent::className(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000022B88C string=0x000000000022B890 "S"
 *   insn=0x000000000022B890 string=0x000000000022B894 "i"
 *   insn=0x000000000022B89C string=0x00000000005842A8 "ObjectLinkController"
 *   insn=0x000000000022B8AC string=0x000000000022B8B0 "h"
 *   insn=0x000000000022B8D0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ObjectLinkControllerComponent::className@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "ObjectLinkController");
}

