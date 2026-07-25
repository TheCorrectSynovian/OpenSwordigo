/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000266170
 * Mangled: _ZN5Caver15DamageComponent23ResolvePotentialImpactsEb
 * Demangled: Caver::DamageComponent::ResolvePotentialImpacts(bool)
 *
 * Callers: 1
 *   0x00000000001F7220  Caver::DamageComponent::ResolvePotentialImpacts(bool)
 *
 * Callees: 3
 *   0x00000000001FE5E0  Caver::SceneObject::HandleMessage(int,void *)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *
 * Referenced strings: 60
 *   insn=0x0000000000266190 string=0x0000000000266194 "vbG"
 *   insn=0x00000000002661A8 string=0x00000000002661AC "\n"
 *   insn=0x00000000002661A8 string=0x0000000000583734 "o"
 *   insn=0x00000000002661B4 string=0x00000000002661B8 ""
 *   insn=0x00000000002661B8 string=0x00000000002661BC ")5G"
 *   insn=0x00000000002661BC string=0x00000000002661C0 "J"
 *   insn=0x00000000002661C0 string=0x00000000002661C4 "kiO"
 *   insn=0x00000000002661C8 string=0x000000000021C13C "@&"
 *   insn=0x00000000002661E0 string=0x00000000002661E4 "h"
 *   insn=0x00000000002661E0 string=0x00000000002661F8 "h"
 *   insn=0x00000000002661F0 string=0x00000000002661F4 "l"
 *   insn=0x00000000002661FC string=0x0000000000266200 " "
 *   insn=0x000000000026620C string=0x0000000000266210 "   "
 *   insn=0x0000000000266210 string=0x0000000000266214 ","
 *   insn=0x0000000000266214 string=0x0000000000266218 "  *"
 *   insn=0x0000000000266214 string=0x0000000000266238 ""
 *   insn=0x0000000000266218 string=0x000000000026621C ""
 *   insn=0x0000000000266224 string=0x0000000000266228 "!"
 *   insn=0x0000000000266228 string=0x000000000026622C "!"
 *   insn=0x000000000026622C string=0x0000000000266230 "  +"
 *   insn=0x0000000000266230 string=0x0000000000266234 "E"
 *   insn=0x0000000000266238 string=0x000000000026623C "?"
 *   insn=0x000000000026623C string=0x0000000000266240 "a"
 *   insn=0x0000000000266254 string=0x0000000000266258 "`"
 *   insn=0x0000000000266264 string=0x0000000000266268 "h"
 *   insn=0x000000000026627C string=0x0000000000266280 ""
 *   insn=0x000000000026628C string=0x0000000000266290 ""
 *   insn=0x00000000002662A4 string=0x00000000002662A8 "a"
 *   insn=0x00000000002662AC string=0x00000000002662BC "v"
 *   insn=0x00000000002662B0 string=0x00000000002662B4 ""
 *   insn=0x00000000002662C8 string=0x00000000002662CC "h&G"
 *   insn=0x00000000002662D0 string=0x00000000002662D4 "@"
 *   insn=0x00000000002662D8 string=0x00000000002662DC ""
 *   insn=0x00000000002662E0 string=0x00000000002662E4 "a"
 *   insn=0x00000000002662E4 string=0x00000000002662E8 ""
 *   insn=0x00000000002662E4 string=0x00000000002662F0 ""
 *   insn=0x00000000002662E8 string=0x00000000002662EC "K"
 *   insn=0x00000000002662F0 string=0x00000000002662F4 "?"
 *   insn=0x00000000002662F4 string=0x00000000002662F8 "!"
 *   insn=0x0000000000266310 string=0x0000000000266314 "`"
 *   insn=0x0000000000266320 string=0x0000000000266324 "h"
 *   insn=0x0000000000266328 string=0x000000000026632C "@"
 *   insn=0x0000000000266344 string=0x0000000000266348 "e"
 *   insn=0x0000000000266348 string=0x000000000026634C ""
 *   insn=0x0000000000266360 string=0x000000000026639C "tVG"
 *   insn=0x0000000000266370 string=0x0000000000266374 "`"
 *   insn=0x0000000000266380 string=0x0000000000266384 "h"
 *   insn=0x00000000002663A4 string=0x00000000002663DC "u"
 *   insn=0x00000000002663B0 string=0x00000000002663B4 "@"
 *   insn=0x00000000002663B4 string=0x00000000002663B8 ""
 *   insn=0x00000000002663B8 string=0x00000000002663BC ""
 *   insn=0x00000000002663C0 string=0x00000000002663C4 ""
 *   insn=0x00000000002663C4 string=0x00000000002663C8 ""
 *   insn=0x00000000002663DC string=0x00000000002663E0 "t>"
 *   insn=0x00000000002663E8 string=0x0000000000266420 "uJ"
 *   insn=0x00000000002663F4 string=0x00000000002663F8 "@"
 *   insn=0x00000000002663F8 string=0x00000000002663FC ""
 *   insn=0x00000000002663FC string=0x0000000000266400 ""
 *   insn=0x0000000000266404 string=0x0000000000266408 ""
 *   insn=0x0000000000266408 string=0x000000000026640C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DamageComponent::ResolvePotentialImpacts(Caver::DamageComponent *this, char a2)
{
  __int64 v3; // x22
  __int64 v4; // x24
  float v6; // s8
  Caver::SceneObject **v7; // x20
  __int64 v8; // x0
  float32x2_t *v9; // x8
  float32x2_t *v10; // x9
  float v11; // s1
  Caver::SceneObject *v12; // x0
  __int64 v13; // x22
  __int64 i; // x23
  __int64 v15; // x8
  __int64 v16; // x9
  Caver::SceneObject *v17; // x0
  Caver::SceneObject *v18; // x0
  __int64 v19; // x20
  __int64 v20; // x21
  __int64 v21; // x22
  _DWORD *v22; // x0
  int v23; // w8
  __int64 v24; // x21
  __int64 v25; // x22
  __int64 v26; // x20
  _DWORD *v27; // x0
  int v28; // w8

  v3 = *((_QWORD *)this + 14);
  v4 = *((_QWORD *)this + 15);
  if ( v3 == v4 )
  {
    v6 = 3.4028e38;
    v7 = 0;
  }
  else
  {
    v6 = 3.4028e38;
    v7 = 0;
    do
    {
      v8 = Caver::SceneObject::ComponentWithInterface(
             *(Caver::SceneObject **)(v3 + 8),
             (__int64)Caver::HealthComponent::Interface);
      if ( !v8 || *((_BYTE *)this + 160) || *(float *)(v8 + 148) <= 0.001 )
      {
        v9 = (float32x2_t *)*((_QWORD *)this + 17);
        v10 = (float32x2_t *)*((_QWORD *)this + 18);
        if ( v9 == v10 )
        {
LABEL_11:
          if ( (a2 & 1) != 0 )
          {
            Caver::SceneObject::HandleMessage(*(Caver::SceneObject **)(v3 + 8), 14, (void *)v3);
            Caver::SceneObject::HandleMessage(*((Caver::SceneObject **)this + 5), 13, (void *)v3);
            v12 = *(Caver::SceneObject **)(*((_QWORD *)this + 5) + 48LL);
            if ( v12 )
              Caver::SceneObject::HandleMessage(v12, 13, (void *)v3);
          }
          else if ( *(float *)(v3 + 32) < v6 )
          {
            v6 = *(float *)(v3 + 32);
            v7 = (Caver::SceneObject **)v3;
          }
        }
        else
        {
          while ( 1 )
          {
            v11 = v9[4].n64_f32[0];
            if ( v11 <= (float)(*(float *)(v3 + 32) + 0.001)
              && (v11 <= 400.0 || vaddv_f32(vmul_f32(v9[3], *(float32x2_t *)(v3 + 24))) >= 0.3) )
            {
              break;
            }
            v9 += 8;
            if ( v10 == v9 )
              goto LABEL_11;
          }
          *(_BYTE *)(v3 + 36) = 1;
        }
      }
      v3 += 64;
    }
    while ( v3 != v4 );
  }
  v13 = *((_QWORD *)this + 17);
  for ( i = *((_QWORD *)this + 18); v13 != i; v13 += 64 )
  {
    v15 = *((_QWORD *)this + 14);
    v16 = *((_QWORD *)this + 15);
    if ( v15 == v16 )
    {
LABEL_25:
      *(_BYTE *)(v13 + 36) = 1;
      if ( (a2 & 1) != 0 )
      {
        Caver::SceneObject::HandleMessage(*(Caver::SceneObject **)(v13 + 8), 14, (void *)v13);
        Caver::SceneObject::HandleMessage(*((Caver::SceneObject **)this + 5), 13, (void *)v13);
        v17 = *(Caver::SceneObject **)(*((_QWORD *)this + 5) + 48LL);
        if ( v17 )
          Caver::SceneObject::HandleMessage(v17, 13, (void *)v13);
      }
      else if ( *(float *)(v13 + 32) < v6 )
      {
        v6 = *(float *)(v13 + 32);
        v7 = (Caver::SceneObject **)v13;
      }
    }
    else
    {
      while ( *(_QWORD *)(v15 + 8) != *(_QWORD *)(v13 + 8) || *(_BYTE *)(v15 + 36) )
      {
        v15 += 64;
        if ( v16 == v15 )
          goto LABEL_25;
      }
    }
  }
  if ( v7 )
  {
    Caver::SceneObject::HandleMessage(v7[1], 14, v7);
    Caver::SceneObject::HandleMessage(*((Caver::SceneObject **)this + 5), 13, v7);
    v18 = *(Caver::SceneObject **)(*((_QWORD *)this + 5) + 48LL);
    if ( v18 )
      Caver::SceneObject::HandleMessage(v18, 13, v7);
  }
  v19 = *((_QWORD *)this + 14);
  v20 = *((_QWORD *)this + 15);
  if ( v20 != v19 )
  {
    v21 = *((_QWORD *)this + 14);
    do
    {
      v22 = *(_DWORD **)(v21 + 8);
      if ( v22 )
      {
        v23 = v22[2] - 1;
        v22[2] = v23;
        if ( !v23 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 8LL))(v22);
      }
      v21 += 64;
    }
    while ( v20 != v21 );
  }
  v24 = *((_QWORD *)this + 17);
  v25 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 15) = v19;
  if ( v25 != v24 )
  {
    v26 = v24;
    do
    {
      v27 = *(_DWORD **)(v26 + 8);
      if ( v27 )
      {
        v28 = v27[2] - 1;
        v27[2] = v28;
        if ( !v28 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v27 + 8LL))(v27);
      }
      v26 += 64;
    }
    while ( v25 != v26 );
  }
  *((_QWORD *)this + 18) = v24;
}

