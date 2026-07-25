/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000255D50
 * Mangled: _ZN5Caver24BreakableObjectComponent13HandleMessageEiPv
 * Demangled: Caver::BreakableObjectComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FAC90  Caver::BreakableObjectComponent::Break(void)
 *   0x0000000000215678  Caver::ModelComponent::Interface(void)
 *
 * Referenced strings: 36
 *   insn=0x0000000000255D60 string=0x0000000000255D64 "?"
 *   insn=0x0000000000255D6C string=0x0000000000255D70 "?8"
 *   insn=0x0000000000255D6C string=0x0000000000255DC8 "H"
 *   insn=0x0000000000255D74 string=0x0000000000255D78 "I"
 *   insn=0x0000000000255D78 string=0x0000000000255D7C "("
 *   insn=0x0000000000255D7C string=0x0000000000255D80 "h"
 *   insn=0x0000000000255D80 string=0x0000000000255D84 "jz@"
 *   insn=0x0000000000255D88 string=0x0000000000255D8C "("
 *   insn=0x0000000000255D88 string=0x0000000000255D98 "kv@"
 *   insn=0x0000000000255D98 string=0x0000000000255D9C "h"
 *   insn=0x0000000000255D9C string=0x0000000000255DA0 "k"
 *   insn=0x0000000000255DA0 string=0x0000000000255DA4 "J"
 *   insn=0x0000000000255DA4 string=0x0000000000255DA8 ")"
 *   insn=0x0000000000255DA4 string=0x0000000000255E0C "hv"
 *   insn=0x0000000000255DA8 string=0x0000000000255DAC "?\t"
 *   insn=0x0000000000255DB0 string=0x0000000000255DB4 "h"
 *   insn=0x0000000000255DB4 string=0x0000000000255DB8 "hv"
 *   insn=0x0000000000255DC0 string=0x0000000000255DC4 "0"
 *   insn=0x0000000000255DC8 string=0x0000000000255DCC ""
 *   insn=0x0000000000255DD0 string=0x0000000000255DD4 "H"
 *   insn=0x0000000000255DD4 string=0x0000000000255DD8 ""
 *   insn=0x0000000000255DDC string=0x0000000000255DE0 "h"
 *   insn=0x0000000000255DE0 string=0x0000000000255DE4 "H"
 *   insn=0x0000000000255DE4 string=0x0000000000255DE8 "@"
 *   insn=0x0000000000255E04 string=0x0000000000255E08 "!"
 *   insn=0x0000000000255E10 string=0x0000000000255E14 "h"
 *   insn=0x0000000000255E1C string=0x0000000000255E20 "`"
 *   insn=0x0000000000255E20 string=0x0000000000255E6C "I3"
 *   insn=0x0000000000255E3C string=0x0000000000255E40 ""
 *   insn=0x0000000000255E40 string=0x0000000000255E44 "Q@"
 *   insn=0x0000000000255E50 string=0x0000000000255E54 "\t"
 *   insn=0x0000000000255E54 string=0x0000000000255E58 "7"
 *   insn=0x0000000000255E70 string=0x0000000000255E74 ")"
 *   insn=0x0000000000255E74 string=0x0000000000255E78 "h"
 *   insn=0x0000000000255E78 string=0x0000000000255E7C "i"
 *   insn=0x0000000000255E88 string=0x00000000001FAC90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BreakableObjectComponent::HandleMessage(
        Caver::BreakableObjectComponent *this,
        int a2,
        float32x2_t *a3)
{
  unsigned __int64 v4; // x9
  int v5; // w10
  int v6; // w11
  int v7; // w8
  float32x2_t v8; // d0
  __int64 v9; // x8
  _QWORD *v10; // x21
  _QWORD *i; // x22
  __int64 v12; // x8

  if ( a2 == 7 )
  {
    if ( *(_BYTE *)(a3[1].n64_u64[0] + 378) )
    {
      if ( *(_BYTE *)(a3->n64_u64[0] + 379) )
      {
        if ( *((_BYTE *)this + 113) )
        {
          v8.n64_u64[0] = vsub_f32(a3[3], a3[4]).n64_u64[0];
          if ( vaddv_f32(vmul_f32(v8, v8)) > 62500.0 )
            goto LABEL_22;
        }
      }
    }
  }
  else if ( a2 == 14 )
  {
    v4 = a3->n64_u64[0];
    if ( *(_DWORD *)(a3->n64_u64[0] + 180) )
    {
      v5 = *((_DWORD *)this + 30);
      if ( !v5 || *(_DWORD *)(v4 + 184) == v5 )
      {
        v6 = *((_DWORD *)this + 29);
        v7 = v6 - 1;
        if ( v6 >= 1 )
        {
          if ( !v5 && *(_DWORD *)(v4 + 184) == 2 )
          {
            v7 = v6 - 100;
            *((_DWORD *)this + 29) = v6 - 100;
            if ( v6 < 100 )
            {
              *((_DWORD *)this + 29) = 0;
LABEL_22:
              Caver::BreakableObjectComponent::Break(this);
              return 0;
            }
          }
          *((_DWORD *)this + 29) = v7;
          if ( !v7 )
            goto LABEL_22;
          v9 = *((_QWORD *)this + 5);
          v10 = *(_QWORD **)(v9 + 192);
          for ( i = *(_QWORD **)(v9 + 200); i != v10; ++v10 )
          {
            if ( ((*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *(__fastcall *)(Caver::ModelComponent *))(Caver::ModelComponent *__hidden)))(*(_QWORD *)*v10 + 160LL))(
                    *v10,
                    Caver::ModelComponent::Interface)
                & 1) != 0 )
            {
              v12 = *v10;
              *(_DWORD *)(*v10 + 310LL) = -11841416;
              *(_BYTE *)(v12 + 309) = 1;
            }
          }
          *((_BYTE *)this + 168) = 1;
          *((_DWORD *)this + 43) = 1041865114;
        }
      }
    }
  }
  return 0;
}

