/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000213874
 * Mangled: _ZN5Caver15FloatDataBuffer20AccumulateQuaternionERKS0_fjj
 * Demangled: Caver::FloatDataBuffer::AccumulateQuaternion(Caver::FloatDataBuffer const&,float,uint,uint)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 24
 *   insn=0x0000000000213874 string=0x0000000000213878 "\t"
 *   insn=0x0000000000213878 string=0x000000000021387C "\nI""
 *   insn=0x000000000021387C string=0x0000000000213880 "\t\t\t"
 *   insn=0x0000000000213880 string=0x0000000000213884 ")A"
 *   insn=0x0000000000213884 string=0x0000000000213888 "_"
 *   insn=0x000000000021388C string=0x0000000000213890 "*"
 *   insn=0x0000000000213898 string=0x000000000021389C "k"
 *   insn=0x00000000002138A0 string=0x00000000002138A4 "N"
 *   insn=0x00000000002138A4 string=0x00000000002138A8 ""
 *   insn=0x00000000002138BC string=0x00000000002138C0 "F&"
 *   insn=0x00000000002138C0 string=0x00000000002138C4 "&*&"
 *   insn=0x00000000002138C4 string=0x00000000002138C8 "g'"
 *   insn=0x00000000002138CC string=0x00000000002138D0 "'0"
 *   insn=0x00000000002138E0 string=0x00000000002138E4 "B@!"
 *   insn=0x00000000002138E4 string=0x00000000002138E8 "c@!"
 *   insn=0x00000000002138E8 string=0x00000000002138EC "!@!"
 *   insn=0x00000000002138F4 string=0x00000000002138F8 "Eik"
 *   insn=0x0000000000213908 string=0x000000000021390C "k"
 *   insn=0x0000000000213910 string=0x0000000000213914 "B($"
 *   insn=0x000000000021391C string=0x0000000000213920 "B "
 *   insn=0x0000000000213920 string=0x0000000000213924 "b(""
 *   insn=0x0000000000213934 string=0x0000000000213938 "B "
 *   insn=0x0000000000213938 string=0x000000000021393C "!(""
 *   insn=0x0000000000213940 string=0x0000000000213944 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned int *__fastcall Caver::FloatDataBuffer::AccumulateQuaternion(
        unsigned int *this,
        const Caver::FloatDataBuffer *a2,
        float a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // x8
  unsigned __int64 v6; // x9
  __int64 v7; // x10
  __int64 v8; // x11
  float *v9; // x14
  float *v10; // x13
  float v11; // s2
  float v12; // s4
  float v13; // s5
  float v14; // s1
  float v15; // s3

  v5 = *((_QWORD *)this + 1);
  v6 = v5 + 4LL * *this - 16;
  if ( v5 + 4 * (unsigned __int64)a4 <= v6 )
  {
    v7 = *((_QWORD *)a2 + 1);
    v8 = 4LL * a4;
    do
    {
      v9 = (float *)(v7 + v8);
      v10 = (float *)(v5 + v8);
      v12 = *(float *)(v5 + v8);
      v11 = *(float *)(v5 + v8 + 4);
      v13 = *(float *)(v7 + v8);
      v15 = *(float *)(v5 + v8 + 8);
      v14 = *(float *)(v5 + v8 + 12);
      if ( (float)((float)((float)((float)(v12 * v13) + (float)(v11 * *(float *)(v7 + v8 + 4)))
                         + (float)(v15 * *(float *)(v7 + v8 + 8)))
                 + (float)(v14 * *(float *)(v7 + v8 + 12))) < 0.0 )
      {
        v12 = -v12;
        v11 = -v11;
        v15 = -v15;
        v14 = -v14;
        *v10 = v12;
        v10[1] = v11;
        v10[2] = v15;
        v10[3] = v14;
        v13 = *(float *)(v7 + v8);
      }
      *v10 = v12 + (float)(v13 * a3);
      v8 += 4LL * a5;
      v10[1] = v11 + (float)(v9[1] * a3);
      v10[2] = v15 + (float)(v9[2] * a3);
      v10[3] = v14 + (float)(v9[3] * a3);
    }
    while ( v5 + v8 <= v6 );
  }
  return this;
}

