/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AF3A0
 * Mangled: _ZN5Caver7Matrix49RotationYEf
 * Demangled: Caver::Matrix4::RotationY(float)
 *
 * Callers: 1
 *   0x00000000001F54A0  Caver::Matrix4::RotationY(float)
 *
 * Callees: 2
 *   0x00000000001FF1F0  .cosf
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 8
 *   insn=0x00000000004AF3AC string=0x00000000004AF3B0 ""
 *   insn=0x00000000004AF3B8 string=0x00000000004AF3BC "\t"
 *   insn=0x00000000004AF3C0 string=0x00000000004AF3C4 "+R"
 *   insn=0x00000000004AF3CC string=0x00000000004AF3D0 "`""
 *   insn=0x00000000004AF3D8 string=0x00000000004AF3DC "i"
 *   insn=0x00000000004AF3E4 string=0x00000000004AF3E8 "i*"
 *   insn=0x00000000004AF3F4 string=0x00000000004AF3F8 "`\n"
 *   insn=0x00000000004AF3F8 string=0x00000000004AF3FC "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::Matrix4::RotationY@<S0>(float a1@<S0>, __int64 a2@<X8>)
{
  float v5; // s9
  float v6; // s0
  float result; // s0

  v5 = cosf(a1);
  v6 = sinf(a1);
  *(float *)(a2 + 32) = v6;
  result = -v6;
  *(float *)a2 = v5;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 36) = 0;
  *(float *)(a2 + 40) = v5;
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 44) = 0;
  *(_QWORD *)(a2 + 48) = 0;
  *(float *)(a2 + 8) = result;
  *(_OWORD *)(a2 + 12) = xmmword_5837F0;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  return result;
}

