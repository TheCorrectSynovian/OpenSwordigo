/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002130D4
 * Mangled: _ZN5Caver12AnimKeysNode8EvaluateEiPKNS_14FloatDataTrackE
 * Demangled: Caver::AnimKeysNode::Evaluate(int,Caver::FloatDataTrack const*)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F73E0  Caver::FloatDataBuffer::Resize(int)
 *   0x00000000001F9C50  Caver::FloatDataBuffer::Accumulate(Caver::FloatDataBuffer const&,float,Caver::FloatDataTrack const&)
 *   0x00000000001FBED0  Caver::FloatDataBuffer::FillZero(void)
 *   0x00000000001FE670  Caver::FloatDataBuffer::Accumulate(Caver::FloatDataBuffer const&,float)
 *
 * Referenced strings: 23
 *   insn=0x00000000002130E8 string=0x00000000002130EC "h"
 *   insn=0x0000000000213100 string=0x0000000000213104 "\t@"
 *   insn=0x0000000000213108 string=0x000000000021310C "?"
 *   insn=0x000000000021310C string=0x0000000000213110 "`"
 *   insn=0x0000000000213118 string=0x00000000001F73E0 "0'"
 *   insn=0x000000000021311C string=0x0000000000213120 "l"
 *   insn=0x0000000000213120 string=0x0000000000213124 "h"
 *   insn=0x0000000000213120 string=0x00000000001FBED0 "0'"
 *   insn=0x0000000000213124 string=0x0000000000213128 "\t\t@"
 *   insn=0x0000000000213128 string=0x000000000021312C "?"
 *   insn=0x0000000000213130 string=0x0000000000213190 "i"
 *   insn=0x000000000021314C string=0x00000000001F9C50 "0'"
 *   insn=0x0000000000213160 string=0x0000000000213164 ""
 *   insn=0x0000000000213164 string=0x0000000000213168 "h"
 *   insn=0x0000000000213190 string=0x0000000000213194 "\t@"
 *   insn=0x0000000000213194 string=0x0000000000213198 "`"
 *   insn=0x00000000002131A4 string=0x00000000002131A8 " 8 "
 *   insn=0x00000000002131A8 string=0x00000000002131AC "1"
 *   insn=0x00000000002131B8 string=0x00000000002131BC "h"
 *   insn=0x00000000002131BC string=0x00000000002131C0 "i"
 *   insn=0x00000000002131C0 string=0x00000000002131C4 "`"
 *   insn=0x00000000002131C8 string=0x00000000002131CC "\t@"
 *   insn=0x00000000002131D0 string=0x00000000002131D4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AnimKeysNode::Evaluate(__int64 this, int a2, __int64 a3)
{
  __int64 v3; // x19
  __int64 v4; // x8
  __int64 v6; // x22
  int v7; // w1
  __int64 v8; // x8
  __int64 v9; // x21
  __int64 v10; // x22

  v3 = this;
  v4 = *(_QWORD *)(this + 24);
  LODWORD(v6) = a2;
  if ( v4 )
  {
    v7 = **(_DWORD **)(v4 + 16);
    if ( *(_DWORD *)(this + 64) != v7 )
      Caver::FloatDataBuffer::Resize((Caver::FloatDataBuffer *)(this + 64), v7);
    this = Caver::FloatDataBuffer::FillZero((Caver::FloatDataBuffer *)(v3 + 64));
    v8 = *(_QWORD *)(v3 + 24);
    if ( *(_DWORD *)(v8 + 8) == 1 )
    {
      if ( (int)v6 >= 1 )
      {
        this = Caver::FloatDataBuffer::Accumulate();
        if ( (_DWORD)v6 != 1 )
        {
          v9 = a3 + 12;
          v10 = (unsigned int)v6 - 1LL;
          do
          {
            this = Caver::FloatDataBuffer::Accumulate();
            --v10;
            v9 += 12;
          }
          while ( v10 );
        }
      }
    }
    else
    {
      this = Caver::FloatDataBuffer::Accumulate(
               (Caver::FloatDataBuffer *)(v3 + 64),
               (const Caver::FloatDataBuffer *)(*(_QWORD *)(v8 + 16) + 16LL * *(int *)(v3 + 16)),
               1.0 - *(float *)(v3 + 20));
      if ( (int)v6 >= 1 )
      {
        v6 = (unsigned int)v6;
        do
        {
          this = Caver::FloatDataBuffer::Accumulate();
          --v6;
          a3 += 12;
        }
        while ( v6 );
      }
    }
  }
  return this;
}

