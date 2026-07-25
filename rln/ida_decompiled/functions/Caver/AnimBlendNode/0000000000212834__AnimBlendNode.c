/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000212834
 * Mangled: _ZN5Caver13AnimBlendNodeC2ERKN5boost13intrusive_ptrINS_8AnimNodeEEES6_ff
 * Demangled: Caver::AnimBlendNode::AnimBlendNode(boost::intrusive_ptr<Caver::AnimNode> const&,boost::intrusive_ptr<Caver::AnimNode> const&,float,float)
 *
 * Callers: 1
 *   0x00000000001FCB00  Caver::AnimBlendNode::AnimBlendNode(boost::intrusive_ptr<Caver::AnimNode> const&,boost::intrusive_ptr<Caver::AnimNode> const&,float,float)
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x0000000000212838 string=0x000000000021283C ""
 *   insn=0x0000000000212844 string=0x0000000000212848 "A"
 *   insn=0x0000000000212848 string=0x000000000021284C ""
 *   insn=0x000000000021285C string=0x0000000000212860 ")"
 *   insn=0x0000000000212864 string=0x0000000000212868 "*\t@"
 *   insn=0x0000000000212864 string=0x0000000000212874 "\t"
 *   insn=0x0000000000212868 string=0x000000000021286C "J"
 *   insn=0x000000000021286C string=0x0000000000212870 "*\t"
 *   insn=0x0000000000212874 string=0x0000000000212878 "H"
 *   insn=0x000000000021287C string=0x0000000000212880 "\t\t@"
 *   insn=0x000000000021287C string=0x000000000021288C ""
 *   insn=0x0000000000212880 string=0x0000000000212884 ")"
 *   insn=0x0000000000212884 string=0x0000000000212888 "\t\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AnimBlendNode::AnimBlendNode(__int64 result, __int64 *a2, __int64 *a3, float a4, float a5)
{
  __int64 v5; // x9
  __int64 v6; // x8

  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = off_6B9170;
  *(_QWORD *)(result + 16) = 0;
  *(float *)(result + 36) = a4;
  *(float *)(result + 40) = a5;
  *(_WORD *)(result + 44) = 0;
  v5 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v5 + 8);
  *(_QWORD *)(result + 16) = v5;
  v6 = *a3;
  if ( *a3 )
    ++*(_DWORD *)(v6 + 8);
  *(_QWORD *)(result + 24) = v6;
  return result;
}

