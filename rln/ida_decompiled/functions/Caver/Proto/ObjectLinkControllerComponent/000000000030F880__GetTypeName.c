/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030F880
 * Mangled: _ZNK5Caver5Proto29ObjectLinkControllerComponent11GetTypeNameEv
 * Demangled: Caver::Proto::ObjectLinkControllerComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000030F88C string=0x000000000030F890 "S"
 *   insn=0x000000000030F890 string=0x000000000030F894 "i"
 *   insn=0x000000000030F89C string=0x000000000058BD6F "Caver.Proto.ObjectLinkControllerComponent"
 *   insn=0x000000000030F8AC string=0x000000000030F8B0 "h"
 *   insn=0x000000000030F8D0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::ObjectLinkControllerComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.ObjectLinkControllerComponent");
}

