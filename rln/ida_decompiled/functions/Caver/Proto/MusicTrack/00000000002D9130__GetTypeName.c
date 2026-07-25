/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D9130
 * Mangled: _ZNK5Caver5Proto10MusicTrack11GetTypeNameEv
 * Demangled: Caver::Proto::MusicTrack::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x00000000002D913C string=0x00000000002D9140 "S"
 *   insn=0x00000000002D9140 string=0x00000000002D9144 "i"
 *   insn=0x00000000002D914C string=0x000000000058A5A9 "Caver.Proto.MusicTrack"
 *   insn=0x00000000002D915C string=0x00000000002D9160 "h"
 *   insn=0x00000000002D916C string=0x00000000002D9180 "Tt"
 *   insn=0x00000000002D9180 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D9184 string=0x00000000002D9188 "h "
 *   insn=0x00000000002D9188 string=0x00000000002D918C "5B"
 *   insn=0x00000000002D9194 string=0x00000000002D9198 "k "
 *   insn=0x00000000002D9198 string=0x00000000002D919C "k"
 *   insn=0x00000000002D919C string=0x00000000002D91A0 "\t"
 *   insn=0x00000000002D91A4 string=0x00000000002D91A8 "A"
 *   insn=0x00000000002D91A8 string=0x00000000002D91AC "$"
 *   insn=0x00000000002D91AC string=0x00000000002D91B0 "\n("
 *   insn=0x00000000002D91B0 string=0x00000000002D91B4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::MusicTrack::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.MusicTrack");
}

