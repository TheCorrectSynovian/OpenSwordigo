/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042963C
 * Mangled: _ZN5Caver11MapViewNode15InitWithMapNodeERKN5boost10shared_ptrINS_7MapNodeEEE
 * Demangled: Caver::MapViewNode::InitWithMapNode(boost::shared_ptr<Caver::MapNode> const&)
 *
 * Callers: 1
 *   0x00000000001FED60  Caver::MapViewNode::InitWithMapNode(boost::shared_ptr<Caver::MapNode> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x0000000000429644 string=0x0000000000429648 ") @"
 *   insn=0x0000000000429650 string=0x0000000000429654 "\n"
 *   insn=0x0000000000429650 string=0x0000000000429660 "t"
 *   insn=0x0000000000429654 string=0x0000000000429658 "J"
 *   insn=0x0000000000429658 string=0x000000000042965C "\n"
 *   insn=0x0000000000429660 string=0x0000000000429664 "i""
 *   insn=0x0000000000429664 string=0x0000000000429668 "4"
 *   insn=0x0000000000429668 string=0x00000000004296AC "0"
 *   insn=0x000000000042966C string=0x0000000000429670 ""
 *   insn=0x0000000000429680 string=0x0000000000429684 "\t@"
 *   insn=0x000000000042968C string=0x0000000000429690 ""
 *   insn=0x00000000004296A0 string=0x00000000004296A4 "@"
 *   insn=0x00000000004296AC string=0x00000000004296B0 "h."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::MapViewNode::InitWithMapNode(_QWORD *result, __int64 *a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  _QWORD *v4; // x19
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8

  v3 = *a2;
  v2 = a2[1];
  v4 = result;
  if ( v2 )
    ++*(_QWORD *)(v2 + 8);
  v5 = (_QWORD *)result[1];
  *result = v3;
  result[1] = v2;
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  *((_DWORD *)v4 + 11) = 1098907648;
  return result;
}

