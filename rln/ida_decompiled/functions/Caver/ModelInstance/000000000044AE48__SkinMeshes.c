/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044AE48
 * Mangled: _ZN5Caver13ModelInstance10SkinMeshesERKNS_7Matrix4E
 * Demangled: Caver::ModelInstance::SkinMeshes(Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000002026C0  Caver::ModelInstance::SkinMeshes(Caver::Matrix4 const&)
 *
 * Callees: 8
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F9CF0  Caver::Matrix4::Equals(Caver::Matrix4 const&,float)
 *   0x00000000001FE450  Caver::MeshInstance::SkinWithBoneMatrices(Caver::Matrix4 const*)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x000000000044B14C  Caver::ModelInstance::Draw(Caver::RenderingContext *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 67
 *   insn=0x000000000044AE64 string=0x000000000044AE68 "S"
 *   insn=0x000000000044AE68 string=0x000000000044AE6C "h"
 *   insn=0x000000000044AE84 string=0x0000000000583734 "o"
 *   insn=0x000000000044AE94 string=0x000000000044AE98 "@"
 *   insn=0x000000000044AE94 string=0x00000000001F9CF0 "0'"
 *   insn=0x000000000044AE98 string=0x000000000044B100 "h"
 *   insn=0x000000000044AEA0 string=0x000000000044AEA4 "\t\t"
 *   insn=0x000000000044AEA8 string=0x000000000044AEAC "\n"
 *   insn=0x000000000044AEAC string=0x000000000044AEB0 ","
 *   insn=0x000000000044AEB0 string=0x000000000044AEB4 "I"
 *   insn=0x000000000044AEB4 string=0x000000000044AEB8 ")"
 *   insn=0x000000000044AEB8 string=0x000000000044AEBC "*"
 *   insn=0x000000000044AEBC string=0x000000000044AEC0 "_!"
 *   insn=0x000000000044AEC4 string=0x000000000044AEC8 "b"
 *   insn=0x000000000044AED0 string=0x000000000044AF4C "jE@"
 *   insn=0x000000000044AED4 string=0x000000000044AED8 ""
 *   insn=0x000000000044AED8 string=0x000000000044AEDC "k"
 *   insn=0x000000000044AEDC string=0x000000000044AEE0 "l"
 *   insn=0x000000000044AEE8 string=0x000000000044AEEC "?"
 *   insn=0x000000000044AEF0 string=0x000000000044AEF4 "k1"
 *   insn=0x000000000044AEF0 string=0x000000000044AF0C "L"
 *   insn=0x000000000044AEF4 string=0x000000000044AEF8 "k"
 *   insn=0x000000000044AF04 string=0x000000000044AF08 "("
 *   insn=0x000000000044AF1C string=0x000000000044AF20 ")!"
 *   insn=0x000000000044AF3C string=0x000000000044AF40 "a"
 *   insn=0x000000000044AF40 string=0x000000000044AF44 "_"
 *   insn=0x000000000044AF4C string=0x000000000044AF50 "*E"
 *   insn=0x000000000044AF50 string=0x000000000044AF54 "?"
 *   insn=0x000000000044AF74 string=0x000000000044AF78 ""
 *   insn=0x000000000044AF78 string=0x000000000044AF7C "\t"
 *   insn=0x000000000044AF80 string=0x000000000044AF84 " "
 *   insn=0x000000000044AF84 string=0x000000000044AF88 "z"
 *   insn=0x000000000044AF88 string=0x00000000001F8570 "0'"
 *   insn=0x000000000044AF90 string=0x000000000044AF94 "k"
 *   insn=0x000000000044AFA8 string=0x000000000044AFAC "h"
 *   insn=0x000000000044AFB4 string=0x000000000044AFB8 ":"
 *   insn=0x000000000044AFC0 string=0x000000000044AFC4 "("
 *   insn=0x000000000044AFE8 string=0x000000000044AFEC ""
 *   insn=0x000000000044AFEC string=0x000000000044AFF0 "i"
 *   insn=0x000000000044AFF0 string=0x000000000044AFF4 "*"
 *   insn=0x000000000044AFF4 string=0x000000000044AFF8 "K"
 *   insn=0x000000000044B00C string=0x000000000044B010 ""
 *   insn=0x000000000044B010 string=0x000000000044B07C "+E@"
 *   insn=0x000000000044B020 string=0x000000000044B024 ")"
 *   insn=0x000000000044B020 string=0x000000000044B040 "l"
 *   insn=0x000000000044B02C string=0x000000000044B030 "_"
 *   insn=0x000000000044B030 string=0x000000000044B034 "i"
 *   insn=0x000000000044B048 string=0x000000000044B04C "i"
 *   insn=0x000000000044B054 string=0x000000000044B058 "o"
 *   insn=0x000000000044B06C string=0x000000000044B070 "A"
 *   insn=0x000000000044B078 string=0x000000000044B08C "9"
 *   insn=0x000000000044B07C string=0x000000000044B080 "KE"
 *   insn=0x000000000044B080 string=0x000000000044B084 "_"
 *   insn=0x000000000044B08C string=0x000000000044B090 "?"
 *   insn=0x000000000044B0A0 string=0x000000000044B0A4 "h"
 *   insn=0x000000000044B0A4 string=0x000000000044B0A8 "\t"
 *   insn=0x000000000044B0A8 string=0x000000000044B0AC ""
 *   insn=0x000000000044B0AC string=0x000000000044B0B0 ""
 *   insn=0x000000000044B0C0 string=0x000000000044B0C4 "h"
 *   insn=0x000000000044B0D0 string=0x000000000044B0D4 "h"
 *   insn=0x000000000044B0DC string=0x000000000044B0E0 "\t"
 *   insn=0x000000000044B0E0 string=0x000000000044B0E4 ""
 *   insn=0x000000000044B0E4 string=0x000000000044B0E8 ""
 *   insn=0x000000000044B0F8 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000044B108 string=0x000000000044B10C "!"
 *   insn=0x000000000044B10C string=0x000000000044B130 "h"
 *   insn=0x000000000044B130 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ModelInstance::SkinMeshes(Caver::ModelInstance *this, const Caver::Matrix4 *a2)
{
  char *v4; // x8
  char *v5; // x11
  char *v6; // x10
  unsigned __int64 v7; // x10
  char *v8; // x9
  const Caver::Matrix4 *v9; // x11
  unsigned __int64 v10; // x11
  bool v11; // cc
  __int64 v12; // x9
  _OWORD *v13; // x13
  __int128 *v14; // x14
  __int64 v15; // x15
  __int128 v16; // q0
  __int128 v17; // q1
  int v18; // t1
  int **v19; // x20
  unsigned __int64 v20; // x24
  unsigned __int64 v21; // x0
  __int64 v22; // x0
  const Caver::Matrix4 *v23; // x21
  __int64 v24; // x25
  const float *v25; // x22
  _DWORD *v26; // x23
  unsigned __int64 v27; // x20
  unsigned __int64 v28; // x28
  char *v29; // x19
  char *v30; // x9
  unsigned __int64 v31; // x11
  float *v32; // x9
  _DWORD *v33; // x10
  unsigned __int64 v34; // x10
  __int64 v35; // x10
  __int64 v36; // x13
  __int64 v37; // x14
  __int128 v38; // q0
  __int128 v39; // q1
  _OWORD *v40; // x15
  int v41; // t1
  __int64 v42; // x20
  __int64 v43; // x22
  Caver::ModelInstance *v44; // [xsp+8h] [xbp-B8h]
  __int64 v45; // [xsp+18h] [xbp-A8h]
  float *v46; // [xsp+20h] [xbp-A0h]
  float v47[16]; // [xsp+28h] [xbp-98h] BYREF
  __int64 v48; // [xsp+68h] [xbp-58h]

  v48 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*((_BYTE *)this + 69)
    && (Caver::Matrix4::Equals(a2, (Caver::ModelInstance *)((char *)this + 72), 0.001) & 1) != 0 )
  {
    return;
  }
  v4 = (char *)this + 136;
  v5 = (char *)this + 76;
  if ( (char *)this + 136 <= (char *)this + 76 )
    v6 = (char *)this + 76;
  else
    v6 = (char *)this + 136;
  v7 = ((unsigned __int64)&v6[-73LL - (_QWORD)this] >> 2) + 1;
  v8 = (char *)this + 72;
  if ( v7 >= 8 )
  {
    if ( v4 > v5 )
      v5 = (char *)this + 136;
    v10 = (unsigned __int64)&v5[-73LL - (_QWORD)this];
    if ( v8 >= (char *)a2 + (v10 & 0xFFFFFFFFFFFFFFFCLL) + 4
      || (v11 = (Caver::ModelInstance *)((char *)this + ((v10 + 76) & 0xFFFFFFFFFFFFFFFCLL)) > a2, v9 = a2, !v11) )
    {
      v12 = 4 * (v7 & 0x7FFFFFFFFFFFFFF8LL);
      v9 = (const Caver::Matrix4 *)((char *)a2 + v12);
      v13 = (_OWORD *)((char *)this + 88);
      v8 = (char *)this + v12 + 72;
      v14 = (__int128 *)((char *)a2 + 16);
      v15 = v7 & 0x7FFFFFFFFFFFFFF8LL;
      do
      {
        v16 = *(v14 - 1);
        v17 = *v14;
        v15 -= 8;
        v14 += 2;
        *(v13 - 1) = v16;
        *v13 = v17;
        v13 += 2;
      }
      while ( v15 );
      if ( v7 == (v7 & 0x7FFFFFFFFFFFFFF8LL) )
        goto LABEL_16;
    }
  }
  else
  {
    v9 = a2;
  }
  do
  {
    v18 = *(_DWORD *)v9;
    v9 = (const Caver::Matrix4 *)((char *)v9 + 4);
    *(_DWORD *)v8 = v18;
    v8 += 4;
  }
  while ( v8 < v4 );
LABEL_16:
  v44 = this;
  v46 = (float *)a2;
  v19 = (int **)*((_QWORD *)this + 3);
  *((_BYTE *)this + 69) = 0;
  v20 = **v19;
  if ( is_mul_ok(v20, 0x40u) )
    v21 = v20 << 6;
  else
    v21 = -1;
  v22 = operator new[](v21);
  v23 = (const Caver::Matrix4 *)v22;
  if ( (int)v20 >= 1 )
  {
    v24 = 0;
    v25 = (const float *)(v19[2] + 39);
    v26 = (_DWORD *)v22;
    v45 = ~v22;
    do
    {
      v27 = (unsigned __int64)v23 + 64 * v24;
      v28 = (unsigned __int64)v23 + ((v24 << 6) | 4);
      if ( v27 + 64 <= v28 )
        v29 = (char *)v23 + ((v24 << 6) | 4);
      else
        v29 = (char *)(v27 + 64);
      C_Matrix4Mul(v46, v25, v47);
      v30 = &v29[v45 - (v24 << 6)];
      v31 = ((unsigned __int64)v30 >> 2) + 1;
      if ( v31 >= 8 )
      {
        if ( v27 >= (unsigned __int64)&v47[((unsigned __int64)v30 >> 2) + 1]
          || (v34 = v28 + ((unsigned __int64)v30 & 0xFFFFFFFFFFFFFFFCLL), v32 = v47, v34 <= (unsigned __int64)v47) )
        {
          v35 = v31 & 0x7FFFFFFFFFFFFFF8LL;
          v36 = 0;
          v32 = &v47[v35];
          v33 = &v26[v35];
          v37 = v31 & 0x7FFFFFFFFFFFFFF8LL;
          do
          {
            v38 = *(_OWORD *)&v47[v36];
            v39 = *(_OWORD *)&v47[v36 + 4];
            v40 = &v26[v36];
            v37 -= 8;
            v36 += 8;
            *v40 = v38;
            v40[1] = v39;
          }
          while ( v37 );
          if ( v31 == (v31 & 0x7FFFFFFFFFFFFFF8LL) )
            goto LABEL_33;
        }
        else
        {
          v33 = v26;
        }
      }
      else
      {
        v32 = v47;
        v33 = v26;
      }
      do
      {
        v41 = *(_DWORD *)v32++;
        *v33++ = v41;
      }
      while ( v33 < v26 + 16 );
LABEL_33:
      ++v24;
      v25 += 55;
      v26 += 16;
    }
    while ( (int)v24 < (int)v20 );
  }
  if ( (int)((*(_QWORD *)(*(_QWORD *)v44 + 16LL) - *(_QWORD *)(*(_QWORD *)v44 + 8LL)) >> 4) >= 1 )
  {
    v42 = 0;
    v43 = 0;
    do
    {
      Caver::MeshInstance::SkinWithBoneMatrices(*(Caver::MeshInstance **)(*((_QWORD *)v44 + 5) + v42), v23);
      ++v43;
      v42 += 16;
    }
    while ( v43 < (int)((*(_QWORD *)(*(_QWORD *)v44 + 16LL) - *(_QWORD *)(*(_QWORD *)v44 + 8LL)) >> 4) );
  }
  operator delete[](v23);
}

