/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BF1CC
 * Mangled: _ZNK5Caver7MapNode5TitleEv
 * Demangled: Caver::MapNode::Title(void)
 *
 * Callers: 1
 *   0x00000000001FCAA0  Caver::MapNode::Title(void)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x00000000003BF1D8 string=0x00000000003BF1DC "S"
 *   insn=0x00000000003BF1DC string=0x00000000003BF1E0 "i"
 *   insn=0x00000000003BF1E8 string=0x00000000003BF1EC ")"
 *   insn=0x00000000003BF1EC string=0x00000000003BF1F0 ")"
 *   insn=0x00000000003BF1F4 string=0x00000000003BF1F8 "\t"
 *   insn=0x00000000003BF1FC string=0x00000000003BF200 "!!"
 *   insn=0x00000000003BF208 string=0x00000000003BF20C "h"
 *   insn=0x00000000003BF214 string=0x00000000003BF218 "a"
 *   insn=0x00000000003BF218 string=0x00000000003BF244 "#"
 *   insn=0x00000000003BF238 string=0x00000000003BF23C "_"
 *   insn=0x00000000003BF244 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003BF250 string=0x00000000003BF254 "@"
 *   insn=0x00000000003BF254 string=0x00000000003BF25C ""
 *   insn=0x00000000003BF25C string=0x00000000003BF260 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::MapNode::Title@<X0>(Caver::MapNode *this@<X0>, __int64 a2@<X8>)
{
  char *v2; // x1
  __int64 v3; // x9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (char *)this + 24;
  if ( !*(_QWORD *)(*((_QWORD *)this + 3) - 24LL) )
  {
    v3 = *((_QWORD *)this + 5);
    if ( !v3 )
      return sub_566BB8(a2, "");
    v2 = (char *)(v3 + 8);
  }
  return sub_56A528(a2, v2);
}

