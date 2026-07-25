/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000212E94
 * Mangled: _ZN5Caver12AnimKeysNode24CreateBufferIfNeccessaryEv
 * Demangled: Caver::AnimKeysNode::CreateBufferIfNeccessary(void)
 *
 * Callers: 1
 *   0x00000000001FF980  Caver::AnimKeysNode::CreateBufferIfNeccessary(void)
 *
 * Callees: 1
 *   0x00000000001F73E0  Caver::FloatDataBuffer::Resize(int)
 *
 * Referenced strings: 6
 *   insn=0x0000000000212E98 string=0x0000000000212E9C "\t"
 *   insn=0x0000000000212E9C string=0x0000000000212EA0 "\t@"
 *   insn=0x0000000000212EA4 string=0x0000000000212EA8 "?"
 *   insn=0x0000000000212EA8 string=0x0000000000212EAC "A"
 *   insn=0x0000000000212EAC string=0x0000000000212EB4 "K"
 *   insn=0x0000000000212EB4 string=0x00000000001F73E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AnimKeysNode::CreateBufferIfNeccessary(__int64 this)
{
  __int64 v1; // x8
  int v2; // t1
  int v3; // w1

  v1 = *(_QWORD *)(this + 24);
  if ( v1 )
  {
    v2 = *(_DWORD *)(this + 64);
    this += 64;
    v3 = **(_DWORD **)(v1 + 16);
    if ( v2 != v3 )
      return Caver::FloatDataBuffer::Resize((Caver::FloatDataBuffer *)this, v3);
  }
  return this;
}

