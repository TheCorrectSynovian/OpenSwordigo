/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000300244
 * Mangled: _ZNK5Caver5Proto11SceneObject11GetTypeNameEv
 * Demangled: Caver::Proto::SceneObject::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x0000000000300250 string=0x0000000000300254 "S"
 *   insn=0x0000000000300254 string=0x0000000000300258 "i"
 *   insn=0x000000000030025C string=0x0000000000300260 "A"
 *   insn=0x0000000000300260 string=0x000000000058BB20 "Caver.Proto.SceneObject"
 *   insn=0x000000000030026C string=0x0000000000300270 "R"
 *   insn=0x0000000000300270 string=0x0000000000300274 "h"
 *   insn=0x0000000000300294 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000300298 string=0x000000000030029C ")"
 *   insn=0x000000000030029C string=0x00000000003002A0 ")A"
 *   insn=0x00000000003002A0 string=0x00000000003002A4 ""
 *   insn=0x00000000003002A4 string=0x00000000003002A8 "\t "
 *   insn=0x00000000003002AC string=0x00000000003002B0 "("
 *   insn=0x00000000003002B0 string=0x00000000003002B4 "("
 *   insn=0x00000000003002B4 string=0x00000000003002B8 ""
 *   insn=0x00000000003002C4 string=0x00000000003002C8 "A"
 *   insn=0x00000000003002D0 string=0x00000000003002D4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::SceneObject::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.SceneObject");
}

