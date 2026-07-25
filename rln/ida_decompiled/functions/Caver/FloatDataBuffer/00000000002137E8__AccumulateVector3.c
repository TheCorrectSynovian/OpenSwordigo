/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002137E8
 * Mangled: _ZN5Caver15FloatDataBuffer17AccumulateVector3ERKS0_fjj
 * Demangled: Caver::FloatDataBuffer::AccumulateVector3(Caver::FloatDataBuffer const&,float,uint,uint)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 16
 *   insn=0x00000000002137E8 string=0x00000000002137EC "\n"
 *   insn=0x00000000002137EC string=0x00000000002137F0 "(I""
 *   insn=0x00000000002137F0 string=0x00000000002137F4 ")\t\n"
 *   insn=0x00000000002137F4 string=0x00000000002137F8 ")1"
 *   insn=0x0000000000213800 string=0x0000000000213804 "+"
 *   insn=0x0000000000213810 string=0x0000000000213814 "k\t"
 *   insn=0x0000000000213814 string=0x0000000000213818 "k"
 *   insn=0x000000000021381C string=0x0000000000213820 "m"
 *   insn=0x000000000021382C string=0x0000000000213830 "J"
 *   insn=0x0000000000213830 string=0x0000000000213834 "! "
 *   insn=0x0000000000213834 string=0x0000000000213838 "A(!"
 *   insn=0x0000000000213844 string=0x0000000000213848 "! "
 *   insn=0x0000000000213848 string=0x000000000021384C "a(!"
 *   insn=0x0000000000213854 string=0x0000000000213858 ""
 *   insn=0x000000000021385C string=0x0000000000213860 "! "
 *   insn=0x0000000000213860 string=0x0000000000213864 "A(!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned int *__fastcall Caver::FloatDataBuffer::AccumulateVector3(
        unsigned int *this,
        const Caver::FloatDataBuffer *a2,
        float a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // x9
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x9
  __int64 v8; // x10
  __int64 v9; // x11
  float *v10; // x13
  float *v11; // x14
  float v12; // s1
  float v13; // s2
  float v14; // s3
  float v15; // s2

  v5 = *((_QWORD *)this + 1);
  v6 = v5 + 4LL * a4;
  v7 = v5 + 4LL * *this - 12;
  if ( v6 <= v7 )
  {
    v8 = 0;
    v9 = *((_QWORD *)a2 + 1) + 4LL * a4 + 4;
    do
    {
      v10 = (float *)(v9 + v8);
      v11 = (float *)(v6 + v8);
      v12 = *(float *)(v9 + v8 - 4);
      v13 = *(float *)(v6 + v8);
      v14 = *(float *)(v6 + v8 + 4);
      v8 += 4LL * a5;
      *v11 = v13 + (float)(v12 * a3);
      v15 = v11[2];
      v11[1] = v14 + (float)(*v10 * a3);
      v11[2] = v15 + (float)(v10[1] * a3);
    }
    while ( v6 + v8 <= v7 );
  }
  return this;
}

