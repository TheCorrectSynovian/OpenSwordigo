/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AAFE4
 * Mangled: _ZN5Caver15StoreController12GetStoreNameEv
 * Demangled: Caver::StoreController::GetStoreName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000003AAFF0 string=0x00000000003AAFF4 "S"
 *   insn=0x00000000003AAFF4 string=0x00000000003AAFF8 "i"
 *   insn=0x00000000003AAFFC string=0x00000000003AB000 "!"
 *   insn=0x00000000003AB000 string=0x0000000000591AEA "App"
 *   insn=0x00000000003AB010 string=0x00000000003AB014 "h"
 *   insn=0x00000000003AB034 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::StoreController::GetStoreName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "App");
}

