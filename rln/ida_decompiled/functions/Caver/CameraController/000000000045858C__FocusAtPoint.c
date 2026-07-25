/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045858C
 * Mangled: _ZN5Caver16CameraController12FocusAtPointERKNS_7Vector3Eb
 * Demangled: Caver::CameraController::FocusAtPoint(Caver::Vector3 const&,bool)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 23
 *   insn=0x00000000004585A0 string=0x00000000004585A4 "`6@"
 *   insn=0x00000000004585AC string=0x00000000004585B0 "@"
 *   insn=0x00000000004585AC string=0x00000000004585CC "`:@"
 *   insn=0x00000000004585B0 string=0x00000000004585B4 ""
 *   insn=0x00000000004585B4 string=0x00000000004585B8 ""
 *   insn=0x00000000004585BC string=0x00000000004585C0 ""
 *   insn=0x00000000004585C0 string=0x00000000004585C4 ""
 *   insn=0x00000000004585D4 string=0x00000000004585D8 "@"
 *   insn=0x00000000004585D8 string=0x00000000004585DC ""
 *   insn=0x00000000004585DC string=0x00000000004585E0 ""
 *   insn=0x00000000004585E4 string=0x00000000004585E8 ""
 *   insn=0x00000000004585E8 string=0x00000000004585EC ""
 *   insn=0x00000000004585F4 string=0x00000000004585F8 "h"
 *   insn=0x00000000004585FC string=0x0000000000458604 "h"
 *   insn=0x0000000000458608 string=0x0000000000458610 "h."
 *   insn=0x0000000000458614 string=0x0000000000458618 "`B@"
 *   insn=0x0000000000458618 string=0x000000000045861C "a"
 *   insn=0x000000000045861C string=0x0000000000458620 "h"
 *   insn=0x0000000000458624 string=0x0000000000458628 "h*"
 *   insn=0x0000000000458630 string=0x0000000000458634 "@"
 *   insn=0x0000000000458634 string=0x0000000000458638 "a(!"
 *   insn=0x0000000000458638 string=0x000000000045863C "`\n"
 *   insn=0x000000000045863C string=0x0000000000458640 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __fastcall Caver::CameraController::FocusAtPoint(__int64 a1, float32x2_t *a2, char a3)
{
  _DWORD *v5; // x0
  int v6; // w8
  _DWORD *v7; // x0
  int v8; // w8
  float32x2_t v9; // d0
  float v10; // s1
  float32x2_t result; // d0
  float v12; // s1

  if ( (a3 & 1) != 0 )
  {
    v5 = *(_DWORD **)(a1 + 104);
    *(_QWORD *)(a1 + 104) = 0;
    if ( v5 )
    {
      v6 = v5[2] - 1;
      v5[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    v7 = *(_DWORD **)(a1 + 112);
    *(_QWORD *)(a1 + 112) = 0;
    if ( v7 )
    {
      v8 = v7[2] - 1;
      v7[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  *(_DWORD *)a1 = 1;
  *(_DWORD *)(a1 + 28) = 1064849900;
  *(_DWORD *)(a1 + 44) = 1064682127;
  v9.n64_u64[0] = *(unsigned __int64 *)(a1 + 4);
  v10 = *(float *)(a1 + 12);
  *(float32x2_t *)(a1 + 32) = (float32x2_t)a2->n64_u64[0];
  *(_DWORD *)(a1 + 40) = a2[1].n64_u32[0];
  result.n64_u64[0] = vadd_f32((float32x2_t)a2->n64_u64[0], v9).n64_u64[0];
  v12 = a2[1].n64_f32[0] + v10;
  *(float32x2_t *)(a1 + 16) = result;
  *(float *)(a1 + 24) = v12;
  return result;
}

