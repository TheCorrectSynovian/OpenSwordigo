/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FE04C
 * Mangled: _ZNK5Caver5Proto13ObjectLibrary11GetTypeNameEv
 * Demangled: Caver::Proto::ObjectLibrary::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x00000000002FE058 string=0x00000000002FE05C "S"
 *   insn=0x00000000002FE05C string=0x00000000002FE060 "i"
 *   insn=0x00000000002FE064 string=0x00000000002FE068 "a"
 *   insn=0x00000000002FE068 string=0x000000000058BB06 "Caver.Proto.ObjectLibrary"
 *   insn=0x00000000002FE078 string=0x00000000002FE07C "h"
 *   insn=0x00000000002FE09C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002FE0A0 string=0x00000000002FE0A4 ""
 *   insn=0x00000000002FE0A4 string=0x00000000002FE0A8 ""
 *   insn=0x00000000002FE0A8 string=0x00000000002FE0AC "("
 *   insn=0x00000000002FE0AC string=0x00000000002FE0B0 "9@"
 *   insn=0x00000000002FE0B4 string=0x00000000002FE0B8 "\t0"
 *   insn=0x00000000002FE0C0 string=0x00000000002FE0C4 "h"
 *   insn=0x00000000002FE0C4 string=0x00000000002FE0C8 "H"
 *   insn=0x00000000002FE0C8 string=0x00000000002FE0CC "!A"
 *   insn=0x00000000002FE0D4 string=0x00000000002FE0D8 "A"
 *   insn=0x00000000002FE0D8 string=0x00000000002FE0DC ""
 *   insn=0x00000000002FE0DC string=0x00000000002FE0E0 "("
 *   insn=0x00000000002FE0E0 string=0x00000000002FE0E4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::ObjectLibrary::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.ObjectLibrary");
}

