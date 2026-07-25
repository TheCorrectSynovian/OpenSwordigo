/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D7FEC
 * Mangled: _ZNK5Caver5Proto11SoundEffect11GetTypeNameEv
 * Demangled: Caver::Proto::SoundEffect::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x00000000002D7FF8 string=0x00000000002D7FFC "S"
 *   insn=0x00000000002D7FFC string=0x00000000002D8000 "i"
 *   insn=0x00000000002D8008 string=0x000000000058A578 "Caver.Proto.SoundEffect"
 *   insn=0x00000000002D8018 string=0x00000000002D801C "h"
 *   insn=0x00000000002D803C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D8040 string=0x00000000002D8044 "h "
 *   insn=0x00000000002D8044 string=0x00000000002D8048 "uD"
 *   insn=0x00000000002D8048 string=0x00000000002D804C "\t"
 *   insn=0x00000000002D8050 string=0x00000000002D8054 "\t|"
 *   insn=0x00000000002D8054 string=0x00000000002D8058 "A"
 *   insn=0x00000000002D805C string=0x00000000002D8060 "\n "
 *   insn=0x00000000002D8060 string=0x00000000002D8064 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::SoundEffect::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.SoundEffect");
}

