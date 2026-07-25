/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000212EB8
 * Mangled: _ZN5Caver12AnimKeysNode16UpdateFrameBlendEv
 * Demangled: Caver::AnimKeysNode::UpdateFrameBlend(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x0000000000212EC0 string=0x0000000000212EC4 "m"
 *   insn=0x0000000000212EC4 string=0x0000000000212EC8 " "
 *   insn=0x0000000000212EC4 string=0x0000000000212ED0 ""
 *   insn=0x0000000000212ED0 string=0x0000000000212ED4 "\t"
 *   insn=0x0000000000212EDC string=0x0000000000212EE0 ""
 *   insn=0x0000000000212EE4 string=0x0000000000212EE8 "?"
 *   insn=0x0000000000212EF0 string=0x0000000000212F10 ""
 *   insn=0x0000000000212EF8 string=0x0000000000212EFC ""5G"
 *   insn=0x0000000000212EF8 string=0x0000000000583734 "o"
 *   insn=0x0000000000212F00 string=0x0000000000212F04 "!"
 *   insn=0x0000000000212F04 string=0x0000000000212F08 "  ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AnimKeysNode::UpdateFrameBlend(Caver::AnimKeysNode *this)
{
  float v1; // s0
  float v2; // s1
  float v3; // s0
  int v4; // w8
  float v5; // s0

  v1 = *((float *)this + 3);
  v2 = *((float *)this + 10);
  if ( v1 > v2 )
  {
    v1 = *((float *)this + 10);
    *((float *)this + 3) = v2;
  }
  v3 = v1 * *(float *)(*((_QWORD *)this + 3) + 12LL);
  v4 = (int)v3;
  v5 = v3 - (float)(int)v3;
  if ( *((_DWORD *)this + 4) == v4 && fabsf(v5 - *((float *)this + 5)) <= 0.001 )
    return 0;
  *((_DWORD *)this + 4) = v4;
  *((float *)this + 5) = v5;
  return 1;
}

