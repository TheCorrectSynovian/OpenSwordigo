/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000336D9C
 * Mangled: _ZNK5Caver5Proto22MagicHookshotComponent11GetTypeNameEv
 * Demangled: Caver::Proto::MagicHookshotComponent::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x0000000000336DA8 string=0x0000000000336DAC "S"
 *   insn=0x0000000000336DAC string=0x0000000000336DB0 "i"
 *   insn=0x0000000000336DB8 string=0x000000000058C679 "Caver.Proto.MagicHookshotComponent"
 *   insn=0x0000000000336DC4 string=0x0000000000336DC8 "|"
 *   insn=0x0000000000336DC8 string=0x0000000000336DCC "h"
 *   insn=0x0000000000336DD8 string=0x0000000000336DEC "9"
 *   insn=0x0000000000336DEC string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000336DF4 string=0x0000000000336DF8 ""
 *   insn=0x0000000000336E04 string=0x0000000000336E08 "A"
 *   insn=0x0000000000336E08 string=0x0000000000336E0C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::MagicHookshotComponent::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.MagicHookshotComponent");
}

