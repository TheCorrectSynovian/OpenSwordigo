/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D120C
 * Mangled: _ZNK5Caver5Proto10FloatColor11GetTypeNameEv
 * Demangled: Caver::Proto::FloatColor::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x00000000002D1218 string=0x00000000002D121C "S"
 *   insn=0x00000000002D121C string=0x00000000002D1220 "i"
 *   insn=0x00000000002D1228 string=0x000000000058A49E "Caver.Proto.FloatColor"
 *   insn=0x00000000002D1234 string=0x00000000002D1238 "`V\n"
 *   insn=0x00000000002D1238 string=0x00000000002D123C "h"
 *   insn=0x00000000002D125C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D1264 string=0x00000000002D1268 "1D"
 *   insn=0x00000000002D1270 string=0x00000000002D1274 ")"
 *   insn=0x00000000002D1278 string=0x00000000002D127C "A"
 *   insn=0x00000000002D127C string=0x00000000002D1280 ""
 *   insn=0x00000000002D1280 string=0x00000000002D1284 "\t|"
 *   insn=0x00000000002D1284 string=0x00000000002D1288 "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::FloatColor::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.FloatColor");
}

