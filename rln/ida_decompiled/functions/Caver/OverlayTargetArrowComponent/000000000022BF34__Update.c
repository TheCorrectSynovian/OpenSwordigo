/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022BF34
 * Mangled: _ZN5Caver27OverlayTargetArrowComponent6UpdateEf
 * Demangled: Caver::OverlayTargetArrowComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001FEC10  Caver::OverlayTargetArrowComponent::Update(float)
 *
 * Callees: 9
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FEC10  Caver::OverlayTargetArrowComponent::Update(float)
 *   0x00000000002018F0  Caver::Scene::ObjectWithIdentifier(std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 161
 *   insn=0x000000000022BF54 string=0x000000000022BF58 "V"
 *   insn=0x000000000022BF64 string=0x000000000022BF68 "h:@"
 *   insn=0x000000000022BF6C string=0x000000000022BF70 "`Z@"
 *   insn=0x000000000022BF6C string=0x000000000022BF80 "h"
 *   insn=0x000000000022BF70 string=0x000000000022BF74 "\n"
 *   insn=0x000000000022BF74 string=0x000000000022BF78 "\t"
 *   insn=0x000000000022BF78 string=0x000000000022BF7C "7"
 *   insn=0x000000000022BF7C string=0x000000000022C058 """
 *   insn=0x000000000022BF84 string=0x000000000022BF88 "A"
 *   insn=0x000000000022BF88 string=0x000000000059496B "hero"
 *   insn=0x000000000022BF94 string=0x000000000022BF98 ""
 *   insn=0x000000000022BFA4 string=0x000000000022BFA8 "RV"
 *   insn=0x000000000022BFB0 string=0x000000000022BFB4 "@"
 *   insn=0x000000000022BFB0 string=0x000000000022BFC0 "h:@"
 *   insn=0x000000000022BFB4 string=0x000000000022BFB8 ""
 *   insn=0x000000000022BFB8 string=0x000000000022BFBC ""
 *   insn=0x000000000022BFC0 string=0x000000000022BFC4 "`:"
 *   insn=0x000000000022BFC8 string=0x000000000022BFCC "\t\t@"
 *   insn=0x000000000022BFCC string=0x000000000022BFD0 ")"
 *   insn=0x000000000022BFD0 string=0x000000000022BFD4 "\t\t"
 *   insn=0x000000000022BFD4 string=0x000000000022BFD8 "@"
 *   insn=0x000000000022BFD8 string=0x000000000022C000 "\t"
 *   insn=0x000000000022BFDC string=0x000000000022BFE0 "@"
 *   insn=0x000000000022BFE0 string=0x000000000022BFE4 ""
 *   insn=0x000000000022BFE4 string=0x000000000022BFE8 ""
 *   insn=0x000000000022BFE8 string=0x000000000022BFEC "a"
 *   insn=0x000000000022BFEC string=0x000000000022BFF0 ""
 *   insn=0x000000000022BFF0 string=0x000000000022BFF4 ""
 *   insn=0x000000000022BFF8 string=0x000000000022BFFC ""
 *   insn=0x000000000022C000 string=0x000000000022C004 ")"
 *   insn=0x000000000022C008 string=0x000000000022C00C " "
 *   insn=0x000000000022C010 string=0x000000000022C014 "`"
 *   insn=0x000000000022C01C string=0x000000000022C020 ")"
 *   insn=0x000000000022C028 string=0x000000000022C02C "a"
 *   insn=0x000000000022C02C string=0x000000000022C030 "h:@"
 *   insn=0x000000000022C034 string=0x000000000022C284 "hJ@"
 *   insn=0x000000000022C038 string=0x000000000022C03C " "
 *   insn=0x000000000022C044 string=0x000000000022C048 "A"
 *   insn=0x000000000022C04C string=0x000000000022C050 " "
 *   insn=0x000000000022C050 string=0x000000000022C054 "`Z"
 *   insn=0x000000000022C058 string=0x000000000022C05C "A"
 *   insn=0x000000000022C070 string=0x000000000022C074 "B#"
 *   insn=0x000000000022C07C string=0x000000000022C080 "!(""
 *   insn=0x000000000022C080 string=0x000000000022C084 """
 *   insn=0x000000000022C084 string=0x000000000022C088 "tJ@"
 *   insn=0x000000000022C094 string=0x000000000022C098 "!""
 *   insn=0x000000000022C098 string=0x000000000022C09C "b""
 *   insn=0x000000000022C09C string=0x000000000022C0A0 "!($"
 *   insn=0x000000000022C0A4 string=0x000000000022C0A8 "a"
 *   insn=0x000000000022C0AC string=0x000000000022C0B0 "4"
 *   insn=0x000000000022C0B0 string=0x000000000022C0D4 "i"
 *   insn=0x000000000022C0B4 string=0x000000000022C0B8 ""
 *   insn=0x000000000022C0C8 string=0x000000000022C0CC ""
 *   insn=0x000000000022C0E0 string=0x000000000022C0E4 "I"
 *   insn=0x000000000022C0EC string=0x000000000022C0F0 "5yw"
 *   insn=0x000000000022C0F8 string=0x000000000022C0FC "J"
 *   insn=0x000000000022C104 string=0x000000000022C108 "J"
 *   insn=0x000000000022C108 string=0x000000000022C10C "`"
 *   insn=0x000000000022C108 string=0x000000000022C170 "8"
 *   insn=0x000000000022C114 string=0x000000000022C118 "h"
 *   insn=0x000000000022C11C string=0x000000000022C120 "B"
 *   insn=0x000000000022C120 string=0x000000000022C124 "!"
 *   insn=0x000000000022C12C string=0x000000000022C130 "\n"
 *   insn=0x000000000022C130 string=0x000000000022C134 "@!)"
 *   insn=0x000000000022C134 string=0x000000000022C138 "%"
 *   insn=0x000000000022C138 string=0x000000000022C21C "5"
 *   insn=0x000000000022C13C string=0x000000000022C140 ""
 *   insn=0x000000000022C144 string=0x000000000022C148 "`J@"
 *   insn=0x000000000022C148 string=0x000000000022C14C "uJ"
 *   insn=0x000000000022C150 string=0x000000000022C154 "@"
 *   insn=0x000000000022C150 string=0x000000000022C164 "I"
 *   insn=0x000000000022C154 string=0x000000000022C158 ""
 *   insn=0x000000000022C158 string=0x000000000022C15C ""
 *   insn=0x000000000022C160 string=0x000000000022C258 ""
 *   insn=0x000000000022C168 string=0x000000000022C16C "5"
 *   insn=0x000000000022C16C string=0x000000000022C240 "i"
 *   insn=0x000000000022C170 string=0x000000000022C174 "\t#"
 *   insn=0x000000000022C174 string=0x000000000022C178 "?"
 *   insn=0x000000000022C17C string=0x000000000022C180 "\t"
 *   insn=0x000000000022C17C string=0x000000000022C1EC "(!"
 *   insn=0x000000000022C180 string=0x000000000022C184 "?"
 *   insn=0x000000000022C184 string=0x000000000022C188 ""
 *   insn=0x000000000022C188 string=0x000000000022C18C "("
 *   insn=0x000000000022C190 string=0x000000000022C194 "@"
 *   insn=0x000000000022C198 string=0x000000000022C19C "\t\t@"
 *   insn=0x000000000022C19C string=0x000000000022C1A0 ")"
 *   insn=0x000000000022C1A0 string=0x000000000022C1A4 "\t\t"
 *   insn=0x000000000022C1A8 string=0x000000000022C1AC ""
 *   insn=0x000000000022C1B0 string=0x000000000022C1B4 "@"
 *   insn=0x000000000022C1B0 string=0x000000000022C1D0 "9"
 *   insn=0x000000000022C1B4 string=0x000000000022C1B8 ""
 *   insn=0x000000000022C1B8 string=0x000000000022C1BC ""
 *   insn=0x000000000022C1C0 string=0x000000000022C1C4 ""
 *   insn=0x000000000022C1C4 string=0x000000000022C1C8 ""
 *   insn=0x000000000022C1D0 string=0x000000000022C1D4 "?"
 *   insn=0x000000000022C1DC string=0x000000000022C1E0 "iB@"
 *   insn=0x000000000022C1EC string=0x000000000022C1F0 "hB"
 *   insn=0x000000000022C1F0 string=0x000000000022C1F4 " "
 *   insn=0x000000000022C1F8 string=0x000000000022C1FC "@"
 *   insn=0x000000000022C1FC string=0x000000000022C200 ""
 *   insn=0x000000000022C200 string=0x000000000022C204 ""
 *   insn=0x000000000022C208 string=0x000000000022C20C ""
 *   insn=0x000000000022C20C string=0x000000000022C210 ""
 *   insn=0x000000000022C220 string=0x000000000022C224 ""
 *   insn=0x000000000022C234 string=0x000000000022C238 ""
 *   insn=0x000000000022C244 string=0x000000000022C248 "\n"
 *   insn=0x000000000022C258 string=0x000000000022C25C ""
 *   insn=0x000000000022C260 string=0x000000000022C264 "I"
 *   insn=0x000000000022C26C string=0x000000000022C270 "hJ@"
 *   insn=0x000000000022C274 string=0x000000000022C278 "h"
 *   insn=0x000000000022C27C string=0x000000000022C280 "\t"
 *   insn=0x000000000022C288 string=0x000000000022C28C "t"
 *   insn=0x000000000022C2A4 string=0x000000000022C2A8 "!"
 *   insn=0x000000000022C2A8 string=0x000000000022C2AC "@"
 *   insn=0x000000000022C2B0 string=0x000000000022C2B4 "B"
 *   insn=0x000000000022C2B4 string=0x000000000022C2B8 "@ !"
 *   insn=0x000000000022C2C4 string=0x000000000022C2C8 "b8""
 *   insn=0x000000000022C2C8 string=0x000000000022C2CC "B"
 *   insn=0x000000000022C2CC string=0x000000000022C2D0 "@ !"
 *   insn=0x000000000022C2D0 string=0x000000000022C2D4 "I"
 *   insn=0x000000000022C2D4 string=0x000000000022C2FC "y@"
 *   insn=0x000000000022C2E8 string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000022C2F0 string=0x000000000022C2F4 "t"
 *   insn=0x000000000022C2F4 string=0x000000000022C2F8 "hJ@"
 *   insn=0x000000000022C338 string=0x000000000022C33C ")=G"
 *   insn=0x000000000022C33C string=0x000000000022C340 "!"
 *   insn=0x000000000022C344 string=0x000000000022C348 "\t"
 *   insn=0x000000000022C344 string=0x000000000022C35C "\t"
 *   insn=0x000000000022C348 string=0x000000000022C34C "*"
 *   insn=0x000000000022C34C string=0x000000000022C350 "\n"
 *   insn=0x000000000022C358 string=0x000000000022C368 "?"
 *   insn=0x000000000022C35C string=0x000000000022C360 "*"
 *   insn=0x000000000022C360 string=0x000000000022C364 "\n"
 *   insn=0x000000000022C368 string=0x000000000022C36C ","
 *   insn=0x000000000022C374 string=0x000000000022C378 "h:@"
 *   insn=0x000000000022C384 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000022C390 string=0x000000000022C394 "\t\t@"
 *   insn=0x000000000022C394 string=0x000000000022C398 ")"
 *   insn=0x000000000022C398 string=0x000000000022C39C "\t\t"
 *   insn=0x000000000022C3A0 string=0x000000000022C3A4 "\t"
 *   insn=0x000000000022C3A4 string=0x000000000022C3A8 ")"
 *   insn=0x000000000022C3AC string=0x000000000022C3B0 " "
 *   insn=0x000000000022C3C4 string=0x000000000022C3C8 ")"
 *   insn=0x000000000022C3D8 string=0x000000000022C3DC ")=G"
 *   insn=0x000000000022C3DC string=0x000000000022C3E0 "!"
 *   insn=0x000000000022C3E0 string=0x000000000022C3E4 "i"
 *   insn=0x000000000022C3E4 string=0x000000000022C3E8 "\t"
 *   insn=0x000000000022C3E4 string=0x000000000022C410 "\t"
 *   insn=0x000000000022C3E8 string=0x000000000022C3EC "*"
 *   insn=0x000000000022C3EC string=0x000000000022C3F0 "\n"
 *   insn=0x000000000022C3F4 string=0x000000000022C3F8 "?"
 *   insn=0x000000000022C3F8 string=0x000000000022C3FC "l"
 *   insn=0x000000000022C408 string=0x000000000022C40C ".U"
 *   insn=0x000000000022C410 string=0x000000000022C414 "*"
 *   insn=0x000000000022C414 string=0x000000000022C418 "\n"
 *   insn=0x000000000022C418 string=0x000000000022C41C "?"
 *   insn=0x000000000022C41C string=0x000000000022C420 ""
 *   insn=0x000000000022C438 string=0x000000000022C43C ""
 *   insn=0x000000000022C440 string=0x000000000022C444 "5"
 *   insn=0x000000000022C448 string=0x000000000022C44C ""
 *   insn=0x000000000022C458 string=0x000000000022C45C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OverlayTargetArrowComponent::Update(float32x2_t *this, float a2)
{
  unsigned __int64 v3; // x8
  float32x2_t v4; // d0
  float *v5; // x10
  float *v6; // x9
  _DWORD *v7; // x0
  _DWORD *v8; // x8
  int v9; // w9
  int v10; // w8
  void *v11; // x0
  _DWORD *v12; // x20
  float v13; // s1
  float v14; // s0
  int v15; // w8
  unsigned __int64 v16; // x8
  unsigned __int64 v17; // x9
  float v18; // s9
  unsigned __int64 i; // x23
  unsigned __int64 v20; // x21
  float32x2_t v21; // d0
  float v22; // s10
  _DWORD *v23; // x0
  int v24; // w8
  unsigned __int64 v25; // x24
  unsigned __int64 v26; // x9
  __int64 v27; // x9
  __int64 v28; // x25
  __int64 v29; // x8
  _DWORD *v30; // x0
  int v31; // w8
  _DWORD *v32; // x0
  int v33; // w8
  int v34; // w8
  unsigned __int64 v35; // x8
  unsigned __int64 v36; // x20
  unsigned __int64 v37; // d0
  int v38; // w9
  unsigned int *v39; // x8
  int v40; // w9
  __int64 v41; // [xsp+10h] [xbp-70h] BYREF
  _DWORD *v42; // [xsp+18h] [xbp-68h]
  __int64 v43; // [xsp+28h] [xbp-58h]

  v43 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = this[14].n64_u64[0];
  if ( v3 )
  {
    v4.n64_u64[0] = this[22].n64_u64[0];
    v5 = (float *)(v3 + 164);
    v6 = (float *)(v3 + 172);
    goto LABEL_14;
  }
  sub_566BB8((int)&v41, "hero");
  Caver::Scene::ObjectWithIdentifier();
  v7 = v42;
  if ( v42 )
    ++v42[2];
  v8 = (_DWORD *)this[14].n64_u64[0];
  this[14].n64_u64[0] = (unsigned __int64)v7;
  if ( v8 && (v9 = v8[2] - 1, (v8[2] = v9) == 0) )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
    v7 = v42;
    if ( v42 )
    {
LABEL_8:
      v10 = v7[2] - 1;
      v7[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  else if ( v7 )
  {
    goto LABEL_8;
  }
  v11 = (void *)(v41 - 24);
  if ( (__int64 *)(v41 - 24) == &qword_6FD2E0 )
    goto LABEL_12;
  v39 = (unsigned int *)(v41 - 8);
  if ( &pthread_create )
  {
    do
      v40 = __ldaxr(v39);
    while ( __stlxr(v40 - 1, v39) );
  }
  else
  {
    v40 = (*v39)--;
  }
  if ( v40 > 0 )
  {
LABEL_12:
    v3 = this[14].n64_u64[0];
    if ( !v3 )
      goto LABEL_51;
  }
  else
  {
    operator delete(v11);
    v3 = this[14].n64_u64[0];
    if ( !v3 )
      goto LABEL_51;
  }
  v6 = (float *)(v3 + 172);
  v5 = (float *)(v3 + 164);
  v4.n64_u64[0] = vadd_f32(
                    *(float32x2_t *)(v3 + 164),
                    vmul_f32(*(float32x2_t *)(v3 + 172), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  this[22].n64_u64[0] = v4.n64_u64[0];
LABEL_14:
  v12 = (_DWORD *)this[18].n64_u64[0];
  v13 = (float)((float)(*v5 + (float)(*v6 * 0.5)) * 0.2) + vmuls_n_f32(0.8, v4.n64_f32[0]);
  v14 = vmuls_lane_f32(0.8, v4, 1) + (float)((float)(*(float *)(v3 + 168) + (float)(*(float *)(v3 + 176) * 0.5)) * 0.2);
  this[22].n64_f32[0] = v13;
  this[22].n64_f32[1] = v14;
  this[18].n64_u64[0] = 0;
  if ( v12 )
  {
    v15 = v12[2] - 1;
    v12[2] = v15;
    if ( !v15 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
  }
  v17 = this[15].n64_u64[0];
  v16 = this[16].n64_u64[0];
  if ( v16 != v17 )
  {
    v18 = 3.4028e38;
    for ( i = 0; i < (__int64)(v16 - v17) >> 3; ++i )
    {
      v20 = *(_QWORD *)(v17 + 8 * i);
      if ( v20 )
        ++*(_DWORD *)(v20 + 8);
      if ( *(_QWORD *)(v20 + 32) )
      {
        v21.n64_u64[0] = vsub_f32(
                           this[22],
                           vadd_f32(
                             *(float32x2_t *)(v20 + 164),
                             vmul_f32(*(float32x2_t *)(v20 + 172), (float32x2_t)0x3F0000003F000000LL))).n64_u64[0];
        v22 = vaddv_f32(vmul_f32(v21, v21));
        if ( v22 < v18 )
        {
          ++*(_DWORD *)(v20 + 8);
          v23 = (_DWORD *)this[18].n64_u64[0];
          this[18].n64_u64[0] = v20;
          if ( !v23 || (v24 = v23[2] - 1, (v23[2] = v24) != 0) )
          {
            v18 = v22;
            if ( v20 )
              goto LABEL_43;
            goto LABEL_45;
          }
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v23 + 8LL))(v23);
          v18 = v22;
        }
      }
      else
      {
        v25 = v17 + 8 * i;
        v26 = v25 + 8;
        if ( v25 + 8 != v16 )
        {
          v27 = v16 - v26;
          if ( v27 < 1 )
          {
            v26 = v16;
          }
          else
          {
            v28 = ((unsigned __int64)v27 >> 3) + 1;
            do
            {
              v29 = *(_QWORD *)(v25 + 8);
              if ( v29 )
                ++*(_DWORD *)(v29 + 8);
              v30 = *(_DWORD **)v25;
              *(_QWORD *)v25 = v29;
              if ( v30 )
              {
                v31 = v30[2] - 1;
                v30[2] = v31;
                if ( !v31 )
                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v30 + 8LL))(v30);
              }
              --v28;
              v25 += 8LL;
            }
            while ( v28 > 1 );
            v26 = this[16].n64_u64[0];
          }
        }
        this[16].n64_u64[0] = v26 - 8;
        v32 = *(_DWORD **)(v26 - 8);
        if ( v32 )
        {
          v33 = v32[2] - 1;
          v32[2] = v33;
          if ( !v33 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v32 + 8LL))(v32);
        }
        --i;
      }
      if ( v20 )
      {
LABEL_43:
        v34 = *(_DWORD *)(v20 + 8) - 1;
        *(_DWORD *)(v20 + 8) = v34;
        if ( !v34 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v20 + 8LL))(v20);
      }
LABEL_45:
      v17 = this[15].n64_u64[0];
      v16 = this[16].n64_u64[0];
    }
  }
  if ( v12 && !this[18].n64_u64[0] )
    *(_BYTE *)(this[5].n64_u64[0] + 232) = 1;
LABEL_51:
  v35 = this[18].n64_u64[0];
  if ( v35 )
  {
    v36 = this[5].n64_u64[0];
    v37 = vadd_f32(
            *(float32x2_t *)(v35 + 164),
            vmul_f32(*(float32x2_t *)(v35 + 172), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
    if ( fabsf(*(float *)&v37 - *(float *)(v36 + 112)) > 0.0001
      || fabsf(*((float *)&v37 + 1) - *(float *)(v36 + 116)) > 0.0001 )
    {
      v38 = *(unsigned __int8 *)(v36 + 180);
      *(_QWORD *)(v36 + 112) = v37;
      if ( !v38 )
      {
        Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v36);
        *(_BYTE *)(v36 + 180) = 1;
        v36 = this[5].n64_u64[0];
        v35 = this[18].n64_u64[0];
      }
    }
    *(_DWORD *)(v36 + 120) = *(_DWORD *)(v35 + 120);
  }
}

