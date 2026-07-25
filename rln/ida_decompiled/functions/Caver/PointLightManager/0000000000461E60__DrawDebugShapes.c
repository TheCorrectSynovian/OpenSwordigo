/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000461E60
 * Mangled: _ZN5Caver17PointLightManager15DrawDebugShapesEPNS_16RenderingContextE
 * Demangled: Caver::PointLightManager::DrawDebugShapes(Caver::RenderingContext *)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F3B30  Caver::RenderingContext::DrawArrays(int,int,int)
 *   0x00000000001F4DA0  Caver::PointLightGroup::CombinedLight(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FE920  Caver::RenderingContext::SetVertexAttribPointer(uint,int,Caver::DataType,int,void const*)
 *
 * Referenced strings: 55
 *   insn=0x0000000000461E88 string=0x0000000000461E8C "H"
 *   insn=0x0000000000461E90 string=0x0000000000461E94 ""
 *   insn=0x0000000000461EA0 string=0x0000000000461EA4 "i"
 *   insn=0x0000000000461EA4 string=0x0000000000461EA8 "?"
 *   insn=0x0000000000461EA8 string=0x0000000000461EAC "k"
 *   insn=0x0000000000461EB0 string=0x0000000000461EB4 "\t"
 *   insn=0x0000000000461EB4 string=0x0000000000461EB8 "h"
 *   insn=0x0000000000461EB8 string=0x0000000000461EBC "J"
 *   insn=0x0000000000461EBC string=0x0000000000461EC0 "k"
 *   insn=0x0000000000461EC8 string=0x0000000000461ECC ""
 *   insn=0x0000000000461ECC string=0x0000000000461ED0 "\t"
 *   insn=0x0000000000461EE4 string=0x0000000000461EE8 "\ni{"
 *   insn=0x0000000000461EE8 string=0x0000000000461EEC "J"
 *   insn=0x0000000000461F00 string=0x0000000000461F04 "h"
 *   insn=0x0000000000461F00 string=0x00000000001FB1A0 "0'"
 *   insn=0x0000000000461F10 string=0x00000000001F4DA0 "P'"
 *   insn=0x0000000000461F18 string=0x0000000000461F1C ""
 *   insn=0x0000000000461F24 string=0x0000000000461F28 "#"
 *   insn=0x0000000000461F2C string=0x0000000000461F30 "!()"
 *   insn=0x0000000000461F48 string=0x0000000000461F4C ""
 *   insn=0x0000000000461F70 string=0x0000000000461F74 "kr"
 *   insn=0x0000000000461F88 string=0x0000000000461F8C "h"
 *   insn=0x0000000000461F88 string=0x00000000001F3B30 "P'"
 *   insn=0x0000000000461F8C string=0x0000000000461F90 "\ti{"
 *   insn=0x0000000000461F90 string=0x0000000000461F94 "*"
 *   insn=0x0000000000461F94 string=0x0000000000461F98 "_"
 *   insn=0x0000000000461F98 string=0x0000000000461F9C "k"
 *   insn=0x0000000000461F9C string=0x0000000000461FA0 "+"
 *   insn=0x0000000000461F9C string=0x0000000000462088 "i"
 *   insn=0x0000000000461FA0 string=0x0000000000461FA4 "_"
 *   insn=0x0000000000461FA4 string=0x0000000000461FA8 "`-@"
 *   insn=0x0000000000461FA8 string=0x0000000000461FAC "h,"
 *   insn=0x0000000000461FAC string=0x0000000000461FB0 "`"
 *   insn=0x0000000000461FB0 string=0x0000000000461FB4 "k"
 *   insn=0x0000000000461FB8 string=0x0000000000461FBC "`"
 *   insn=0x0000000000461FC4 string=0x0000000000461FC8 ""
 *   insn=0x0000000000461FCC string=0x0000000000461FD0 "k"
 *   insn=0x0000000000461FD0 string=0x0000000000461FD4 "_"
 *   insn=0x0000000000461FF8 string=0x0000000000461FFC "("
 *   insn=0x0000000000461FFC string=0x0000000000462000 ""
 *   insn=0x0000000000462000 string=0x0000000000462004 "\t"
 *   insn=0x0000000000462008 string=0x000000000046200C "\t\t@"
 *   insn=0x000000000046201C string=0x0000000000462020 ""
 *   insn=0x0000000000462024 string=0x0000000000462028 ""
 *   insn=0x0000000000462028 string=0x000000000046202C ""
 *   insn=0x000000000046202C string=0x0000000000462030 "}"
 *   insn=0x0000000000462034 string=0x0000000000462038 "Zd"
 *   insn=0x0000000000462050 string=0x0000000000462054 "3r"
 *   insn=0x0000000000462068 string=0x000000000046206C "h"
 *   insn=0x0000000000462074 string=0x0000000000462078 "\ti{"
 *   insn=0x0000000000462078 string=0x000000000046207C "*"
 *   insn=0x0000000000462080 string=0x0000000000462084 ""
 *   insn=0x0000000000462098 string=0x000000000046209C ""
 *   insn=0x00000000004620A8 string=0x00000000004620D8 "~P"
 *   insn=0x00000000004620D8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PointLightManager::DrawDebugShapes(__int64 this, Caver::RenderingContext *a2)
{
  __int64 v2; // x19
  int v4; // w9
  __int64 v5; // x8
  __int64 i; // x22
  int *v7; // x9
  __int64 v8; // x10
  __int64 v9; // x11
  float v10; // s13
  float *v11; // x11
  __int64 j; // x12
  float v13; // t1
  float v14; // s0
  __int64 v15; // x28
  __int64 v16; // x21
  __int64 *v17; // x8
  int v18; // w8
  int v19; // [xsp+18h] [xbp-128h] BYREF
  _BYTE v20[60]; // [xsp+20h] [xbp-120h] BYREF
  __int64 v21; // [xsp+60h] [xbp-E0h]
  int v22; // [xsp+68h] [xbp-D8h]
  __int64 v23; // [xsp+6Ch] [xbp-D4h]
  int v24; // [xsp+74h] [xbp-CCh]
  float v25; // [xsp+78h] [xbp-C8h]
  unsigned __int64 v26; // [xsp+7Ch] [xbp-C4h]
  float v27; // [xsp+84h] [xbp-BCh]
  unsigned __int64 v28; // [xsp+88h] [xbp-B8h]
  float v29; // [xsp+90h] [xbp-B0h]
  float v30; // [xsp+94h] [xbp-ACh]
  int v31; // [xsp+98h] [xbp-A8h]
  float v32; // [xsp+9Ch] [xbp-A4h]
  float v33; // [xsp+A0h] [xbp-A0h]
  int v34; // [xsp+A4h] [xbp-9Ch]
  float v35; // [xsp+A8h] [xbp-98h]
  unsigned __int64 v36; // [xsp+ACh] [xbp-94h]
  __int64 v37; // [xsp+B8h] [xbp-88h]

  v2 = this;
  v37 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_DWORD *)(this + 16);
  if ( v4 >= 1 )
  {
    v5 = *(_QWORD *)(this + 24);
    for ( i = 0; i < v4; ++i )
    {
      if ( **(_DWORD **)(v5 + 16 * i) )
      {
        *(_DWORD *)v20 = -1;
        Caver::RenderingContext::SetColor(a2, (const Caver::Color *)v20);
        Caver::PointLightGroup::CombinedLight(
          (__int64 *)v20,
          *(Caver::PointLightGroup **)(*(_QWORD *)(v2 + 24) + 16 * i));
        v25 = *(float *)v20 + -10.0;
        v26 = vadd_f32(*(float32x2_t *)&v20[4], (float32x2_t)3240099840LL).n64_u64[0];
        v27 = *(float *)v20 + 10.0;
        v28 = v26;
        v29 = *(float *)v20 + 10.0;
        v30 = *(float *)&v20[4] + 10.0;
        v31 = HIDWORD(v26);
        v32 = *(float *)v20 + -10.0;
        v33 = *(float *)&v20[4] + 10.0;
        v34 = HIDWORD(v26);
        v35 = *(float *)v20 + -10.0;
        v36 = v26;
        Caver::RenderingContext::SetVertexAttribPointer();
        this = Caver::RenderingContext::DrawArrays(a2, 3, 0, 5);
        v5 = *(_QWORD *)(v2 + 24);
        v7 = *(int **)(v5 + 16 * i);
        v8 = *v7;
        if ( (int)v8 >= 1 )
        {
          v9 = *((_QWORD *)v7 + 1);
          v10 = fmaxf(*(float *)(v9 + 44), 0.0);
          if ( (_DWORD)v8 != 1 )
          {
            v11 = (float *)(v9 + 104);
            for ( j = 1; j < v8; ++j )
            {
              v13 = *v11;
              v11 += 15;
              v14 = v13;
              if ( v13 > v10 )
                v10 = v14;
            }
          }
          v15 = 0;
          v16 = 0;
          do
          {
            v21 = *(_QWORD *)v20;
            v22 = *(_DWORD *)&v20[8];
            v17 = (__int64 *)(*((_QWORD *)v7 + 1) + v15);
            v23 = *v17;
            v24 = *((_DWORD *)v17 + 2);
            v18 = (int)(float)((float)(*((float *)v17 + 11) / v10) * 255.0);
            if ( v18 >= 255 )
              LOBYTE(v18) = -1;
            v19 = 16843009 * (unsigned __int8)v18;
            Caver::RenderingContext::SetColor(a2, (const Caver::Color *)&v19);
            Caver::RenderingContext::SetVertexAttribPointer();
            this = Caver::RenderingContext::DrawArrays(a2, 1, 0, 2);
            v5 = *(_QWORD *)(v2 + 24);
            ++v16;
            v15 += 60;
            v7 = *(int **)(v5 + 16 * i);
          }
          while ( v16 < *v7 );
        }
        v4 = *(_DWORD *)(v2 + 16);
      }
    }
  }
  return this;
}

