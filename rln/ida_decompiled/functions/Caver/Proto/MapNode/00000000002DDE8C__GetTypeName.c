/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DDE8C
 * Mangled: _ZNK5Caver5Proto7MapNode11GetTypeNameEv
 * Demangled: Caver::Proto::MapNode::GetTypeName(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 21
 *   insn=0x00000000002DDE98 string=0x00000000002DDE9C "S"
 *   insn=0x00000000002DDE9C string=0x00000000002DDEA0 "i"
 *   insn=0x00000000002DDEA4 string=0x00000000002DDEA8 "a"
 *   insn=0x00000000002DDEA8 string=0x000000000058ABCF "Caver.Proto.MapNode"
 *   insn=0x00000000002DDEB4 string=0x00000000002DDEB8 "@#\n"
 *   insn=0x00000000002DDEB8 string=0x00000000002DDEBC "h"
 *   insn=0x00000000002DDEDC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002DDEE0 string=0x00000000002DDEE4 ""
 *   insn=0x00000000002DDEE4 string=0x00000000002DDEE8 ""
 *   insn=0x00000000002DDEE8 string=0x00000000002DDEEC "H "
 *   insn=0x00000000002DDEEC string=0x00000000002DDEF0 ""
 *   insn=0x00000000002DDEF4 string=0x00000000002DDEF8 "\t0"
 *   insn=0x00000000002DDEFC string=0x00000000002DDF00 "H "
 *   insn=0x00000000002DDF00 string=0x00000000002DDF04 ""
 *   insn=0x00000000002DDF04 string=0x00000000002DDF08 "0"
 *   insn=0x00000000002DDF08 string=0x00000000002DDF0C "H "
 *   insn=0x00000000002DDF0C string=0x00000000002DDF10 "5A"
 *   insn=0x00000000002DDF18 string=0x00000000002DDF1C "A"
 *   insn=0x00000000002DDF1C string=0x00000000002DDF20 ""
 *   insn=0x00000000002DDF20 string=0x00000000002DDF24 "H "
 *   insn=0x00000000002DDF24 string=0x00000000002DDF28 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Proto::MapNode::GetTypeName@<X0>(int a1@<W8>)
{
  _ReadStatusReg(TPIDR_EL0);
  return sub_566BB8(a1, "Caver.Proto.MapNode");
}

