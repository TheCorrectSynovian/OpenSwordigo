/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002129E8
 * Mangled: _ZN5Caver13AnimBlendNode8EvaluateEv
 * Demangled: Caver::AnimBlendNode::Evaluate(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F47B0  Caver::FloatDataBuffer::Multiply(float)
 *   0x00000000001FE670  Caver::FloatDataBuffer::Accumulate(Caver::FloatDataBuffer const&,float)
 *
 * Referenced strings: 29
 *   insn=0x00000000002129F4 string=0x00000000002129F8 "`\n@"
 *   insn=0x00000000002129F8 string=0x00000000002129FC " "
 *   insn=0x00000000002129FC string=0x0000000000212A00 "h"
 *   insn=0x0000000000212A08 string=0x0000000000212A0C "`"@"
 *   insn=0x0000000000212A08 string=0x0000000000583734 "o"
 *   insn=0x0000000000212A0C string=0x0000000000212A10 "!5G"
 *   insn=0x0000000000212A18 string=0x0000000000212A1C ""
 *   insn=0x0000000000212A20 string=0x0000000000212A24 ""
 *   insn=0x0000000000212A28 string=0x0000000000212A2C "!1G"
 *   insn=0x0000000000212A28 string=0x0000000000583730 "w"
 *   insn=0x0000000000212A34 string=0x0000000000212A38 "\t"
 *   insn=0x0000000000212A34 string=0x0000000000212A50 ""
 *   insn=0x0000000000212A3C string=0x0000000000212A40 "!@"
 *   insn=0x0000000000212A48 string=0x0000000000212A4C " "
 *   insn=0x0000000000212A50 string=0x0000000000212A54 "@"
 *   insn=0x0000000000212A58 string=0x0000000000212A5C "`"
 *   insn=0x0000000000212A5C string=0x0000000000212A60 ""
 *   insn=0x0000000000212A60 string=0x0000000000212A64 "@"
 *   insn=0x0000000000212A68 string=0x0000000000212A6C "`\n@"
 *   insn=0x0000000000212A6C string=0x0000000000212A70 ""
 *   insn=0x0000000000212A70 string=0x0000000000212A74 ""
 *   insn=0x0000000000212A80 string=0x0000000000212A84 "`"@"
 *   insn=0x0000000000212A8C string=0x0000000000212A90 " 8 "
 *   insn=0x0000000000212A90 string=0x0000000000212A94 "G"
 *   insn=0x0000000000212A94 string=0x0000000000212A98 "`"
 *   insn=0x0000000000212A94 string=0x00000000001F47B0 "P'"
 *   insn=0x0000000000212A98 string=0x0000000000212A9C ""
 *   insn=0x0000000000212A9C string=0x0000000000212AA0 ""
 *   insn=0x0000000000212AA4 string=0x0000000000212AA8 "`"@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::FloatDataBuffer *__fastcall Caver::AnimBlendNode::Evaluate(Caver::AnimBlendNode *this)
{
  Caver::FloatDataBuffer *result; // x0
  __int64 v3; // x8
  float v4; // s0
  __int64 (__fastcall *v5)(Caver::FloatDataBuffer *); // x1
  Caver::FloatDataBuffer *v6; // x20
  const Caver::FloatDataBuffer *v7; // x0

  result = (Caver::FloatDataBuffer *)*((_QWORD *)this + 2);
  if ( result )
  {
    v3 = *((_QWORD *)this + 3);
    if ( v3 )
    {
      v4 = *((float *)this + 8);
      if ( v4 < 0.001 )
      {
        v5 = *(__int64 (__fastcall **)(Caver::FloatDataBuffer *))(*(_QWORD *)result + 24LL);
        return (Caver::FloatDataBuffer *)v5(result);
      }
      if ( v4 > 0.999 )
      {
        result = (Caver::FloatDataBuffer *)*((_QWORD *)this + 3);
        v5 = *(__int64 (__fastcall **)(Caver::FloatDataBuffer *))(*(_QWORD *)v3 + 24LL);
        return (Caver::FloatDataBuffer *)v5(result);
      }
      (*(void (__fastcall **)(Caver::FloatDataBuffer *))(*(_QWORD *)result + 24LL))(result);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3));
      result = (Caver::FloatDataBuffer *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2));
      v6 = result;
      if ( result )
      {
        Caver::FloatDataBuffer::Multiply(result, 1.0 - *((float *)this + 8));
        v7 = (const Caver::FloatDataBuffer *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 40LL))(*((_QWORD *)this + 3));
        return (Caver::FloatDataBuffer *)Caver::FloatDataBuffer::Accumulate(v6, v7, *((float *)this + 8));
      }
    }
  }
  return result;
}

