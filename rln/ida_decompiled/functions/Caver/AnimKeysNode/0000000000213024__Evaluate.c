/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000213024
 * Mangled: _ZN5Caver12AnimKeysNode8EvaluateEv
 * Demangled: Caver::AnimKeysNode::Evaluate(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F73E0  Caver::FloatDataBuffer::Resize(int)
 *   0x00000000001FBED0  Caver::FloatDataBuffer::FillZero(void)
 *   0x00000000001FE670  Caver::FloatDataBuffer::Accumulate(Caver::FloatDataBuffer const&,float)
 *
 * Referenced strings: 21
 *   insn=0x0000000000213030 string=0x0000000000213034 "h"
 *   insn=0x0000000000213034 string=0x0000000000213038 "H"
 *   insn=0x0000000000213040 string=0x0000000000213044 "\t@"
 *   insn=0x0000000000213048 string=0x000000000021304C "?"
 *   insn=0x000000000021304C string=0x0000000000213050 "`"
 *   insn=0x0000000000213058 string=0x00000000001F73E0 "0'"
 *   insn=0x0000000000213060 string=0x0000000000213064 "h"
 *   insn=0x0000000000213060 string=0x00000000001FBED0 "0'"
 *   insn=0x0000000000213064 string=0x0000000000213068 "\t\t@"
 *   insn=0x0000000000213068 string=0x000000000021306C "?"
 *   insn=0x0000000000213070 string=0x000000000021308C "i"
 *   insn=0x000000000021308C string=0x0000000000213090 "\t@"
 *   insn=0x0000000000213090 string=0x0000000000213094 "`"
 *   insn=0x00000000002130A0 string=0x00000000002130A4 " 8 "
 *   insn=0x00000000002130A4 string=0x00000000002130A8 "r"
 *   insn=0x00000000002130A8 string=0x00000000002130AC "h"
 *   insn=0x00000000002130AC string=0x00000000002130B0 "i"
 *   insn=0x00000000002130B0 string=0x00000000002130B4 "`"
 *   insn=0x00000000002130B4 string=0x00000000002130B8 "\t@"
 *   insn=0x00000000002130B8 string=0x00000000002130BC ""
 *   insn=0x00000000002130CC string=0x00000000002130D0 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AnimKeysNode::Evaluate(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x8
  int v3; // w1
  __int64 v4; // x8
  const Caver::FloatDataBuffer *v5; // x1
  float v6; // s0

  v1 = this;
  v2 = *(_QWORD *)(this + 24);
  if ( v2 )
  {
    v3 = **(_DWORD **)(v2 + 16);
    if ( *(_DWORD *)(this + 64) != v3 )
      Caver::FloatDataBuffer::Resize((Caver::FloatDataBuffer *)(this + 64), v3);
    Caver::FloatDataBuffer::FillZero((Caver::FloatDataBuffer *)(v1 + 64));
    v4 = *(_QWORD *)(v1 + 24);
    if ( *(_DWORD *)(v4 + 8) == 1 )
    {
      v5 = *(const Caver::FloatDataBuffer **)(v4 + 16);
      v6 = 1.0;
    }
    else
    {
      Caver::FloatDataBuffer::Accumulate(
        (Caver::FloatDataBuffer *)(v1 + 64),
        (const Caver::FloatDataBuffer *)(*(_QWORD *)(v4 + 16) + 16LL * *(int *)(v1 + 16)),
        1.0 - *(float *)(v1 + 20));
      v6 = *(float *)(v1 + 20);
      v5 = (const Caver::FloatDataBuffer *)(*(_QWORD *)(*(_QWORD *)(v1 + 24) + 16LL) + 16LL * *(int *)(v1 + 16) + 16);
    }
    return Caver::FloatDataBuffer::Accumulate((Caver::FloatDataBuffer *)(v1 + 64), v5, v6);
  }
  return this;
}

