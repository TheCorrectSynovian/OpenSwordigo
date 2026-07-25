/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D88A0
 * Mangled: _ZNK5Caver5Proto12SoundLibrary11GetTypeNameEv
 * Demangled: Caver::Proto::SoundLibrary::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 13
 *   insn=0x00000000002D88AC string=0x00000000002D88B0 "S"
 *   insn=0x00000000002D88B0 string=0x00000000002D88B4 "i"
 *   insn=0x00000000002D88BC string=0x000000000058A590 "Caver.Proto.SoundLibrary"
 *   insn=0x00000000002D88CC string=0x00000000002D88D0 "h"
 *   insn=0x00000000002D88DC string=0x00000000002D88F0 "xv"
 *   insn=0x00000000002D88F0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D88F4 string=0x00000000002D88F8 "h "
 *   insn=0x00000000002D88F8 string=0x00000000002D88FC "}B"
 *   insn=0x00000000002D8900 string=0x00000000002D8904 "i "
 *   insn=0x00000000002D8904 string=0x00000000002D8908 ")"
 *   insn=0x00000000002D890C string=0x00000000002D8910 "A"
 *   insn=0x00000000002D8910 string=0x00000000002D8914 ""
 *   insn=0x00000000002D8914 string=0x00000000002D8918 "\t("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::SoundLibrary::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.SoundLibrary");
}

