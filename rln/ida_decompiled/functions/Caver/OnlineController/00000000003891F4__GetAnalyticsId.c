/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003891F4
 * Mangled: _ZN5Caver16OnlineController14GetAnalyticsIdEv
 * Demangled: Caver::OnlineController::GetAnalyticsId(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000389200 string=0x0000000000389204 "S"
 *   insn=0x0000000000389204 string=0x0000000000389208 "i"
 *   insn=0x000000000038920C string=0x0000000000389210 "!"
 *   insn=0x000000000038921C string=0x0000000000389220 "fv"
 *   insn=0x0000000000389220 string=0x0000000000389224 "h"
 *   insn=0x0000000000389230 string=0x0000000000389244 "#"
 *   insn=0x0000000000389244 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::OnlineController::GetAnalyticsId@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "");
}

