/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004510E4
 * Mangled: _ZN5Caver16SkeletonInstance21ExtractDataFromBufferEPKNS_15FloatDataBufferE
 * Demangled: Caver::SkeletonInstance::ExtractDataFromBuffer(Caver::FloatDataBuffer const*)
 *
 * Callers: 1
 *   0x00000000001FD710  Caver::SkeletonInstance::ExtractDataFromBuffer(Caver::FloatDataBuffer const*)
 *
 * Callees: 1
 *   0x00000000001F9080  Caver::Quaternion::Normalize(void)
 *
 * Referenced strings: 13
 *   insn=0x00000000004510F8 string=0x00000000004510FC "("
 *   insn=0x0000000000451104 string=0x0000000000451108 "i"
 *   insn=0x0000000000451108 string=0x000000000045110C "*"
 *   insn=0x000000000045110C string=0x0000000000451110 "_"
 *   insn=0x0000000000451110 string=0x0000000000451114 "+"
 *   insn=0x0000000000451114 string=0x0000000000451118 "+1D)*"
 *   insn=0x0000000000451118 string=0x000000000045111C "*"
 *   insn=0x000000000045111C string=0x0000000000451120 "u\n@"
 *   insn=0x0000000000451130 string=0x0000000000451134 "9"
 *   insn=0x0000000000451154 string=0x0000000000451158 "h"
 *   insn=0x0000000000451154 string=0x00000000001F9080 "0'"
 *   insn=0x0000000000451164 string=0x0000000000451168 ""
 *   insn=0x0000000000451170 string=0x0000000000451174 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::SkeletonInstance::ExtractDataFromBuffer(_QWORD *this, const Caver::FloatDataBuffer *a2)
{
  __int64 v2; // x8
  _DWORD **v3; // x19
  unsigned int *v4; // x9
  __int64 v5; // x21
  int v6; // w20
  _OWORD *v7; // x22
  __int64 v8; // x23
  __int64 v9; // x24
  __int64 v10; // x25

  v2 = *((_QWORD *)a2 + 1);
  v3 = (_DWORD **)this;
  if ( v2 )
  {
    v4 = (unsigned int *)*this;
    if ( *(int *)*this >= 1 )
    {
      v5 = this[2];
      v6 = 0;
      v7 = (_OWORD *)(v2 + 4LL * v4[8]);
      v8 = v2 + 4LL * v4[5];
      v9 = 4LL * v4[9];
      v10 = 4LL * v4[6];
      do
      {
        *(_DWORD *)(v5 + 8) = *(_DWORD *)(v8 + 8);
        *(_QWORD *)v5 = *(_QWORD *)v8;
        *(_OWORD *)(v5 + 12) = *v7;
        this = (_QWORD *)Caver::Quaternion::Normalize((Caver::Quaternion *)(v5 + 12));
        ++v6;
        v7 = (_OWORD *)((char *)v7 + v9);
        v8 += v10;
        v5 += 220;
      }
      while ( v6 < **v3 );
    }
  }
  return this;
}

