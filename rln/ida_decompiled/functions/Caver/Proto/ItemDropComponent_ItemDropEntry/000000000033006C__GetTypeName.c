/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033006C
 * Mangled: _ZNK5Caver5Proto31ItemDropComponent_ItemDropEntry11GetTypeNameEv
 * Demangled: Caver::Proto::ItemDropComponent_ItemDropEntry::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x0000000000330078 string=0x000000000033007C "S"
 *   insn=0x000000000033007C string=0x0000000000330080 "i"
 *   insn=0x0000000000330088 string=0x000000000058C501 "Caver.Proto.ItemDropComponent.ItemDropEntry"
 *   insn=0x0000000000330098 string=0x000000000033009C "h"
 *   insn=0x00000000003300BC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003300C0 string=0x00000000003300C4 ""
 *   insn=0x00000000003300C4 string=0x00000000003300C8 ""
 *   insn=0x00000000003300CC string=0x00000000003300D0 "mF"
 *   insn=0x00000000003300D4 string=0x00000000003300D8 "\t0"
 *   insn=0x00000000003300E0 string=0x00000000003300E4 "aE"
 *   insn=0x00000000003300EC string=0x00000000003300F0 "A"
 *   insn=0x00000000003300F0 string=0x00000000003300F4 ""
 *   insn=0x00000000003300F8 string=0x00000000003300FC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::ItemDropComponent_ItemDropEntry::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.ItemDropComponent.ItemDropEntry");
}

