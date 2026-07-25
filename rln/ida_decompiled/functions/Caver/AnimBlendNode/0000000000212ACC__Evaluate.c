/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000212ACC
 * Mangled: _ZN5Caver13AnimBlendNode8EvaluateEiPKNS_14FloatDataTrackE
 * Demangled: Caver::AnimBlendNode::Evaluate(int,Caver::FloatDataTrack const*)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F47B0  Caver::FloatDataBuffer::Multiply(float)
 *   0x00000000001F9C50  Caver::FloatDataBuffer::Accumulate(Caver::FloatDataBuffer const&,float,Caver::FloatDataTrack const&)
 *
 * Referenced strings: 25
 *   insn=0x0000000000212AE8 string=0x0000000000212AEC " "
 *   insn=0x0000000000212AF8 string=0x0000000000583734 "o"
 *   insn=0x0000000000212AFC string=0x0000000000212B00 "!5G"
 *   insn=0x0000000000212B08 string=0x0000000000212B0C ""
 *   insn=0x0000000000212B10 string=0x0000000000212B14 ""
 *   insn=0x0000000000212B18 string=0x0000000000212B1C "!1G"
 *   insn=0x0000000000212B18 string=0x0000000000583730 "w"
 *   insn=0x0000000000212B20 string=0x0000000000212B24 "M"
 *   insn=0x0000000000212B24 string=0x0000000000212B28 "\t"
 *   insn=0x0000000000212B24 string=0x0000000000212B4C ""
 *   insn=0x0000000000212B2C string=0x0000000000212B30 "#"
 *   insn=0x0000000000212B44 string=0x0000000000212B48 "`"
 *   insn=0x0000000000212B4C string=0x0000000000212B50 "@"
 *   insn=0x0000000000212B58 string=0x0000000000212B5C ""
 *   insn=0x0000000000212B5C string=0x0000000000212B60 "@"
 *   insn=0x0000000000212B68 string=0x0000000000212B6C ""
 *   insn=0x0000000000212B6C string=0x0000000000212B70 ""
 *   insn=0x0000000000212B88 string=0x0000000000212B8C " 8 "
 *   insn=0x0000000000212B8C string=0x0000000000212B90 ""
 *   insn=0x0000000000212B90 string=0x00000000001F47B0 "P'"
 *   insn=0x0000000000212BA0 string=0x0000000000212BA4 ""
 *   insn=0x0000000000212BA4 string=0x0000000000212BA8 ""
 *   insn=0x0000000000212BBC string=0x0000000000212BC0 "$"
 *   insn=0x0000000000212BC0 string=0x00000000001F9C50 "0'"
 *   insn=0x0000000000212BC4 string=0x0000000000212BC8 "s2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::FloatDataBuffer *__fastcall Caver::AnimBlendNode::Evaluate(__int64 a1, unsigned int a2, __int64 a3)
{
  Caver::FloatDataBuffer *result; // x0
  __int64 v5; // x19
  __int64 v6; // x21
  __int64 v7; // x8
  float v8; // s0
  __int64 (__fastcall *v9)(Caver::FloatDataBuffer *, _QWORD, __int64); // x3

  result = *(Caver::FloatDataBuffer **)(a1 + 16);
  v5 = a3;
  LODWORD(v6) = a2;
  if ( result )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 )
    {
      v8 = *(float *)(a1 + 32);
      if ( v8 < 0.001 )
      {
        v9 = *(__int64 (__fastcall **)(Caver::FloatDataBuffer *, _QWORD, __int64))(*(_QWORD *)result + 32LL);
        return (Caver::FloatDataBuffer *)v9(result, a2, a3);
      }
      if ( v8 > 0.999 )
      {
        result = *(Caver::FloatDataBuffer **)(a1 + 24);
        v9 = *(__int64 (__fastcall **)(Caver::FloatDataBuffer *, _QWORD, __int64))(*(_QWORD *)v7 + 32LL);
        return (Caver::FloatDataBuffer *)v9(result, a2, a3);
      }
      (*(void (__fastcall **)(Caver::FloatDataBuffer *))(*(_QWORD *)result + 24LL))(result);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24));
      result = (Caver::FloatDataBuffer *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16));
      if ( result )
      {
        result = (Caver::FloatDataBuffer *)Caver::FloatDataBuffer::Multiply(result, 1.0 - *(float *)(a1 + 32));
        if ( (int)v6 >= 1 )
        {
          v6 = (unsigned int)v6;
          do
          {
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 40LL))(*(_QWORD *)(a1 + 24));
            result = (Caver::FloatDataBuffer *)Caver::FloatDataBuffer::Accumulate();
            --v6;
            v5 += 12;
          }
          while ( v6 );
        }
      }
    }
  }
  return result;
}

